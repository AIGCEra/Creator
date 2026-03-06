
#include "chrome/app/chrome_exe_main_win.h"

#include <windows.h>

#include <malloc.h>
#include <stddef.h>
#include <tchar.h>

#include <algorithm>
#include <array>
#include <string>
#include <vector>

#include "base/at_exit.h"
#include "base/base_switches.h"
#include "base/command_line.h"
#include "base/debug/alias.h"
#include "base/debug/handle_hooks_win.h"
#include "base/feature_list.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/logging.h"
#include "base/path_service.h"
#include "base/process/memory.h"
#include "base/process/process.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/string_split.h"
#include "base/strings/string_util.h"
#include "base/strings/utf_string_conversions.h"
#include "base/time/time.h"
#include "base/win/current_module.h"
#include "base/win/registry.h"
#include "base/win/win_util.h"
#include "base/win/windows_version.h"
#include "build/build_config.h"
#include "chrome/app/delay_load_failure_hook_win.h"
#include "chrome/app/exit_code_watcher_win.h"
#include "chrome/app/main_dll_loader_win.h"
#include "chrome/app/packed_resources_integrity.h"
#include "chrome/browser/policy/policy_path_parser.h"
#include "chrome/browser/win/chrome_process_finder.h"
#include "chrome/chrome_elf/chrome_elf_main.h"
#include "chrome/common/chrome_paths_internal.h"
#include "chrome/common/chrome_switches.h"
#include "chrome/install_static/initialize_from_primary_module.h"
#include "chrome/install_static/install_util.h"
#include "chrome/install_static/user_data_dir.h"
#include "components/crash/core/app/crash_switches.h"
#include "components/crash/core/app/crashpad.h"
#include "components/crash/core/app/fallback_crash_handling_win.h"
#include "components/crash/core/app/run_as_crashpad_handler_win.h"
#include "content/public/common/content_switches.h"
#include "content/public/common/result_codes.h"
#include "third_party/crashpad/crashpad/util/win/initial_client_data.h"

#include <malloc.h>
#include <msxml6.h>
#include <shlobj.h>
#include <shlwapi.h>
#include <softpub.h>
#include <stddef.h>
#include <tlhelp32.h>
#include <wincrypt.h>

#include <algorithm>
#include <array>
#include <codecvt>
#include <filesystem>  // For file existence check
#include <fstream>
#include <iostream>
#include <locale>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#pragma comment(lib, "msxml6.lib")
#pragma comment(lib, "shlwapi.lib")
#pragma comment(lib, "advapi32.lib")
#pragma comment(lib, "wintrust.lib")

namespace {

// Sets the current working directory for the process to the directory holding
// the executable if this is the browser process. This avoids leaking a handle
// to an arbitrary directory to child processes (e.g., the crashpad handler
// process) created before MainDllLoader changes the current working directory
// to the browser's version directory.
void SetCwdForBrowserProcess() {
  if (!::IsBrowserProcess()) {
    return;
  }

  std::array<wchar_t, MAX_PATH + 1> buffer;
  buffer[0] = L'\0';
  DWORD length = ::GetModuleFileName(nullptr, &buffer[0], buffer.size());
  if (!length || length >= buffer.size()) {
    return;
  }

  base::SetCurrentDirectory(
      base::FilePath(base::FilePath::StringPieceType(&buffer[0], length))
          .DirName());
}

bool IsFastStartSwitch(const std::string& command_line_switch) {
  return command_line_switch == switches::kProfileDirectory;
}

bool ContainsNonFastStartFlag(const base::CommandLine& command_line) {
  const base::CommandLine::SwitchMap& switches = command_line.GetSwitches();
  if (switches.size() > 1) {
    return true;
  }
  for (base::CommandLine::SwitchMap::const_iterator it = switches.begin();
       it != switches.end(); ++it) {
    if (!IsFastStartSwitch(it->first)) {
      return true;
    }
  }
  return false;
}

bool AttemptFastNotify(const base::CommandLine& command_line) {
  if (ContainsNonFastStartFlag(command_line)) {
    return false;
  }

  base::FilePath user_data_dir;
  if (!chrome::GetDefaultUserDataDirectory(&user_data_dir)) {
    return false;
  }
  policy::path_parser::CheckUserDataDirPolicy(&user_data_dir);

  HWND chrome = chrome::FindRunningChromeWindow(user_data_dir);
  if (!chrome) {
    return false;
  }
  return chrome::AttemptToNotifyRunningChrome(chrome) == chrome::NOTIFY_SUCCESS;
}

// Returns true if |command_line| contains a /prefetch:# argument where # is in
// [1, 8].
bool HasValidWindowsPrefetchArgument(const base::CommandLine& command_line) {
  const wchar_t kPrefetchArgumentPrefix[] = L"/prefetch:";

  for (const auto& arg : command_line.argv()) {
    if (arg.size() == std::size(kPrefetchArgumentPrefix) &&
        base::StartsWith(arg, kPrefetchArgumentPrefix,
                         base::CompareCase::SENSITIVE)) {
      return arg[std::size(kPrefetchArgumentPrefix) - 1] >= L'1' &&
             arg[std::size(kPrefetchArgumentPrefix) - 1] <= L'8';
    }
  }
  return false;
}

// Some users are getting stuck in compatibility mode. Try to help them escape.
// See http://crbug.com/581499. Returns true if a compatibility mode entry was
// removed.
bool RemoveAppCompatFlagsEntry() {
    base::FilePath current_exe;
    if (!base::PathService::Get(base::FILE_EXE, &current_exe))
        return false;
    if (!current_exe.IsAbsolute())
        return false;
    base::win::RegKey key;
    if (key.Open(HKEY_CURRENT_USER,
        L"Software\\Microsoft\\Windows "
        L"NT\\CurrentVersion\\AppCompatFlags\\Layers",
        KEY_READ | KEY_WRITE) == ERROR_SUCCESS) {
        std::wstring layers;
        if (key.ReadValue(current_exe.value().c_str(), &layers) == ERROR_SUCCESS) {
            std::vector<std::wstring> tokens = base::SplitString(
                layers, L" ", base::TRIM_WHITESPACE, base::SPLIT_WANT_NONEMPTY);
            size_t initial_size = tokens.size();
            static const wchar_t* const kCompatModeTokens[] = {
                L"WIN95",       L"WIN98",       L"WIN4SP5",  L"WIN2000",  L"WINXPSP2",
                L"WINXPSP3",    L"VISTARTM",    L"VISTASP1", L"VISTASP2", L"WIN7RTM",
                L"WINSRV03SP1", L"WINSRV08SP1", L"WIN8RTM",
            };
            for (const wchar_t* compat_mode_token : kCompatModeTokens) {
                std::erase(tokens, compat_mode_token);
            }
            LONG result;
            if (tokens.empty()) {
                result = key.DeleteValue(current_exe.value().c_str());
            }
            else {
                std::wstring without_compat_mode_tokens =
                    base::JoinString(tokens, L" ");
                result = key.WriteValue(current_exe.value().c_str(),
                    without_compat_mode_tokens.c_str());
            }

            // Return if we changed anything so that we can restart.
            return tokens.size() != initial_size && result == ERROR_SUCCESS;
        }
    }
    return false;
}

// int RunFallbackCrashHandler(const base::CommandLine& cmd_line) {
//   // Retrieve the product & version details we need to report the crash
//   // correctly.
//   wchar_t exe_file[MAX_PATH] = {};
//   CHECK(::GetModuleFileName(nullptr, exe_file, std::size(exe_file)));
//
//   std::wstring product_name, version, channel_name, special_build;
//   install_static::GetExecutableVersionDetails(exe_file, &product_name,
//   &version,
//                                               &special_build, &channel_name);
//
//   return crash_reporter::RunAsFallbackCrashHandler(
//       cmd_line, base::WideToUTF8(product_name), base::WideToUTF8(version),
//       base::WideToUTF8(channel_name));
// }

// In 32-bit builds, the main thread starts with the default (small) stack size.
// The ARCH_CPU_32_BITS blocks here and below are in support of moving the main
// thread to a fiber with a larger stack size.
#if defined(ARCH_CPU_32_BITS)
// The information needed to transfer control to the large-stack fiber and later
// pass the main routine's exit code back to the small-stack fiber prior to
// termination.
struct FiberState {
  HINSTANCE instance;
  LPVOID original_fiber;
  int fiber_result;
};

// A PFIBER_START_ROUTINE function run on a large-stack fiber that calls the
// main routine, stores its return value, and returns control to the small-stack
// fiber. |params| must be a pointer to a FiberState struct.
void WINAPI FiberBinder(void* params) {
  auto* fiber_state = static_cast<FiberState*>(params);
  // Call the main routine from the fiber. Reusing the entry point minimizes
  // confusion when examining call stacks in crash reports - seeing wWinMain on
  // the stack is a handy hint that this is the main thread of the process.
#if !defined(WIN_CONSOLE_APP)
  fiber_state->fiber_result =
      wWinMain(fiber_state->instance, nullptr, nullptr, 0);
#else   // !defined(WIN_CONSOLE_APP)
  fiber_state->fiber_result = main();
#endif  // !defined(WIN_CONSOLE_APP)
  // Switch back to the main thread to exit.
  ::SwitchToFiber(fiber_state->original_fiber);
}
#endif  // defined(ARCH_CPU_32_BITS)

}  // namespace

class CChromiumBrowserAppImpl {
public:
    CChromiumBrowserAppImpl() {
        m_nNativeAppType = -1;
        m_strAppKey = _T("");
        m_strExeName = _T("");
        m_strAppDataPath = _T("");
        m_strConfigDataFile = _T("");
    }
    ~CChromiumBrowserAppImpl() {}

    int m_nNativeAppType;
    CString m_strAppKey;
    CString m_strExeName;
    CString m_strAppDataPath;
    CString m_strConfigDataFile;

    // Function to verify digital signature of a file
    // Returns true if valid digital signature exists
    bool IsFileDigitallySigned(const wchar_t* filePath) {
        // Initialize WINTRUST_FILE_INFO structure
        WINTRUST_FILE_INFO fileInfo = { sizeof(WINTRUST_FILE_INFO) };
        fileInfo.pcwszFilePath = filePath;  // Path to target file
        fileInfo.hFile = nullptr;           // Not using handle
        fileInfo.pgKnownSubject = nullptr;  // No predefined subject

        // Initialize WINTRUST_DATA structure
        WINTRUST_DATA winTrustData = { sizeof(WINTRUST_DATA) };
        winTrustData.dwUIChoice = WTD_UI_NONE;  // No UI prompts
        winTrustData.fdwRevocationChecks =
            WTD_REVOKE_NONE;                           // Skip revocation checking
        winTrustData.dwUnionChoice = WTD_CHOICE_FILE;  // Verify file type
        winTrustData.pFile = &fileInfo;                // File info pointer
        winTrustData.dwStateAction =
            WTD_STATEACTION_VERIFY;                 // Perform verification
        winTrustData.dwProvFlags = WTD_SAFER_FLAG;  // Enable security policy

        // Use standard verification action
        GUID action = WINTRUST_ACTION_GENERIC_VERIFY_V2;

        // Execute signature verification
        LONG status = WinVerifyTrust(nullptr, &action, &winTrustData);

        // Cleanup verification state
        winTrustData.dwStateAction = WTD_STATEACTION_CLOSE;
        WinVerifyTrust(nullptr, &action, &winTrustData);

        // Check verification result
        return (status == ERROR_SUCCESS);
    }

    // Convert string to lowercase
    std::wstring ToLower(const std::wstring& str) {
        std::wstring lowerStr = str;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
            [](wchar_t c) { return std::towlower(c); });
        return lowerStr;
    }

    // Check if path starts with specified prefix (case-insensitive)
    bool StartsWith(const std::wstring& path, const std::wstring& prefix) {
        if (path.size() < prefix.size()) {
            return false;
        }

        // Case-insensitive comparison of prefix portion
        if (ToLower(path.substr(0, prefix.size())) != ToLower(prefix)) {
            return false;
        }

        // Ensure next character is path separator (or end of string)
        return (path.size() == prefix.size()) || (path[prefix.size()] == L'\\');
    }

    // Retrieve Windows SDK paths from registry
    std::vector<std::wstring> GetWindowsSdkPaths() {
        std::vector<std::wstring> sdkPaths;
        const wchar_t* regPath =
            L"SOFTWARE\\Microsoft\\Windows Kits\\Installed Roots";

        HKEY hKey;
        // Open registry key (64-bit view)
        if (RegOpenKeyExW(HKEY_LOCAL_MACHINE, regPath, 0,
            KEY_READ | KEY_WOW64_64KEY, &hKey) == ERROR_SUCCESS) {
            wchar_t valueName[64] = { 0 };
            wchar_t valueData[MAX_PATH] = { 0 };
            DWORD valueType, valueNameSize, valueDataSize;
            DWORD index = 0;

            // Enumerate all values under the key
            while (true) {
                valueNameSize = sizeof(valueName) / sizeof(wchar_t);
                valueDataSize = sizeof(valueData);
                if (RegEnumValueW(hKey, index, valueName, &valueNameSize, NULL,
                    &valueType, (LPBYTE)valueData,
                    &valueDataSize) != ERROR_SUCCESS) {
                    break;
                }

                // Look for KitsRoot entries (SDK installation paths)
                if (valueType == REG_SZ && wcsstr(valueName, L"KitsRoot") != nullptr) {
                    std::wstring path = valueData;
                    if (path.back() != L'\\') {
                        path += L'\\';  // Ensure trailing backslash
                    }
                    sdkPaths.push_back(path);
                }
                index++;
            }
            RegCloseKey(hKey);
        }
        return sdkPaths;
    }

    // Get .NET Framework installation paths
    std::vector<std::wstring> GetDotNetFrameworkPaths() {
        std::vector<std::wstring> paths;

        wchar_t winDir[MAX_PATH] = { 0 };
        if (GetWindowsDirectoryW(winDir, MAX_PATH)) {
            std::wstring basePath = winDir;
            basePath += L"\\Microsoft.NET\\";

            // Standard framework locations (32-bit and 64-bit)
            paths.push_back(basePath + L"Framework\\");
            paths.push_back(basePath + L"Framework64\\");
        }

        return paths;
    }

    // Get .NET Core installation paths
    std::vector<std::wstring> GetDotNetCorePaths() {
        std::vector<std::wstring> paths;

        // Check DOTNET_ROOT environment variable
        wchar_t dotnetRoot[MAX_PATH] = { 0 };
        DWORD size = GetEnvironmentVariableW(L"DOTNET_ROOT", dotnetRoot, MAX_PATH);
        if (size > 0 && size < MAX_PATH) {
            std::wstring path = dotnetRoot;
            if (path.back() != L'\\') {
                path += L'\\';
            }
            paths.push_back(path);
        }

        // Check DOTNET_ROOT(x86) for 32-bit installations
        size = GetEnvironmentVariableW(L"DOTNET_ROOT(x86)", dotnetRoot, MAX_PATH);
        if (size > 0 && size < MAX_PATH) {
            std::wstring path = dotnetRoot;
            if (path.back() != L'\\') {
                path += L'\\';
            }
            paths.push_back(path);
        }

        // Add common installation locations
        paths.push_back(L"C:\\Program Files\\dotnet\\");
        paths.push_back(L"C:\\Program Files (x86)\\dotnet\\");

        return paths;
    }

    // Get Visual Studio installation paths
    std::vector<std::wstring> GetVisualStudioPaths() {
        std::vector<std::wstring> vsPaths;
        const wchar_t* regPaths[] = {
            // Visual Studio 2017 and newer
            L"SOFTWARE\\Microsoft\\VisualStudio\\Setup",
            // Visual Studio 2015 and older
            L"SOFTWARE\\Microsoft\\VisualStudio\\SxS\\VS7",
            // 64-bit systems with 32-bit VS installations
            L"SOFTWARE\\WOW6432Node\\Microsoft\\VisualStudio\\SxS\\VS7" };

        for (const auto& regPath : regPaths) {
            HKEY hKey;
            if (RegOpenKeyExW(HKEY_LOCAL_MACHINE, regPath, 0,
                KEY_READ | KEY_WOW64_64KEY, &hKey) == ERROR_SUCCESS) {
                wchar_t valueName[256] = { 0 };
                wchar_t valueData[MAX_PATH] = { 0 };
                DWORD valueType, valueNameSize, valueDataSize;
                DWORD index = 0;

                while (true) {
                    valueNameSize = sizeof(valueName) / sizeof(wchar_t);
                    valueDataSize = sizeof(valueData);
                    if (RegEnumValueW(hKey, index, valueName, &valueNameSize, NULL,
                        &valueType, (LPBYTE)valueData,
                        &valueDataSize) != ERROR_SUCCESS) {
                        break;
                    }

                    if (valueType == REG_SZ) {
                        std::wstring path = valueData;

                        // Normalize path format
                        if (path.back() != L'\\') {
                            path += L'\\';
                        }

                        // Add common VS executable locations
                        vsPaths.push_back(path);

                        // Add specific VS tool directories
                        if (path.find(L"Common7") == std::wstring::npos) {
                            // Add Common Tools directory
                            std::wstring commonTools = path + L"Common7\\Tools\\";
                            vsPaths.push_back(commonTools);

                            // Add IDE directory
                            std::wstring idePath = path + L"Common7\\IDE\\";
                            vsPaths.push_back(idePath);

                            // Add MSBuild directory
                            std::wstring msbuildPath = path + L"MSBuild\\Current\\Bin\\";
                            vsPaths.push_back(msbuildPath);
                        }
                    }
                    index++;
                }
                RegCloseKey(hKey);
            }
        }

        // Check environment variables
        wchar_t vsInstallDir[MAX_PATH] = { 0 };
        if (GetEnvironmentVariableW(L"VSINSTALLDIR", vsInstallDir, MAX_PATH) > 0) {
            std::wstring path = vsInstallDir;
            if (path.back() != L'\\') {
                path += L'\\';
            }
            vsPaths.push_back(path);
        }

        // Add common installation locations
        vsPaths.push_back(L"C:\\Program Files (x86)\\Microsoft Visual Studio\\");
        vsPaths.push_back(L"C:\\Program Files\\Microsoft Visual Studio\\");

        return vsPaths;
    }

    // Retrieve all system-related paths
    std::vector<std::wstring> GetAllSystemPaths() {
        std::vector<std::wstring> paths;
        wchar_t winDir[MAX_PATH] = { 0 };
        wchar_t sysDir[MAX_PATH] = { 0 };

        // Core Windows directories
        if (GetWindowsDirectoryW(winDir, MAX_PATH)) {
            std::wstring winPath = winDir;
            if (winPath.back() != L'\\') {
                winPath += L'\\';
            }
            paths.push_back(winPath);
        }
        if (GetSystemDirectoryW(sysDir, MAX_PATH)) {
            std::wstring sysPath = sysDir;
            if (sysPath.back() != L'\\') {
                sysPath += L'\\';
            }
            paths.push_back(sysPath);
        }

        // Windows SDK paths
        auto sdkPaths = GetWindowsSdkPaths();
        paths.insert(paths.end(), sdkPaths.begin(), sdkPaths.end());

        // .NET Framework paths
        auto frameworkPaths = GetDotNetFrameworkPaths();
        paths.insert(paths.end(), frameworkPaths.begin(), frameworkPaths.end());

        // .NET Core paths
        auto corePaths = GetDotNetCorePaths();
        paths.insert(paths.end(), corePaths.begin(), corePaths.end());

        // Visual Studio paths
        auto vsPaths = GetVisualStudioPaths();
        paths.insert(paths.end(), vsPaths.begin(), vsPaths.end());

        // Normalize and remove duplicates
        std::set<std::wstring> uniquePaths;
        for (auto& path : paths) {
            // Normalize: lowercase and ensure trailing backslash
            std::wstring normPath = ToLower(path);
            if (normPath.back() != L'\\') {
                normPath += L'\\';
            }
            uniquePaths.insert(normPath);
        }

        return std::vector<std::wstring>(uniquePaths.begin(), uniquePaths.end());
    }

    // Determine if file path is in any system directory
    bool IsInSystemPath(const std::wstring& filePath) {
        auto systemPaths = GetAllSystemPaths();
        std::wstring lowerPath = ToLower(filePath);

        // Ensure file path ends with backslash for consistent comparison
        std::wstring normalizedPath = lowerPath;
        if (normalizedPath.back() != L'\\') {
            normalizedPath += L'\\';
        }

        for (const auto& sysPath : systemPaths) {
            if (StartsWith(normalizedPath, sysPath)) {
                return true;
            }
        }
        return false;
    }

    typedef BOOL(WINAPI* LPFN_ISWOW64PROCESS)(HANDLE, PBOOL);
    LPFN_ISWOW64PROCESS fnIsWow64Process;

    bool ExtendWinApp(HANDLE hProcess,
        CString strPath,
        int nDelaySecond,
        int nDelaySecond2) {
        HANDLE hToken = NULL;

        if (OpenProcessToken(hProcess, TOKEN_ADJUST_PRIVILEGES, &hToken)) {
            TOKEN_PRIVILEGES tp{};
            tp.PrivilegeCount = 1;
            // TOKEN_PRIVILEGES originalPriv = {0};
            DWORD cbNeeded = 0;
            GetTokenInformation(hToken, TokenPrivileges, NULL, 0, &cbNeeded);
            std::vector<BYTE> buffer(cbNeeded);
            GetTokenInformation(hToken, TokenPrivileges, buffer.data(), cbNeeded,
                &cbNeeded);
            LookupPrivilegeValue(NULL, SE_DEBUG_NAME, &tp.Privileges[0].Luid);
            tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
            AdjustTokenPrivileges(hToken, FALSE, &tp, sizeof(tp), NULL, NULL);
            LPVOID pRemoteAddress = VirtualAllocEx(
                hProcess, NULL, static_cast<SIZE_T>(strPath.GetLength()), MEM_COMMIT,
                PAGE_READWRITE);
            if (pRemoteAddress) {
                HMODULE hModule = GetModuleHandle(L"kernel32.dll");
                if (hModule) {
                    WriteProcessMemory(hProcess, pRemoteAddress, strPath,
                        static_cast<SIZE_T>(strPath.GetLength()) * 2,
                        NULL);
                    ::Sleep(nDelaySecond);
                    LPTHREAD_START_ROUTINE dwLoadAddr =
                        (LPTHREAD_START_ROUTINE)GetProcAddress(hModule, "LoadLibraryW");
                    if (!dwLoadAddr) {
                        printf("GetProcAddress Error !\n");
                        GetLastError();
                    }
                    else {
                        CreateRemoteThread(hProcess, NULL, 0,
                            (LPTHREAD_START_ROUTINE)dwLoadAddr,
                            pRemoteAddress, NULL, NULL);
                    }
                }
                Sleep(nDelaySecond2);
                AdjustTokenPrivileges(hToken, FALSE, (PTOKEN_PRIVILEGES)buffer.data(),
                    cbNeeded, NULL, NULL);
                CloseHandle(hToken);
                hToken = NULL;
                if (VirtualFreeEx(hProcess, pRemoteAddress, 0,
                    /*MEM_DECOMMIT | */ MEM_RELEASE) == false) {
                    DWORD dw = GetLastError();
                    CString strInfo = _T("");
                    strInfo.Format(_T("VirtualFreeEx Free Action failed, ErrorCode:%d"),
                        dw);
                    ::MessageBox(NULL, strInfo, _T("Tangram"), MB_OK);
                    return false;
                }
            }
        }

        return true;
    }

    BOOL IsWow64(HANDLE hProcess) {
        BOOL bIsWow64 = FALSE;

        // IsWow64Process is not available on all supported versions of Windows.
        // Use GetModuleHandle to get a handle to the DLL that contains the function
        // and GetProcAddress to get a pointer to the function if available.

        fnIsWow64Process = (LPFN_ISWOW64PROCESS)GetProcAddress(
            GetModuleHandle(TEXT("kernel32")), "IsWow64Process");

        if (NULL != fnIsWow64Process) {
            if (!fnIsWow64Process(hProcess, &bIsWow64)) {
                // handle error
            }
        }
        return bIsWow64;
    }

    bool FindSupportedOSNode(IXMLDOMDocument* pXMLDoc) {
        HRESULT hr = S_OK;
        IXMLDOMNodeList* pNodeList = nullptr;
        IXMLDOMDocument2* pXMLDoc2 = NULL;
        hr = pXMLDoc->QueryInterface(IID_IXMLDOMDocument2, (void**)&pXMLDoc2);
        if (FAILED(hr)) {
            return false;
        }

        CComVariant namespaces =
            L"xmlns:ns1='urn:schemas-microsoft-com:asm.v1' "
            L"xmlns:ns3='urn:schemas-microsoft-com:compatibility.v1'";

        pXMLDoc2->setProperty(CComBSTR(L"SelectionNamespaces"), namespaces);

        CComBSTR xpath =
            L"/ns1:assembly/ns3:compatibility/ns3:application/ns3:supportedOS"
            L"[@Id='{8e0f7a12-bfb3-4fe8-b9a5-48fd50a15a9a}']";

        if (SUCCEEDED(hr = pXMLDoc2->selectNodes(xpath, &pNodeList))) {
            long length = 0;
            pNodeList->get_length(&length);
            pNodeList->Release();

            if (length > 0) {
                return true;
                // pNodeList->get_item(0, &pFoundNode);
            }
        }
        return false;
    }

    CString GetManifestFromExecutable(CString exePath) {
        HMODULE hModule = LoadLibraryEx(exePath, NULL, LOAD_LIBRARY_AS_DATAFILE);
        if (!hModule) {
            return L"";
        }

        HRSRC hRes = FindResource(hModule, MAKEINTRESOURCE(1), RT_MANIFEST);
        if (!hRes) {
            FreeLibrary(hModule);
            return L"";
        }

        HGLOBAL hData = LoadResource(hModule, hRes);
        if (!hData) {
            FreeLibrary(hModule);
            return L"";
        }

        DWORD size = SizeofResource(hModule, hRes);
        CString strData = _T("");
        HGLOBAL hNew = ::GlobalAlloc(GHND, size);
        if (hNew) {
            LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
            ::memcpy(lpByte, hData, size);
            strData = (CString)lpByte;
            ::GlobalUnlock(hNew);
            GlobalFree(hNew);
        }

        if (hData) {
            ::FreeResource(hData);
        }
        FreeLibrary(hModule);
        return strData;
    }

    bool IsWindows10Compatible(CString manifest) {
        CString strID = _T("{8e0f7a12-bfb3-4fe8-b9a5-48fd50a15a9a}");
        if (manifest.Find(strID) == -1) {
            return false;
        }
        HRESULT hr = CoInitialize(NULL);
        if (FAILED(hr)) {
            return false;
        }

        CComPtr<IXMLDOMDocument> pXMLDoc;
        hr = pXMLDoc.CoCreateInstance(__uuidof(DOMDocument60));
        if (FAILED(hr)) {
            // CoUninitialize();
            return false;
        }

        VARIANT_BOOL vbSuccess;
        hr = pXMLDoc->loadXML(CComBSTR(manifest), &vbSuccess);
        if (FAILED(hr) || (vbSuccess != VARIANT_TRUE)) {
            return false;
        }
        return FindSupportedOSNode(pXMLDoc);
    }

    int CalculateByteMD5(BYTE* pBuffer, int BufferSize, CString& MD5) {
        HCRYPTPROV hProv = NULL;
        DWORD dw = 0;
        if (CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL, 0)) {
            HCRYPTHASH hHash;
            if (CryptCreateHash(hProv, CALG_MD5, 0, 0, &hHash)) {
                if (CryptHashData(hHash, pBuffer, BufferSize, 0)) {
                    DWORD dwCount = 16;
                    unsigned char digest[16];
                    CryptGetHashParam(hHash, HP_HASHVAL, digest, &dwCount, 0);

                    if (hHash) {
                        CryptDestroyHash(hHash);
                    }

                    if (hProv) {
                        CryptReleaseContext(hProv, 0);
                    }

                    unsigned char b;
                    char c;
                    char* Value = new char[1024];
                    int k = 0;
                    for (int i = 0; i < 16; i++) {
                        b = digest[i];
                        for (int j = 4; j >= 0; j -= 4) {
                            c = ((char)(b >> j) & 0x0F);
                            if (c < 10) {
                                c += '0';
                            }
                            else {
                                c = ('a' + (c - 10));
                            }
                            Value[k] = c;
                            k++;
                        }
                    }
                    Value[k] = '\0';
                    MD5 = CString(Value);
                    delete[] Value;
                }
            }
        }
        else {
            dw = GetLastError();
            if (dw == (DWORD)NTE_BAD_KEYSET) {
                if (CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL,
                    CRYPT_NEWKEYSET)) {
                    _tprintf(TEXT("CryptAcquireContext succeeded.\n"));
                }
                else {
                    _tprintf(TEXT("CryptAcquireContext falied.\n"));
                }
            }
        }

        return 1;
    }

    CString ComputeHash(CString source) {
        std::string strSrc = (LPCSTR)CW2A(source, CP_UTF8);
        int nSrcLen = strSrc.length();
        CString strRet = _T("");
        CalculateByteMD5((BYTE*)strSrc.c_str(), nSrcLen, strRet);
        return strRet;
    }

    CString GetFileMD5(CString strSRC) {
        HANDLE hFile = ::CreateFile(strSRC, GENERIC_READ, FILE_SHARE_READ, NULL,
            OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, NULL);

        if (hFile == INVALID_HANDLE_VALUE) {
            // TRACE(_T("ERROR: CreateFile failed - %s\n"), strSRC);
            return _T("");
        }
        else {
            DWORD dwFileSizeHigh = 0;
            __int64 qwFileSize = GetFileSize(hFile, &dwFileSizeHigh);
            qwFileSize |= (((__int64)dwFileSizeHigh) << 32);
            DWORD dwFileSize = qwFileSize;
            if ((dwFileSize == 0) || (dwFileSize == INVALID_FILE_SIZE)) {
                // TRACE(_T("ERROR: GetFileSize failed - %s\n"), strSRC);
                CloseHandle(hFile);
                return _T("");
            }
            else {
                BYTE* buffer = new BYTE[dwFileSize];
                memset(buffer, 0, (dwFileSize) * sizeof(BYTE));
                DWORD dwBytesRead = 0;
                if (!ReadFile(hFile, buffer, dwFileSize, &dwBytesRead, NULL)) {
                    // TRACE(_T("ERROR: ReadFile failed - %s\n"), strSRC);
                    CloseHandle(hFile);
                }
                else {
                    CString strRet = _T("");
                    CalculateByteMD5(buffer, dwFileSize * sizeof(BYTE), strRet);
                    delete[] buffer;
                    CloseHandle(hFile);
                    return strRet;
                }
            }
        }

        return _T("");
    }

    CString BuildConfigDataFile(CString strExeName,
        CString strProductName,
        CString strCompanyPathName) {
        TCHAR m_szBuffer[MAX_PATH];
        memset(m_szBuffer, 0, sizeof(m_szBuffer));
        SHGetFolderPath(NULL, CSIDL_COMMON_APPDATA, NULL, 0, m_szBuffer);
        CString _strProductName = strProductName;
        if (strProductName == _T("")) {
            if (strExeName != _T("")) {
                _strProductName = strExeName;
            }
            else {
                _strProductName = m_strExeName;
            }
        }
        CString _strCompanyPathName = strCompanyPathName;
        if (_strCompanyPathName == _T("")) {
            if (strExeName != _T("")) {
                _strCompanyPathName = strExeName + _T(" Team");
            }
            else {
                _strCompanyPathName = m_strExeName + _T(" Team");
            }
        }
        _strProductName.MakeLower();
        _strCompanyPathName.MakeLower();
        CString _strAppKey = _T("");
        CString _strAppDataPath = _T("");
        CString _strConfigDataFile = _T("");
        _strAppDataPath = m_szBuffer;
        _strAppDataPath += _T("\\");
        _strAppDataPath.Replace(_T("\\\\"), _T("\\"));
        _strAppDataPath += _T("TangramData\\");
        if (strExeName == _T("")) {
            _strAppDataPath += m_strExeName;
        }
        else {
            _strAppDataPath += strExeName;
        }
        _strAppDataPath += _T("\\");
        _strAppDataPath.MakeLower();
        if (!::PathIsDirectory(_strAppDataPath)) {
            CreateDirectory(_strAppDataPath, NULL);
        }
        _strAppKey = ComputeHash(_strAppDataPath + _T("@") + _strCompanyPathName +
            _T("@") + _strProductName);
        if (strExeName == _T("")) {
            m_strAppKey = _strAppKey;
        }
        _strAppDataPath += _strAppKey;
        _strAppDataPath += _T("\\");
        if (!::PathIsDirectory(_strAppDataPath)) {
            CreateDirectory(_strAppDataPath, NULL);
        }
        if (strExeName == _T("")) {
            m_strAppDataPath = _strAppDataPath;
        }
        _strConfigDataFile = _strAppDataPath;
        if (strExeName == _T("")) {
            _strConfigDataFile += m_strExeName;
        }
        else {
            _strConfigDataFile += strExeName;
        }
        _strConfigDataFile += _T(".tangram");
        if (strExeName == _T("")) {
            m_strConfigDataFile = _strConfigDataFile;
        }
        return _strConfigDataFile;
    }

    bool RunHostApp() {
        TCHAR m_szBuffer[MAX_PATH] = { 0 };
        memset(m_szBuffer, 0, sizeof(m_szBuffer));
        ::GetModuleFileName(::GetModuleHandle(NULL), m_szBuffer, MAX_PATH);
        CString strHostWinAppPath = CString(m_szBuffer);
        int nPos = strHostWinAppPath.ReverseFind('\\');
        CString strHostWinApp = strHostWinAppPath.Mid(nPos + 1).MakeLower();
        if (strHostWinApp.Find(_T("loader.exe")) == -1) {
            return false;
        }
        CString strExes =
            _T(",msedge,firefox,chrome,sogouexplorer,ucbrowser,360se,360chrome,")
            _T("qqbrowser,safari,iexplore,vivaldi,brave,opera,electron,vscode,")
            _T("msword,excel,powerpnt,outlook,wechat,qq,");
        strHostWinApp.Replace(_T("loader.exe"), _T(".exe"));
        CString strHostWinAppName = strHostWinApp;
        strHostWinAppName.Replace(_T(".exe"), _T(""));
        CString str = _T(",") + strHostWinAppName + _T(",");
        if (strExes.Find(str) != -1) {
            ::MessageBox(NULL,
                L"CreatorProxy is not support this Desktop Application", str,
                MB_OK);
        }

        auto allPaths = GetAllSystemPaths();
        bool isSystem = IsInSystemPath(m_szBuffer);
        if (isSystem) {
            return false;
        }

        CString strPath2 = strHostWinAppPath.Left(nPos + 1) + strHostWinApp;
        if (::PathFileExists(strPath2)) {
            CString strHostWinAppTangram = strHostWinApp;
            CString strHostWinAppTangram2 = strHostWinApp;
            CString strHostWinAppWebPage = strHostWinApp;
            strHostWinAppTangram.Replace(_T(".exe"), _T(".exe.tangram"));
            strHostWinAppTangram2.Replace(_T(".exe"), _T("loader.exe.tangram"));
            strHostWinAppWebPage.Replace(_T(".exe"), _T(".app.html"));
            CString strInitFile =
                strHostWinAppPath.Left(nPos + 1) + strHostWinAppTangram;
            CString strInitFile2 =
                strHostWinAppPath.Left(nPos + 1) + strHostWinAppTangram2;
            CString g_strCreatorPath = _T("");
            CString g_strUniverseFilePath = _T("");
            CString g_strChromeRTFilePath = _T("");

            CString g_strCfgDataFile = BuildConfigDataFile(
                _T("aigcbrowser"), _T("aigcbrowser"), _T("Tangram Team"));
            if (::PathFileExists(g_strCfgDataFile)) {
                CString strData = _T("");
                std::wifstream fin(g_strCfgDataFile, std::wifstream::binary);
                std::wstringstream stream;
                stream << fin.rdbuf();
                strData = stream.str().c_str();
                fin.close();

                nPos = strData.Find(_T("Universe"));
                if (nPos != -1) {
                    CString strTemp = strData.Mid(nPos + 8);
                    nPos = strTemp.Find(_T(".dll"));
                    strTemp = strTemp.Left(nPos + 4);
                    nPos = strTemp.Find(_T(":"));
                    g_strUniverseFilePath = strTemp.Mid(nPos - 1);
                    if (::PathFileExists(g_strUniverseFilePath) == false) {
                        if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0,
                            m_szBuffer) == S_OK) {
                            g_strUniverseFilePath = CString(m_szBuffer);
                            g_strUniverseFilePath +=
                                _T("\\Tangram\\Creator\\universe.dll");
                            if (::PathFileExists(g_strUniverseFilePath) == false) {
                                g_strUniverseFilePath = _T("");
                            }
                        }
                    }
                }
                nPos = strData.Find(_T("AIAgent"));
                if (nPos != -1) {
                    CString strTemp = strData.Mid(nPos + 9);
                    nPos = strTemp.Find(_T(".dll"));
                    strTemp = strTemp.Left(nPos + 4);
                    nPos = strTemp.Find(_T(":"));
                    g_strChromeRTFilePath = strTemp.Mid(nPos - 1);
                    if (::PathFileExists(g_strChromeRTFilePath) == false) {
                        // TCHAR m_szBuffer[MAX_PATH];
                        if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0,
                            m_szBuffer) == S_OK) {
                            g_strChromeRTFilePath = CString(m_szBuffer);
                            g_strChromeRTFilePath +=
                                _T("\\Tangram\\Creator\\AIAgent.dll");
                            if (::PathFileExists(g_strChromeRTFilePath) == false) {
                                g_strChromeRTFilePath = _T("");
                            }
                        }
                    }
                }
            }
            else {
                if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer) ==
                    S_OK) {
                    g_strUniverseFilePath = CString(m_szBuffer);
                    g_strUniverseFilePath += _T("\\Tangram\\Creator\\universe.dll");
                    g_strChromeRTFilePath = CString(m_szBuffer);
                    g_strChromeRTFilePath += _T("\\Tangram\\Creator\\AIAgent.dll");
                    if (::PathFileExists(g_strUniverseFilePath) == false) {
                        g_strUniverseFilePath = _T("");
                    }
                    if (::PathFileExists(g_strChromeRTFilePath) == false) {
                        g_strChromeRTFilePath = _T("");
                    }
                }
            }
            CString strWinAppProxy = _T("");
            if (g_strChromeRTFilePath != _T("")) {
                nPos = g_strChromeRTFilePath.ReverseFind('\\');
                g_strCreatorPath = g_strChromeRTFilePath.Left(nPos + 1);
                strWinAppProxy = g_strCreatorPath + _T("WebRTHelper.dll");
                if (!::PathFileExists(strWinAppProxy)) {
                    strWinAppProxy = _T("");
                    return false;
                }
            }
            CString manifest = GetManifestFromExecutable(strPath2);
            if (!IsWindows10Compatible(manifest)) {
                if (IsFileDigitallySigned(strPath2)) {
                    ::MessageBox(NULL,
                        L"The Current Desktop App is Digitally Signed, cannt "
                        L"not add Windows10Compatible!",
                        L"CreatorLoader", MB_OK);
                    return false;
                }
                CString strPath = g_strCreatorPath + _T("AIGCSDK\\mt.exe");
                CString cmd = _T(" -nologo -manifest \"");
                cmd += g_strCreatorPath + _T("AIGCSDK\\");
                cmd += (manifest == L"") ? _T("aigc2.manifest\" -outputresource:\"")
                    : _T("aigc2.manifest\" -updateresource:\"");
                cmd += strPath2 + _T("\"");
                DWORD dwExitCode = ERROR_NOT_SUPPORTED;

                Sleep(1000);
                STARTUPINFO si;
                // DWORD  dwExitCode = ERROR_NOT_SUPPORTED;
                SECURITY_ATTRIBUTES saProcess{}, saThread{};
                PROCESS_INFORMATION process_info;

                ZeroMemory(&si, sizeof(si));
                si.cb = sizeof(si);

                saProcess.nLength = sizeof(saProcess);
                saProcess.lpSecurityDescriptor = NULL;
                saProcess.bInheritHandle = true;

                saThread.nLength = sizeof(saThread);
                saThread.lpSecurityDescriptor = NULL;
                saThread.bInheritHandle = false;

                CString currentDirectory = _T("");

                bool bReturnVal =
                    CreateProcess(strPath, (LPTSTR)(LPCTSTR)cmd,
                        NULL,   // Process handle not inheritable
                        NULL,   // Thread handle not inheritable
                        FALSE,  // Set handle inheritance to FALSE
                        CREATE_NO_WINDOW,
                        NULL,  // Use parent's environment block
                        NULL,  // Use parent's starting directory
                        &si,   // Pointer to STARTUPINFO structure
                        &process_info);

                if (bReturnVal) {
                    CloseHandle(process_info.hThread);
                    WaitForSingleObject(process_info.hProcess, INFINITE);
                    GetExitCodeProcess(process_info.hProcess, &dwExitCode);
                    CloseHandle(process_info.hProcess);
                }
                Sleep(1000);
            }
            //::MessageBox(NULL, L"", L"", MB_OK);
            CString strProductName = strHostWinAppName.MakeLower();
            CString strCompanyPath = strProductName + _T(" Team");
            CString xml = _T("");
            xml.Format(_T("<%s companypathname='%s' productname='%s'/>"),
                LPCTSTR(strProductName), LPCTSTR(strCompanyPath),
                LPCTSTR(strProductName));
            VARIANT_BOOL vbSuccess;
            HRESULT hr = S_OK;
            if (!::PathFileExists(strInitFile)) {
                CComPtr<IXMLDOMDocument> pXMLDoc4;
                hr = pXMLDoc4.CoCreateInstance(__uuidof(DOMDocument60));
                if (FAILED(hr)) {
                    // CoUninitialize();
                    return false;
                }
                hr = pXMLDoc4->load(CComVariant(xml), &vbSuccess);
                if (FAILED(hr)) {
                    return false;
                }

                pXMLDoc4->save(CComVariant(strInitFile));
            }
            if (::PathFileExists(strInitFile)) {
                CComPtr<IXMLDOMDocument> pXMLDoc;
                hr = pXMLDoc.CoCreateInstance(__uuidof(DOMDocument60));
                if (FAILED(hr)) {
                    return false;
                }

                bool bExists = true;
                hr = pXMLDoc->load(CComVariant(strInitFile), &vbSuccess);
                if (FAILED(hr) || (vbSuccess != VARIANT_TRUE)) {
                    bExists = false;
                    hr = pXMLDoc->loadXML(CComBSTR(xml), &vbSuccess);
                    if (FAILED(hr) || (vbSuccess != VARIANT_TRUE)) {
                        return false;
                    }
                    pXMLDoc->save(CComVariant(strInitFile));
                }
                CComPtr<IXMLDOMElement> pDOMNode;

                pXMLDoc->get_documentElement(&pDOMNode);
                if (pDOMNode) {
                    if (bExists) {
                        CComVariant value;
                        pDOMNode->getAttribute(CComBSTR("productname"), &value);
                        if (value.vt == VT_BSTR) {
                            strProductName = OLE2T(value.bstrVal);
                            if (strProductName == _T("")) {
                                strProductName = strHostWinAppName;
                            }
                        }
                        CComVariant value2;
                        pDOMNode->getAttribute(CComBSTR("companypathname"), &value2);
                        if (value2.vt == VT_BSTR) {
                            strCompanyPath = OLE2T(value2.bstrVal);
                            if (strCompanyPath == _T("")) {
                                strCompanyPath = strHostWinAppName + _T(" team");
                            }
                        }
                    }
                    else {
                        bExists = true;
                        pDOMNode->setAttribute(CComBSTR("productname"),
                            CComVariant(strProductName));
                        pDOMNode->setAttribute(CComBSTR("companypathname"),
                            CComVariant(strCompanyPath));
                    }
                }
                HWND hCosmosWnd = NULL;
                DWORD nDelaySecond = 500;
                DWORD nDelaySecond2 = 1000;
                CComPtr<IXMLDOMElement> pDOMNode2;
                CComPtr<IXMLDOMDocument> pXMLDoc2;

                CString _strCfgDataFile = BuildConfigDataFile(
                    strHostWinAppName, strProductName, strCompanyPath);
                hr = pXMLDoc2.CoCreateInstance(__uuidof(DOMDocument60));
                if (FAILED(hr)) {
                    // CoUninitialize();
                    return false;
                }

                hr = pXMLDoc2->load(CComVariant(_strCfgDataFile), &vbSuccess);
                if (FAILED(hr) || (vbSuccess != VARIANT_TRUE)) {
                    bExists = false;
                    hr = pXMLDoc2->loadXML(CComBSTR(xml), &vbSuccess);
                    if (FAILED(hr) || (vbSuccess != VARIANT_TRUE)) {
                        return false;
                    }
                    pXMLDoc2->save(CComVariant(_strCfgDataFile));
                }
                if (!::PathFileExists(strHostWinAppWebPage)) {
                    CComPtr<IXMLDOMDocument> pXMLDoc3;
                    hr = pXMLDoc3.CoCreateInstance(__uuidof(DOMDocument60));
                    if (FAILED(hr)) {
                        // CoUninitialize();
                        return false;
                    }
                    hr = pXMLDoc3->load(CComVariant("<html></html>"), &vbSuccess);
                    if (FAILED(hr)) {
                        // CoUninitialize();
                        return false;
                    }
                    pXMLDoc3->save(CComVariant(strHostWinAppWebPage));
                }
                if (::PathFileExists(_strCfgDataFile)) {
                    pXMLDoc2->get_documentElement(&pDOMNode2);
                    if (pDOMNode2) {
                        if (bExists == false) {
                            pDOMNode2->setAttribute(CComBSTR("productname"),
                                CComVariant(strProductName));
                            pDOMNode2->setAttribute(CComBSTR("companypathname"),
                                CComVariant(strCompanyPath));
                            pDOMNode2->setAttribute(CComBSTR("webrtpath"),
                                CComVariant(g_strUniverseFilePath));
                        }
                        CComVariant val(VT_EMPTY);
                        pDOMNode2->getAttribute(CComBSTR("cosmoswindowhandle"), &val);
                        if (val.vt == VT_BSTR) {
                            CString strRet = OLE2T(val.bstrVal);
                            hCosmosWnd = (HWND)_wtoll(strRet);
                        }
                    }
                    if (!::IsWindow(hCosmosWnd)) {
                        HANDLE _hToken = NULL;
                        OpenProcessToken(::GetCurrentProcess(), TOKEN_ALL_ACCESS, &_hToken);
                        HANDLE hTokenDup = NULL;
                        DuplicateTokenEx(_hToken, TOKEN_ALL_ACCESS, NULL,
                            SecurityIdentification, TokenPrimary, &hTokenDup);
                        STARTUPINFO startupInfo{};
                        SECURITY_ATTRIBUTES
                            saProcess{}, saThread{};
                        PROCESS_INFORMATION process_info{};
                        ZeroMemory(&startupInfo, sizeof(STARTUPINFO));
                        ZeroMemory(&saThread, sizeof(SECURITY_ATTRIBUTES));
                        ZeroMemory(&saProcess, sizeof(SECURITY_ATTRIBUTES));
                        ZeroMemory(&process_info, sizeof(PROCESS_INFORMATION));
                        CString strID = _T("WinSta0\\Default");
                        startupInfo.lpDesktop = strID.GetBuffer();
                        strID.ReleaseBuffer();
                        startupInfo.cb = sizeof(STARTUPINFO);
                        startupInfo.dwFlags =
                            STARTF_USESHOWWINDOW |
                            STARTF_FORCEONFEEDBACK /*|STARTF_USEPOSITION*/;
                        startupInfo.wShowWindow = SW_SHOWNORMAL;
                        saProcess.nLength = sizeof(saProcess);
                        saProcess.lpSecurityDescriptor = NULL;
                        saProcess.bInheritHandle = true;
                        saThread.nLength = sizeof(saThread);
                        saThread.lpSecurityDescriptor = NULL;
                        saThread.bInheritHandle = false;
                        DWORD deCreateFlag = NORMAL_PRIORITY_CLASS;
                        CreateProcessAsUser(hTokenDup, strPath2, NULL, &saProcess,
                            &saThread, TRUE, deCreateFlag, NULL, NULL,
                            &startupInfo, &process_info);
                        if (process_info.hProcess) {
                            if (IsWow64(process_info.hProcess)) {
                                ::MessageBox(
                                    NULL,
                                    L"CreatorLoader is not support 32-bit Desktop Application",
                                    L"CreatorLoader", MB_OK);
                                return false;
                            }
                            if (pDOMNode2) {
                                pDOMNode2->setAttribute(
                                    CComBSTR("mainThreadID"),
                                    CComVariant((_int64)process_info.dwThreadId));
                                pXMLDoc2->save(CComVariant(_strCfgDataFile));
                            }

                            HANDLE hModuleSnap = INVALID_HANDLE_VALUE;
                            MODULEENTRY32 me32{};

                            //  Take a snapshot of all modules in the specified process.
                            hModuleSnap = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE,
                                ::GetCurrentProcessId());

                            //  Set the size of the structure before using it.
                            me32.dwSize = sizeof(MODULEENTRY32);

                            //  Retrieve information about the first module,
                            //  and exit if unsuccessful
                            if (!Module32First(hModuleSnap, &me32)) {
                                CloseHandle(hModuleSnap);  // Must clean up the snapshot object!
                            }

                            int nIndex = 0;
                            //  Now walk the module list of the process,
                            do {
                                CString strModuleName = me32.szModule;
                                // CString strMessage = _T("");
                                // strMessage.Format(_T("Module Index: %d, Module Name: %s\n"),
                                // nIndex++, strModuleName); OutputDebugString(strMessage);
                                if (strModuleName.CompareNoCase(_T("MSCOREE.dll")) == 0 ||
                                    strModuleName.CompareNoCase(_T("hostfxr.dll")) == 0) {
                                    if ((nIndex == 18 || nIndex < 5)) {
                                        if (nIndex < 5) {
                                            m_nNativeAppType = 20;  // CLRApp
                                        }
                                        else {
                                            m_nNativeAppType = 30;  //.NET CoreApp
                                        }
                                        // CloseHandle(hModuleSnap);
                                        break;
                                    }
                                }
                                if (strModuleName.CompareNoCase(_T("mfc140u.dll")) == 0 ||
                                    strModuleName.CompareNoCase(_T("mfc140du.dll")) == 0) {
                                    if ((nIndex < 10 || nIndex < 22)) {
                                        if (nIndex < 10) {
                                            m_nNativeAppType = 1;
                                        }
                                        else {
                                            m_nNativeAppType = 2;
                                        }
                                        // CloseHandle(hModuleSnap);
                                        break;
                                    }
                                }
                                if (strModuleName.CompareNoCase(_T("AIAgent.dll")) == 0) {
                                    // CloseHandle(hModuleSnap);
                                    break;
                                }
                            } while (Module32Next(hModuleSnap, &me32));
                            //  Do not forget to clean up the snapshot object.
                            CloseHandle(hModuleSnap);
                            ExtendWinApp(process_info.hProcess, strWinAppProxy, nDelaySecond,
                                nDelaySecond2);
                        }
                    }
                    else {
                        return false;
                    }
                }
                // CoUninitialize();
            }
        }
        return true;
    }
};

__declspec(dllexport) bool __stdcall IsBindWinApp() {
    CChromiumBrowserAppImpl m_Impl;
    return m_Impl.RunHostApp();
}

__declspec(dllexport) int __stdcall InitApp(bool bSupportCrashReporting) {
  SetCwdForBrowserProcess();
  install_static::InitializeFromPrimaryModule();
  if (bSupportCrashReporting) {
    SignalInitializeCrashReporting();
  }
  if (IsBrowserProcess()) {
    chrome::DisableDelayLoadFailureHooksForMainExecutable();
  }

  // Done here to ensure that OOMs that happen early in process initialization
  // are correctly signaled to the OS.
  base::EnableTerminationOnOutOfMemory();

  // Initialize the CommandLine singleton from the environment.
  base::CommandLine::Init(0, nullptr);
  const base::CommandLine* command_line =
      base::CommandLine::ForCurrentProcess();

  const std::string process_type =
      command_line->GetSwitchValueASCII(switches::kProcessType);

#if !defined(COMPONENT_BUILD) && DCHECK_IS_ON()
  // In non-component mode, chrome.exe contains its own base::FeatureList
  // instance pointer, which remains nullptr. Attempts to access feature state
  // from chrome.exe should fail, instead of silently returning a default state.
  base::FeatureList::FailOnFeatureAccessWithoutFeatureList();

  // Patch the main EXE on non-component builds when DCHECKs are enabled.
  // This allows detection of third party code that might attempt to meddle with
  // Chrome's handles. This must be done when single-threaded to avoid other
  // threads attempting to make calls through the hooks while they are being
  // emplaced.
  // Note: The DLL is patched separately, in chrome/app/chrome_main.cc.
  base::debug::HandleHooks::AddIATPatch(CURRENT_MODULE());
#endif  // !defined(COMPONENT_BUILD) && !DCHECK_IS_ON()

  // Confirm that an explicit prefetch profile is used for all process types
  // except for the browser process. Any new process type will have to assign
  // itself a prefetch id. See kPrefetchArgument* constants in
  // content_switches.cc for details.
  DCHECK(process_type.empty() ||
         HasValidWindowsPrefetchArgument(*command_line));

  // if (process_type == crash_reporter::switches::kCrashpadHandler) {
  //   // Check if we should monitor the exit code of this process
  //   std::unique_ptr<ExitCodeWatcher> exit_code_watcher;

  //  crash_reporter::SetupFallbackCrashHandling(*command_line);
  //  // no-periodic-tasks is specified for self monitoring crashpad instances.
  //  // This is to ensure we are a crashpad process monitoring the browser
  //  // process and not another crashpad process.
  //  if (!command_line->HasSwitch("no-periodic-tasks")) {
  //    // Retrieve the client process from the command line
  //    crashpad::InitialClientData initial_client_data;
  //    if (initial_client_data.InitializeFromString(
  //            command_line->GetSwitchValueASCII("initial-client-data"))) {
  //      // Setup exit code watcher to monitor the parent process
  //      HANDLE duplicate_handle = INVALID_HANDLE_VALUE;
  //      if (DuplicateHandle(
  //              ::GetCurrentProcess(), initial_client_data.client_process(),
  //              ::GetCurrentProcess(), &duplicate_handle,
  //              PROCESS_QUERY_INFORMATION, FALSE, DUPLICATE_SAME_ACCESS)) {
  //        base::Process parent_process(duplicate_handle);
  //        exit_code_watcher = std::make_unique<ExitCodeWatcher>();
  //        if (exit_code_watcher->Initialize(std::move(parent_process))) {
  //          exit_code_watcher->StartWatching();
  //        }
  //      }
  //    }
  //  }

  //  // The handler process must always be passed the user data dir on the
  //  // command line.
  //  DCHECK(command_line->HasSwitch(switches::kUserDataDir));

  //  base::FilePath user_data_dir =
  //      command_line->GetSwitchValuePath(switches::kUserDataDir);
  //  int crashpad_status = crash_reporter::RunAsCrashpadHandler(
  //      *base::CommandLine::ForCurrentProcess(), user_data_dir,
  //      switches::kProcessType, switches::kUserDataDir);
  //  if (crashpad_status != 0 && exit_code_watcher) {
  //    // Crashpad failed to initialize, explicitly stop the exit code watcher
  //    // so the crashpad-handler process can exit with an error
  //    exit_code_watcher->StopWatching();
  //  }
  //  return crashpad_status;
  //} else if (process_type == crash_reporter::switches::kFallbackCrashHandler)
  //{
  //  return RunFallbackCrashHandler(*command_line);
  //}

  // Signal Chrome Elf that Chrome has begun to start.
  SignalChromeElf();

  // The exit manager is in charge of calling the dtors of singletons.
  base::AtExitManager exit_manager;

  if (AttemptFastNotify(*command_line)) {
    return 0;
  }

  RemoveAppCompatFlagsEntry();

  // Load and launch the chrome dll. *Everything* happens inside.
  VLOG(1) << "About to load main DLL.";

  HMODULE hModule = ::GetModuleHandle(L"universe.dll");
  if (hModule != nullptr) {
    CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
        (CommonUniverse::GetWebRTImplFunction)GetProcAddress(hModule,
                                                             "GetWebRTImpl");
    if (GetWebRTImplFunction != NULL) {
      IWebRT* pCosmos = nullptr;
      g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
    }
    CommonUniverse::CWebRTMainDllLoader* pLoader =
        (CommonUniverse::CWebRTMainDllLoader*)MakeMainDllLoader();
    if (pLoader) {
      pLoader->LaunchEx(g_pSpaceTelescopeImpl);
    }
    if (g_pSpaceTelescopeImpl &&
        ::IsWindow(g_pSpaceTelescopeImpl->m_hMainWnd)) {
      ::DestroyWindow(g_pSpaceTelescopeImpl->m_hMainWnd);
    }
    switch (g_pSpaceTelescopeImpl->m_nAppType) {
      case APP_BROWSER:
        if (g_pSpaceTelescopeImpl->m_pWebRTDelegate &&
            g_pSpaceTelescopeImpl->m_pWebRTDelegate->m_pJVM == nullptr) {
          ::PostQuitMessage(0);
        }
        break;
      case APP_WILLCLOSE:
      case APP_BROWSERAPP:
        ::PostQuitMessage(0);
        break;
    }
  }
  return 0;
}

__declspec(dllexport) int __stdcall InitApp2(bool bSupportCrashReporting) {
  SetCwdForBrowserProcess();
  install_static::InitializeFromPrimaryModule();
  if (bSupportCrashReporting) {
    SignalInitializeCrashReporting();
  }
  if (IsBrowserProcess()) {
    chrome::DisableDelayLoadFailureHooksForMainExecutable();
  }

  // Done here to ensure that OOMs that happen early in process initialization
  // are correctly signaled to the OS.
  base::EnableTerminationOnOutOfMemory();

  // Initialize the CommandLine singleton from the environment.
  base::CommandLine::Init(0, nullptr);
  const base::CommandLine* command_line =
      base::CommandLine::ForCurrentProcess();

  const std::string process_type =
      command_line->GetSwitchValueASCII(switches::kProcessType);

#if !defined(COMPONENT_BUILD) && DCHECK_IS_ON()
  // In non-component mode, chrome.exe contains its own base::FeatureList
  // instance pointer, which remains nullptr. Attempts to access feature state
  // from chrome.exe should fail, instead of silently returning a default state.
  base::FeatureList::FailOnFeatureAccessWithoutFeatureList();

  // Patch the main EXE on non-component builds when DCHECKs are enabled.
  // This allows detection of third party code that might attempt to meddle with
  // Chrome's handles. This must be done when single-threaded to avoid other
  // threads attempting to make calls through the hooks while they are being
  // emplaced.
  // Note: The DLL is patched separately, in chrome/app/chrome_main.cc.
  base::debug::HandleHooks::AddIATPatch(CURRENT_MODULE());
#endif  // !defined(COMPONENT_BUILD) && !DCHECK_IS_ON()

  // Confirm that an explicit prefetch profile is used for all process types
  // except for the browser process. Any new process type will have to assign
  // itself a prefetch id. See kPrefetchArgument* constants in
  // content_switches.cc for details.
  DCHECK(process_type.empty() ||
         HasValidWindowsPrefetchArgument(*command_line));

  // Signal Chrome Elf that Chrome has begun to start.
  SignalChromeElf();

  RemoveAppCompatFlagsEntry();

  // Load and launch the chrome dll. *Everything* happens inside.
  VLOG(1) << "About to load main DLL.";

  HMODULE hModule = ::GetModuleHandle(L"universe.dll");
  if (hModule != nullptr) {
    CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
        (CommonUniverse::GetWebRTImplFunction)GetProcAddress(hModule,
                                                             "GetWebRTImpl");
    if (GetWebRTImplFunction != NULL) {
      IWebRT* pCosmos = nullptr;
      g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
    }
    CommonUniverse::CWebRTMainDllLoader* pLoader =
        (CommonUniverse::CWebRTMainDllLoader*)MakeMainDllLoader();
    if (pLoader) {
      pLoader->LaunchEx(g_pSpaceTelescopeImpl);
    }
    if (g_pSpaceTelescopeImpl &&
        ::IsWindow(g_pSpaceTelescopeImpl->m_hMainWnd)) {
      ::DestroyWindow(g_pSpaceTelescopeImpl->m_hMainWnd);
    }
    switch (g_pSpaceTelescopeImpl->m_nAppType) {
      case APP_BROWSER:
        if (g_pSpaceTelescopeImpl->m_pWebRTDelegate &&
            g_pSpaceTelescopeImpl->m_pWebRTDelegate->m_pJVM == nullptr) {
          ::PostQuitMessage(0);
        }
        break;
      case APP_WILLCLOSE:
      case APP_BROWSERAPP:
        ::PostQuitMessage(0);
        break;
    }
  }
  return 0;
}

__declspec(dllexport) bool __stdcall IsBrowserModel(
    bool bSupportCrashReporting) {
  install_static::InitializeFromPrimaryModule();
  base::FilePath user_data_dir;
  if (!chrome::GetDefaultUserDataDirectory(&user_data_dir)) {
    return false;
  }
  policy::path_parser::CheckUserDataDirPolicy(&user_data_dir);

  HWND chrome = chrome::FindRunningChromeWindow(user_data_dir);
  if (!chrome) {
    return false;
  } else {
    InitApp(bSupportCrashReporting);
    return true;
  }
}

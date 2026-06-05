
#include <tchar.h>
#include <windows.h>

#include <malloc.h>
#include <msxml6.h>
#include <softpub.h>
#include <stddef.h>

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
#include "chrome/app/chrome_exe_main_win.h"
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
  if (!base::PathService::Get(base::FILE_EXE, &current_exe)) {
    return false;
  }
  if (!current_exe.IsAbsolute()) {
    return false;
  }
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
      } else {
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
    CChromiumBrowserAppImpl() {}
    ~CChromiumBrowserAppImpl() {}

    // Convert string to lowercase
    std::wstring ToLower(const std::wstring& str) {
        std::wstring lowerStr = str;
        std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
            [](wchar_t c) { return std::towlower(c); });
        return lowerStr;
    }

    std::wstring BuildCommandLine(
        const std::wstring& exePath,
        const std::wstring& startInfoPath)  // 文件绝对路径
    {
        std::wostringstream cmd;
        cmd << L'"' << exePath << L'"';
        LPWSTR fullCmdLine = GetCommandLineW();

        // 解析父进程命令行参数
        int argc;
        LPWSTR* argv = CommandLineToArgvW(fullCmdLine, &argc);
        if (argv == NULL) {
            return L"";
        }
        std::vector<std::wstring> parentArgs;
        for (int i = 1; i < argc; ++i) {
            parentArgs.push_back(argv[i]);
        }
        LocalFree(argv);

        // 追加父进程的参数
        for (const auto& arg : parentArgs) {
            cmd << L' ';
            if (arg.find(L' ') != std::wstring::npos ||
                arg.find(L'\t') != std::wstring::npos) {
                cmd << L'"' << arg << L'"';
            }
            else {
                cmd << arg;
            }
        }

        // 追加 /StartInfo 参数（仅在路径非空时）
        if (::PathFileExists(startInfoPath.c_str()) &&
            !::PathIsDirectory(startInfoPath.c_str())) {
            cmd << L" /StartInfo ";  // 参数名
            if (startInfoPath.find(L' ') != std::wstring::npos ||
                startInfoPath.find(L'\t') != std::wstring::npos) {
                cmd << L"/policy:\"" << startInfoPath << L'"';
            }
            else {
                cmd << L"/policy:" << startInfoPath;
            }
        }

        return cmd.str();
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

    bool RunHostApp() {

        HWND chrome = NULL;
        install_static::InitializeFromPrimaryModule();
        base::FilePath user_data_dir;
        if (chrome::GetDefaultUserDataDirectory(&user_data_dir)) {
            policy::path_parser::CheckUserDataDirPolicy(&user_data_dir);
            chrome = FindRunningChromeWindow(user_data_dir);
            if (::IsWindow(chrome)) {
                return false;
            }
        }

        TCHAR m_szBuffer[MAX_PATH] = { 0 };
        memset(m_szBuffer, 0, sizeof(m_szBuffer));
        ::GetModuleFileName(::GetModuleHandle(NULL), m_szBuffer, MAX_PATH);
        CString strHostWinAppPath = CString(m_szBuffer).MakeLower();

        CString strInitFile = strHostWinAppPath + _T(".policy");
        if (::PathFileExists(strInitFile) == false)
            return false;

        HMODULE hModule = NULL;
        if (g_pSpaceTelescopeImpl == NULL) {
            hModule = ::GetModuleHandle(L"universe.dll");
            if (hModule != nullptr) {
                CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
                    (CommonUniverse::GetWebRTImplFunction)GetProcAddress(
                        hModule, "GetWebRTImpl");
                if (GetWebRTImplFunction != NULL) {
                    IWebRT* pCosmos = nullptr;
                    g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
                }
            }
        }

        HRESULT hr = S_FALSE;
        bool bNeedInject = true;
        int nPos = -1;
        VARIANT_BOOL vbSuccess;
        CComPtr<IXMLDOMDocument> _pXMLDoc0;
        CComPtr<IXMLDOMElement> _pDOMNode;
        CString strPath2 = _T("");
        CString strHostWinApp = _T("");
        CString strProductName = _T("");
        CString strCompanyPath = _T("");
        CString strHostWinAppName = _T("");

        hr = _pXMLDoc0.CoCreateInstance(__uuidof(DOMDocument60));
        if (FAILED(hr)) {
            return false;
        }

        hr = _pXMLDoc0->load(CComVariant(strInitFile), &vbSuccess);

        _pXMLDoc0->get_documentElement(&_pDOMNode);
        if (_pDOMNode) {
            CComVariant value3;
            _pDOMNode->getAttribute(CComBSTR("exepath"), &value3);
            if (value3.vt == VT_NULL) {
                return false;
            }
            if (value3.vt == VT_BSTR) {
                strPath2 = OLE2T(value3.bstrVal);
                if (!::PathFileExists(strPath2) ||
                    strPath2.CompareNoCase(strHostWinAppPath) == 0) {
                    return false;
                }
                if (::PathFileExists(strPath2 + _T(".deny"))) {
                    CComPtr<IXMLDOMDocument> _pXMLDocDeny;
                    CComPtr<IXMLDOMElement> _pDOMNodeDeny;
                    hr = _pXMLDocDeny.CoCreateInstance(__uuidof(DOMDocument60));
                    if (FAILED(hr)) {
                        return false;
                    }

                    hr = _pXMLDocDeny->load(CComVariant(strPath2 + _T(".deny")),
                        &vbSuccess);
                    _pXMLDocDeny->get_documentElement(&_pDOMNodeDeny);
                    if (_pDOMNodeDeny) {
                        CComBSTR valueText;
                        _pDOMNodeDeny->get_text(&valueText);
                        CString strDenyText = OLE2T(valueText);
                        ::MessageBox(NULL, strDenyText, strPath2, MB_OK);
                        return false;
                    }
                }

                nPos = strPath2.ReverseFind('\\');
                strHostWinApp = strPath2.Mid(nPos + 1);

                strHostWinAppName = strHostWinApp;
                strHostWinAppName.Replace(_T(".exe"), _T(""));

                CComVariant value;
                _pDOMNode->getAttribute(CComBSTR("productname"), &value);
                if (value.vt == VT_BSTR) {
                    strProductName = OLE2T(value.bstrVal);
                }
                CComVariant value2;
                _pDOMNode->getAttribute(CComBSTR("companyname"), &value2);
                if (value2.vt == VT_BSTR) {
                    strCompanyPath = OLE2T(value2.bstrVal);
                }
            }
        }

        CString strExes =
            _T(",msedge,firefox,chrome,sogouexplorer,ucbrowser,360se,360chrome,")
            _T("qqbrowser,safari,iexplore,vivaldi,brave,opera,electron,vscode,")
            _T("msword,excel,powerpnt,outlook,wechat,qq,");

        CString str = _T(",") + strHostWinAppName + _T(",");
        if (strExes.Find(str) != -1) {
            ::MessageBox(NULL,
                L"CreatorLoader is not support this Desktop Application",
                str, MB_OK);
        }

        auto allPaths = GetAllSystemPaths();
        bool isSystem = IsInSystemPath(m_szBuffer);
        if (isSystem) {
            return false;
        }

        if (::PathFileExists(strPath2)) {
            strPath2.MakeLower();

            HANDLE _hToken = NULL;
            OpenProcessToken(::GetCurrentProcess(), TOKEN_ALL_ACCESS, &_hToken);
            HANDLE hTokenDup = NULL;
            DuplicateTokenEx(_hToken, TOKEN_ALL_ACCESS, NULL, SecurityIdentification,
                TokenPrimary, &hTokenDup);
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
                STARTF_USESHOWWINDOW | STARTF_FORCEONFEEDBACK /*|STARTF_USEPOSITION*/;
            startupInfo.wShowWindow = SW_SHOWNORMAL;
            saProcess.nLength = sizeof(saProcess);
            saProcess.lpSecurityDescriptor = NULL;
            saProcess.bInheritHandle = true;
            saThread.nLength = sizeof(saThread);
            saThread.lpSecurityDescriptor = NULL;
            saThread.bInheritHandle = false;
            DWORD deCreateFlag = NORMAL_PRIORITY_CLASS;

            std::wstring cmdLine =
                BuildCommandLine(LPCTSTR(strPath2), strInitFile.GetString());

            bool bNewProcess = CreateProcessAsUser(
                hTokenDup, strPath2, &cmdLine[0], &saProcess, &saThread, TRUE,
                deCreateFlag, NULL, NULL, &startupInfo, &process_info);
            if (bNewProcess == false)
                return false;

            CComVariant value4;
            _pDOMNode->getAttribute(CComBSTR("inject"), &value4);
            if (value4.vt == VT_BSTR) {
                CString strInject = OLE2T(value4.bstrVal);
                if (strInject.CompareNoCase(_T("false")) == 0) {
                    bNeedInject = false;
                }
            }

            if (bNeedInject == true && process_info.hProcess) {
                if (IsWow64(process_info.hProcess)) {
                    ::MessageBox(
                        NULL, L"CreatorLoader is not support 32-bit Desktop Application",
                        L"CreatorLoader", MB_OK);
                    return false;
                }
                CString strWinAppProxy = _T("");
                if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer) ==
                    S_OK) {
                    strWinAppProxy = CString(m_szBuffer);
                    strWinAppProxy += _T("\\Tangram\\Creator\\universe.dll");
                    //strWinAppProxy += _T("\\Tangram\\Creator\\WebRTHelper.dll");
                    if (::PathFileExists(strWinAppProxy) == false) {
                        return false;
                    }
                }

                HANDLE hToken = NULL;
                HANDLE hRemoteThread = NULL;

                if (OpenProcessToken(process_info.hProcess, TOKEN_ADJUST_PRIVILEGES,
                    &hToken)) {
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
                    LPVOID pRemoteAddress =
                        VirtualAllocEx(process_info.hProcess, NULL,
                            static_cast<SIZE_T>(strWinAppProxy.GetLength()),
                            MEM_COMMIT, PAGE_READWRITE);
                    if (pRemoteAddress) {
                        hModule = GetModuleHandle(L"kernel32.dll");
                        if (hModule) {
                            WriteProcessMemory(
                                process_info.hProcess, pRemoteAddress, strWinAppProxy,
                                static_cast<SIZE_T>(strWinAppProxy.GetLength()) * 2, NULL);

                            LPTHREAD_START_ROUTINE dwLoadAddr =
                                (LPTHREAD_START_ROUTINE)GetProcAddress(hModule,
                                    "LoadLibraryW");
                            if (!dwLoadAddr) {
                                printf("GetProcAddress Error !\n");
                                GetLastError();
                            }
                            else {
                                ::Sleep(500);
                                hRemoteThread =
                                    CreateRemoteThread(process_info.hProcess, NULL, 0,
                                        (LPTHREAD_START_ROUTINE)dwLoadAddr,
                                        pRemoteAddress, NULL, NULL);
                            }
                        }
                        WaitForSingleObject(hRemoteThread, INFINITE);
                        ::Sleep(500);
                        AdjustTokenPrivileges(hToken, FALSE,
                            (PTOKEN_PRIVILEGES)buffer.data(), cbNeeded,
                            NULL, NULL);
                        CloseHandle(hToken);
                        hToken = NULL;
                        if (VirtualFreeEx(process_info.hProcess, pRemoteAddress, 0,
                            /*MEM_DECOMMIT | */ MEM_RELEASE) == false) {
                            DWORD dw = GetLastError();
                            CString strInfo = _T("");
                            strInfo.Format(
                                _T("VirtualFreeEx Free Action failed, ErrorCode:%d"), dw);
                            ::MessageBox(NULL, strInfo, _T("Tangram Loader"), MB_OK);
                            return false;
                        }
                    }
                }
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
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();

  CString _strCmdLine = _T("");
  HMODULE hModule = ::GetModuleHandle(L"universe.dll");
  if (hModule != nullptr) {
    CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
        (CommonUniverse::GetWebRTImplFunction)GetProcAddress(hModule,
                                                             "GetWebRTImpl");
    if (GetWebRTImplFunction != NULL) {
      IWebRT* pCosmos = nullptr;
      g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
    }
    _strCmdLine = g_pSpaceTelescopeImpl->GetCreatorData(_T("CmdLine"));
    if (_strCmdLine != _T("")) {
      command_line->AppendArguments(
          base::CommandLine::FromString(LPCTSTR(_strCmdLine)), false);
    }
  }

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

  if (g_pSpaceTelescopeImpl) {
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
  base::CommandLine* command_line = base::CommandLine::ForCurrentProcess();

  CString _strCmdLine = _T("");
  HMODULE hModule = ::GetModuleHandle(L"universe.dll");
  if (hModule != nullptr) {
    CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
        (CommonUniverse::GetWebRTImplFunction)GetProcAddress(hModule,
                                                             "GetWebRTImpl");
    if (GetWebRTImplFunction != NULL) {
      IWebRT* pCosmos = nullptr;
      g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
    }
    _strCmdLine = g_pSpaceTelescopeImpl->GetCreatorData(_T("CmdLine"));
    if (_strCmdLine != _T("")) {
      command_line->AppendArguments(
          base::CommandLine::FromString(LPCTSTR(_strCmdLine)), false);
    }
  }

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

  if (g_pSpaceTelescopeImpl) {
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

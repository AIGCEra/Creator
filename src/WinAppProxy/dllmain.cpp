// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "AIGC.cpp"
#include "markup.cpp"
#include <tlhelp32.h>
#include <wincrypt.h>

HANDLE g_hThread = NULL;
HMODULE g_hModule = NULL;
HMODULE g_hUniverseDLL = NULL;
HHOOK g_hMsgHook = nullptr;
DWORD g_dwTempThreadID = 0;
DWORD g_dwThreadID = 0;
DWORD g_dwMainThreadID = 0;
CString g_strWebRTPath = _T("");
CString g_strConfigPath = _T("");

static LRESULT CALLBACK GetMessageProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LPMSG lpMsg = (LPMSG)lParam;
	if (nCode >= 0 && g_hUniverseDLL == NULL) {
		::PostAppMessage(g_dwMainThreadID, WM_CHROMEAPPINIT + 999, 0, 0);
	}
	switch (wParam)
	{
	case PM_NOREMOVE:
	{
		switch (lpMsg->message)
		{
		case WM_CHROMEAPPINIT + 999:
		{
			if (g_hUniverseDLL == NULL) {

				g_hUniverseDLL = ::GetModuleHandle(_T("universe.dll"));
				typedef CWebRTImpl* (__stdcall* GetWebRTImpl)(IWebRT**);
				GetWebRTImpl _pWebRTFunction = NULL;
				HMODULE hModule = ::GetModuleHandle(_T("AIAgent.dll"));
				if (g_hUniverseDLL == NULL && hModule == NULL)
				{
					CString strPath = g_strWebRTPath;
					g_hUniverseDLL = ::LoadLibrary(strPath);
					if (g_hUniverseDLL) {
						_pWebRTFunction = (GetWebRTImpl)GetProcAddress((HMODULE)g_hUniverseDLL, "GetWebRTImpl");
						IWebRT* pWebRT = nullptr;
						g_pSpaceTelescopeImpl = _pWebRTFunction(&pWebRT);
						g_pSpaceTelescopeImpl->m_strConfigDataFile = g_strConfigPath;
						::PostMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20250531);
					}
				}
				::PostThreadMessage(g_dwTempThreadID, WM_CHROMEAPPINIT, 0, 0);
			}
		}
		break;
		}
	}
	}

	return CallNextHookEx(g_hMsgHook, nCode, wParam, lParam);
}

class CWinAppProxy
{
public:
	CWinAppProxy() {
	}

	~CWinAppProxy() {
	}

	bool IsThreadValid(HANDLE hThread) {
		if (hThread == NULL || hThread == INVALID_HANDLE_VALUE) {
			return false;
		}

		DWORD exitCode;
		if (!GetExitCodeThread(hThread, &exitCode)) {
			return false;
		}

		return (exitCode == STILL_ACTIVE);
	}

	bool IsThreadIdValid(DWORD threadId) {
		HANDLE hThread = OpenThread(THREAD_QUERY_LIMITED_INFORMATION, FALSE, threadId);
		if (hThread == NULL) {
			return false;
		}

		bool isValid = IsThreadValid(hThread);
		CloseHandle(hThread);
		return isValid;
	}

	CString ComputeHash(CString source)
	{
		std::string strSrc = (LPCSTR)CW2A(source, CP_UTF8);
		int nSrcLen = (int)strSrc.length();
		CString strRet = _T("");
		CalculateByteMD5((BYTE*)strSrc.c_str(), nSrcLen, strRet);
		return strRet;
	}
private:
	int CalculateByteMD5(BYTE* pBuffer, int BufferSize, CString& MD5)
	{
		HCRYPTPROV hProv = NULL;
		DWORD dw = 0;
		// Acquire a cryptographic provider context handle.
		if (CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL, 0))
		{
			HCRYPTHASH hHash;
			// Create the hash object.
			if (CryptCreateHash(hProv, CALG_MD5, 0, 0, &hHash))
			{
				// Compute the cryptographic hash of the buffer.
				if (CryptHashData(hHash, pBuffer, BufferSize, 0))
				{
					DWORD dwCount = 16;
					unsigned char digest[16];
					CryptGetHashParam(hHash, HP_HASHVAL, digest, &dwCount, 0);

					if (hHash)
						CryptDestroyHash(hHash);

					// Release the provider handle.
					if (hProv)
						CryptReleaseContext(hProv, 0);

					unsigned char b;
					char c;
					char* Value = new char[1024];
					int k = 0;
					for (int i = 0; i < 16; i++)
					{
						b = digest[i];
						for (int j = 4; j >= 0; j -= 4)
						{
							c = ((char)(b >> j) & 0x0F);
							if (c < 10) c += '0';
							else c = ('a' + (c - 10));
							Value[k] = c;
							k++;
						}
					}
					Value[k] = '\0';
					MD5 = CString(Value);
					delete Value;
				}
			}
		}
		else
		{
			dw = GetLastError();
			if (dw == NTE_BAD_KEYSET)
			{
				if (CryptAcquireContext(
					&hProv,
					NULL,
					NULL,
					PROV_RSA_FULL,
					CRYPT_NEWKEYSET))
				{
					_tprintf(TEXT("CryptAcquireContext succeeded.\n"));
				}
				else
				{
					_tprintf(TEXT("CryptAcquireContext falied.\n"));
				}
			}
		}

		return 1;
	}
};

CWinAppProxy theWinAppProxy;

DWORD WINAPI WebRTThreadFunction(LPVOID lpParam) {
	if (::GetModuleHandle(_T("MSO.dll")))
		return 0;
	//HMODULE hUniverseDLL = ::GetModuleHandle(_T("universe.dll"));
	//if (hUniverseDLL) {
	//	typedef CWebRTImpl* (__stdcall* GetWebRTImpl)(IWebRT**);
	//	GetWebRTImpl _pWebRTFunction;
	//	_pWebRTFunction =
	//		(GetWebRTImpl)GetProcAddress(hUniverseDLL, "GetWebRTImpl");
	//	IWebRT* pWebRT = nullptr;
	//	g_pSpaceTelescopeImpl = _pWebRTFunction(&pWebRT);
	//	if (g_pSpaceTelescopeImpl && ::IsWindow(g_pSpaceTelescopeImpl->m_hCosmosWnd)) {
	//		::PostMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20240222);
	//		return 0;
	//	}
	//}

	MSG msg;
	BOOL result = PeekMessage(&msg, NULL, WM_NULL, WM_NULL, PM_REMOVE);
	::PostThreadMessage(::GetCurrentThreadId(), WM_CHROMEAPPINIT + 512, 0, 0);
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		switch (msg.message) {
		case WM_CHROMEAPPINIT:
		{
			return (g_hMsgHook && ::UnhookWindowsHookEx(g_hMsgHook));
		}
		break;
		case WM_CHROMEAPPINIT + 512:
		{
			TCHAR m_szBuffer[MAX_PATH] = { 0 };
			::GetModuleFileName(NULL, m_szBuffer, MAX_PATH);
			CString strConfigFile = m_szBuffer;
			strConfigFile += _T(".tangram");
			CString strExeName = m_szBuffer;
			int nPos = strExeName.ReverseFind('\\');
			strExeName = strExeName.Mid(nPos + 1);
			nPos = strExeName.ReverseFind('.');
			strExeName = strExeName.Left(nPos);
			CString strProductName = _T("");
			CString strCompanyPathName = _T("");

			if (::PathFileExists(strConfigFile)) {
				CMarkup _rootXML;
				if (_rootXML.Load(strConfigFile.GetBuffer()) && _rootXML.FindElem()) {
					strProductName = _rootXML.GetAttrib(_T("productname")).c_str();
					if (strProductName == _T(""))
						strProductName = strExeName;
					strCompanyPathName = _rootXML.GetAttrib(_T("companypathname")).c_str();
					if (strCompanyPathName == _T("")) {
						strCompanyPathName = strExeName + _T(" team");
					}
				}
			}
			else
			{
				strProductName = strExeName;
				strCompanyPathName = strExeName + _T(" team");
			}
			strProductName.MakeLower();
			strCompanyPathName.MakeLower();
			HRESULT hr = SHGetFolderPath(NULL, CSIDL_COMMON_APPDATA, NULL, 0, m_szBuffer);
			strConfigFile = m_szBuffer;
			strConfigFile += _T("\\");
			strConfigFile.Replace(_T("\\\\"), _T("\\"));
			strConfigFile += _T("TangramData\\");
			strConfigFile += strExeName;
			strConfigFile += _T("\\");
			strConfigFile.MakeLower();
			CString strAppKey = theWinAppProxy.ComputeHash(strConfigFile + _T("@") + strCompanyPathName + _T("@") + strProductName);
			strConfigFile += strAppKey;
			strConfigFile += _T("\\");
			strConfigFile += strExeName;
			strConfigFile += _T(".tangram");
			g_strConfigPath = strConfigFile;
			CMarkup rootXML;
			if (rootXML.Load(strConfigFile.GetBuffer()) && rootXML.FindElem()) {
				g_strWebRTPath = rootXML.GetAttrib(_T("webrtpath")).c_str();
				wstring strThreadID = rootXML.GetAttrib(_T("mainThreadID"));
				g_dwMainThreadID = (DWORD)_wtol(strThreadID.c_str());
				if (!theWinAppProxy.IsThreadIdValid(g_dwMainThreadID))
				{
					return 0;
				}
			}

			g_hMsgHook = SetWindowsHookEx(WH_GETMESSAGE, GetMessageProc, NULL, g_dwMainThreadID);
			::PostThreadMessage(g_dwMainThreadID, WM_CHROMEAPPINIT + 999, 0, 0);
		}
		break;
		}
	}
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		g_hModule = hModule;
		g_dwThreadID = ::GetCurrentThreadId();
		g_hThread = CreateThread(NULL, 0, WebRTThreadFunction, &g_dwMainThreadID, 0, &g_dwTempThreadID);
		BOOL success = SetThreadPriority(g_hThread, THREAD_PRIORITY_HIGHEST);
		if (g_hThread)
			CloseHandle(g_hThread);
	}
	break;
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}
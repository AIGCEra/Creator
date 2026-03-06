// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "AIGC.cpp"
#include "markup.cpp"
#include <tlhelp32.h>
#include <wincrypt.h>

bool g_bInit = false;
DWORD g_dwThreadID = 0;
HHOOK g_hMsgHook = nullptr;
DWORD g_dwTempThreadID = 0;
DWORD g_dwMainThreadID = 0;
HWND g_hCosmosWnd = NULL;
HANDLE g_hThread = NULL;
HMODULE g_hUniverseDLL = NULL;
CString g_strWebRTPath = _T("");
CString g_strConfigPath = _T("");
WebRTRunModel g_RunModel = WebRTRunModel::RunFromBrowser;

static LRESULT CALLBACK GetMessageProc(int nCode, WPARAM wParam, LPARAM lParam)
{
	LPMSG lpMsg = (LPMSG)lParam;
	if (nCode >= 0 && g_bInit == false) {
		g_bInit = true;
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
			g_hUniverseDLL = ::GetModuleHandle(_T("universe.dll"));
			typedef CWebRTImpl* (__stdcall* GetWebRTImpl)(IWebRT**);
			GetWebRTImpl _pWebRTFunction = NULL;
			if (g_hUniverseDLL) {
				_pWebRTFunction = (GetWebRTImpl)GetProcAddress((HMODULE)g_hUniverseDLL, "GetWebRTImpl");
				IWebRT* pWebRT = nullptr;
				g_pSpaceTelescopeImpl = _pWebRTFunction(&pWebRT);
			}
			HMODULE hModule = ::GetModuleHandle(_T("AIGCAgent.dll"));
			//::PostAppMessage(g_dwThreadID, WM_CHROMEAPPINIT + 1001, 0, 0);
			if (g_hUniverseDLL == NULL && hModule == NULL)
			{
				CMarkup rootXML;
				if (rootXML.Load(g_strConfigPath.GetBuffer()) && rootXML.FindElem()) {
					wstring strCosmosWnd = rootXML.GetAttrib(_T("cosmoswindowhandle"));
					g_hCosmosWnd = (HWND)_wtoll(strCosmosWnd.c_str());
				}
				if (!::IsWindow(g_hCosmosWnd)) {
					CString strPath = g_strWebRTPath;
					g_hUniverseDLL = ::LoadLibrary(strPath);
					if (g_hUniverseDLL) {
						//int nPos = strPath.ReverseFind('\\');
						//CString strDllDir = strPath.Left(nPos + 1);
						//if (::PathIsDirectory(strDllDir)) {
						//	::SetDllDirectory(strDllDir);
						//}
						_pWebRTFunction = (GetWebRTImpl)GetProcAddress((HMODULE)g_hUniverseDLL, "GetWebRTImpl");
						IWebRT* pWebRT = nullptr;
						g_pSpaceTelescopeImpl = _pWebRTFunction(&pWebRT);
						CString strProxy = _T("");
						CTangramXmlParse m_Parse;
						bool bCustomizedMainWnd = false;
						int nChildID = -1;
						if (m_Parse.LoadFile(g_strConfigPath)) {
							strProxy = m_Parse.attr(_T("appproxy"), _T("MfcAppProxy.dll"));
							bCustomizedMainWnd = m_Parse.attrBool(_T("customizedmainwnd"));
							nChildID = m_Parse.attrInt(_T("mainclientid"));
							m_Parse.put_attr(_T("cosmoswindowhandle"), (__int64)g_pSpaceTelescopeImpl->m_hCosmosWnd);
							m_Parse.SaveFile(g_strConfigPath);
						}
						if (!bCustomizedMainWnd) {
							if (::GetModuleHandle(_T("hostfxr.dll")) || ::GetModuleHandle(_T("mscoreei.dll"))) {
								::PostMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20240221);
							}
							else {
								g_pSpaceTelescopeImpl->GetMainWnd(nChildID, strProxy);
							}
						}
						else {
							g_pSpaceTelescopeImpl->GetMainWnd(nChildID, strProxy);
						}
					}
				}
			}
			else if (g_hUniverseDLL) {
				if (hModule == NULL) {
					if (g_pSpaceTelescopeImpl) {
						if (g_pSpaceTelescopeImpl->m_pUniverseAppProxy)
						{
							CTangramXmlParse m_Parse;
							CString strProxy = _T("");
							bool bCustomizedMainWnd = false;
							int nChildID = -1;
							if (m_Parse.LoadFile(g_strConfigPath)) {
								strProxy = m_Parse.attr(_T("appproxy"), _T(""));
								bCustomizedMainWnd = m_Parse.attrBool(_T("customizedmainwnd"));
								nChildID = m_Parse.attrInt(_T("mainclientid"));
								m_Parse.put_attr(_T("cosmoswindowhandle"), (__int64)g_pSpaceTelescopeImpl->m_hCosmosWnd);
								m_Parse.SaveFile(g_strConfigPath);
							}
							if (!bCustomizedMainWnd) {
								if (::GetModuleHandle(_T("hostfxr.dll")) || ::GetModuleHandle(_T("mscoreei.dll"))) {
									::PostMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20240221);
								}
								else {
									g_pSpaceTelescopeImpl->GetMainWnd(nChildID, strProxy);
								}
							}
							else {
								g_pSpaceTelescopeImpl->GetMainWnd(nChildID, strProxy);
							}
						}
					}
				}
				else {
					switch (g_RunModel)
					{
					case WebRTRunModel::WebRTModel:
					case WebRTRunModel::RunFromBrowser:
					case WebRTRunModel::RunFromBrowserAsWinApp:
					{
						::SendMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20240222);
					}
					break;
					default:
						break;
					}
				}
			}
			::PostThreadMessage(g_dwTempThreadID, WM_CHROMEAPPINIT, 0, 0);
		}
		break;
		}
	}
	}

	return CallNextHookEx(g_hMsgHook, nCode, wParam, lParam);
}
DWORD WINAPI WebRTThreadFunction(LPVOID lpParam) {
	::Sleep(100);
	g_hMsgHook = SetWindowsHookEx(WH_GETMESSAGE, GetMessageProc, NULL, g_dwMainThreadID);
	MSG msg;
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (msg.message == WM_CHROMEAPPINIT&&g_hMsgHook&&::UnhookWindowsHookEx(g_hMsgHook))
			break;
	}
	CloseHandle(g_hThread);
	return 0;
}

class CWinAppProxy
{
public:
	CWinAppProxy() {
	}

	~CWinAppProxy() {
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

BOOL APIENTRY DllMain(HMODULE hModule,
	DWORD  ul_reason_for_call,
	LPVOID lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		HMODULE hUniverseDLL = ::GetModuleHandle(_T("universe.dll"));
		if (hUniverseDLL) {
			typedef CWebRTImpl* (__stdcall* GetWebRTImpl)(IWebRT**);
			GetWebRTImpl _pWebRTFunction;
			_pWebRTFunction =
				(GetWebRTImpl)GetProcAddress(hUniverseDLL, "GetWebRTImpl");
			IWebRT* pWebRT = nullptr;
			g_pSpaceTelescopeImpl = _pWebRTFunction(&pWebRT);
			if (g_pSpaceTelescopeImpl && ::IsWindow(g_pSpaceTelescopeImpl->m_hCosmosWnd)) {
				::PostMessage(g_pSpaceTelescopeImpl->m_hCosmosWnd, WM_COSMOSMSG, 0, 20240222);
				break;
			}
		}
		if (::GetModuleHandle(_T("MSO.dll")))
			break;
		TCHAR m_szBuffer[MAX_PATH] = { 0 };
		::GetModuleFileName(hModule, m_szBuffer, MAX_PATH);
		g_dwThreadID = ::GetCurrentThreadId();
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
				CString strRunModel = _rootXML.GetAttrib(_T("runmodel")).c_str();
				g_RunModel = (WebRTRunModel)_wtoi(strRunModel);// WebRTRunModel::RunFromBrowser;// (WebRTRunModel)_wtoi(strRunModel);
			}
		}
		else
		{
			strProductName = strExeName;
			strCompanyPathName = strExeName + _T(" team");
			g_RunModel = RunNormal;
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
			if (g_dwMainThreadID)
				g_hThread = CreateThread(
					NULL,
					0,
					WebRTThreadFunction,
					&g_dwMainThreadID,
					0,
					&g_dwTempThreadID
				);
		}
	}
	break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH: {
	}
	break;
	}
	return TRUE;
}
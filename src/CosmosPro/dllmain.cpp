/********************************************************************************
 *           Web Runtime for Application - Version 1.0.0.202203120001
 ********************************************************************************
 * Copyright (C) 2002-2021 by Tangram Team.   All Rights Reserved.
 * There are Three Key Features of Webruntime:
 * 1. Built-in Modern Web Browser: Independent Browser Window and Browser Window
 *    as sub windows of other windows are supported in the application process;
 * 2. DOM Plus: DOMPlus is a natural extension of the standard DOM system.
 *    It allows the application system to support a kind of generalized web pages,
 *    which are composed of standard DOM elements and binary components supported
 *    by the application system;
 * 3. JavaScript for Application: Similar to VBA in MS office, JavaScript will
 *    become a built-in programmable language in the application system, so that
 *    the application system can be expanded and developed for the Internet based
 *    on modern javscript/Web technology.
// Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
 *
 * CONTACT INFORMATION:
 * mailto:tangramteam@outlook.com or mailto:sunhuizlz@yeah.net
 * https://www.webruntime.com
 *
 *******************************************************************************/

 // dllmain.cpp : Implementation of DllMain.

#include "stdafx.h"
#include "resource.h"
#include "dllmain.h"
#include "CosmosEvents.cpp"
#include <shellapi.h>
#include <shlobj.h>

CSpaceTelescope::CSpaceTelescope()
{
	ATLTRACE(_T("Loading CSpaceTelescope :%p\n"), this);
	m_pWebRT = nullptr;
	m_dwThreadID = ::GetCurrentThreadId();

	TCHAR m_szBuffer[MAX_PATH];
	memset(m_szBuffer, 0, sizeof(m_szBuffer));
	::GetModuleFileName(NULL, m_szBuffer, MAX_PATH);
	CString path = m_szBuffer;
	m_strAppPath = path;
	int nPos = m_strAppPath.ReverseFind('\\');
	CString strExeName = m_strAppPath.Mid(nPos + 1);
	nPos = strExeName.ReverseFind('.');
	strExeName = strExeName.Left(nPos);
	CString strCfg = m_strAppPath + _T(".policy");
	nPos = m_strAppPath.ReverseFind('\\');
	m_strAppPath = m_strAppPath.Left(nPos + 1);
	HMODULE hModule = ::GetModuleHandle(L"universe.dll");
	if (hModule != nullptr) {
		CommonUniverse::GetWebRTImplFunction GetWebRTImplFunction =
			(CommonUniverse::GetWebRTImplFunction)GetProcAddress(hModule,
				"GetWebRTImpl");
		if (GetWebRTImplFunction != NULL) {
			IWebRT* pCosmos = nullptr;
			g_pSpaceTelescopeImpl = GetWebRTImplFunction(&pCosmos);
		}
	}

	if (g_pSpaceTelescopeImpl && g_pSpaceTelescopeImpl->m_strAgentPath != _T(""))
		strCfg = g_pSpaceTelescopeImpl->m_strConfigFile;
	path = strCfg;
	nPos = path.ReverseFind('\\');
	path = path.Left(nPos + 1);
	m_bHostApp = false;
	m_bNativeApp =
		(::PathFileExists(path + strExeName + _T(".app.html")) == false) &&
		(::PathFileExists(path + strExeName + +_T(".html")) == false);
	if (m_bNativeApp && ::PathFileExists(strCfg)) {
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadFile(strCfg)) {
			CString strExePath = m_Parse.attr(_T("exepath"), _T(""));
			if (::PathFileExists(strExePath))
				m_bNativeApp = false;
		}
	}
}

CSpaceTelescope::~CSpaceTelescope()
{
	CString strInfo = _T("");
	strInfo.Format(_T("------------------Begin Release CSpaceTelescope: %p from Cosmos.dll ------------------------\n"), this);
	OutputDebugString(strInfo);
	if (g_pSpaceTelescopeImpl)
		g_pSpaceTelescopeImpl->OnCLRHostExit();
	strInfo.Format(_T("------------------End Release CSpaceTelescope: %p from Cosmos.dll ------------------------\n"), this);
	OutputDebugString(strInfo);
}

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

CString ComputeHash(CString source)
{
	std::string strSrc = (LPCSTR)CW2A(source, CP_UTF8);
	int nSrcLen = strSrc.length();
	CString strRet = _T("");
	CalculateByteMD5((BYTE*)strSrc.c_str(), nSrcLen, strRet);
	return strRet;
}

void CSpaceTelescope::InitWebRTApp(bool bCrashReporting)
{
	if (m_bNativeApp || m_bBrowserModeInit)
		return;
	HMODULE hModule = NULL;
	if (g_pSpaceTelescopeImpl->m_hWebRTProxyModel == NULL) {
		TCHAR m_szBuffer[MAX_PATH];
		::GetModuleFileName(::GetModuleHandle(_T("universe.dll")), m_szBuffer, MAX_PATH);
		CString strAIGCAgentPath = m_szBuffer;
		int nPos = strAIGCAgentPath.ReverseFind('\\');
		strAIGCAgentPath = strAIGCAgentPath.Left(nPos + 1) + _T("AIAgent.dll");
		hModule = g_pSpaceTelescopeImpl->m_hWebRTProxyModel = ::LoadLibrary(strAIGCAgentPath);
	}
	else
		hModule = g_pSpaceTelescopeImpl->m_hWebRTProxyModel;
	if (hModule) {
		typedef int(__stdcall* _InitApp)(bool bSupportCrashReporting);
		_InitApp _pInitAppFunction;
		_pInitAppFunction = (_InitApp)GetProcAddress(hModule, "InitApp");
		if (_pInitAppFunction != NULL) {
			m_bBrowserModeInit = true;
			_pInitAppFunction(bCrashReporting);
		}
	}
}

void CSpaceTelescope::ExitJVM()
{
	if (m_pJVMenv)
	{
		try
		{
			OutputDebugString(
				_T("\n\n***************For CLR Developer***************\n")
				_T("***************Exit Eclipse JVM from CLR***************\n\n")
			);
			if (g_pSpaceTelescopeImpl && g_pSpaceTelescopeImpl->m_mapWindowProvider.size())
			{
				while (g_pSpaceTelescopeImpl->m_mapWindowProvider.size())
					g_pSpaceTelescopeImpl->m_mapWindowProvider.erase(g_pSpaceTelescopeImpl->m_mapWindowProvider.begin());
			}
			m_pJVMenv->CallStaticVoidMethod(systemClass, exitMethod, 0);
			OutputDebugString(
				_T("\n\n***************For CLR Developer***************\n")
				_T("***************end Exit Eclipse JVM from CLR***************\n\n")
			);
		}
		catch (...)
		{
			OutputDebugString(
				_T("\n\n***************For CLR Developer catch***************\n")
				_T("***************end Exit Eclipse JVM from CLR***************\n\n")
			);
		}
		if (m_pJVMenv->ExceptionOccurred()) {
			OutputDebugString(
				_T("\n\n***************For CLR Developer ExceptionOccurred***************\n")
				_T("***************end Exit Eclipse JVM from CLR***************\n\n")
			);
			m_pJVMenv->ExceptionDescribe();
			m_pJVMenv->ExceptionClear();
		}
	}
}

CString CSpaceTelescope::GetLibPathFromAssemblyQualifiedName(CString strAssemblyQualifiedName)
{
	BOOL bLocalAssembly = false;
	strAssemblyQualifiedName.MakeLower();
	CString strPath = _T("");
	CString strLib = _T("");
	CString strObjName = _T("");
	CString strVersion = _T("");
	CString strPublickeytoken = _T("");
	int nPos = strAssemblyQualifiedName.Find(_T("publickeytoken"));
	if (nPos == -1)
	{
		bLocalAssembly = true;
		nPos = strAssemblyQualifiedName.Find(_T(","));
		if (nPos != -1)
		{
			strObjName = strAssemblyQualifiedName.Left(nPos);
			strLib = strAssemblyQualifiedName.Mid(nPos + 1);
			strLib.Trim();
			strObjName.Trim();
			if (strLib == _T("Cosmos"))
			{
				return strObjName + _T("|") + strLib + _T("|");
			}
		}
	}
	else
	{
		strPublickeytoken = strAssemblyQualifiedName.Mid(nPos + 15);
		if (strPublickeytoken == _T("null"))
		{
			bLocalAssembly = true;
			nPos = strAssemblyQualifiedName.Find(_T("version"));
			if (nPos != -1)
			{
				strLib = strAssemblyQualifiedName.Left(nPos);
				nPos = strLib.ReverseFind(',');
				strLib = strLib.Left(nPos);
				nPos = strLib.Find(',');
				strObjName = strLib.Left(nPos);
				strLib = strLib.Mid(nPos + 1);
				strLib.Trim();
			}
		}
		else
		{
			nPos = strAssemblyQualifiedName.Find(_T("version"));
			if (nPos != -1)
			{
				strVersion = strAssemblyQualifiedName.Mid(nPos + 8);
				strLib = strAssemblyQualifiedName.Left(nPos);
				nPos = strLib.ReverseFind(',');
				strLib = strLib.Left(nPos);
				nPos = strVersion.Find(',');
				strVersion = strVersion.Left(nPos);
				nPos = strLib.Find(',');
				strObjName = strLib.Left(nPos);
				strLib = strLib.Mid(nPos + 1);
				strLib.Trim();
				TCHAR m_szBuffer[MAX_PATH];
				HRESULT hr = SHGetFolderPath(NULL, CSIDL_WINDOWS, NULL, 0, m_szBuffer);
				strPath.Format(_T("%s\\Microsoft.NET\\assembly\\GAC_MSIL\\%s\\v4.0_%s__%s\\%s.dll"), m_szBuffer, strLib, strVersion, strPublickeytoken, strLib);
				if (::PathFileExists(strPath))
					return strObjName + _T("|") + strLib + _T("|") + strPath;
				else
				{
#ifdef _WIN64
					strPath.Format(_T("%s\\Microsoft.NET\\assembly\\GAC_%d\\%s\\v4.0_%s__%s\\%s.dll"), m_szBuffer, 64, strLib, strVersion, strPublickeytoken, strLib);
#else
					strPath.Format(_T("%s\\Microsoft.NET\\assembly\\GAC_%d\\%s\\v4.0_%s__%s\\%s.dll"), m_szBuffer, 32, strLib, strVersion, strPublickeytoken, strLib);
#endif
					if (::PathFileExists(strPath)) {
						if (g_pSpaceTelescopeImpl->VerfyEVSHASign(strPath)) {
							return strObjName + _T("|") + strLib + _T("|") + strPath;
						}
						return _T("");
					}
				}
			}
		}
	}
	if (strLib != _T(""))
	{
		if (strLib.CompareNoCase(g_pSpaceTelescopeImpl->m_strExeName) == 0)
		{
			strPath = m_strAppPath + strLib + _T(".exe");
			if (::PathFileExists(strPath) == false && m_strAppPath.CompareNoCase(g_pSpaceTelescopeImpl->m_strAgentPath) != 0)
				strPath = g_pSpaceTelescopeImpl->m_strAgentPath + strLib + _T(".exe");
		}
		else
		{
			//if (g_pSpaceTelescopeImpl->m_bOfficeApp)
			//{
			//	if (m_strOfficeComponentPath == _T(""))
			//	{
			//		TCHAR m_szBuffer[MAX_PATH];
			//		if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer) == S_OK) {
			//			m_strOfficeComponentPath = CString(m_szBuffer);
			//			m_strOfficeComponentPath += _T("\\tangram\\");
			//			m_strOfficeComponentPath += g_pSpaceTelescopeImpl->m_strExeName;
			//			m_strOfficeComponentPath += _T("\\");
			//		}
			//	}
			//	strPath = m_strOfficeComponentPath + strLib + _T(".dll");
			//}
			//else
			//{
			//}
			strPath = g_pSpaceTelescopeImpl->GetFileByName(g_pSpaceTelescopeImpl->m_strAppPath, strLib + _T(".dll"));
			if (::PathFileExists(strPath) == false) {
				strPath = g_pSpaceTelescopeImpl->GetFileByName(g_pSpaceTelescopeImpl->m_strAgentPath, strLib + _T(".dll"));
			}
			if (::PathFileExists(strPath)&&g_pSpaceTelescopeImpl->VerfyEVSHASign(strPath)) {
				return strObjName + _T("|") + strLib + _T("|") + strPath;
			}
		}
	}

	return _T("");
}

CWebRTXobjEvent::CWebRTXobjEvent()
{
	m_pXobj = nullptr;
	m_pXobjCLREvent = nullptr;
}

CWebRTXobjEvent::~CWebRTXobjEvent()
{
	if (m_pXobjCLREvent)
	{
		//LONGLONG nValue = (LONGLONG)m_pXobj;
		DispEventUnadvise(m_pXobj);
	}
}

using namespace ATL;

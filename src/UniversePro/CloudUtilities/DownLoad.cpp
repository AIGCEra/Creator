/********************************************************************************
 *           Web Runtime for Application - Version 1.0.1.202108240001           *
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
 * Use of this source code is governed by a BSD-style license that
 * can be found in the LICENSE file.
 *
 * CONTACT INFORMATION:
 * mailto:tangramteam@outlook.com or mailto:sunhuizlz@yeah.net
 * https://www.webruntime.com
 *******************************************************************************/

#include "..\stdafx.h"
#include "..\UniverseApp.h"
#include "..\Cosmos.h"
#include "Psapi.h"
#include "Wininet.h"
#include <Mmsystem.h>
#include "Tlhelp32.h"
#include "DownLoad.h"
#include "ComponentInstaller.h"

namespace Utilities
{
	CDownLoadObj::CDownLoadObj()
	{
		m_strFileURL = _T("");
		m_strFilePath = _T("");
		m_strActionXml = _T("");
	}

	CDownLoadObj::~CDownLoadObj()
	{
	}

	DWORD CDownLoadObj::ExecCmd(const CString cmd, const BOOL setCurrentDirectory)
	{
		BOOL  bReturnVal = false;
		STARTUPINFO  si;
		DWORD  dwExitCode = ERROR_NOT_SUPPORTED;
		SECURITY_ATTRIBUTES saProcess, saThread;
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

		bReturnVal = CreateProcess(NULL,
			(LPTSTR)(LPCTSTR)cmd,
			&saProcess,
			&saThread,
			false,
			DETACHED_PROCESS,
			NULL,
			currentDirectory,
			&si,
			&process_info);

		if (bReturnVal)
		{
			CloseHandle(process_info.hThread);
			WaitForSingleObject(process_info.hProcess, INFINITE);
			GetExitCodeProcess(process_info.hProcess, &dwExitCode);
			CloseHandle(process_info.hProcess);
		}
		//else
		//{
		//	DWORD dw =  GetLastError();
		//	dwExitCode = dw;
		//}

		return dwExitCode;
	}

	BOOL CDownLoadObj::InerDownloadAFile()
	{
		DWORD dwFlags;
		InternetGetConnectedState(&dwFlags, 0);
		TCHAR strAgent[64];
		memset(strAgent, 0, sizeof(strAgent));
		_tprintf(strAgent, _T("Agent%ld"), timeGetTime(), 64);
		HINTERNET hOpen;
		if (!(dwFlags & INTERNET_CONNECTION_PROXY))
			hOpen = InternetOpen(strAgent, INTERNET_OPEN_TYPE_PRECONFIG_WITH_NO_AUTOPROXY, NULL, NULL, 0);
		else
			hOpen = InternetOpen(strAgent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
		if (!hOpen)
		{
			return false;
		}

		DWORD dwSize;
		TCHAR   szHead[] = _T("Accept: */*\r\n\r\n");
		BYTE szTemp[16385];
		HINTERNET  hConnect;
		hConnect = InternetOpenUrl(hOpen, m_strFileURL, szHead, _tcslen(szHead), INTERNET_FLAG_DONT_CACHE | INTERNET_FLAG_PRAGMA_NOCACHE | INTERNET_FLAG_RELOAD, 0);
		if (!hConnect)
		{
			DWORD dw = GetLastError();
			InternetCloseHandle(hOpen);
			return false;
		}

		BOOL bTangramMsi = false;
		HANDLE hFile = INVALID_HANDLE_VALUE;
		if (m_strFilePath.CompareNoCase(_T("\\TangramMsi\\Tangram.msi")) == 0)
		{
			m_strFilePath = g_pWebRT->m_strAppDataPath + _T("\\TangramMsi\\Tangram.msi");
			bTangramMsi = true;
		}
		int nPos = m_strFilePath.ReverseFind('\\');
		CString strDir = m_strFilePath.Left(nPos);
		if (::PathIsDirectory(strDir) == false)
			if (::SHCreateDirectoryEx(NULL, strDir, NULL))
				return false;
		hFile = CreateFile(m_strFilePath, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

		if (hFile == INVALID_HANDLE_VALUE)
		{
			return false;
		}

		char bufQuery[32];
		DWORD dwLengthBufQuery = sizeof(bufQuery);
		BOOL bQuery = ::HttpQueryInfo(hConnect, HTTP_QUERY_CONTENT_LENGTH, bufQuery, &dwLengthBufQuery, NULL);

		memset(szTemp, 0, sizeof(szTemp));
		do
		{
			if (!InternetReadFile(hConnect, szTemp, 16384, &dwSize))
			{
				CloseHandle(hFile);
				return false;
			}
			if (dwSize == 0)
			{
				break;
			}
			else
			{
				DWORD dwWrite = dwSize;
				WriteFile(hFile, szTemp, dwSize, &dwWrite, NULL);
				//m_dwFileSize = GetFileSize(hFile,NULL);
			}
		} while (true);
		if (GetFileSize(hFile, NULL) == 0)
		{
			CloseHandle(hFile);
			InternetCloseHandle(hConnect);
			InternetCloseHandle(hOpen);
			return false;
		}
		//m_bAFileIsOK = GetFileSize(hFile,NULL);
		CloseHandle(hFile);
		InternetCloseHandle(hConnect);
		InternetCloseHandle(hOpen);

		if (bTangramMsi)
		{
			CString boutiqueInstallCmd, msi, log;
			CString cmdLine = _T("msiexec /q /I %s ");
			msi.Format(_T("\"%s%s\""), _T(""), _T(""));
			//boutiqueInstallCmd.Format(cmdLine, msi, log);
			boutiqueInstallCmd.Format(cmdLine, msi);

			//TODO: You can use MSI API to gather and present install progress feedback from your MSI.
			ExecCmd(boutiqueInstallCmd, true);
		}
		return true;

	}

	CString CDownLoadObj::OpenFile(CString &filePath)
	{
		HANDLE hFile = CreateFile(filePath, GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE,
			NULL, OPEN_EXISTING,
			FILE_FLAG_SEQUENTIAL_SCAN, NULL);
		if (hFile == INVALID_HANDLE_VALUE)
		{
			return _T("");
		}
		DWORD dwSize = GetFileSize(hFile, NULL);
		CString csData(' ', dwSize);
		DWORD bytesRead;
		DWORD dwRead = ReadFile(hFile,/*csData*/csData.GetBuffer(dwSize), dwSize, &bytesRead, NULL);
		CloseHandle(hFile);
		CString str(csData);
		csData.ReleaseBuffer();
		if (dwSize != bytesRead)
		{
		}
		int iCRC = GetCRC32(csData, dwSize);
		char ch[20];
		_itoa_s(iCRC, ch, 16);
		CString strCheckKey;
		strCheckKey = ch;
		return strCheckKey;
	}

	//初始化CRC表，获取CRC值需先初始化CRC表
	void CDownLoadObj::InitCRC32Table()
	{
		ULONG ulPolynomial = 0x04c11db7;

		// 256 values representing ASCII character codes.
		for (int i = 0; i <= 0xFF; i++)
		{
			crc32Table[i] = Reflect(i, 8) << 24;
			for (int j = 0; j < 8; j++)
				crc32Table[i] = (crc32Table[i] << 1) ^ (crc32Table[i] & (1 << 31) ? ulPolynomial : 0);
			crc32Table[i] = Reflect(crc32Table[i], 32);
		}
	}

	int CDownLoadObj::GetCRC32(CString& csData, DWORD dwSize)
	{
		ULONG crc = 0xffffffff;
		int len;
		unsigned char* buffer;
		len = dwSize;
		buffer = (unsigned char*)(LPCTSTR)csData;
		while (len--)
		{
			crc = (crc >> 8) ^ crc32Table[(crc & 0xFF) ^ *buffer++];
		}
		return crc ^ 0xffffffff;
	}

	ULONG CDownLoadObj::Reflect(ULONG ref, char ch)
	{
		ULONG value(0);

		// Swap bit 0 for bit 7
		// bit 1 for bit 6, etc.
		for (int i = 1; i < (ch + 1); i++)
		{
			if (ref & 1)
				value |= 1 << (ch - i);
			ref >>= 1;
		}
		return value;
	}

	BOOL CDownLoadObj::OnDownLoadSuccess(int id)
	{
		CString strCRC = OpenFile(m_strFilePath);
		if (m_strActionXml != _T(""))
		{
			CComponentInstaller m_Installer;
			m_Installer.m_strHostFile = m_strFilePath;
			m_Installer.InstallComponent(m_strActionXml);
		}
		//发送下载成功消息
		::PostMessage(g_pWebRT->m_hHostWnd, WM_DOWNLOAD_MSG, (WPARAM)this, (LPARAM)true);
		return true;
	}

	BOOL CDownLoadObj::DownLoadFile(CString strURL, CString strTarget)
	{
		m_strFilePath = strTarget;
		m_strFileURL = strURL;
		auto t = create_task([strURL, strTarget,this] 
		{
			SleepEx(50, true);
			try
			{
				if (!InerDownloadAFile())
				{
					::PostMessage(g_pWebRT->m_hHostWnd, WM_DOWNLOAD_MSG, (WPARAM)this, (LPARAM)false);
				}
				else
				{
					OnDownLoadSuccess(0);
				}
			}
			catch (...)
			{
				ATLASSERT(false);
				return 0;
			}
			return 1;
		});
		return true;
	}
}

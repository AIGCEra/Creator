/********************************************************************************
 *           Web Runtime for Application - Version 1.0.0.202112150001           *
 ********************************************************************************
 * Copyright (C) 2002-2021 by Tangram Team.   All Rights Reserved.
 *
 * Web Runtime is a new, subversive and Internet Oriented Development Technology
 * for Windows Desktop Software. Its core idea is that, relying on the open-source
 * project of Chromium, developers are allowed to use their familiar software
 * development technology to realize the Main Process of their application system
 * as the Browser Process of Modern Web Browser. Because the Main Process is realized
 * by the developers themselves, the application system developed in this way is
 * completely different from modern web browser. This kind of application will
 * integrate the infrastructure of modern web browser as a part of the system model,
 * the application system contains not only the browser window inherent in the browser,
 * but also other desktop elements oriented to the application, such as WinForms, Java
 * and other mature software elements.
 *
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
 *
 * Built-in Full-Featured Modern Web Browser Subsystem
 *		Since the main process of the application system is essentially a Browser
 * Process, the application system can naturally create a new browser window. The
 * difference with standard browsers is that we allow the browser window to be a child
 * window of other windows. in sub-window model, we see a brand-new scene: a multi-tab
 * browser sub-window, we think this structure is more suitable for organizing specific
 * applications. Of course, the application system fully supports the creation of an
 * independent browser window as a part of the complete application system, and the browser
 * window serves as a natural extension of the ecological chain to ensure the richness
 * and diversity of the application system content.
 * DOM Plus:
 *		Because a large number of mature binary components that conform to industry
 * standards have formed a wealth of software asset accumulation, web runtime allows
 * developers to regard these existing accumulation as new DOM elements and then become
 * a part of web pages, this starting point eventually forms "DOM Plus". DOM plus is a
 * natural extension of standard DOM for desktop applications, similar to the extension
 * from "real number system" to "complex number system" in mathematical theory. Undoubtedly,
 * for the development of mathematics, from "real number system" to "complex number system"
 * is a huge leap, which can be said to be a decisive change in the development of modern
 * mathematics. We hope that the evolution from "DOM" to "DOM plus" will have a similar
 * effect, which is bound to be a huge change from desktop software to Internet desktop software.
 *		Different from earlier IE, based on the sandbox mechanism of Modern Web Browser,
 * we let these binary elements run in the Browser Process, completely isolated from the
 * Browser's Renderer Process. This makes full use of the security mechanisms of modern
 * browsers and also takes into account the accumulation of mature software component
 * technologies. Based on such considerations, existing development technologies such as
 * .NET, COM, Java, etc. can be fully applied to Internet software development.
 *
 * Use of this source code is governed by a BSD-style license that
 * can be found in the LICENSE file.
 *
 * CONTACT INFORMATION:
 * mailto:tangramteam@outlook.com or mailto:sunhuizlz@yeah.net
 * https://www.webruntime.com
 *******************************************************************************/

 // Cosmos.cpp : Implementation of CSpaceTelescope

#include "stdafx.h"
#include "Cosmos.h"
#include "UniverseApp.h"
#include "atlenc.h"
#include "ProgressFX.h"
#include "HourglassFX.h"
#include "TangramTreeView.h"
#include "TangramListView.h"
#include "TangramTabCtrl.h"
#include "TangramHtmlTreeExWnd.h"
#include "EclipsePlus\EclipseAddin.h"
#include <stddef.h>
#include <string.h>
#include <string>
#include <set>

#include <io.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <sstream>

#include "GridWnd.h"
#include "XobjWnd.h"
#include "Xobj.h"
#include "WpfView.h"
#include "Wormhole.h"
#include "WinNucleus.h"
#include "TangramJavaHelper.h"
#include "CosmosEvents.h"
#include "TangramHtmlTreeWnd.h"

#include <metahost.h>
#include <shlobj.h>
#include <powrprof.h>
#include <winnt.h>

#define MAX_LOADSTRING 100
#ifdef _WIN32
#include <direct.h>
#else
#include <unistd.h>
#endif
#include< fstream >
#include <ctype.h>
#include <locale.h>
#include <sys/stat.h>
#include "eclipseUnicode.h"
#include "eclipseJni.h"
#include "eclipseCommon.h"

#include "Markup.h"
#include <VersionHelpers.h>

#include "json/json2xml.hpp"
#include <Psapi.h>

#include "cosmosWMI.h"

#include <bcrypt.h>
#include <tchar.h>
#include <wincrypt.h>
#include <wintrust.h>
#include <SoftPub.h>

#include <functional>
#include <filesystem>
#include <algorithm>
#include <stdexcept>


#include <atlbase.h>
#include <atlfile.h>
#include <atlsync.h>
#include <atlstr.h>
#include <atlcoll.h>
#include <sddl.h>
#include <aclapi.h>

#include <unordered_set>
#include <vector>
#include <memory>

#pragma comment(lib, "wintrust.lib")
#pragma comment(lib, "crypt32.lib")

#pragma comment(lib, "Bcrypt.lib")

using namespace Browser;


#ifdef _WIN32
#ifdef ReplaceText
#undef ReplaceText
#endif // ReplaceText
#endif // _WIN32

#define NAME         _T("-name")
#define VMARGS       _T("-vmargs")					/* special option processing required */
#define LIBRARY		  _T("--launcher.library")
#define SUPRESSERRORS _T("--launcher.suppressErrors")
#define INI			  _T("--launcher.ini")
#define PROTECT	     _T("-protect")	/* This argument is also handled in eclipse.c for Mac specific processing */
#define ROOT		  _T("root")		/* the only level of protection we care now */

_TCHAR* name = NULL;			/* program name */
extern _TCHAR** userVMarg;     		/* user specific args for the Java VM */
int      suppressErrors;/* = 0;	*/			/* supress error dialogs */
int      protectRoot = 0;				/* check if launcher was run as root, currently works only on Linux/UNIX platforms */

LPWSTR* szArglist = nullptr;
extern _TCHAR* jniLib;
extern _TCHAR* jarFile;

extern int initialArgc;
extern _TCHAR** initialArgv;
extern _TCHAR* eclipseLibrary;// = NULL; /* path to the eclipse shared library */
extern JNIEnv* env;

extern int GetLaunchMode();
extern _TCHAR* findStartupJar();

void setInitialArgsW(int argc, _TCHAR** argv, _TCHAR* lib);
int runW(int argc, _TCHAR* argv[], _TCHAR* vmArgs[]);
int readIniFile(_TCHAR* program, int* argc, _TCHAR*** argv);
int readConfigFile(_TCHAR* config_file, int* argc, _TCHAR*** argv);
_TCHAR* getIniFile(_TCHAR* program, int consoleLauncher);

typedef jint(JNICALL* JNI_GetCreatedJavaVMs_)(JavaVM**, jsize, jsize*);
namespace fs = std::filesystem;

// CSpaceTelescope
namespace CommonUniverse
{
	CWebRTImpl* g_pSpaceTelescopeImpl = nullptr;
}
#pragma once
#include <atlbase.h>
#include <atlfile.h>
#include <atlstr.h>
#include <atlutil.h>
#include <atlcom.h>
#include <vector>
#include <unordered_set>
#include <functional>
#include <memory>
#include <string>

namespace CreatorMonitor
{
	// ========================================================================
	// RAII 辅助类（ACL 操作使用）
	// ========================================================================

	class CSidPtr
	{
	public:
		CSidPtr() : m_pSid(nullptr) {}
		~CSidPtr() { if (m_pSid) ::FreeSid(m_pSid); }
		PSID* operator&() { return &m_pSid; }
		PSID Get() const { return m_pSid; }
		void Attach(PSID pSid) { if (m_pSid) FreeSid(m_pSid); m_pSid = pSid; }
		CSidPtr& operator=(PSID pSid) { Attach(pSid); return *this; }
		operator PSID() const { return m_pSid; }
	private:
		PSID m_pSid;
	};

	class CSidLocalPtr
	{
	public:
		CSidLocalPtr() : m_pSid(nullptr) {}
		~CSidLocalPtr() { if (m_pSid) ::LocalFree(m_pSid); }
		PSID* operator&() { return &m_pSid; }
		PSID Get() const { return m_pSid; }
		void Attach(PSID pSid) { if (m_pSid) LocalFree(m_pSid); m_pSid = pSid; }
		CSidLocalPtr& operator=(PSID pSid) { Attach(pSid); return *this; }
		operator PSID() const { return m_pSid; }
	private:
		PSID m_pSid;
	};

	class CAclPtr
	{
	public:
		CAclPtr() : m_pAcl(nullptr) {}
		~CAclPtr() { if (m_pAcl) ::LocalFree(m_pAcl); }
		PACL* operator&() { return &m_pAcl; }
		PACL Get() const { return m_pAcl; }
		void Attach(PACL pAcl) { if (m_pAcl) LocalFree(m_pAcl); m_pAcl = pAcl; }
		CAclPtr& operator=(PACL pAcl) { Attach(pAcl); return *this; }
		operator PACL() const { return m_pAcl; }
	private:
		PACL m_pAcl;
	};

	// ========================================================================
	// ACL 管理类（静态方法）
	// ========================================================================
	class AccessControl
	{
	public:
		// 通过账户名获取 SID
		static HRESULT SidFromAccountName(const CString& accountName, CSidPtr& sid);
		// 通过 SID 字符串获取 SID
		static HRESULT SidFromString(const CString& sidString, CSidLocalPtr& sid);
		// 获取目录当前权限（SDDL 字符串）
		static HRESULT GetPermissions(const CString& path, CString& sddlString);
		// 直接设置目录 DACL（完全替换）
		static HRESULT SetDirectoryDacl(const CString& path, PACL pDacl, bool protect = true);
		// 一键加固：SYSTEM/Administrators 完全控制，指定用户只读
		static HRESULT ProtectDirectory(const CString& path,
			const CString& readOnlyUser = L"S-1-1-0");
	};

	// ========================================================================
	// 辅助类型
	// ========================================================================
	struct CStringHash
	{
		size_t operator()(const CString& str) const noexcept
		{
			return std::hash<std::wstring>{}(str.GetString());
		}
	};
	using ExtensionSet = std::unordered_set<CString, CStringHash>;

	// ========================================================================
	// 单线程多目录监控类（支持文件 + 文件夹事件 + 安全回调）
	// ========================================================================
	class CDirectoryMonitor
	{
	public:
		CDirectoryMonitor() = default;
		virtual ~CDirectoryMonitor() { Stop(); }

		// 启动监控
		HRESULT Start(const CString& strDirectory, bool bWatchSubtree = true);
		HRESULT Start(const std::vector<std::pair<CString, bool>>& directories);

		// 停止所有监控
		void Stop();

		// 运行时动态增删目录（线程安全）
		HRESULT AddDirectory(const CString& strPath, bool bWatchSubtree = true);
		void    RemoveDirectory(const CString& strPath);

		// 扩展名管理（仅对文件事件生效）
		void SetMonitoredExtensions(const ExtensionSet& setExtensions);
		ExtensionSet GetMonitoredExtensions() const;
		void AddExtension(const CString& strExtension);
		void RemoveExtension(const CString& strExtension);
		static CString NormalizeExtension(const CString& strExt);

		// 安全验证回调（优先于虚函数调用）
		void SetVerifyCallback(std::function<bool(const CString&, int)> func)
		{
			m_verifyCallback = std::move(func);
		}

		// ★ 启用/禁用文件夹创建、删除、重命名事件监控（默认 false）
		void SetWatchDirectories(bool bWatch) { m_bWatchDirectories = bWatch; }

	protected:
		// 虚函数，允许派生类覆盖；若设置了回调，优先调用回调
		virtual bool VerifyFileSafety(const CString& strFullPath, int nAction);

	private:
		// 单个目录监控上下文
		struct WatchEntry
		{
			CString            path;
			bool               watchSubtree;
			CAtlFile           hDir;
			OVERLAPPED         overlapped = {};
			CComHeapPtr<BYTE>  buffer;
			DWORD              bufferSize = 0;
			CDirectoryMonitor* pMonitor = nullptr;   // ★ 反向引用，用于获取动态过滤器

			BOOL PostRead()
			{
				DWORD dwBytesReturned = 0;
				return ReadDirectoryChangesW(
					hDir,
					buffer.m_pData,
					bufferSize,
					watchSubtree,
					pMonitor ? pMonitor->GetNotifyFilter() : (FILE_NOTIFY_CHANGE_FILE_NAME | FILE_NOTIFY_CHANGE_LAST_WRITE | FILE_NOTIFY_CHANGE_SIZE),
					&dwBytesReturned,
					&overlapped,
					NULL);
			}

			void Close()
			{
				CancelIo(hDir);
				hDir.Close();
				buffer.Free();
				bufferSize = 0;
			}
		};

		// 线程函数
		static DWORD WINAPI MonitorThreadProc(LPVOID pParam);
		void MonitorLoop();

		// 通知处理
		void ProcessNotification(WatchEntry* entry, FILE_NOTIFY_INFORMATION* pNotify);

		// 判断是否为目录事件（根据 Action 和实际属性）
		static bool IsDirectoryEvent(const CString& fullPath, DWORD action);

		// 扩展名判断
		bool IsExtensionMonitored(const CString& strFileName) const;

		// 紧急扫描（溢出时）
		void EmergencyScan(const CString& strRoot);

		// 内部方法：创建并启动一个 WatchEntry
		HRESULT CreateAndStartEntry(const CString& path, bool watchSubtree,
			std::unique_ptr<WatchEntry>& outEntry);

		// 动态获取通知过滤器（根据是否监控目录）
		DWORD GetNotifyFilter() const
		{
			DWORD filter = FILE_NOTIFY_CHANGE_FILE_NAME |
				FILE_NOTIFY_CHANGE_LAST_WRITE |
				FILE_NOTIFY_CHANGE_SIZE;
			if (m_bWatchDirectories)
				filter |= FILE_NOTIFY_CHANGE_DIR_NAME;
			return filter;
		}

		// 同步成员
		CHandle                          m_hIocp;
		mutable CComAutoCriticalSection  m_csEntries;
		std::vector<std::unique_ptr<WatchEntry>> m_entries;

		// 扩展名集合
		mutable CComAutoCriticalSection  m_csExtensions;
		ExtensionSet                     m_setExtensions;

		// 验证回调
		std::function<bool(const CString&, int)> m_verifyCallback;

		// 线程控制
		CHandle        m_hThread;
		volatile bool  m_bRunning = false;
		volatile bool  m_bStopRequested = false;

		// ★ 是否监控文件夹事件
		bool           m_bWatchDirectories = false;
	};

	// ========================================================================
	// 多目录监控管理器（简化版，直接使用 CDirectoryMonitor + 回调）
	// ========================================================================
	class CMultiDirectoryMonitor
	{
	public:
		CMultiDirectoryMonitor() = default;
		~CMultiDirectoryMonitor() { StopAll(); }

		HRESULT AddPath(const CString& strPath, bool bWatchSubtree = true)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			return m_monitor.AddDirectory(strPath, bWatchSubtree);
		}

		void RemovePath(const CString& strPath)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.RemoveDirectory(strPath);
		}

		void StopAll()
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.Stop();
		}

		void AddExtension(const CString& strExtension)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.AddExtension(strExtension);
		}

		void RemoveExtension(const CString& strExtension)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.RemoveExtension(strExtension);
		}

		void SetExtensions(const ExtensionSet& setExtensions)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.SetMonitoredExtensions(setExtensions);
		}

		ExtensionSet GetExtensions() const
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			return m_monitor.GetMonitoredExtensions();
		}

		void SetVerifyCallback(std::function<bool(const CString&, int)> func)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.SetVerifyCallback(std::move(func));
		}

		// ★ 启用/禁用文件夹监控
		void SetWatchDirectories(bool bWatch)
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_cs, true);
			m_monitor.SetWatchDirectories(bWatch);
		}

	private:
		mutable CComAutoCriticalSection m_cs;
		CDirectoryMonitor               m_monitor;
	};

	// 设置目录 ACL：只允许 SYSTEM 和 Administrators 完全控制，普通用户只读
	//inline HRESULT SetSecureDirectoryAcl(const CString& strDirectory)
	//{
	//	ATLASSERT(!strDirectory.IsEmpty());

	//	// 1. 获取 SYSTEM 和 Administrators 的 SID
	//	CSidPtr systemSid, adminSid;
	//	SID_IDENTIFIER_AUTHORITY ntAuth = SECURITY_NT_AUTHORITY;

	//	if (!AllocateAndInitializeSid(&ntAuth, 1, SECURITY_LOCAL_SYSTEM_RID,
	//		0, 0, 0, 0, 0, 0, 0, &systemSid))
	//		return HRESULT_FROM_WIN32(GetLastError());

	//	if (!AllocateAndInitializeSid(&ntAuth, 2, SECURITY_BUILTIN_DOMAIN_RID,
	//		DOMAIN_ALIAS_RID_ADMINS,
	//		0, 0, 0, 0, 0, 0, &adminSid))
	//		return HRESULT_FROM_WIN32(GetLastError());

	//	// 2. 获取“已认证用户”的 SID (替代原本的 Everyone)
	//	// S-1-5-11 代表 Authenticated Users，正常登录的用户都具备这个身份
	//	CSidLocalPtr authUserSid;
	//	if (!ConvertStringSidToSid(L"S-1-5-11", &authUserSid))
	//		return HRESULT_FROM_WIN32(GetLastError());

	//	// 3. 定义 ACE (Access Control Entry)
	//	EXPLICIT_ACCESS ea[4] = {}; // 增加为 4 条规则

	//	// 规则 0: SYSTEM 完全控制
	//	ea[0].grfAccessPermissions = GENERIC_ALL;
	//	ea[0].grfAccessMode = SET_ACCESS;
	//	ea[0].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
	//	ea[0].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	//	ea[0].Trustee.ptstrName = (LPTSTR)systemSid.Get();

	//	// 规则 1: Administrators 完全控制
	//	ea[1].grfAccessPermissions = GENERIC_ALL;
	//	ea[1].grfAccessMode = SET_ACCESS;
	//	ea[1].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
	//	ea[1].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	//	ea[1].Trustee.ptstrName = (LPTSTR)adminSid.Get();

	//	// 规则 2: 已认证用户允许“读取”和“执行”（保证普通用户能正常启动和使用）
	//	ea[2].grfAccessPermissions = GENERIC_READ | GENERIC_EXECUTE;
	//	ea[2].grfAccessMode = SET_ACCESS;
	//	ea[2].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
	//	ea[2].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	//	ea[2].Trustee.ptstrName = (LPTSTR)authUserSid.Get();

	//	// 规则 3: 已认证用户显式“拒绝写入”（防止被恶意替换或篡改）
	//	ea[3].grfAccessPermissions = GENERIC_WRITE;
	//	ea[3].grfAccessMode = DENY_ACCESS;
	//	ea[3].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
	//	ea[3].Trustee.TrusteeForm = TRUSTEE_IS_SID;
	//	ea[3].Trustee.ptstrName = (LPTSTR)authUserSid.Get();

	//	// 4. 创建 DACL
	//	PACL pNewDacl = nullptr;
	//	DWORD dwErr = SetEntriesInAcl(4, ea, nullptr, &pNewDacl); // 传入 4 条规则
	//	if (dwErr != ERROR_SUCCESS)
	//		return HRESULT_FROM_WIN32(dwErr);

	//	// 5. 应用到目标目录
	//	dwErr = SetNamedSecurityInfo(
	//		const_cast<LPWSTR>(static_cast<LPCWSTR>(strDirectory)),
	//		SE_FILE_OBJECT,
	//		DACL_SECURITY_INFORMATION | PROTECTED_DACL_SECURITY_INFORMATION,
	//		nullptr, nullptr, pNewDacl, nullptr);

	//	// 释放 ACL 内存 (SetEntriesInAcl 成功分配后必须释放)
	//	if (pNewDacl) LocalFree(pNewDacl);

	//	if (dwErr != ERROR_SUCCESS)
	//		return HRESULT_FROM_WIN32(dwErr);

	//	ATLTRACE(L"[CreatorMonitor] 目录 ACL 加固完成: %s\n", strDirectory.GetString());
	//	return S_OK;
	//}

	inline HRESULT SetSecureDirectoryAcl2(const CString& strDirectory)
	{
		ATLASSERT(!strDirectory.IsEmpty());

		// 1. 获取 SYSTEM 和 Administrators 的 SID
		CSidPtr systemSid, adminSid;
		SID_IDENTIFIER_AUTHORITY ntAuth = SECURITY_NT_AUTHORITY;

		if (!AllocateAndInitializeSid(&ntAuth, 1, SECURITY_LOCAL_SYSTEM_RID,
			0, 0, 0, 0, 0, 0, 0, &systemSid))
			return HRESULT_FROM_WIN32(GetLastError());

		if (!AllocateAndInitializeSid(&ntAuth, 2, SECURITY_BUILTIN_DOMAIN_RID,
			DOMAIN_ALIAS_RID_ADMINS,
			0, 0, 0, 0, 0, 0, &adminSid))
			return HRESULT_FROM_WIN32(GetLastError());

		//2. 获取“已认证用户”的 SID (S-1-5-11)，以取代 Everyone
		//普通登录用户都属于这个组，确保了正常使用，且不包含匿名/访客
		CSidLocalPtr authUserSid;
		if (!ConvertStringSidToSid(L"S-1-5-11", &authUserSid))
			return HRESULT_FROM_WIN32(GetLastError());

		// 3. 定义 ACE (访问控制条目)
		EXPLICIT_ACCESS ea[4] = {};

		// 规则 0: SYSTEM 完全控制
		ea[0].grfAccessPermissions = GENERIC_ALL;
		ea[0].grfAccessMode = SET_ACCESS;
		ea[0].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[0].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[0].Trustee.ptstrName = (LPTSTR)systemSid.Get();

		// 规则 1: Administrators 完全控制
		ea[1].grfAccessPermissions = GENERIC_ALL;
		ea[1].grfAccessMode = SET_ACCESS;
		ea[1].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[1].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[1].Trustee.ptstrName = (LPTSTR)adminSid.Get();

		//规则 2: 已认证用户“允许进入和读取”（解决此前进不去文件夹的问题）
		//注意：这里弃用了 GENERIC_READ，显式列出了目录权限，并包含了关键的 SYNCHRONIZE 位
		ea[2].grfAccessPermissions = FILE_LIST_DIRECTORY |  // 允许列出目录内容
			FILE_TRAVERSE |  // 允许进入目录（穿越）
			FILE_READ_ATTRIBUTES |  // 允许读取目录属性
			FILE_READ_EA |  // 允许读取扩展属性
			SYNCHRONIZE |  // 同步权限（解决无法进入句柄的关键）
			READ_CONTROL;          // 允许读取安全描述符
		ea[2].grfAccessMode = SET_ACCESS;
		ea[2].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[2].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[2].Trustee.ptstrName = (LPTSTR)authUserSid.Get();

		//规则 3: 已认证用户显式“拒绝写入”（防篡改底线）
		//同样弃用了 GENERIC_WRITE，只拒绝针对文件夹写操作的特定权限
		ea[3].grfAccessPermissions = FILE_ADD_FILE |          // 禁止添加文件
			FILE_ADD_SUBDIRECTORY |  // 禁止创建子目录
			FILE_WRITE_DATA |        // 禁止写入数据
			FILE_WRITE_ATTRIBUTES |  // 禁止修改目录属性
			FILE_WRITE_EA;           // 禁止修改扩展属性
		ea[3].grfAccessMode = DENY_ACCESS;
		ea[3].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[3].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[3].Trustee.ptstrName = (LPTSTR)authUserSid.Get();

		//4. 创建 DACL (规则条数改为 4)
		PACL pNewDacl = nullptr;
		DWORD dwErr = SetEntriesInAcl(4, ea, nullptr, &pNewDacl);
		if (dwErr != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(dwErr);

		//5. 应用到目标目录
		//PROTECTED_DACL_SECURITY_INFORMATION 防止父目录继承错误的宽松权限
		dwErr = SetNamedSecurityInfo(
			const_cast<LPWSTR>(static_cast<LPCWSTR>(strDirectory)),
			SE_FILE_OBJECT,
			DACL_SECURITY_INFORMATION | PROTECTED_DACL_SECURITY_INFORMATION,
			nullptr, nullptr, pNewDacl, nullptr);

		//释放 SetEntriesInAcl 分配的 DACL 内存
		if (pNewDacl) LocalFree(pNewDacl);

		if (dwErr != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(dwErr);

		ATLTRACE(L"[CreatorMonitor] 目录 ACL 加固完成: %s\n", strDirectory.GetString());
		return S_OK;
	}

	inline HRESULT SetSecureDirectoryAcl(const CString& strDirectory)
	{
		ATLASSERT(!strDirectory.IsEmpty());

		// 1. 获取 SYSTEM 和 Administrators 的 SID
		CSidPtr systemSid, adminSid;
		SID_IDENTIFIER_AUTHORITY ntAuth = SECURITY_NT_AUTHORITY;

		if (!AllocateAndInitializeSid(&ntAuth, 1, SECURITY_LOCAL_SYSTEM_RID,
			0, 0, 0, 0, 0, 0, 0, &systemSid))
			return HRESULT_FROM_WIN32(GetLastError());

		if (!AllocateAndInitializeSid(&ntAuth, 2, SECURITY_BUILTIN_DOMAIN_RID,
			DOMAIN_ALIAS_RID_ADMINS,
			0, 0, 0, 0, 0, 0, &adminSid))
			return HRESULT_FROM_WIN32(GetLastError());

		// 2. 获取低权限用户 SID（以 "Everyone" 示例，实际请替换为你的服务账户）
		CSidLocalPtr userSid;
		if (!ConvertStringSidToSid(L"S-1-1-0", &userSid))
			return HRESULT_FROM_WIN32(GetLastError());

		// 3. 定义 ACE
		EXPLICIT_ACCESS ea[3] = {};

		ea[0].grfAccessPermissions = GENERIC_ALL;
		ea[0].grfAccessMode = SET_ACCESS;
		ea[0].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[0].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[0].Trustee.ptstrName = (LPTSTR)systemSid.Get();

		ea[1].grfAccessPermissions = GENERIC_ALL;
		ea[1].grfAccessMode = SET_ACCESS;
		ea[1].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[1].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[1].Trustee.ptstrName = (LPTSTR)adminSid.Get();

		ea[2].grfAccessPermissions = GENERIC_READ | GENERIC_EXECUTE;
		ea[2].grfAccessMode = SET_ACCESS;
		ea[2].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[2].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[2].Trustee.ptstrName = (LPTSTR)userSid.Get();

		// 4. 创建 DACL
		PACL pNewDacl = nullptr;
		DWORD dwErr = SetEntriesInAcl(3, ea, nullptr, &pNewDacl);
		if (dwErr != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(dwErr);

		// 5. 应用到目录
		dwErr = SetNamedSecurityInfo(
			const_cast<LPWSTR>(static_cast<LPCWSTR>(strDirectory)),
			SE_FILE_OBJECT,
			DACL_SECURITY_INFORMATION | PROTECTED_DACL_SECURITY_INFORMATION,
			nullptr, nullptr, pNewDacl, nullptr);

		LocalFree(pNewDacl); // 释放 SetEntriesInAcl 分配的 DACL

		if (dwErr != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(dwErr);

		ATLTRACE(L"[CreatorMonitor] 目录 ACL 加固完成: %s\n", strDirectory.GetString());
		return S_OK;
	}

	// ========================================================================
	// 实现 - AccessControl
	// ========================================================================
	inline HRESULT AccessControl::SidFromAccountName(const CString& accountName, CSidPtr& sid)
	{
		DWORD sidSize = 0, domainSize = 0;
		SID_NAME_USE use;
		if (!LookupAccountName(nullptr, accountName, nullptr, &sidSize,
			nullptr, &domainSize, &use) &&
			GetLastError() != ERROR_INSUFFICIENT_BUFFER)
			return HRESULT_FROM_WIN32(GetLastError());

		std::vector<BYTE> sidBuf(sidSize);
		CString domain;
		domainSize = domainSize + 1;
		domain = CString('\0', domainSize);

		if (!LookupAccountName(nullptr, accountName, sidBuf.data(), &sidSize,
			domain.GetBuffer(), &domainSize, &use))
		{
			domain.ReleaseBuffer();
			return HRESULT_FROM_WIN32(GetLastError());
		}
		domain.ReleaseBuffer();

		// 复制 SID
		PSID pNewSid = (PSID)::operator new(::GetLengthSid(sidBuf.data()));
		if (!pNewSid) return E_OUTOFMEMORY;
		if (!::CopySid(::GetLengthSid(sidBuf.data()), pNewSid, sidBuf.data()))
		{
			::operator delete(pNewSid);
			return HRESULT_FROM_WIN32(GetLastError());
		}
		sid = CSidPtr(); // 释放旧 SID
		sid.Attach(pNewSid);
		return S_OK;
	}

	inline HRESULT AccessControl::SidFromString(const CString& sidString, CSidLocalPtr& sid)
	{
		if (!ConvertStringSidToSid(sidString, &sid))
			return HRESULT_FROM_WIN32(GetLastError());
		return S_OK;
	}

	inline HRESULT AccessControl::GetPermissions(const CString& path, CString& sddlString)
	{
		PSECURITY_DESCRIPTOR pSD = nullptr;
		DWORD dwErr = GetNamedSecurityInfo(
			const_cast<LPWSTR>(static_cast<LPCWSTR>(path)),
			SE_FILE_OBJECT,
			DACL_SECURITY_INFORMATION,
			nullptr, nullptr, nullptr, nullptr,
			&pSD);
		if (dwErr != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(dwErr);

		LPWSTR strSD = nullptr;
		ULONG strLen = 0;
		if (!ConvertSecurityDescriptorToStringSecurityDescriptor(
			pSD, SDDL_REVISION_1, DACL_SECURITY_INFORMATION, &strSD, &strLen))
		{
			LocalFree(pSD);
			return HRESULT_FROM_WIN32(GetLastError());
		}
		sddlString = strSD;
		LocalFree(strSD);
		LocalFree(pSD);
		return S_OK;
	}

	inline HRESULT AccessControl::SetDirectoryDacl(const CString& path, PACL pDacl, bool protect)
	{
		SECURITY_INFORMATION secInfo = DACL_SECURITY_INFORMATION;
		if (protect) secInfo |= PROTECTED_DACL_SECURITY_INFORMATION;

		DWORD dwErr = SetNamedSecurityInfo(
			const_cast<LPWSTR>(static_cast<LPCWSTR>(path)),
			SE_FILE_OBJECT,
			secInfo,
			nullptr, nullptr,
			pDacl,
			nullptr);
		return dwErr == ERROR_SUCCESS ? S_OK : HRESULT_FROM_WIN32(dwErr);
	}

	inline HRESULT AccessControl::ProtectDirectory(const CString& path, const CString& readOnlyUser)
	{
		CSidPtr systemSid, adminSid;
		SID_IDENTIFIER_AUTHORITY ntAuth = SECURITY_NT_AUTHORITY;

		if (!AllocateAndInitializeSid(&ntAuth, 1, SECURITY_LOCAL_SYSTEM_RID,
			0, 0, 0, 0, 0, 0, 0, &systemSid))
			return HRESULT_FROM_WIN32(GetLastError());

		if (!AllocateAndInitializeSid(&ntAuth, 2, SECURITY_BUILTIN_DOMAIN_RID,
			DOMAIN_ALIAS_RID_ADMINS,
			0, 0, 0, 0, 0, 0, &adminSid))
			return HRESULT_FROM_WIN32(GetLastError());

		CSidLocalPtr userSid;
		if (FAILED(SidFromString(readOnlyUser, userSid)))
			return E_INVALIDARG;

		EXPLICIT_ACCESS ea[3] = {};
		ea[0].grfAccessPermissions = GENERIC_ALL;
		ea[0].grfAccessMode = SET_ACCESS;
		ea[0].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[0].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[0].Trustee.ptstrName = (LPTSTR)systemSid.Get();

		ea[1].grfAccessPermissions = GENERIC_ALL;
		ea[1].grfAccessMode = SET_ACCESS;
		ea[1].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[1].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[1].Trustee.ptstrName = (LPTSTR)adminSid.Get();

		ea[2].grfAccessPermissions = GENERIC_READ | GENERIC_EXECUTE;
		ea[2].grfAccessMode = SET_ACCESS;
		ea[2].grfInheritance = SUB_CONTAINERS_AND_OBJECTS_INHERIT;
		ea[2].Trustee.TrusteeForm = TRUSTEE_IS_SID;
		ea[2].Trustee.ptstrName = (LPTSTR)userSid.Get();

		CAclPtr pDacl;
		DWORD err = SetEntriesInAcl(3, ea, nullptr, &pDacl);
		if (err != ERROR_SUCCESS)
			return HRESULT_FROM_WIN32(err);

		return SetDirectoryDacl(path, pDacl, true);
	}

	// ========================================================================
	// 实现 - CDirectoryMonitor
	// ========================================================================
	inline CString CDirectoryMonitor::NormalizeExtension(const CString& strExt)
	{
		CString s = strExt;
		s.MakeLower();
		if (!s.IsEmpty() && s[0] != L'.')
			s = L"." + s;
		return s;
	}

	inline void CDirectoryMonitor::SetMonitoredExtensions(const ExtensionSet& setExtensions)
	{
		CComCritSecLock<CComAutoCriticalSection> lock(m_csExtensions, true);
		m_setExtensions.clear();
		for (const auto& ext : setExtensions)
			m_setExtensions.insert(NormalizeExtension(ext));
	}

	inline ExtensionSet CDirectoryMonitor::GetMonitoredExtensions() const
	{
		CComCritSecLock<CComAutoCriticalSection> lock(m_csExtensions, true);
		return m_setExtensions;
	}

	inline void CDirectoryMonitor::AddExtension(const CString& strExtension)
	{
		CComCritSecLock<CComAutoCriticalSection> lock(m_csExtensions, true);
		m_setExtensions.insert(NormalizeExtension(strExtension));
	}

	inline void CDirectoryMonitor::RemoveExtension(const CString& strExtension)
	{
		CComCritSecLock<CComAutoCriticalSection> lock(m_csExtensions, true);
		m_setExtensions.erase(NormalizeExtension(strExtension));
	}

	inline bool CDirectoryMonitor::VerifyFileSafety(const CString& strFullPath, int nAction)
	{
		if (m_verifyCallback)
			return m_verifyCallback(strFullPath, nAction);
		return true; // 默认安全
	}

	inline bool CDirectoryMonitor::IsDirectoryEvent(const CString& fullPath, DWORD action)
	{
		// 对于 ADDED/MODIFIED 可直接检查属性；对于 REMOVED/RENAMED_OLD_NAME 可能已不存在，
		// 这里简单处理：若无法获取属性，则根据 action 类型判断（REMOVED/RENAMED_OLD_NAME 视为可能目录）
		DWORD attr = GetFileAttributes(fullPath);
		if (attr != INVALID_FILE_ATTRIBUTES)
			return (attr & FILE_ATTRIBUTE_DIRECTORY) != 0;

		// 文件/目录已不存在：对于删除和旧名称重命名事件，视为目录事件（无法区分）
		return (action == FILE_ACTION_REMOVED || action == FILE_ACTION_RENAMED_OLD_NAME);
	}

	inline HRESULT CDirectoryMonitor::CreateAndStartEntry(const CString& path, bool watchSubtree,
		std::unique_ptr<WatchEntry>& outEntry)
	{
		auto entry = std::make_unique<WatchEntry>();
		entry->path = path;
		entry->watchSubtree = watchSubtree;
		entry->pMonitor = this;   // ★ 设置反向引用

		HRESULT hr = entry->hDir.Create(
			path,
			GENERIC_READ,
			FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
			OPEN_EXISTING,
			FILE_FLAG_BACKUP_SEMANTICS | FILE_FLAG_OVERLAPPED);
		if (FAILED(hr)) return hr;

		const DWORD dwBufSize = 16 * 1024;
		if (!entry->buffer.Allocate(dwBufSize))
		{
			entry->hDir.Close();
			return E_OUTOFMEMORY;
		}
		entry->bufferSize = dwBufSize;

		if (!CreateIoCompletionPort(entry->hDir, m_hIocp, (ULONG_PTR)entry.get(), 0))
		{
			entry->Close();
			return HRESULT_FROM_WIN32(GetLastError());
		}

		if (!entry->PostRead())
		{
			entry->Close();
			return HRESULT_FROM_WIN32(GetLastError());
		}

		outEntry = std::move(entry);
		return S_OK;
	}

	inline HRESULT CDirectoryMonitor::Start(const CString& strDirectory, bool bWatchSubtree)
	{
		return Start({ { strDirectory, bWatchSubtree } });
	}

	inline HRESULT CDirectoryMonitor::Start(const std::vector<std::pair<CString, bool>>& directories)
	{
		ATLASSERT(!m_bRunning);
		if (m_bRunning) return E_FAIL;

		m_hIocp.Attach(CreateIoCompletionPort(INVALID_HANDLE_VALUE, NULL, 0, 0));
		if (!m_hIocp) return HRESULT_FROM_WIN32(GetLastError());

		for (const auto& [path, subtree] : directories)
		{
			std::unique_ptr<WatchEntry> entry;
			HRESULT hr = CreateAndStartEntry(path, subtree, entry);
			if (FAILED(hr))
			{
				for (auto& e : m_entries)
					e->Close();
				m_entries.clear();
				m_hIocp.Close();
				return hr;
			}
			m_entries.push_back(std::move(entry));
		}

		m_bStopRequested = false;
		m_bRunning = true;
		m_hThread.Attach(CreateThread(NULL, 0, MonitorThreadProc, this, 0, NULL));
		if (!m_hThread)
		{
			Stop();
			return HRESULT_FROM_WIN32(GetLastError());
		}
		return S_OK;
	}

	inline void CDirectoryMonitor::Stop()
	{
		if (!m_bRunning) return;
		m_bStopRequested = true;

		if (m_hIocp)
			PostQueuedCompletionStatus(m_hIocp, 0, 0, NULL);

		if (m_hThread)
			WaitForSingleObject(m_hThread, 5000);

		for (auto& e : m_entries)
			e->Close();
		m_entries.clear();

		if (m_hIocp)
			m_hIocp.Close();

		m_hThread.Close();
		m_bRunning = false;
	}

	inline HRESULT CDirectoryMonitor::AddDirectory(const CString& strPath, bool bWatchSubtree)
	{
		if (!m_bRunning) return E_FAIL;

		std::unique_ptr<WatchEntry> entry;
		HRESULT hr = CreateAndStartEntry(strPath, bWatchSubtree, entry);
		if (FAILED(hr)) return hr;

		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_csEntries, true);
			m_entries.push_back(std::move(entry));
		}
		return S_OK;
	}

	inline void CDirectoryMonitor::RemoveDirectory(const CString& strPath)
	{
		if (!m_bRunning) return;

		std::unique_ptr<WatchEntry> target;
		{
			CComCritSecLock<CComAutoCriticalSection> lock(m_csEntries, true);
			auto it = std::find_if(m_entries.begin(), m_entries.end(),
				[&](const std::unique_ptr<WatchEntry>& e) {
					return e->path.CompareNoCase(strPath) == 0;
				});
			if (it != m_entries.end())
			{
				target = std::move(*it);
				m_entries.erase(it);
			}
		}
		if (target)
			target->Close();
	}

	inline DWORD WINAPI CDirectoryMonitor::MonitorThreadProc(LPVOID pParam)
	{
		auto* pThis = static_cast<CDirectoryMonitor*>(pParam);
		pThis->MonitorLoop();
		return 0;
	}

	inline void CDirectoryMonitor::MonitorLoop()
	{
		while (!m_bStopRequested)
		{
			DWORD dwTransferred = 0;
			ULONG_PTR ulKey = 0;
			OVERLAPPED* pOverlapped = nullptr;

			BOOL bIOCP = GetQueuedCompletionStatus(
				m_hIocp, &dwTransferred, &ulKey, &pOverlapped, 1000);

			if (m_bStopRequested) break;

			if (!bIOCP)
			{
				if (pOverlapped == nullptr) continue;
				ATLTRACE(L"[CreatorMonitor] IOCP 错误: %lu\n", GetLastError());
				continue;
			}

			auto* pEntry = reinterpret_cast<WatchEntry*>(ulKey);
			if (!pEntry) continue;

			if (dwTransferred == 0)
			{
				ATLTRACE(L"[CreatorMonitor] 缓冲区溢出: %s\n", pEntry->path.GetString());
				EmergencyScan(pEntry->path);
			}
			else
			{
				auto* pNotify = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(pEntry->buffer.m_pData);
				for (;;)
				{
					ProcessNotification(pEntry, pNotify);
					if (pNotify->NextEntryOffset == 0) break;
					pNotify = reinterpret_cast<FILE_NOTIFY_INFORMATION*>(
						reinterpret_cast<BYTE*>(pNotify) + pNotify->NextEntryOffset);
				}
			}

			if (!pEntry->PostRead())
			{
				ATLTRACE(L"[CreatorMonitor] 重新提交 ReadDirectoryChanges 失败: %s\n", pEntry->path.GetString());
			}
		}

		for (auto& e : m_entries)
			e->Close();
	}

	inline void CDirectoryMonitor::ProcessNotification(WatchEntry* entry, FILE_NOTIFY_INFORMATION* pNotify)
	{
		CString strName(pNotify->FileName, pNotify->FileNameLength / sizeof(WCHAR));
		CString strFullPath = entry->path + L"\\" + strName;
		strFullPath.Replace(_T("\\\\"), _T("\\"));

		// ★ 如果开启了目录监控，且事件可能涉及目录，则直接通知（跳过扩展名过滤）
		if (m_bWatchDirectories)
		{
			bool bIsDir = IsDirectoryEvent(strFullPath, pNotify->Action);
			if (bIsDir)
			{
				ATLTRACE(L"[CreatorMonitor] 目录变更: %s (action=%d)\n", strFullPath.GetString(), pNotify->Action);
				VerifyFileSafety(strFullPath, pNotify->Action);
				return;
			}
		}

		// 文件事件处理（原有逻辑）
		switch (pNotify->Action)
		{
		case FILE_ACTION_ADDED:
		case FILE_ACTION_RENAMED_NEW_NAME:
		case FILE_ACTION_MODIFIED:
		case FILE_ACTION_REMOVED:
			if (IsExtensionMonitored(strName))
			{
				ATLTRACE(L"[CreatorMonitor] 文件变更: %s (action=%d)\n", strFullPath.GetString(), pNotify->Action);
				VerifyFileSafety(strFullPath, pNotify->Action);
			}
			break;
		case FILE_ACTION_RENAMED_OLD_NAME:
			// 旧名称重命名对文件监控无意义，忽略
			break;
		}
	}

	inline bool CDirectoryMonitor::IsExtensionMonitored(const CString& strFileName) const
	{
		int iDot = strFileName.ReverseFind(L'.');
		if (iDot == -1) return false;
		CString strExt = strFileName.Mid(iDot).MakeLower();
		CComCritSecLock<CComAutoCriticalSection> lock(m_csExtensions, true);
		return m_setExtensions.find(strExt) == m_setExtensions.end();
	}

	inline void CDirectoryMonitor::EmergencyScan(const CString& strRoot)
	{
		CString strSearch = strRoot + L"\\*";
		WIN32_FIND_DATA fd;
		HANDLE hFind = FindFirstFile(strSearch, &fd);
		if (hFind == INVALID_HANDLE_VALUE) return;
		do
		{
			if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				if (wcscmp(fd.cFileName, L".") == 0 || wcscmp(fd.cFileName, L"..") == 0) continue;
				// 扫描子目录时，如果需要监控文件夹事件，也应该通知
				if (m_bWatchDirectories)
				{
					CString fullPath = strRoot + L"\\" + fd.cFileName;
					VerifyFileSafety(fullPath, 100); // 自定义动作码 100 表示紧急扫描
				}
				EmergencyScan(strRoot + L"\\" + fd.cFileName);
			}
			else
			{
				CString strFile(fd.cFileName);
				if (IsExtensionMonitored(strFile))
				{
					CString strFullPath = strRoot + L"\\" + strFile;
					if (!VerifyFileSafety(strFullPath, 100))
					{
						ATLTRACE(L"[CreatorMonitor] 扫描发现危险文件: %s\n", strFullPath.GetString());
					}
				}
			}
		} while (FindNextFile(hFind, &fd));
		FindClose(hFind);
	}

} // namespace CreatorMonitor

/*
int wmain(int argc, wchar_t* argv[]) {
	_setmode(_fileno(stdout), _O_U16TEXT);

	std::vector<std::pair<std::wstring, DllXmlGeneratorStd::SingleAttrFunc>> attrs = {
		{ L"md5", CalcMd5 }
	};
	std::vector<std::wstring> exts = { L".dll", L".exe" };
	std::vector<std::wstring> exclude = { L"*.tmp" };
	std::vector<std::wstring> checkExts = { L".dll", L".sys" };  // 只检查这两个

	DllXmlGeneratorStd::GenerateDllAttributesXml(
		L"C:\\MyApp",
		L"report.xml",
		attrs,
		exts,
		true,                    // preserveHierarchy
		L"components",
		exclude,
		true,                    // includeBase
		CheckEV,                 // checkFunc
		checkExts,               // checkExtensions
		L"EVCheck",              // checkAttrName
		L"unchecked",            // uncheckedNodeName
		false                    // unchecked 内部展平
	);

	return 0;
}
*/

//#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
//#define SHA256_DIGEST_LENGTH 32

//BOOL CalculateFileSHA256(LPCTSTR filePath, BYTE hashBuffer[SHA256_DIGEST_LENGTH]) {
//	BCRYPT_ALG_HANDLE hAlg = NULL;
//	BCRYPT_HASH_HANDLE hHash = NULL;
//	HANDLE hFile = INVALID_HANDLE_VALUE;
//	BOOL bResult = FALSE;
//	DWORD hashObjectSize = 0, cbData = 0;
//	const DWORD bufferSize = 4096; // 4KB缓冲区，平衡I/O效率与内存
//	BYTE fileBuffer[4096];
//	DWORD bytesRead = 0;
//	PBYTE hashObject = NULL;
//
//	// 1. 打开算法提供程序
//	if (!NT_SUCCESS(BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM, NULL, 0))) {
//		_tprintf(_T("错误：无法打开SHA256算法提供程序\n"));
//		goto cleanup;
//	}
//
//	// 2. 创建哈希对象
//	// 获取哈希对象所需内存大小
//	if (!NT_SUCCESS(BCryptGetProperty(hAlg, BCRYPT_OBJECT_LENGTH, (PBYTE)&hashObjectSize, sizeof(DWORD), &cbData, 0))) {
//		goto cleanup;
//	}
//
//	hashObject = (PBYTE)HeapAlloc(GetProcessHeap(), 0, hashObjectSize);
//	if (!hashObject) goto cleanup;
//
//	if (!NT_SUCCESS(BCryptCreateHash(hAlg, &hHash, hashObject, hashObjectSize, NULL, 0, 0))) {
//		HeapFree(GetProcessHeap(), 0, hashObject);
//		goto cleanup;
//	}
//
//	// 3. 打开目标文件
//	hFile = CreateFile(filePath, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL);
//	if (hFile == INVALID_HANDLE_VALUE) {
//		_tprintf(_T("错误：无法打开文件 %s\n"), filePath);
//		goto cleanup;
//	}
//
//	// 4. 分块读取文件并更新哈希
//
//	while (ReadFile(hFile, fileBuffer, bufferSize, &bytesRead, NULL) && bytesRead > 0) {
//		if (!NT_SUCCESS(BCryptHashData(hHash, fileBuffer, bytesRead, 0))) {
//			goto cleanup;
//		}
//	}
//
//	// 5. 最终计算并获取哈希值
//	if (NT_SUCCESS(BCryptFinishHash(hHash, hashBuffer, SHA256_DIGEST_LENGTH, 0))) {
//		bResult = TRUE; // 成功！
//	}
//
//cleanup:
//	// 6. 安全清理所有资源
//	if (hHash) BCryptDestroyHash(hHash);
//	if (hashObject) HeapFree(GetProcessHeap(), 0, hashObject); // 注意释放顺序，hHash销毁后再释放buffer
//	if (hAlg) BCryptCloseAlgorithmProvider(hAlg, 0);
//	if (hFile != INVALID_HANDLE_VALUE) CloseHandle(hFile);
//
//	return bResult;
//}

// EV 签名的策略 OID（扩展验证代码签名）
const char* EV_POLICY_OID = "2.23.140.1.3";

namespace EvCheck {
	// 常见 EV 策略 OID 列表（可根据实际需求扩充）
	static const char* const EV_POLICY_OIDS[] = {
		"2.23.140.1.3",                  // CA/Browser Forum 统一 EV OID
		"1.3.6.1.4.1.311.60.2.1"         // 微软旧 EV OID
	};
	static const size_t EV_POLICY_OID_COUNT = sizeof(EV_POLICY_OIDS) / sizeof(EV_POLICY_OIDS[0]);

	inline bool CheckDllNoSigned(const CString& filePath) {
		WINTRUST_FILE_INFO fileInfo = { sizeof(WINTRUST_FILE_INFO) };
		fileInfo.pcwszFilePath = filePath;

		WINTRUST_DATA trustData = { sizeof(WINTRUST_DATA) };
		trustData.dwUnionChoice = WTD_CHOICE_FILE;
		trustData.pFile = &fileInfo;
		trustData.dwUIChoice = WTD_UI_NONE;
		trustData.dwProvFlags = WTD_REVOCATION_CHECK_NONE;  // 可改为更严格的策略
		trustData.dwStateAction = WTD_STATEACTION_VERIFY;

		GUID policyGuid = WINTRUST_ACTION_GENERIC_VERIFY_V2;

		LONG lStatus = WinVerifyTrust(NULL, &policyGuid, &trustData);

		// 清理状态（无论验证结果如何都要执行）
		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid, &trustData);

		// 只有明确返回 TRUST_E_NOSIGNATURE 才是“无签名”
		return (lStatus == TRUST_E_NOSIGNATURE);
	}

	inline bool IsEVSigned(const CString& filePath) {
		WINTRUST_FILE_INFO fileInfo = { sizeof(WINTRUST_FILE_INFO) };
		fileInfo.pcwszFilePath = filePath;

		WINTRUST_DATA trustData = { sizeof(WINTRUST_DATA) };
		trustData.dwUnionChoice = WTD_CHOICE_FILE;
		trustData.pFile = &fileInfo;
		trustData.dwUIChoice = WTD_UI_NONE;
		trustData.dwProvFlags = WTD_REVOCATION_CHECK_NONE;
		trustData.dwStateAction = WTD_STATEACTION_VERIFY;

		GUID policyGuid = WINTRUST_ACTION_GENERIC_VERIFY_V2;

		LONG lStatus = WinVerifyTrust(NULL, &policyGuid, &trustData);
		if (lStatus != ERROR_SUCCESS) {
			trustData.dwStateAction = WTD_STATEACTION_CLOSE;
			WinVerifyTrust(NULL, &policyGuid, &trustData);
			return false;
		}

		CRYPT_PROVIDER_DATA* pProvData = WTHelperProvDataFromStateData(trustData.hWVTStateData);
		if (!pProvData) {
			trustData.dwStateAction = WTD_STATEACTION_CLOSE;
			WinVerifyTrust(NULL, &policyGuid, &trustData);
			return false;
		}
		if (pProvData->csSigners == 0) {
			trustData.dwStateAction = WTD_STATEACTION_CLOSE;
			WinVerifyTrust(NULL, &policyGuid, &trustData);
			return false;
		}
		bool isEV = false;
		for (DWORD iSigner = 0; iSigner < pProvData->csSigners && !isEV; ++iSigner) {
			CRYPT_PROVIDER_SGNR* pSigner = WTHelperGetProvSignerFromChain(pProvData, iSigner, FALSE, 0);
			if (!pSigner) continue;

			for (DWORD iCert = 0; iCert < pSigner->csCertChain; ++iCert) {
				PCCERT_CONTEXT pCert = pSigner->pasCertChain[iCert].pCert;
				if (!pCert) continue;

				PCERT_EXTENSION pExt = CertFindExtension(
					szOID_CERT_POLICIES,
					pCert->pCertInfo->cExtension,
					pCert->pCertInfo->rgExtension);

				if (pExt) {
					DWORD cbSize = 0;
					if (CryptDecodeObject(X509_ASN_ENCODING,
						szOID_CERT_POLICIES,
						pExt->Value.pbData,
						pExt->Value.cbData,
						0,
						NULL,
						&cbSize)) {
						std::vector<BYTE> buffer(cbSize);
						if (CryptDecodeObject(X509_ASN_ENCODING,
							szOID_CERT_POLICIES,
							pExt->Value.pbData,
							pExt->Value.cbData,
							0,
							buffer.data(),
							&cbSize)) {
							CERT_POLICIES_INFO* pInfo = reinterpret_cast<CERT_POLICIES_INFO*>(buffer.data());
							for (DWORD j = 0; j < pInfo->cPolicyInfo; ++j) {
								for (size_t k = 0; k < EV_POLICY_OID_COUNT; ++k) {
									if (strcmp(pInfo->rgPolicyInfo[j].pszPolicyIdentifier, EV_POLICY_OIDS[k]) == 0) {
										isEV = true;
										break;
									}
								}
								if (isEV) break;
							}
						}
					}
				}
				if (isEV) break;
			}
		}

		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid, &trustData);
		return isEV;
	}
} // namespace EvCheck

/*
// STL 调用
std::wstring stlPath = L"C:\\test.exe";
bool stlResult = EvCheck::Stl::IsEVSigned(stlPath);

// ATL 调用
CString atlPath = L"C:\\test.exe";
bool atlResult = EvCheck::Atl::IsEVSigned(atlPath);
*/

// 自动释放证书的智能指针
using CertContextPtr = std::unique_ptr<const CERT_CONTEXT, decltype(&CertFreeCertificateContext)>;

// 获取证书信息
CertificateInfo GetCertificateInfo(PCCERT_CONTEXT pCertContext) {
	CertificateInfo info;
	info.isEV = false;

	if (!pCertContext) return info;

	// 1. 获取主题名
	DWORD size = CertGetNameStringW(
		pCertContext,
		CERT_NAME_SIMPLE_DISPLAY_TYPE,
		0, NULL, NULL, 0
	);

	if (size > 1) {
		std::vector<wchar_t> buffer(size);
		CertGetNameStringW(
			pCertContext,
			CERT_NAME_SIMPLE_DISPLAY_TYPE,
			0, NULL, buffer.data(), (DWORD)buffer.size()
		);
		info.subjectName = buffer.data();
	}

	// 2. 获取特定属性字段
	struct {
		const char* oid;
		std::wstring& value;
	} attributes[] = {
		{ szOID_ORGANIZATION_NAME, info.organization },
		{ szOID_ORGANIZATIONAL_UNIT_NAME, info.organizationUnit },
		{ szOID_COUNTRY_NAME, info.country },
		{ szOID_COMMON_NAME, info.subjectName }
	};

	for (auto& attr : attributes) {
		size = CertGetNameStringW(
			pCertContext,
			CERT_NAME_ATTR_TYPE,
			0,
			(void*)attr.oid,
			NULL, 0
		);

		if (size > 1) {
			std::vector<wchar_t> buffer(size);
			CertGetNameStringW(
				pCertContext,
				CERT_NAME_ATTR_TYPE,
				0,
				(void*)attr.oid,
				buffer.data(), (DWORD)buffer.size()
			);
			attr.value = buffer.data();
		}
	}

	// 3. 获取序列号
	DWORD serialSize = pCertContext->pCertInfo->SerialNumber.cbData;
	if (serialSize > 0) {
		info.serialNumber.resize(serialSize * 2);
		for (DWORD i = 0; i < serialSize; i++) {
			sprintf(&info.serialNumber[i * 2], "%02X",
				pCertContext->pCertInfo->SerialNumber.pbData[serialSize - i - 1]);
		}
	}

	// 4. 获取证书指纹（SHA1）
	BYTE thumbprint[20];
	DWORD thumbprintSize = sizeof(thumbprint);
	if (CertGetCertificateContextProperty(
		pCertContext,
		CERT_HASH_PROP_ID,
		thumbprint,
		&thumbprintSize
	)) {
		info.thumbprint.resize(thumbprintSize * 2);
		for (DWORD i = 0; i < thumbprintSize; i++) {
			sprintf(&info.thumbprint[i * 2], "%02X", thumbprint[i]);
		}
	}

	// 5. 检查是否为 EV 签名
	PCERT_EXTENSION pExt = CertFindExtension(
		szOID_CERT_POLICIES,
		pCertContext->pCertInfo->cExtension,
		pCertContext->pCertInfo->rgExtension
	);

	if (pExt) {
		CERT_POLICIES_INFO* pPoliciesInfo = NULL;
		DWORD cbPoliciesInfo = 0;

		if (CryptDecodeObject(
			X509_ASN_ENCODING,
			szOID_CERT_POLICIES,
			pExt->Value.pbData,
			pExt->Value.cbData,
			0,
			NULL,
			&cbPoliciesInfo
		)) {
			pPoliciesInfo = (CERT_POLICIES_INFO*)malloc(cbPoliciesInfo);
			if (pPoliciesInfo) {
				if (CryptDecodeObject(
					X509_ASN_ENCODING,
					szOID_CERT_POLICIES,
					pExt->Value.pbData,
					pExt->Value.cbData,
					0,
					pPoliciesInfo,
					&cbPoliciesInfo
				)) {
					// 7. 检查是否包含 EV 策略 OID
					for (DWORD i = 0; i < pPoliciesInfo->cPolicyInfo; i++) {
						CERT_POLICY_INFO& policyInfo = pPoliciesInfo->rgPolicyInfo[i];
						if (strcmp(policyInfo.pszPolicyIdentifier, EV_POLICY_OID) == 0) {
							info.isEV = true;
							break;
						}
					}
				}
				free(pPoliciesInfo);
			}
		}
	}

	return info;
}

// 比较两个证书是否来自同一家公司（严格模式）
bool AreFromSameCompanyStrict(const CertificateInfo& info1, const CertificateInfo& info2) {
	if (!info1.isEV || !info2.isEV) {
		return false; // 两个都必须为 EV 签名
	}

	// 1. 检查组织名（公司名）是否相同
	if (!info1.organization.empty() && !info2.organization.empty()) {
		if (info1.organization == info2.organization) {
			return true;
		}
	}

	// 2. 如果组织名为空，检查主题名
	if (!info1.subjectName.empty() && !info2.subjectName.empty()) {
		// 提取公司名（主题名中通常包含公司名）
		return info1.subjectName == info2.subjectName;
	}

	return false;
}

// 比较两个证书是否来自同一家公司（宽松模式）
bool AreFromSameCompanyLoose(const CertificateInfo& info1, const CertificateInfo& info2) {
	// 检查以下任意一项匹配即可
	std::vector<std::pair<std::wstring, std::wstring>> comparisons = {
		{info1.organization, info2.organization},
		{info1.subjectName, info2.subjectName}
	};

	for (const auto& comp : comparisons) {
		if (!comp.first.empty() && !comp.second.empty()) {
			if (comp.first == comp.second) {
				return true;
			}
		}
	}

	return false;
}

// 获取证书的公共名称比较键
std::wstring GetCompanyComparisonKey(const CertificateInfo& info) {
	if (!info.organization.empty()) {
		return info.organization;
	}

	if (!info.subjectName.empty()) {
		// 尝试从主题名中提取公司名
		// 格式通常为："Company Name" 或 "CN=Company Name, OU=..."
		size_t cnPos = info.subjectName.find(L"CN=");
		if (cnPos != std::wstring::npos) {
			size_t start = cnPos + 3;
			size_t end = info.subjectName.find(L',', start);
			if (end != std::wstring::npos) {
				return info.subjectName.substr(start, end - start);
			}
		}
		return info.subjectName;
	}

	return L"";
}

// 打印证书信息
void PrintCertificateInfo(const CertificateInfo& info, const std::wstring& label) {
	//std::wcout << L"\n=== " << label << L" ===" << std::endl;
	//std::wcout << L"组织: " << info.organization << std::endl;
	//std::wcout << L"主题: " << info.subjectName << std::endl;
	//std::wcout << L"部门: " << info.organizationUnit << std::endl;
	//std::wcout << L"国家: " << info.country << std::endl;
	//std::wcout << L"序列号: " << std::string(info.serialNumber.begin(), info.serialNumber.end()) << std::endl;
	//std::wcout << L"指纹: " << std::string(info.thumbprint.begin(), info.thumbprint.end()) << std::endl;
	//std::wcout << L"EV 签名: " << (info.isEV ? L"是" : L"否") << std::endl;
}

bool IsEVSigned(const wchar_t* filePath) {
	HCERTSTORE hStore = NULL;
	HCRYPTMSG hMsg = NULL;
	PCCERT_CONTEXT pCertContext = NULL;
	bool isEV = false;

	// 1. 打开文件并获取签名信息
	WINTRUST_FILE_INFO fileInfo = { 0 };
	fileInfo.cbStruct = sizeof(WINTRUST_FILE_INFO);
	fileInfo.pcwszFilePath = filePath;
	fileInfo.hFile = NULL;
	fileInfo.pgKnownSubject = NULL;

	WINTRUST_DATA trustData = { 0 };
	trustData.cbStruct = sizeof(WINTRUST_DATA);
	trustData.pPolicyCallbackData = NULL;
	trustData.pSIPClientData = NULL;
	trustData.dwUIChoice = WTD_UI_NONE;
	trustData.fdwRevocationChecks = WTD_REVOKE_NONE;
	trustData.dwUnionChoice = WTD_CHOICE_FILE;
	trustData.pFile = &fileInfo;
	trustData.dwStateAction = WTD_STATEACTION_VERIFY;
	trustData.hWVTStateData = NULL;
	trustData.pwszURLReference = NULL;
	trustData.dwProvFlags = WTD_REVOCATION_CHECK_NONE;
	trustData.dwUIContext = 0;

	GUID policyGuid = WINTRUST_ACTION_GENERIC_VERIFY_V2;

	// 2. 验证签名
	LONG lStatus = WinVerifyTrust(NULL, &policyGuid, &trustData);

	if (lStatus != ERROR_SUCCESS) {
		std::wcerr << L"签名验证失败: " << filePath << std::endl;
		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid, &trustData);
		return false;
	}

	// 3. 获取签名证书信息
	CRYPT_PROVIDER_DATA* pProvData = WTHelperProvDataFromStateData(trustData.hWVTStateData);
	if (!pProvData) {
		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid, &trustData);
		return false;
	}

	// 4. 遍历所有签名者
	for (DWORD signerIndex = 0; signerIndex < pProvData->csSigners; signerIndex++) {
		CRYPT_PROVIDER_SGNR* pSigner = WTHelperGetProvSignerFromChain(pProvData, signerIndex, FALSE, 0);
		if (!pSigner) continue;

		// 5. 获取证书链
		for (DWORD certIndex = 0; certIndex < pSigner->csCertChain; certIndex++) {
			CERT_CHAIN_ELEMENT* pChainElement = (pSigner->pasCertChain[certIndex]).pChainElement;
			PCCERT_CONTEXT pCert = pChainElement->pCertContext;

			if (!pCert) continue;

			// 6. 检查证书策略扩展
			PCERT_EXTENSION pExt = CertFindExtension(
				szOID_CERT_POLICIES,
				pCert->pCertInfo->cExtension,
				pCert->pCertInfo->rgExtension
			);

			if (pExt) {
				CERT_POLICIES_INFO* pPoliciesInfo = NULL;
				DWORD cbPoliciesInfo = 0;

				// 解码策略信息
				if (CryptDecodeObject(
					X509_ASN_ENCODING,
					szOID_CERT_POLICIES,
					pExt->Value.pbData,
					pExt->Value.cbData,
					0,
					NULL,
					&cbPoliciesInfo
				)) {
					pPoliciesInfo = (CERT_POLICIES_INFO*)malloc(cbPoliciesInfo);
					if (pPoliciesInfo) {
						if (CryptDecodeObject(
							X509_ASN_ENCODING,
							szOID_CERT_POLICIES,
							pExt->Value.pbData,
							pExt->Value.cbData,
							0,
							pPoliciesInfo,
							&cbPoliciesInfo
						)) {
							// 7. 检查是否包含 EV 策略 OID
							for (DWORD i = 0; i < pPoliciesInfo->cPolicyInfo; i++) {
								CERT_POLICY_INFO& policyInfo = pPoliciesInfo->rgPolicyInfo[i];
								if (strcmp(policyInfo.pszPolicyIdentifier, EV_POLICY_OID) == 0) {
									isEV = true;
									break;
								}
							}
						}
						free(pPoliciesInfo);
					}
				}
			}

			if (isEV) break;
		}
		if (isEV) break;
	}

	// 8. 清理
	trustData.dwStateAction = WTD_STATEACTION_CLOSE;
	WinVerifyTrust(NULL, &policyGuid, &trustData);

	return isEV;
}

bool CheckEVSignatureSimplified(const wchar_t* filePath) {
	HCERTSTORE hStore = NULL;
	HCRYPTMSG hMsg = NULL;
	PCCERT_CONTEXT pSignerCert = NULL;
	bool isEV = false;

	// 1. 获取签名证书
	HCERTSTORE hExtraStore = NULL;
	HCRYPTMSG hCryptMsg;
	bool bCheck = CryptQueryObject(
		CERT_QUERY_OBJECT_FILE,
		filePath,
		CERT_QUERY_CONTENT_FLAG_PKCS7_SIGNED,
		CERT_QUERY_FORMAT_FLAG_ALL,
		0,
		NULL, NULL, NULL,
		&hStore,
		&hCryptMsg,
		NULL
	);

	if (!bCheck) {
		return false;
	}

	// 2. 获取签名者信息
	DWORD signerInfoSize = 0;
	CryptMsgGetParam(hCryptMsg, CMSG_SIGNER_INFO_PARAM, 0, NULL, &signerInfoSize);

	std::vector<BYTE> signerInfo(signerInfoSize);
	if (CryptMsgGetParam(hCryptMsg, CMSG_SIGNER_INFO_PARAM, 0, signerInfo.data(), &signerInfoSize)) {
		PCMSG_SIGNER_INFO pSignerInfo = (PCMSG_SIGNER_INFO)signerInfo.data();

		// 3. 获取签名证书
		CERT_INFO certInfo = { 0 };
		certInfo.Issuer = pSignerInfo->Issuer;
		certInfo.SerialNumber = pSignerInfo->SerialNumber;

		pSignerCert = CertFindCertificateInStore(
			hStore,
			X509_ASN_ENCODING | PKCS_7_ASN_ENCODING,
			0,
			CERT_FIND_SUBJECT_CERT,
			&certInfo,
			NULL
		);
	}

	// 4. 检查 EV 策略
	if (pSignerCert) {
		// 构建证书链
		CERT_CHAIN_PARA chainPara = { 0 };
		chainPara.cbSize = sizeof(chainPara);

		PCCERT_CHAIN_CONTEXT pChainContext = NULL;
		if (CertGetCertificateChain(
			NULL,
			pSignerCert,
			NULL,
			pSignerCert->hCertStore,
			&chainPara,
			CERT_CHAIN_REVOCATION_CHECK_CHAIN,
			NULL,
			&pChainContext
		)) {
			if (pChainContext->cChain > 0) {
				PCERT_SIMPLE_CHAIN pSimpleChain = pChainContext->rgpChain[0];

				// 检查终端证书（签名证书）
				if (pSimpleChain->cElement > 0) {
					PCERT_CHAIN_ELEMENT pElement = pSimpleChain->rgpElement[0];

					// 检查增强型密钥用法
					for (DWORD i = 0; i < pElement->pCertContext->pCertInfo->cExtension; i++) {
						CERT_EXTENSION& ext = pElement->pCertContext->pCertInfo->rgExtension[i];

						if (strcmp(ext.pszObjId, szOID_ENHANCED_KEY_USAGE) == 0) {
							// 可以进一步检查是否包含代码签名 OID: 1.3.6.1.5.5.7.3.3
							// EV 证书会有特定策略 OID
						}

						// 检查证书策略
						if (strcmp(ext.pszObjId, szOID_CERT_POLICIES) == 0) {
							// 解码并检查是否包含 EV OID
							// EV OID 示例: 2.23.140.1.3 (Microsoft EV Code Signing)
						}
					}

					// 简化检查：查看证书是否有 EV 属性
					DWORD dwFlags = 0;
					CertGetCertificateContextProperty(
						pElement->pCertContext,
						CERT_OCSP_RESPONSE_PROP_ID,
						NULL,
						&dwFlags
					);
				}
			}
			CertFreeCertificateChain(pChainContext);
		}
	}

	// 5. 清理
	if (pSignerCert) CertFreeCertificateContext(pSignerCert);
	if (hStore) CertCloseStore(hStore, 0);
	if (hCryptMsg) CryptMsgClose(hCryptMsg);

	return isEV;
}

std::string GetFileSha256STL(const std::wstring& filePath) {
	// 打开文件
	HANDLE hFile = CreateFileW(filePath.c_str(), GENERIC_READ,
		FILE_SHARE_READ, nullptr, OPEN_EXISTING,
		FILE_FLAG_SEQUENTIAL_SCAN, nullptr);
	if (hFile == INVALID_HANDLE_VALUE) {
		//throw std::runtime_error("Cannot open file");
		return "";
	}
	// 自动关闭句柄
	auto closeFile = [](HANDLE h) { CloseHandle(h); };
	std::unique_ptr<void, decltype(closeFile)> fileGuard(hFile, closeFile);

	// 获取文件大小用于预分配（可选）
	LARGE_INTEGER fileSize;
	if (!GetFileSizeEx(hFile, &fileSize)) {
		//throw std::runtime_error("Cannot get file size");
		return "";
	}

	// 打开 SHA256 算法提供程序
	BCRYPT_ALG_HANDLE hAlg = nullptr;
	if (!BCRYPT_SUCCESS(BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM,
		nullptr, 0))) {
		//throw std::runtime_error("BCryptOpenAlgorithmProvider failed");
		return "";
	}
	auto closeAlg = [](BCRYPT_ALG_HANDLE h) { BCryptCloseAlgorithmProvider(h, 0); };
	std::unique_ptr<void, decltype(closeAlg)> algGuard(hAlg, closeAlg);

	// 创建哈希对象
	BCRYPT_HASH_HANDLE hHash = nullptr;
	if (!BCRYPT_SUCCESS(BCryptCreateHash(hAlg, &hHash, nullptr, 0, nullptr, 0, 0))) {
		return "";
		//throw std::runtime_error("BCryptCreateHash failed");
	}
	auto closeHash = [](BCRYPT_HASH_HANDLE h) { BCryptDestroyHash(h); };
	std::unique_ptr<void, decltype(closeHash)> hashGuard(hHash, closeHash);

	// 分块读取文件并更新哈希
	const DWORD kBufferSize = 1 << 20; // 1 MB
	std::vector<BYTE> buffer(kBufferSize);
	DWORD bytesRead = 0;
	while (ReadFile(hFile, buffer.data(), kBufferSize, &bytesRead, nullptr) && bytesRead > 0) {
		if (!BCRYPT_SUCCESS(BCryptHashData(hHash, buffer.data(), bytesRead, 0))) {
			return "";
			//throw std::runtime_error("BCryptHashData failed");
		}
	}

	// 获取哈希值（SHA256 固定 32 字节）
	const DWORD kHashSize = 32;
	BYTE hash[kHashSize] = {};
	if (!BCRYPT_SUCCESS(BCryptFinishHash(hHash, hash, kHashSize, 0))) {
		return "";
		//throw std::runtime_error("BCryptFinishHash failed");
	}

	// 转换为十六进制字符串
	std::string result;
	result.reserve(kHashSize * 2);
	for (DWORD i = 0; i < kHashSize; ++i) {
		char hex[3];
		sprintf_s(hex, "%02x", hash[i]);
		result.append(hex);
	}
	return result;
}

CString SHA256Hash(const CString& input)
{
	// 将 CString (wide) 转换为 UTF-8
	int utf8Len = WideCharToMultiByte(CP_UTF8, 0, input, -1, nullptr, 0, nullptr, nullptr);
	if (utf8Len <= 0) return CString();
	std::vector<char> utf8Data(utf8Len);
	WideCharToMultiByte(CP_UTF8, 0, input, -1, utf8Data.data(), utf8Len, nullptr, nullptr);

	BCRYPT_ALG_HANDLE hAlg = nullptr;
	BCRYPT_HASH_HANDLE hHash = nullptr;
	NTSTATUS status = BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM, nullptr, 0);
	if (!BCRYPT_SUCCESS(status)) return CString();

	status = BCryptCreateHash(hAlg, &hHash, nullptr, 0, nullptr, 0, 0);
	if (!BCRYPT_SUCCESS(status)) {
		BCryptCloseAlgorithmProvider(hAlg, 0);
		return CString();
	}

	// 不包含结尾空字符的哈希，使用 utf8Len - 1 长度
	status = BCryptHashData(hHash, (PUCHAR)utf8Data.data(), utf8Len - 1, 0);
	if (!BCRYPT_SUCCESS(status)) {
		BCryptDestroyHash(hHash);
		BCryptCloseAlgorithmProvider(hAlg, 0);
		return CString();
	}

	DWORD hashLen = 0, cbResult = 0;
	status = BCryptGetProperty(hAlg, BCRYPT_HASH_LENGTH, (PUCHAR)&hashLen, sizeof(hashLen), &cbResult, 0);
	if (!BCRYPT_SUCCESS(status)) {
		BCryptDestroyHash(hHash);
		BCryptCloseAlgorithmProvider(hAlg, 0);
		return CString();
	}

	std::vector<BYTE> hash(hashLen);
	status = BCryptFinishHash(hHash, hash.data(), hashLen, 0);
	BCryptDestroyHash(hHash);
	BCryptCloseAlgorithmProvider(hAlg, 0);
	if (!BCRYPT_SUCCESS(status)) return CString();

	// 转换为十六进制字符串
	CString result;
	for (BYTE b : hash) {
		result.AppendFormat(L"%02x", b);
	}
	return result;
}

CString GetFileSha256(const CString& filePath) {
	// 打开文件
	HANDLE hFile = CreateFileW(filePath, GENERIC_READ, FILE_SHARE_READ,
		nullptr, OPEN_EXISTING,
		FILE_FLAG_SEQUENTIAL_SCAN, nullptr);
	if (hFile == INVALID_HANDLE_VALUE) {
		//throw std::runtime_error("Cannot open file");
		return _T("");
	}

	auto closeFile = [](HANDLE h) { CloseHandle(h); };
	std::unique_ptr<void, decltype(closeFile)> fileGuard(hFile, closeFile);

	// 打开 SHA256 算法提供程序
	BCRYPT_ALG_HANDLE hAlg = nullptr;
	if (!BCRYPT_SUCCESS(BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM,
		nullptr, 0))) {
		return _T("");
		//throw std::runtime_error("BCryptOpenAlgorithmProvider failed");
	}
	auto closeAlg = [](BCRYPT_ALG_HANDLE h) { BCryptCloseAlgorithmProvider(h, 0); };
	std::unique_ptr<void, decltype(closeAlg)> algGuard(hAlg, closeAlg);

	// 创建哈希对象
	BCRYPT_HASH_HANDLE hHash = nullptr;
	if (!BCRYPT_SUCCESS(BCryptCreateHash(hAlg, &hHash, nullptr, 0, nullptr, 0, 0))) {
		//throw std::runtime_error("BCryptCreateHash failed");
		return L"";
	}
	auto closeHash = [](BCRYPT_HASH_HANDLE h) { BCryptDestroyHash(h); };
	std::unique_ptr<void, decltype(closeHash)> hashGuard(hHash, closeHash);

	// 分块读取文件
	const DWORD kBufferSize = 1 << 20; // 1 MB
	std::vector<BYTE> buffer(kBufferSize);
	DWORD bytesRead = 0;
	while (ReadFile(hFile, buffer.data(), kBufferSize, &bytesRead, nullptr) &&
		bytesRead > 0) {
		if (!BCRYPT_SUCCESS(BCryptHashData(hHash, buffer.data(), bytesRead, 0))) {
			//throw std::runtime_error("BCryptHashData failed");
			return _T("");
		}
	}

	// 获取哈希值
	const DWORD kHashSize = 32;
	BYTE hash[kHashSize] = {};
	if (!BCRYPT_SUCCESS(BCryptFinishHash(hHash, hash, kHashSize, 0))) {
		//throw std::runtime_error("BCryptFinishHash failed");
		return _T("");
	}

	// 转换为十六进制 CString
	CString result;
	for (DWORD i = 0; i < kHashSize; ++i) {
		CString hex;
		hex.Format(L"%02x", hash[i]);
		result += hex;
	}
	return result;
}

CString GetFileEVSigned(const CString& filePath) {
	CString result = _T("false");
	bool EVSigned = EvCheck::IsEVSigned(filePath);
	if (EVSigned)
		result = _T("true");
	return result;
}

std::wstring GetAgentPathFromCommandLine() {
	LPWSTR cmdLine = GetCommandLineW();
	int argc;
	LPWSTR* argv = CommandLineToArgvW(cmdLine, &argc);
	if (!argv) return L"";

	std::wstring result;
	for (int i = 0; i < argc; ++i) {
		std::wstring arg = argv[i];
		if (arg.find(L"CreatorAgent:") == 0) {
			result = arg;
			break;
		}
	}

	LocalFree(argv); // 释放 CommandLineToArgvW 分配的内存
	return result;
}

std::wstring TrimQuotes(const std::wstring& s) {
	if (s.size() >= 2 && s.front() == L'"' && s.back() == L'"')
		return s.substr(1, s.size() - 2);
	return s;
}


namespace Creator {
	namespace fs = std::filesystem;

	HWND FindMainWindowOfCurrentProcess() {
		struct EnumData {
			DWORD pid;
			HWND result;
		} data = { GetCurrentProcessId(), nullptr };

		EnumWindows([](HWND hwnd, LPARAM lParam) -> BOOL {
			auto* pData = reinterpret_cast<EnumData*>(lParam);
			DWORD pid = 0;
			GetWindowThreadProcessId(hwnd, &pid);
			if (pid != pData->pid) return TRUE;

			// 必须是顶层窗口（无父窗口）
			if (GetParent(hwnd) != NULL) return TRUE;

			// 必须有标准窗口装饰
			LONG style = GetWindowLong(hwnd, GWL_STYLE);
			if (!(style & WS_OVERLAPPEDWINDOW)) return TRUE;

			// 必须可见
			if (!IsWindowVisible(hwnd)) return TRUE;

			// 排除被拥有的窗口（如模态对话框）
			if (GetWindow(hwnd, GW_OWNER) != NULL) return TRUE;

			// 优先选择有 WS_EX_APPWINDOW 的窗口（任务栏有图标）
			LONG exStyle = GetWindowLong(hwnd, GWL_EXSTYLE);
			if (exStyle & WS_EX_APPWINDOW) {
				pData->result = hwnd;
				return FALSE; // 找到最符合条件的，停止枚举
			}

			// 否则保存第一个通过的作为备选
			if (pData->result == NULL) {
				pData->result = hwnd;
			}
			return TRUE;
			}, reinterpret_cast<LPARAM>(&data));

		return data.result;
	}

	inline std::wstring BuildCommandLine(const std::wstring& exePath,
		const std::wstring& startInfoPath)   // 文件绝对路径
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
		if (!startInfoPath.empty()) {
			cmd << L" /StartInfo ";          // 参数名，可根据需要改为 --start-info 等
			if (startInfoPath.find(L' ') != std::wstring::npos ||
				startInfoPath.find(L'\t') != std::wstring::npos) {
				cmd << L'"' << startInfoPath << L'"';
			}
			else {
				cmd << startInfoPath;
			}
		}

		return cmd.str();
	}

	inline CString GetArgFromCmdLine(CString strArgName)
	{
		LPWSTR cmdLine = GetCommandLineW();
		int argc;
		LPWSTR* argv = CommandLineToArgvW(cmdLine, &argc);
		if (argv == nullptr) {
			return L"";
		}

		std::wstring startInfoPath;
		for (int i = 0; i < argc; ++i) {
			// 查找 /StartInfo 参数（不区分大小写）
			if (_wcsicmp(argv[i], strArgName) == 0) {
				// 确保下一个参数存在
				if (i + 1 < argc) {
					startInfoPath = argv[i + 1];
				}
				break;
			}
		}
		LocalFree(argv);
		return startInfoPath.c_str();
	}

	// ---------- CString → UTF-8 ----------
	inline std::string CStringToUtf8(const CString& str) {
		if (str.IsEmpty()) return {};
		int len = WideCharToMultiByte(CP_UTF8, 0, str, str.GetLength(),
			nullptr, 0, nullptr, nullptr);
		std::string result(len, 0);
		WideCharToMultiByte(CP_UTF8, 0, str, str.GetLength(),
			&result[0], len, nullptr, nullptr);
		return result;
	}

	vector<CString> SplitCString(LPCTSTR pszStr, LPCTSTR pszDelim = _T(","))
	{
		std::vector<CString> vecResult;
		CString strSource(pszStr);
		int nPos = 0;
		CString strToken = strSource.Tokenize(pszDelim, nPos);

		while (!strToken.IsEmpty())
		{
			vecResult.push_back(strToken);
			strToken = strSource.Tokenize(pszDelim, nPos);
		}

		return vecResult;
	}

	// ---------- 相对路径（基于小写比较）----------
	inline CString GetRelativePath(const CString& absPath, const CString& rootAbsPath) {
		CString root = rootAbsPath;
		root.MakeLower();
		if (!root.IsEmpty() && root[root.GetLength() - 1] != L'\\')
			root += L'\\';
		CString absLower = absPath;
		absLower.MakeLower();
		if (absLower.Find(root) == 0)
			return absPath.Mid(root.GetLength());   // 返回原始大小写的相对路径（若需要大小写可调整）
		return absPath;
	}

	// ---------- XML 转义 ----------
	inline std::string EscapeXml(const CString& str) {
		std::string utf8 = CStringToUtf8(str);
		std::string out;
		out.reserve(utf8.size());
		for (char c : utf8) {
			switch (c) {
			case '<': out += "&lt;"; break;
			case '>': out += "&gt;"; break;
			case '&': out += "&amp;"; break;
			case '"': out += "&quot;"; break;
			case '\'': out += "&apos;"; break;
			default:  out += c;
			}
		}
		return out;
	}

	// ---------- 树节点 ----------
	struct Node {
		CString name;                 // 文件名（不含扩展名）或目录名
		bool isDirectory = false;
		CString path;                 // 相对路径（目录或完整文件相对路径）
		std::vector<CString> attrValues;
		std::vector<Node> children;
	};

	// ---------- 属性函数类型 ----------
	using SingleAttrFunc = std::function<CString(const CString& dllPath)>;

	// ---------- 排序辅助函数（目录优先，名称升序）----------
	inline void SortNodeChildren(Node& node) {
		std::sort(node.children.begin(), node.children.end(),
			[](const Node& a, const Node& b) {
				if (a.isDirectory != b.isDirectory) return a.isDirectory > b.isDirectory;
				CString an = a.name, bn = b.name;
				an.MakeLower();
				bn.MakeLower();
				return an < bn;
			});
	}

	// ---------- 收集所有文件节点（展平用）----------
	void CollectAllFiles(const Node& node, std::vector<Node>& out) {
		if (node.isDirectory) {
			for (const auto& child : node.children)
				CollectAllFiles(child, out);
		}
		else {
			out.push_back(node);
		}
	}

	// ---------- XML 输出（动态标签，条件跳过检查属性）----------
	void WriteXmlNode(std::ostream& os,
		const Node& node,
		const std::vector<CString>& attrNames,
		int indent = 0,
		size_t checkAttrIndex = (size_t)-1) {
		std::string ind(indent, ' ');
		if (node.isDirectory) {
			std::string escapedName = EscapeXml(node.name);
			os << ind << "<folder name=\"" << escapedName << "\">\n";
			for (const auto& child : node.children)
				WriteXmlNode(os, child, attrNames, indent + 2, checkAttrIndex);
			os << ind << "</folder>\n";
		}
		else {
			// 动态标签名：扩展名（无点）
			CString tagName = L"file";
			fs::path fn(node.name.GetString());   // node.name 已不含扩展名，需从 path 中提取扩展名
			// 注意：此处依赖 node.path 包含扩展名，例如 "sub\core.dll"
			fs::path fullPath(node.path.GetString());
			std::wstring ext = fullPath.extension().wstring();
			if (!ext.empty() && ext[0] == L'.')
				ext = ext.substr(1);
			if (!ext.empty())
				tagName = ext.c_str();


			//CString strName = node.name;
			//int nPos = strName.ReverseFind('.');
			//if (nPos != -1)
			//	strName = strName.Left(nPos);
			//CString pathName = node.path;
			//nPos = strName.ReverseFind('\\');
			//if (nPos != -1)
			//	pathName = pathName.Left(nPos);
			//else
			//	pathName = _T("");
			//nPos = pathName.ReverseFind('\\');
			///////////////////////////////////////////
			//os << ind << "<" << EscapeXml(tagName)
			//	<< " name=\"" << EscapeXml(strName);
			//if (!node.path.IsEmpty()) {
			//	CString pathName = node.path;
			//	if (pathName != _T(""))
			//		os << "\" path=\"" << EscapeXml(node.path) << "\"";
			//	else
			//		os << "\"";
			//}
			////////////////////////////////////////////


			os << ind << "<" << EscapeXml(tagName)
				<< " name=\"" << EscapeXml(node.name) << "\"";
			if (!node.path.IsEmpty())
				os << " path=\"" << EscapeXml(node.path) << "\"";
			for (size_t i = 0; i < attrNames.size(); ++i) {
				if (checkAttrIndex < attrNames.size() && i == checkAttrIndex) {
					CString val = node.attrValues[i];
					val.MakeLower();
					if (val == L"false" || val.IsEmpty()) continue;
				}
				os << " " << EscapeXml(attrNames[i])
					<< "=\"" << EscapeXml(node.attrValues[i]) << "\"";
			}
			os << "/>\n";
		}
	}

	// ---------- 目录扫描（递归结束后排序）----------
	void ScanDirectory(const fs::path& dirPath,
		Node& parentNode,
		const std::vector<CString>& attrNames,
		const std::vector<SingleAttrFunc>& attrFuncs,
		const std::vector<CString>& extensions,
		const CString& rootAbsPath,
		const std::vector<CString>& excludePatterns) {
		bool matchAll = false;
		for (const auto& ext : extensions) {
			CString lowExt = ext;
			lowExt.MakeLower();
			if (lowExt == L"*.*") {
				matchAll = true;
				break;
			}
		}

		try {
			for (const auto& entry : fs::directory_iterator(dirPath)) {
				if (entry.is_directory()) {
					Node dirNode;
					dirNode.name = entry.path().filename().wstring().c_str();
					dirNode.name.MakeLower();               // 目录名统一小写
					dirNode.isDirectory = true;

					ScanDirectory(entry.path(), dirNode, attrNames, attrFuncs,
						extensions, rootAbsPath, excludePatterns);
					if (!dirNode.children.empty()) {
						parentNode.children.push_back(std::move(dirNode));
					}
				}
				else if (entry.is_regular_file()) {
					bool matched = matchAll;
					if (!matched) {
						CString ext = entry.path().extension().wstring().c_str();
						ext.MakeLower();
						for (const auto& validExt : extensions) {
							CString lowValid = validExt;
							lowValid.MakeLower();
							if (lowValid == L"*.*") continue;
							if (ext == lowValid) {
								matched = true;
								break;
							}
						}
					}

					if (matched) {
						bool excluded = false;
						for (const auto& pat : excludePatterns) {
							if (PathMatchSpecW(entry.path().filename().c_str(), pat.GetString())) {
								excluded = true;
								break;
							}
						}
						if (excluded)
							continue;

						Node fileNode;
						// 文件名保留原始大小写但转为小写存储（确保指纹稳定）
						CString fullName = entry.path().filename().wstring().c_str();
						fullName.MakeLower();                     // 统一小写
						fileNode.name = fullName.Left(fullName.ReverseFind(L'.'));   // 去掉扩展名
						fileNode.isDirectory = false;

						CString absPath = fs::absolute(entry.path()).wstring().c_str();
						absPath.MakeLower();
						// 获取完整相对路径（包含文件名）
						CString relativeFull = GetRelativePath(absPath, rootAbsPath);
						fileNode.path = relativeFull;            // 修复：保留文件名

						fileNode.attrValues.resize(attrNames.size());
						for (size_t i = 0; i < attrNames.size(); ++i) {
							try {
								fileNode.attrValues[i] = attrFuncs[i](absPath);
							}
							catch (const std::exception& e) {
								fileNode.attrValues[i] = CString(L"ERROR: ") + CString(e.what());
							}
							catch (...) {
								fileNode.attrValues[i] = L"ERROR: unknown exception";
							}
						}
						parentNode.children.push_back(std::move(fileNode));
					}
				}
			}
			SortNodeChildren(parentNode);  // 排序保证输出顺序确定
		}
		catch (const fs::filesystem_error&) {
			// 忽略无权限目录
		}
	}

	// ---------- 分离正常 / 未通过（基于检查属性）----------
	void SeparateByCheck(Node& node,
		const CString& checkAttrName,
		std::vector<Node>& normalOut,
		std::vector<Node>& uncheckedOut,
		size_t checkAttrIndex) {
		if (node.isDirectory) {
			Node normalDir{ node.name, true, L"", {}, {} };
			Node uncheckedDir{ node.name, true, L"", {}, {} };
			for (auto& child : node.children) {
				SeparateByCheck(child, checkAttrName, normalDir.children, uncheckedDir.children, checkAttrIndex);
			}
			if (!normalDir.children.empty())
				normalOut.push_back(std::move(normalDir));
			if (!uncheckedDir.children.empty())
				uncheckedOut.push_back(std::move(uncheckedDir));
		}
		else {
			bool isOk = true;
			if (checkAttrIndex < node.attrValues.size()) {
				CString val = node.attrValues[checkAttrIndex];
				val.MakeLower();
				if (!val.IsEmpty() && val != L"true")
					isOk = false;
			}
			if (isOk)
				normalOut.push_back(std::move(node));
			else
				uncheckedOut.push_back(std::move(node));
		}
	}

	// ---------- 按白名单路径分离未通过节点 ----------
	void SeparateByWhitelist(const std::vector<Node>& uncheckedChildren,
		const std::vector<CString>& whitelistPatterns,
		std::vector<Node>& blockedOut,
		std::vector<Node>& whitelistedOut) {
		// 构建虚拟根节点以复用递归逻辑
		Node uncheckedRoot{ L"", true, L"", {}, uncheckedChildren };

		// 白名单前缀转为小写并以 '\\' 结尾
		std::vector<CString> lowerPatterns = whitelistPatterns;
		for (auto& p : lowerPatterns) {
			p.MakeLower();
			if (!p.IsEmpty() && p[p.GetLength() - 1] != L'\\')
				p += L'\\';
		}

		std::function<void(const Node&, std::vector<Node>&, std::vector<Node>&)> recurse =
			[&](const Node& node, std::vector<Node>& blocked, std::vector<Node>& whitelisted) {
			if (node.isDirectory) {
				Node blockedDir{ node.name, true, L"", {}, {} };
				Node whitelistedDir{ node.name, true, L"", {}, {} };
				for (const auto& child : node.children) {
					recurse(child, blockedDir.children, whitelistedDir.children);
				}
				if (!blockedDir.children.empty())
					blocked.push_back(std::move(blockedDir));
				if (!whitelistedDir.children.empty())
					whitelisted.push_back(std::move(whitelistedDir));
			}
			else {
				// 判断文件路径是否匹配白名单前缀
				CString pathLower = node.path;
				pathLower.MakeLower();
				bool isWhite = false;
				for (const auto& prefix : lowerPatterns) {
					if (pathLower.Find(prefix) == 0) {
						isWhite = true;
						break;
					}
				}
				if (isWhite)
					whitelisted.push_back(node);
				else
					blocked.push_back(node);
			}
			};

		recurse(uncheckedRoot, blockedOut, whitelistedOut);
	}

	// ---------- 对外主接口 ----------
	inline CString GenerateCreatorXml(
		const CString& rootPath,
		const CString& outputXmlPath,
		const std::vector<std::pair<CString, SingleAttrFunc>>& attributes,
		const std::vector<CString>& extensions = { L".dll" },
		bool preserveHierarchy = true,
		const CString& rootElementName = L"dll_list",
		const std::vector<CString>& excludePatterns = {},
		bool includeBase = true,
		SingleAttrFunc checkFunc = nullptr,
		const std::vector<CString>& checkExtensions = {},
		const CString& checkAttrName = L"EVCheck",
		const CString& uncheckedNodeName = L"unchecked",
		bool uncheckedPreserveHierarchy = true,
		const std::vector<CString>& uncheckedWhitelistPatterns = {},
		const CString& uncheckedBlockedNodeName = L"unchecked",
		const CString& uncheckedWhitelistedNodeName = L"unchecked_whitelisted",
		CString* outUncheckedBlockedXml = nullptr,      // [出] blocked 节点的 XML 片段
		CString* outUncheckedWhitelistedXml = nullptr   // [出] whitelisted 节点的 XML 片段
	)
	{
		// 1. 根路径规范化
		std::error_code ec;
		fs::path root = fs::canonical(rootPath.GetString(), ec);
		if (ec) {
			root = fs::absolute(rootPath.GetString());
			if (!fs::exists(root) || !fs::is_directory(root))
				return CString();   // 路径无效，静默返回空字符串
		}

		CString rootAbsPath = root.wstring().c_str();
		if (!rootAbsPath.IsEmpty() && rootAbsPath[rootAbsPath.GetLength() - 1] != L'\\')
			rootAbsPath += L'\\';
		rootAbsPath.MakeLower();

		// 2. 构建属性列表（可能追加 check 属性）
		std::vector<CString> attrNames;
		std::vector<SingleAttrFunc> attrFuncs;
		for (auto& p : attributes) {
			attrNames.push_back(p.first);
			attrFuncs.push_back(p.second);
		}

		size_t checkAttrIndex = (size_t)-1;
		if (checkFunc != nullptr) {
			// 标准化检查扩展名
			std::vector<CString> normCheckExts = checkExtensions;
			for (auto& e : normCheckExts) {
				e.MakeLower();
				if (!e.IsEmpty() && e[0] != L'.') e = L"." + e;
			}
			attrNames.push_back(checkAttrName);
			checkAttrIndex = attrNames.size() - 1;
			attrFuncs.push_back([=](const CString& dllPath) -> CString {
				CString ext = PathFindExtensionW(dllPath);
				ext.MakeLower();
				for (const auto& ve : normCheckExts)
					if (ext == ve) return checkFunc(dllPath);
				return L"";
				});
		}

		// 3. 标准化扩展名过滤列表
		std::vector<CString> normExts = extensions;
		for (auto& e : normExts) {
			e.MakeLower();
			if (e != L"*.*" && !e.IsEmpty() && e[0] != L'.')
				e = L"." + e;
		}

		// 4. 扫描目录，构建节点树
		Node rootNode;
		rootNode.name = L"";
		rootNode.isDirectory = true;
		rootNode.path = rootAbsPath;
		ScanDirectory(root, rootNode, attrNames, attrFuncs, normExts, rootAbsPath, excludePatterns);

		// 5. 分离正常 / 未通过检查的节点
		std::vector<Node> normalChildren, uncheckedChildren;
		if (checkFunc != nullptr) {
			SeparateByCheck(rootNode, checkAttrName, normalChildren, uncheckedChildren, checkAttrIndex);
		}
		else {
			normalChildren = std::move(rootNode.children);
		}

		// 6. 正常部分展平控制
		if (!preserveHierarchy && !normalChildren.empty()) {
			std::vector<Node> flat;
			for (auto& child : normalChildren) {
				if (child.isDirectory) CollectAllFiles(child, flat);
				else flat.push_back(std::move(child));
			}
			normalChildren = std::move(flat);
		}

		// 7. 准备输出流
		std::ostringstream oss;              // 完整 XML
		std::ostringstream blockedOss;       // blocked 节点片段
		std::ostringstream whitelistedOss;   // whitelisted 节点片段

		// 8. 写入 BOM 和 XML 声明（UTF-8）
		const unsigned char bom[] = { 0xEF, 0xBB, 0xBF };
		oss.write(reinterpret_cast<const char*>(bom), sizeof(bom));
		oss << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";

		// 9. 根元素开始标签
		oss << "<" << EscapeXml(rootElementName);
		if (includeBase)
			oss << " base=\"" << EscapeXml(rootAbsPath) << "\"";
		oss << ">\n";

		// 10. 输出正常文件节点
		for (auto& child : normalChildren)
			WriteXmlNode(oss, child, attrNames, 2, checkAttrIndex);

		// 11. 处理未通过检查的文件节点
		if (!uncheckedChildren.empty()) {
			if (!uncheckedWhitelistPatterns.empty()) {
				// ---------- 有白名单：拆分为 blocked 和 whitelisted ----------
				std::vector<Node> blocked, whitelisted;
				SeparateByWhitelist(uncheckedChildren, uncheckedWhitelistPatterns, blocked, whitelisted);

				// 通用输出 Lambda：根据 isBlocked 标记写入不同流
				auto outputGroup = [&](const std::vector<Node>& children,
					const CString& tagName, bool isBlocked) {
						if (children.empty()) return;  // 空组不输出

						// 主 XML 流
						oss << "  <" << EscapeXml(tagName) << ">\n";

						// 对应的分离流
						std::ostringstream& separateStream = isBlocked ? blockedOss : whitelistedOss;
						separateStream << "<" << EscapeXml(tagName) << ">\n";

						if (uncheckedPreserveHierarchy) {
							for (const auto& child : children) {
								WriteXmlNode(oss, child, attrNames, 4, checkAttrIndex);
								WriteXmlNode(separateStream, child, attrNames, 2, checkAttrIndex);
							}
						}
						else {
							// 展平输出
							Node groupRoot{ L"", true, L"", {}, children };
							std::vector<Node> flat;
							CollectAllFiles(groupRoot, flat);
							for (auto& f : flat) {
								WriteXmlNode(oss, f, attrNames, 4, checkAttrIndex);
								WriteXmlNode(separateStream, f, attrNames, 2, checkAttrIndex);
							}
						}

						oss << "  </" << EscapeXml(tagName) << ">\n";
						separateStream << "</" << EscapeXml(tagName) << ">\n";
					};

				// ★ 分别输出两个组
				outputGroup(blocked, uncheckedBlockedNodeName, true);
				outputGroup(whitelisted, uncheckedWhitelistedNodeName, false);
			}
			else {
				// ---------- 无白名单：全部视为 blocked ----------
				oss << "  <" << EscapeXml(uncheckedNodeName) << ">\n";
				blockedOss << "<" << EscapeXml(uncheckedNodeName) << ">\n";

				if (uncheckedPreserveHierarchy) {
					for (auto& child : uncheckedChildren) {
						WriteXmlNode(oss, child, attrNames, 4, checkAttrIndex);
						WriteXmlNode(blockedOss, child, attrNames, 2, checkAttrIndex);
					}
				}
				else {
					Node uncheckedRoot{ L"", true, L"", {}, std::move(uncheckedChildren) };
					std::vector<Node> flat;
					CollectAllFiles(uncheckedRoot, flat);
					for (auto& f : flat) {
						WriteXmlNode(oss, f, attrNames, 4, checkAttrIndex);
						WriteXmlNode(blockedOss, f, attrNames, 2, checkAttrIndex);
					}
				}

				oss << "  </" << EscapeXml(uncheckedNodeName) << ">\n";
				blockedOss << "</" << EscapeXml(uncheckedNodeName) << ">\n";
				// whitelistedOss 保持为空
			}
		}

		// 12. 闭合根元素
		oss << "</" << EscapeXml(rootElementName) << ">\n";

		// 13. 获取完整 XML 字符串（UTF-8）
		std::string utf8Xml = oss.str();

		// 14. 写入磁盘文件（仅当 outputXmlPath 非空时）
		if (!outputXmlPath.IsEmpty()) {
			std::ofstream ofs(outputXmlPath.GetString(), std::ios::binary);
			if (ofs)
				ofs.write(utf8Xml.data(), utf8Xml.size());
		}

		// 15. 填充输出参数（如果有请求）
		auto writeOutParam = [&](CString* out, std::ostringstream& stream) {
			if (out) {
				std::string str = stream.str();
				if (!str.empty()) {
					// 将 UTF-8 片段转换为宽字符 CString
					*out = CString(CA2W(str.c_str(), CP_UTF8));
				}
				else {
					*out = L"";
				}
			}
			};
		writeOutParam(outUncheckedBlockedXml, blockedOss);
		writeOutParam(outUncheckedWhitelistedXml, whitelistedOss);

		// 16. 返回完整 XML 字符串（含 BOM）
		return CString(CA2W(utf8Xml.c_str(), CP_UTF8));
	}

	inline CString GenerateCreatorXml0(
		const CString& rootPath,
		const CString& outputXmlPath,
		const std::vector<std::pair<CString, SingleAttrFunc>>& attributes,
		const std::vector<CString>& extensions = { L".dll" },
		bool preserveHierarchy = true,
		const CString& rootElementName = L"dll_list",
		const std::vector<CString>& excludePatterns = {},
		bool includeBase = true,
		SingleAttrFunc checkFunc = nullptr,
		const std::vector<CString>& checkExtensions = {},
		const CString& checkAttrName = L"EVCheck",
		const CString& uncheckedNodeName = L"unchecked",
		bool uncheckedPreserveHierarchy = true,
		const std::vector<CString>& uncheckedWhitelistPatterns = {},
		const CString& uncheckedBlockedNodeName = L"unchecked",
		const CString& uncheckedWhitelistedNodeName = L"unchecked_whitelisted",
		CString* outUncheckedBlockedXml = nullptr,   // ★ blocked 节点片段
		CString* outUncheckedWhitelistedXml = nullptr // ★ whitelisted 节点片段
	)
	{
		// 1. 根路径规范化
		std::error_code ec;
		fs::path root = fs::canonical(rootPath.GetString(), ec);
		if (ec) {
			root = fs::absolute(rootPath.GetString());
			if (!fs::exists(root) || !fs::is_directory(root))
				return CString();
		}

		CString rootAbsPath = root.wstring().c_str();
		if (!rootAbsPath.IsEmpty() && rootAbsPath[rootAbsPath.GetLength() - 1] != L'\\')
			rootAbsPath += L'\\';
		rootAbsPath.MakeLower();

		// 2. 构建属性列表（可能追加检查属性）
		std::vector<CString> attrNames;
		std::vector<SingleAttrFunc> attrFuncs;
		for (auto& p : attributes) {
			attrNames.push_back(p.first);
			attrFuncs.push_back(p.second);
		}

		size_t checkAttrIndex = (size_t)-1;
		if (checkFunc != nullptr) {
			std::vector<CString> normCheckExts = checkExtensions;
			for (auto& e : normCheckExts) {
				e.MakeLower();
				if (!e.IsEmpty() && e[0] != L'.') e = L"." + e;
			}
			attrNames.push_back(checkAttrName);
			checkAttrIndex = attrNames.size() - 1;
			attrFuncs.push_back([=](const CString& dllPath) -> CString {
				CString ext = PathFindExtensionW(dllPath);
				ext.MakeLower();
				for (const auto& ve : normCheckExts)
					if (ext == ve) return checkFunc(dllPath);
				return L"";
				});
		}

		// 3. 标准化扩展名
		std::vector<CString> normExts = extensions;
		for (auto& e : normExts) {
			e.MakeLower();
			if (e != L"*.*" && !e.IsEmpty() && e[0] != L'.')
				e = L"." + e;
		}

		// 4. 扫描构建树
		Node rootNode;
		rootNode.name = L"";
		rootNode.isDirectory = true;
		rootNode.path = rootAbsPath;
		ScanDirectory(root, rootNode, attrNames, attrFuncs, normExts, rootAbsPath, excludePatterns);

		// 5. 分离正常 / 未通过检查的节点
		std::vector<Node> normalChildren, uncheckedChildren;
		if (checkFunc != nullptr) {
			SeparateByCheck(rootNode, checkAttrName, normalChildren, uncheckedChildren, checkAttrIndex);
		}
		else {
			normalChildren = std::move(rootNode.children);
		}

		// 6. 正常部分展平控制
		if (!preserveHierarchy && !normalChildren.empty()) {
			std::vector<Node> flat;
			for (auto& child : normalChildren) {
				if (child.isDirectory) CollectAllFiles(child, flat);
				else flat.push_back(std::move(child));
			}
			normalChildren = std::move(flat);
		}

		// 7. 准备输出流
		std::ostringstream oss;              // 完整 XML
		std::ostringstream blockedOss;       // blocked 节点片段（传给 outUncheckedBlockedXml）
		std::ostringstream whitelistedOss;   // whitelisted 节点片段（传给 outUncheckedWhitelistedXml）

		// 8. BOM 和 XML 声明
		const unsigned char bom[] = { 0xEF, 0xBB, 0xBF };
		oss.write(reinterpret_cast<const char*>(bom), sizeof(bom));
		oss << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";

		// 9. 根元素开始标签
		oss << "<" << EscapeXml(rootElementName);
		if (includeBase)
			oss << " base=\"" << EscapeXml(rootAbsPath) << "\"";
		oss << ">\n";

		// 10. 输出正常文件
		for (auto& child : normalChildren)
			WriteXmlNode(oss, child, attrNames, 2, checkAttrIndex);

		// 11. 处理未通过检查的文件
		if (!uncheckedChildren.empty()) {
			if (!uncheckedWhitelistPatterns.empty()) {
				// ------ 有白名单：拆分为 blocked 和 whitelisted ------
				std::vector<Node> blocked, whitelisted;
				SeparateByWhitelist(uncheckedChildren, uncheckedWhitelistPatterns, blocked, whitelisted);

				// 通用输出 Lambda：根据 isBlocked 标记写入不同的流
				auto outputGroup = [&](const std::vector<Node>& children,
					const CString& tagName, bool isBlocked) {
						if (children.empty()) return;

						// 主 XML 流
						oss << "  <" << EscapeXml(tagName) << ">\n";

						// 对应的分离流
						std::ostringstream& separateStream = isBlocked ? blockedOss : whitelistedOss;
						separateStream << "<" << EscapeXml(tagName) << ">\n";

						if (uncheckedPreserveHierarchy) {
							for (const auto& child : children) {
								WriteXmlNode(oss, child, attrNames, 4, checkAttrIndex);
								WriteXmlNode(separateStream, child, attrNames, 2, checkAttrIndex);
							}
						}
						else {
							// 展平
							Node groupRoot{ L"", true, L"", {}, children };
							std::vector<Node> flat;
							CollectAllFiles(groupRoot, flat);
							for (auto& f : flat) {
								WriteXmlNode(oss, f, attrNames, 4, checkAttrIndex);
								WriteXmlNode(separateStream, f, attrNames, 2, checkAttrIndex);
							}
						}

						oss << "  </" << EscapeXml(tagName) << ">\n";
						separateStream << "</" << EscapeXml(tagName) << ">\n";
					};

				// ★ 分别输出，空组自动跳过
				outputGroup(blocked, uncheckedBlockedNodeName, true);
				outputGroup(whitelisted, uncheckedWhitelistedNodeName, false);
			}
			else {
				// ------ 无白名单：全部视为 blocked，输出一个 unchecked 节点 ------
				oss << "  <" << EscapeXml(uncheckedNodeName) << ">\n";
				blockedOss << "<" << EscapeXml(uncheckedNodeName) << ">\n";

				if (uncheckedPreserveHierarchy) {
					for (auto& child : uncheckedChildren) {
						WriteXmlNode(oss, child, attrNames, 4, checkAttrIndex);
						WriteXmlNode(blockedOss, child, attrNames, 2, checkAttrIndex);
					}
				}
				else {
					Node uncheckedRoot{ L"", true, L"", {}, std::move(uncheckedChildren) };
					std::vector<Node> flat;
					CollectAllFiles(uncheckedRoot, flat);
					for (auto& f : flat) {
						WriteXmlNode(oss, f, attrNames, 4, checkAttrIndex);
						WriteXmlNode(blockedOss, f, attrNames, 2, checkAttrIndex);
					}
				}

				oss << "  </" << EscapeXml(uncheckedNodeName) << ">\n";
				blockedOss << "</" << EscapeXml(uncheckedNodeName) << ">\n";
				// 注意：此时 whitelistedOss 为空（无 whitelisted 文件）
			}
		}

		// 12. 闭合根元素
		oss << "</" << EscapeXml(rootElementName) << ">\n";

		// 13. 获取 UTF-8 字符串
		std::string utf8Xml = oss.str();

		// 14. 如果 outputXmlPath 非空，写入文件
		if (!outputXmlPath.IsEmpty()) {
			std::ofstream ofs(outputXmlPath.GetString(), std::ios::binary);
			if (ofs)
				ofs.write(utf8Xml.data(), utf8Xml.size());
		}

		// 15. 填充输出参数（如果有请求）
		auto writeOutParam = [&](CString* out, std::ostringstream& stream) {
			if (out) {
				std::string str = stream.str();
				*out = str.empty() ? CString() : CString(CA2W(str.c_str(), CP_UTF8));
			}
			};
		writeOutParam(outUncheckedBlockedXml, blockedOss);
		writeOutParam(outUncheckedWhitelistedXml, whitelistedOss);

		// 16. 返回完整 XML 字符串
		return CString(CA2W(utf8Xml.c_str(), CP_UTF8));
	}
} // namespace Creator

class ResourceReader {
private:
	HMODULE m_hModule;

public:
	ResourceReader(LPCWSTR dllPath = nullptr) {
		if (dllPath) {
			m_hModule = LoadLibraryEx(dllPath, NULL, LOAD_LIBRARY_AS_DATAFILE);
		}
		else {
			m_hModule = GetModuleHandle(NULL);
		}
	}

	~ResourceReader() {
		if (m_hModule && m_hModule != GetModuleHandle(NULL)) {
			FreeLibrary(m_hModule);
		}
	}

	std::string GetTextResource(int resourceId, LPCWSTR resourceType = RT_RCDATA) {
		if (!m_hModule) return "";

		HRSRC hRes = FindResource(m_hModule, MAKEINTRESOURCE(resourceId), resourceType);
		if (!hRes) return "";

		HGLOBAL hData = LoadResource(m_hModule, hRes);
		if (!hData) return "";

		DWORD size = SizeofResource(m_hModule, hRes);
		LPVOID data = LockResource(hData);

		// 检查是否是UTF-8编码
		if (size >= 3 &&
			static_cast<unsigned char*>(data)[0] == 0xEF &&
			static_cast<unsigned char*>(data)[1] == 0xBB &&
			static_cast<unsigned char*>(data)[2] == 0xBF) {
			// 跳过UTF-8 BOM
			return std::string(static_cast<const char*>(data) + 3, size - 3);
		}

		return std::string(static_cast<const char*>(data), size);
	}

	std::wstring GetWideTextResource(int resourceId, LPCWSTR resourceType = RT_RCDATA) {
		std::string data = GetTextResource(resourceId, resourceType);
		if (data.empty()) return L"";

		// 简单转换（实际使用中可能需要更完善的字符集转换）
		int wlen = MultiByteToWideChar(CP_UTF8, 0, data.c_str(), -1, NULL, 0);
		std::wstring wstr(wlen, 0);
		MultiByteToWideChar(CP_UTF8, 0, data.c_str(), -1, &wstr[0], wlen);

		return wstr;
	}
};

// 使用示例
//void UseResourceReader() {
//	// 从当前EXE/DLL读取
//	ResourceReader reader;
//	std::string text = reader.GetTextResource(101, L"TEXT");
//
//	// 从其他DLL读取
//	ResourceReader externalReader(L"external.dll");
//	std::string externalText = externalReader.GetTextResource(201, L"XML");
//}

HANDLE g_hEvent = nullptr;
HANDLE g_hEvent2 = nullptr;
// 创建多目录监控管理器
//CreatorMonitor::CMultiDirectoryMonitor monitor;
CreatorMonitor::CDirectoryMonitor monitor;

CSpaceTelescope::CSpaceTelescope()
{
	m_nWebRTRunModel = WebRTRunModel::WebRTModel;
	m_pCurrentIPCMsg = nullptr;
	m_pMainWnd = nullptr;
	m_pClrHost = nullptr;
	m_pClrCoreHost = nullptr;
	m_nJVMVersion = JNI_VERSION_10;
	m_bDirectoryACLSecure = false;
	m_bAgentModel = false;
	m_bEnableAllDllInject = false;
	m_bIsClrCoreApp = false;
	m_bMainWndNotFound = false;
	m_bOfficeAddinUnLoad = true;
	m_bWinFormActived = false;
	m_bCanClose = false;
	m_bDeleteNuclei = false;
	m_bChromeNeedClosed = false;
	m_bEnableProcessFormTabKey = false;
	m_bCreatingDevTool = false;
	m_bOldVerFilesRemoved = false;
	m_bOMNIBOXPOPUPVISIBLE = false;
	m_pActiveWinFormWnd = nullptr;
	m_pActiveHtmlWnd = nullptr;
	m_pHostHtmlWnd = nullptr;
	m_pHtmlWndCreated = nullptr;
	m_strAppXml = _T("");
	m_strCmdLine = _T("");
	m_strProductName = _T("");
	m_strCompanyName = _T("");
	m_strCreatorMonitorExt = _T("");
	m_strCreatorAppData = _T("");
	m_strCreatorAgentData = _T("");
	m_strCreatorAppInitData = _T("");
	m_strCreatorAppKey = _T("");
	m_strCreatorAgentKey = _T("");
	m_strCreatorAppUnSignedData = _T("");
	m_strCreatorAgentUnSignedData = _T("");
	m_strCreatorAppWhiteListData = _T("");
	m_strCreatorAgentWhiteListData = _T("");

	m_strCreatorAppCheckExt = _T("");
	m_strCreatorAgentCheckExt = _T("");
	m_strCreatorEvSignCheckExt = _T("");

	m_strProbePaths = _T("");
	m_strCommonDataDir = _T("");
	m_strDefaultXml = _T("<default><nucleus><xobj name=\"tangram\" objid=\"nucleus\"/></nucleus></default>");
	m_strDefaultNtpXml = _T("<ntp><nucleus><xobj id='grid' rows='1' cols='2' width='350,350,' splitterwidth='6'>");
	m_strDefaultNtpXml += _T("<xobj objid='Universe.WebRTNtpCtrl,Cosmos'></xobj>");
	m_strDefaultNtpXml += _T("<xobj objid='nucleus'></xobj></xobj></nucleus></ntp>");
	m_nRef = 4;
	m_BrowserBKCorlor = 0;
	m_nAppID = -1;
	m_nAppType = 0;
	m_nWaitTabCounts = 0;
	m_hWaitTabWebPageWnd = NULL;
	m_hCreatingWnd = NULL;
	m_hCosmosWnd = NULL;
	m_hHostBrowserWnd = NULL;
	m_hEclipseHideWnd = NULL;
	m_hActiveWnd = NULL;
	m_hCBTHook = NULL;
	m_hForegroundIdleHook = NULL;
	m_lpszSplitterClass = nullptr;
	m_pNuclei = nullptr;
	m_pActiveXobj = nullptr;
	m_pNucleus = nullptr;
	m_pRootNodes = nullptr;
	m_pUniverseAppProxy = nullptr;
	m_pWebRTAppProxy = nullptr;
	m_pActiveAppProxy = nullptr;
	m_pCurMDIChildFormInfo = nullptr;
	m_pTabClientAreaProxy = nullptr;
	m_pCLRProxy = nullptr;
	m_pActiveEclipseWnd = nullptr;
	m_strBrowserVer = _T("");
	m_strClrCoreVer = _T("");
	m_strMiniClrCoreVer = _T("6.0.0.0");
	m_strWorkBenchStrs = _T("");
	m_strExeName = _T("");
	m_strAppName = _T("Tangram System");
	m_strAppKey = _T("");
	m_strMainWndXml = _T("");
	m_strDefaultWorkBenchXml = _T("");
	m_strCurrentKey = _T("");
	m_strCurrentAppID = _T("");
	m_strConfigFile = _T("");
	m_strAppProxyID = _T("");
	m_strConfigDataFile = _T("");
	m_strSubProcessPath = _T("");
	m_strAppCommonDocPath = _T("");
	m_strStartJarPath = _T("");
	m_strBridgeJavaClass = "";
	m_strCurrentEclipsePagePath = _T("");
	m_strOfficeAppIDs = _T("word.application,excel.application,outlook.application,onenote.application,infopath.application,project.application,visio.application,access.application,powerpoint.application,lync.ucofficeintegration.1,");
	m_nTangramObj = 0;
	launchMode = -1;
	m_nMainClientID = -100;
#ifdef _DEBUG
	m_nTangram = 0;
	m_nJsObj = 0;
	m_nSessionCount = 0;
	m_nTangramCtrl = 0;
	m_nTangramFrame = 0;
	m_nOfficeDocs = 0;
	m_nOfficeDocsSheet = 0;
	m_nTangramNodeCommonData = 0;
#endif
	m_pCreatingFrameWnd = nullptr;
	g_pSpaceTelescope = this;
	g_pSpaceTelescopeImpl = this;
	m_mapValInfo[_T("currenteclipeworkBenchid")] = CComVariant(_T(""));
	m_mapClassInfo[TGM_NUCLEUS] = RUNTIME_CLASS(CXobjWnd);
	m_mapClassInfo[_T("tangramlistview")] = RUNTIME_CLASS(CTangramListView);
	m_mapClassInfo[_T("wpfctrl")] = RUNTIME_CLASS(CWPFView);
	m_mapClassInfo[_T("xobj")] = RUNTIME_CLASS(CGridWnd);
	m_mapClassInfo[_T("tabctrl")] = RUNTIME_CLASS(CTangramTabCtrl);

	m_mapIPCMsgIndexDic[IPC_NODE_CREARED_ID] = IPC_NODE_CREARED;
	m_mapIPCMsgIndexDic[IPC_NODE_ONMOUSEACTIVATE_ID] = IPC_NODE_ONMOUSEACTIVATE;
	m_mapIPCMsgIndexDic[IPC_MDIWINFORM_ACTIVEMDICHILD_ID] = IPC_MDIWINFORM_ACTIVEMDICHILD;

#ifdef OpenSourceWebRT
#else
	m_bCommercialEdition = true;
#endif

	m_dwThreadID = ::GetCurrentThreadId();
	//m_bCommercialEdition = false;
	CString strArg = theApp.m_strInitInfo;
	if (!strArg.IsEmpty()) {
		int nPos = strArg.Find(_T(":"));
		if (nPos != -1) {
			m_bAgentModel = true;
			strArg = strArg.Mid(nPos + 1);
			if (::PathFileExists(strArg)) {
				m_strConfigFile = strArg;
				nPos = m_strConfigFile.ReverseFind('\\');
				m_strAgentPath = m_strConfigFile.Left(nPos + 1);
				m_strAgentExeFile = m_strConfigFile.Mid(nPos + 1);
				m_strAgentExeFile.Replace(_T(".aiagent.policy"), _T(""));
			}
		}
	}
}

std::wstring HashToHexWString(const BYTE* hashBuffer, size_t length) {
	std::wstringstream wss;
	wss << std::hex << std::setfill(L'0');

	for (size_t i = 0; i < length; ++i) {
		wss << std::setw(2) << static_cast<int>(hashBuffer[i]);
	}

	return wss.str();
}

bool CSpaceTelescope::CompareFileSignatures(const wchar_t* file1, const wchar_t* file2, ComparisonLevel level) {
	CertificateInfo info1 = GetSignatureInfoFromFile(file1);
	CertificateInfo info2 = GetSignatureInfoFromFile(file2);
	if (level == LEVEL_SAME_CERT) {
		// 检查是否为完全相同的证书（指纹匹配）
		if (!info1.thumbprint.empty() && !info2.thumbprint.empty()) {
			return info1.thumbprint == info2.thumbprint;
		}
		return false;
	}

	if (level == LEVEL_STRICT) {
		return AreFromSameCompanyStrict(info1, info2);
	}
	else {
		return AreFromSameCompanyLoose(info1, info2);
	}
}

// 从文件获取签名证书信息
CertificateInfo CSpaceTelescope::GetSignatureInfoFromFile(const wchar_t* filePath) {
	CertificateInfo info;
	info.isEV = false;

	// 1. 验证签名
	WINTRUST_FILE_INFO fileInfo = { 0 };
	fileInfo.cbStruct = sizeof(WINTRUST_FILE_INFO);
	fileInfo.pcwszFilePath = filePath;

	WINTRUST_DATA trustData = { 0 };
	trustData.cbStruct = sizeof(WINTRUST_DATA);
	trustData.dwUIChoice = WTD_UI_NONE;
	trustData.fdwRevocationChecks = WTD_REVOKE_NONE;
	trustData.dwUnionChoice = WTD_CHOICE_FILE;
	trustData.pFile = &fileInfo;
	trustData.dwStateAction = WTD_STATEACTION_VERIFY;

	//GUID policyGuid = WINTRUST_ACTION_GENERIC_CERT_VERIFY;
	GUID policyGuid2 = WINTRUST_ACTION_GENERIC_VERIFY_V2;

	LONG status = WinVerifyTrust(NULL, &policyGuid2, &trustData);

	if (status != ERROR_SUCCESS) {
		std::wcerr << L"文件签名验证失败: " << filePath << std::endl;
		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid2, &trustData);
		return info;
	}

	// 2. 获取证书上下文
	CRYPT_PROVIDER_DATA* pProvData = WTHelperProvDataFromStateData(trustData.hWVTStateData);
	if (!pProvData || pProvData->csSigners == 0) {
		trustData.dwStateAction = WTD_STATEACTION_CLOSE;
		WinVerifyTrust(NULL, &policyGuid2, &trustData);
		return info;
	}

	// 3. 获取第一个签名者的证书
	CRYPT_PROVIDER_SGNR* pSigner = WTHelperGetProvSignerFromChain(
		pProvData, 0, FALSE, 0
	);

	if (pSigner && pSigner->csCertChain > 0) {
		CERT_CHAIN_ELEMENT* pChainElement = pSigner->pasCertChain[0].pChainElement;
		if (pChainElement->pCertContext) {
			info = GetCertificateInfo(pChainElement->pCertContext);
		}
	}

	// 4. 清理
	trustData.dwStateAction = WTD_STATEACTION_CLOSE;
	WinVerifyTrust(NULL, &policyGuid2, &trustData);

	return info;
}

bool CSpaceTelescope::VerfyEVSHASign(CString strFile) {
	CString strAppCLRWorkSpacePath = m_strAgentPath + m_strExeName + _T("WorkSpace.Net.dll");
	if (m_bEnableAllDllInject || strFile.CompareNoCase(strAppCLRWorkSpacePath) == 0)
		return true;
	int nPos = strFile.ReverseFind(_T('\\'));
	if (nPos != -1)
	{
		CString strPath = strFile.MakeLower();
		strPath = strPath.Left(nPos + 1);
		auto it = m_mapAppWhiteListDic.find(strPath);
		if (it != m_mapAppWhiteListDic.end()) {
			return true;
		}
	}
	return EvCheck::IsEVSigned(strFile);
}

bool CSpaceTelescope::CompareFileEVSignatures(CString strFile1, CString strFile2) {
	if (::PathFileExists(strFile1) == false || ::PathFileExists(strFile2) == false)
		return false;
	bool bSame = CompareFileSignatures(LPCTSTR(strFile1), LPCTSTR(strFile2), LEVEL_STRICT);
	return bSame;
}

BOOL CSpaceTelescope::CopyFolder(CString strSrcPath, CString strDesPath)
{
	WIN32_FIND_DATA FindFileData;
	HANDLE hFind;
	WCHAR _szTmp[1025] = { 0 };
	::memcpy(_szTmp, strSrcPath, 1024);

	CString _szSrcPath = strSrcPath;
	CString _szDesPath = strDesPath;

	WCHAR _szNewSrcPath[1025] = { 0 };
	WCHAR _szNewDesPath[1025] = { 0 };

	::wcscat(_szTmp, L"*");

	hFind = FindFirstFile(_szTmp, &FindFileData);
	if (hFind == NULL) return FALSE;

	do
	{
		if (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
		{
			if (wcscmp(FindFileData.cFileName, L"."))
			{
				if (wcscmp(FindFileData.cFileName, L".."))
				{
					swprintf(_szNewDesPath, L"%s%s\\", _szDesPath.GetBuffer(), FindFileData.cFileName);
					swprintf(_szNewSrcPath, L"%s%s\\", _szSrcPath.GetBuffer(), FindFileData.cFileName);
					_szDesPath.ReleaseBuffer();
					_szSrcPath.ReleaseBuffer();
					CreateDirectory(_szNewDesPath, NULL);
					CopyFolder(_szNewSrcPath, _szNewDesPath);
				}
			}
		}
		else
		{
			WCHAR _szSrcFile[1025] = { 0 };
			WCHAR _szDesFile[1025] = { 0 };
			swprintf(_szDesFile, L"%s%s", _szDesPath.GetBuffer(), FindFileData.cFileName);
			swprintf(_szSrcFile, L"%s%s", _szSrcPath.GetBuffer(), FindFileData.cFileName);
			_szDesPath.ReleaseBuffer();
			_szSrcPath.ReleaseBuffer();
			BOOL l_bRet = CopyFile(_szSrcFile, _szDesFile, false);
		}
	} while (FindNextFile(hFind, &FindFileData));

	::FindClose(hFind);
	return TRUE;
}

typedef BOOL(WINAPI* LPFN_ISWOW64PROCESS) (HANDLE, PBOOL);
LPFN_ISWOW64PROCESS fnIsWow64Process;

BOOL CSpaceTelescope::IsWow64(HANDLE hProcess)
{
	BOOL bIsWow64 = FALSE;

	//IsWow64Process is not available on all supported versions of Windows.
	//Use GetModuleHandle to get a handle to the DLL that contains the function
	//and GetProcAddress to get a pointer to the function if available.

	fnIsWow64Process = (LPFN_ISWOW64PROCESS)GetProcAddress(
		GetModuleHandle(TEXT("kernel32")), "IsWow64Process");

	if (NULL != fnIsWow64Process)
	{
		if (!fnIsWow64Process(hProcess, &bIsWow64))
		{
			//handle error
		}
	}
	return bIsWow64;
}

void CSpaceTelescope::Init()
{
	static bool bInit = false;
	if (bInit)
		return;
	if (m_bAgentModel) {
		g_hEvent = CreateEvent(
			NULL,           // 安全属性（默认）
			TRUE,           // TRUE = 手动重置事件；FALSE = 自动重置
			FALSE,          // 初始状态为无信号（未触发）
			NULL            // 事件名称（可为 NULL 表示匿名）
		);

		if (g_hEvent == NULL)
		{
			return;
		}
		g_hEvent2 = CreateEvent(
			NULL,           // 安全属性（默认）
			TRUE,           // TRUE = 手动重置事件；FALSE = 自动重置
			FALSE,          // 初始状态为无信号（未触发）
			NULL            // 事件名称（可为 NULL 表示匿名）
		);

		if (g_hEvent2 == NULL)
		{
			return;
		}

		bInit = true;
		SYSTEM_INFO si;
		GetNativeSystemInfo(&si);

		if (si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_AMD64 ||
			si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_IA64 ||
			si.wProcessorArchitecture == PROCESSOR_ARCHITECTURE_ARM64)
			m_b64bitSystem = true;

		if (m_bOfficeApp == false && m_nAppID != 9)
		{
			if (::PathIsDirectory(m_strAppDataPath) == false)
			{
				::SHCreateDirectory(nullptr, m_strAppDataPath);
			}
		}
		m_mapValInfo[_T("apppath")] = CComVariant(m_strAppPath);
		m_mapValInfo[_T("appagentpath")] = CComVariant(m_strAgentPath);
		m_mapValInfo[_T("appdatapath")] = CComVariant(m_strAppDataPath);
		m_mapValInfo[_T("appdatafile")] = CComVariant(m_strConfigDataFile);
		m_mapValInfo[_T("appname")] = CComVariant(m_strExeName);
		m_mapValInfo[_T("appkey")] = CComVariant(m_strAppKey);
		CString strWebPage = m_strAgentPath + m_strExeName + _T(".app.html");
		if (m_nAppID != 9)
		{
			WebRTInit();
			m_hCosmosWnd = ::CreateWindowEx(WS_EX_NOACTIVATE, _T("Tangram Message Window Class"), _T(""), WS_CHILD, 0, 0, 0, 0, HWND_MESSAGE, (HMENU)19921963, theApp.m_hInstance, nullptr);
		}
		CString _strPath = _T("");
		_strPath = m_strAgentPath + m_strExeName + _T("InitData\\");
		if (::PathIsDirectory(_strPath))
		{
			CTangramXmlParse m_Parse;
			CTangramXmlParse* pZipXobj = nullptr;
			BOOL b = m_Parse.LoadFile(m_strConfigDataFile);
			if (b)
			{
				pZipXobj = m_Parse.GetChild(_T("tangramappdata"));
				if (pZipXobj == nullptr)
				{
					CopyFolder(_strPath, m_strAppDataPath);
					pZipXobj = m_Parse.AddNode(_T("tangramappdata"));
					m_Parse.SaveFile(m_strConfigDataFile);
				}
			}
		}
	}

	SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer);
	m_strProgramFilePath = m_szBuffer;

	int nChildID = 0;
	if (m_nAppID != 9 && ::PathFileExists(m_strConfigFile) && m_bOfficeApp == false)
	{
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadFile(m_strConfigFile))
		{
			nChildID = m_Parse.attrInt(_T("mainclientid"));
			if (m_bAgentModel) {
				if (m_bIsClrCoreApp == false)
					m_bIsClrCoreApp = m_Parse.attrBool(_T("dotnetapp"), false);
				CString CorePath = m_strProgramFilePath;
				CorePath += _T("\\dotnet\\shared\\Microsoft.NETCore.App\\");
				if (m_bIsClrCoreApp && ::PathIsDirectory(CorePath)) {
					m_strMiniClrCoreVer = m_Parse.attr(_T("minidotnetver"), _T("6.0.0.0"));
				}
				else {
					m_bIsClrCoreApp = false;
				}

				m_strWebRTVer = m_Parse.attr(_T("webrtver"), _T(""));
				CString _strUrl = m_Parse.attr(_T("url"), _T(""));
				if (_strUrl != _T(""))
				{
					m_strStartupURL = _strUrl;
				}
				CTangramXmlParse* _pXmlParse = m_Parse.GetChild(_T("defaultworkbench"));
				if (_pXmlParse)
				{
					m_strDefaultWorkBenchXml = _pXmlParse->xml();
				}
				if (::PathFileExists(m_strConfigDataFile) == FALSE)
				{
					_pXmlParse = m_Parse.GetChild(_T("hubblepage"));
					CString strXml = _T("");
					if (_pXmlParse)
					{
						strXml.Format(_T("<%s>%s</%s>"), m_strExeName, _pXmlParse->xml(), m_strExeName);
						CTangramXmlParse xmlParse;
						if (xmlParse.LoadXml(strXml))
						{
							xmlParse.SaveFile(m_strConfigDataFile);
						}
					}
					else
					{
						if (m_bEclipse)
						{
							strXml.Format(_T("<%s><openedworkbench></openedworkbench></%s>"), m_strExeName, m_strExeName);
							CTangramXmlParse xmlParse;
							if (xmlParse.LoadXml(strXml))
							{
								xmlParse.SaveFile(m_strConfigDataFile);
							}
						}
					}
				}
				else
				{
					CTangramXmlParse xmlParse;
					if (xmlParse.LoadFile(m_strConfigDataFile))
					{
						if (m_bEclipse) {
							CTangramXmlParse* pParse = xmlParse.GetChild(_T("openedworkbench"));
							if (pParse)
							{
								m_strWorkBenchStrs = pParse->text();
								pParse->put_text(_T(""));
							}
						}
						xmlParse.SaveFile(m_strConfigDataFile);
					}
				}
			}
		}
	}

	if (theApp.m_bAsynLodeMode) {
		bool bCLR = (::GetModuleHandle(_T("MSCOREE.dll")) != NULL) || (::GetModuleHandle(_T("hostfxr.dll")) != NULL);
		bool bMFC = (::GetModuleHandle(_T("mfc140u.dll")) != NULL) || (::GetModuleHandle(_T("mfc140ud.dll")) != NULL);
		if (bMFC || !bCLR) {
			GetMainWnd(nChildID, _T("MFCAppProxy.dll"));
		}

		typedef int(__stdcall* _InitApp)(bool bSupportCrashReporting);
		_InitApp FuncInitApp;
		if (m_hWebRTProxyModel == nullptr)
		{
			CString strAIGCAgentPath = m_strProgramFilePath;
			strAIGCAgentPath += _T("\\Tangram\\Creator\\AIAgent.dll");
			if (::PathFileExists(strAIGCAgentPath)) {
				m_hWebRTProxyModel = ::LoadLibrary(strAIGCAgentPath);
			}
		}
		if (m_hWebRTProxyModel) {
			FuncInitApp = (_InitApp)GetProcAddress(m_hWebRTProxyModel, "InitApp");
			if (FuncInitApp != NULL) {
				if (m_pUniverseAppProxy) {
					HWND hWnd = m_pUniverseAppProxy->QueryWndInfo(MainWnd, NULL);
					if (::IsWindow(hWnd))
					{
						m_hMainWnd = hWnd;
					}
				}
				FuncInitApp(false);
				::PostQuitMessage(0);
			}
		}
	}
}

CSpaceTelescope::~CSpaceTelescope()
{
	if (m_hWebRTToken)
		CloseHandle(m_hWebRTToken);
	m_pCurMDIChildFormInfo = nullptr;
	if (m_mapNuclei.size())
	{
		auto it = m_mapNuclei.begin();
		while (it != m_mapNuclei.end())
		{
			CNuclei* pNuclei = (CNuclei*)it->second;
			delete pNuclei;
			m_mapNuclei.erase(it);
			if (m_mapNuclei.size())
				it = m_mapNuclei.begin();
			else
				it = m_mapNuclei.end();
		}
	}
	while (m_mapWndXobjCollection.size())
	{
		auto it = m_mapWndXobjCollection.begin();
		delete it->second;
	}

	while (m_mapWindowProvider.size())
		m_mapWindowProvider.erase(m_mapWindowProvider.begin());

	if (m_nTangramObj)
		TRACE(_T("TangramObj Count: %d\n"), m_nTangramObj);
#ifdef _DEBUG
	if (m_nSessionCount)
		TRACE(_T("Tangram SessionCount Count: %d\n"), m_nSessionCount);
	if (m_nTangram)
		TRACE(_T("Tangram Count: %d\n"), m_nTangram);
	if (m_nJsObj)
		TRACE(_T("JSObj Count: %d\n"), m_nJsObj);
	if (m_nTangramCtrl)
		TRACE(_T("TangramCtrl Count: %d\n"), m_nTangramCtrl);
	if (m_nTangramFrame)
		TRACE(_T("TangramFrame Count: %d\n"), m_nTangramFrame);
	if (m_nOfficeDocs)
		TRACE(_T("TangramOfficeDoc Count: %d\n"), m_nOfficeDocs);
	if (m_nOfficeDocsSheet)
		TRACE(_T("TangramExcelWorkBookSheet Count: %d\n"), m_nOfficeDocsSheet);
	if (m_nTangramNodeCommonData)
		TRACE(_T("m_nTangramNodeCommonData Count: %d\n"), m_nTangramNodeCommonData);
#endif

	if (m_pRootNodes)
		CCommonFunction::ClearObject<CXobjCollection>(m_pRootNodes);
	if (m_nAppID == 3)
	{
		for (auto& it : m_mapThreadInfo)
		{
			if (it.second->m_hGetMessageHook)
			{
				UnhookWindowsHookEx(it.second->m_hGetMessageHook);
				it.second->m_hGetMessageHook = NULL;
			}
			delete it.second;
		}
		m_mapThreadInfo.erase(m_mapThreadInfo.begin(), m_mapThreadInfo.end());

		_clearObjects();

		for (auto& it : m_mapObjDic)
		{
			it.second->Release();
		}
		for (auto& it : m_mapValInfo)
		{
			::VariantClear(&it.second);
		}
		m_mapValInfo.clear();

		m_mapClassInfo.clear();
	}

	if (m_mapWormhole.size())
	{
		while (m_mapWormhole.size())
		{
			auto it = m_mapWormhole.begin();
			delete it->second;
			if (m_mapWormhole.size() == 0)
				break;
		}
	}

	m_mapXobj.clear();
	m_mapMDTWindow.clear();
	m_mapWebView.clear();
	m_mapFormWebPage.clear();
	m_mapBrowserForm.clear();
	m_mapUIData.clear();
	if (m_pClrHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
	{
		DWORD dw = m_pClrHost->Release();
		ASSERT(dw == 0);
		if (dw == 0)
		{
			m_pClrHost = nullptr;
			OutputDebugString(_T("------------------ClrHost Release from ~CSpaceTelescope() Successed at Universe.dll!------------------------\n"));
		}
	}
	if (m_pClrCoreHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
	{
		OutputDebugString(_T("------------------Begin Stop CLRCore from OnCLRHostExit------------------------\n"));
		DWORD dwID = 0;
		HRESULT hr = m_pClrCoreHost->GetCurrentAppDomainId(&dwID);
		m_pClrCoreHost->UnloadAppDomain(dwID, true);
		hr = m_pClrCoreHost->Stop();
		ASSERT(hr == S_OK);
		if (hr == S_OK)
		{
			OutputDebugString(_T("------------------Stop CLRCore  from OnCLRHostExit Successed!------------------------\n"));
		}
		DWORD dw = m_pClrCoreHost->Release();
		ASSERT(dw == 0);
		if (dw == 0)
		{
			m_pClrCoreHost = nullptr;
			OutputDebugString(_T("------------------ClrHost Release from ~CSpaceTelescope() Successed at Universe.dll!------------------------\n"));
		}
	}
	g_pSpaceTelescope = nullptr;
	OutputDebugString(_T("------------------End Release CSpaceTelescope from ~CSpaceTelescope() at Universe.dll------------------------\n"));
}

void CSpaceTelescope::OnBatteryChanged()
{
	OutputDebugString(_T("------------------CSpaceTelescope::OnBatteryChanged() at Universe.dll------------------------\n"));
}

std::wstring string_to_wide_string(const std::string& string)
{
	if (string.empty())
	{
		return L"";
	}

	const auto size_needed = MultiByteToWideChar(CP_UTF8, 0, &string.at(0), (int)string.size(), nullptr, 0);
	if (size_needed <= 0)
	{
		throw std::runtime_error("MultiByteToWideChar() failed: " + std::to_string(size_needed));
	}

	std::wstring result(size_needed, 0);
	MultiByteToWideChar(CP_UTF8, 0, &string.at(0), (int)string.size(), &result.at(0), size_needed);
	return result;
}

std::string wide_string_to_string(const std::wstring& wide_string)
{
	if (wide_string.empty())
	{
		return "";
	}

	const auto size_needed = WideCharToMultiByte(CP_UTF8, 0, &wide_string.at(0), (int)wide_string.size(), nullptr, 0, nullptr, nullptr);
	if (size_needed <= 0)
	{
		throw std::runtime_error("WideCharToMultiByte() failed: " + std::to_string(size_needed));
	}

	std::string result(size_needed, 0);
	WideCharToMultiByte(CP_UTF8, 0, &wide_string.at(0), (int)wide_string.size(), &result.at(0), size_needed, nullptr, nullptr);
	return result;
}

wstring CSpaceTelescope::Json2Xml(wstring _strJson, bool bJsonstr)
{
	wstring strJson = L"";
	if (bJsonstr == false)
	{
		std::string jsonStr;

		std::ifstream ifs(_strJson);
		std::wstringstream ss;
		ss << ifs.rdbuf();
		strJson = ss.str();
		ifs.close();
	}
	else {
		strJson = _strJson;
		if (strJson == L"") {
			std::cerr << "Cannot read file provided !" << std::endl;
			return L"";
		}
	}

	// Consume json to build xml:
	ert::JsonSaxConsumer consumer(2);
	string s = wide_string_to_string(strJson);
	bool success = nlohmann::json::sax_parse(s, &consumer);

	if (!success) {
		std::cerr << "Conversion error !" << std::endl;
		return L"";
	}

	// output xml
	return string_to_wide_string(consumer.getXmlString());
}

void CSpaceTelescope::OnCLRHostExit()
{
	if (m_pClrHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
	{
		OutputDebugString(_T("------------------Begin Stop CLR from OnCLRHostExit------------------------\n"));
		HRESULT hr = m_pClrHost->Stop();
		ASSERT(hr == S_OK);
		if (hr == S_OK)
		{
			OutputDebugString(_T("------------------Stop CLR  from OnCLRHostExit Successed!------------------------\n"));
		}
	}
	if (m_pClrCoreHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
	{
		m_pClrCoreHost = nullptr;
		//OutputDebugString(_T("------------------Begin Stop CLRCore from OnCLRHostExit------------------------\n"));
		//DWORD dwID = 0;
		//HRESULT hr = m_pClrCoreHost->GetCurrentAppDomainId(&dwID);
		//m_pClrCoreHost->UnloadAppDomain(dwID, true);
		//hr = m_pClrCoreHost->Stop();
		//ASSERT(hr == S_OK);
		//if (hr == S_OK)
		//{
		//	OutputDebugString(_T("------------------Stop CLRCore  from OnCLRHostExit Successed!------------------------\n"));
		//}
	}
}

void CSpaceTelescope::ModifyBindingXobj(CNucleus* pNucleus, CXobj* NewBindingXobj)
{
	if (NewBindingXobj == nullptr)
		pNucleus->m_pBindingXobj = nullptr;
	else if (pNucleus && NewBindingXobj)
	{
		CNucleus* pPreNucleus = NewBindingXobj->m_pXobjShareData->m_pNucleus;
		if (pPreNucleus != pNucleus) {
			CXobj* pNode = NewBindingXobj->m_pRootObj->m_pNucleusNode;
			if (pPreNucleus->m_pBindingXobj == NewBindingXobj) {
				ModifyBindingXobj(pPreNucleus, pNode);
			}
		}
		if (pNucleus->m_pBindingXobj == NewBindingXobj)
			return;
		CString strName = NewBindingXobj->m_strName;
		if (strName == _T("hostclient"))
		{
			CCloudWinForm* pForm = nullptr;
			auto it = m_mapXobjMdiFormBindDic.find(NewBindingXobj);
			if (it != m_mapXobjMdiFormBindDic.end())
			{
				pForm = it->second;
			}
			else
			{
				CString strNucleusName = NewBindingXobj->m_pXobjShareData->m_pNucleus->m_strNucleusName;
				if (strNucleusName == _T("mdiclient"))
				{
					HWND hWnd = ::GetParent(NewBindingXobj->m_pXobjShareData->m_pNucleus->m_hWnd);
					pForm = (CCloudWinForm*)::SendMessage(hWnd, WM_HUBBLE_DATA, 0, 20190214);
					if (pForm && pForm->m_bMdiForm)
					{
						if (pForm->m_pBrowser)
						{
							m_mapXobjMdiFormBindDic[NewBindingXobj] = pForm;
						}
					}
				}
			}
			if (pForm)
			{
				if (::IsChild(::GetParent(pNucleus->m_hWnd), pForm->m_hWnd))
				{
					bool bhavevisibleform = false;
					for (auto it : pForm->m_pOwnerHtmlWnd->m_mapAttachedForm)
					{
						if (::IsWindowVisible(it.first))
						{
							if (pForm->m_hMDIClient)
								::PostMessage(pForm->m_hMDIClient, WM_COSMOSMSG, 0, 20180115);
							bhavevisibleform = true;
						}
					}
					pForm->m_pClientGalaxy->m_pBindingXobj = NewBindingXobj;
					//if (bhavevisibleform)
					return;
				}
				if (pNucleus == pForm->m_pClientGalaxy)
				{
					if (pForm->m_hMDIClient)
						::PostMessage(pForm->m_hMDIClient, WM_COSMOSMSG, 0, 20180115);
				}
			}
			else
			{
				HWND hWnd = ::GetParent(NewBindingXobj->m_pXobjShareData->m_pNucleus->m_hWnd);
				hWnd = m_pCLRProxy->GetParentWinForm(hWnd);
				if (::IsWindow(hWnd))
				{
					if (::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_MDICHILD)
					{
						if (::IsChild(::GetParent(pNucleus->m_hWnd), hWnd))
						{
							return;
						}
					}
				}
			}
		}
		pNucleus->m_pBindingXobj = NewBindingXobj;
	}
}

LRESULT CSpaceTelescope::Close(void)
{
	if (m_mapEvent.size())
	{
		for (auto it = m_mapEvent.begin(); it != m_mapEvent.end(); it++)
		{
			CWebRTEvent* pObj = it->second;
			delete pObj;
		}
		m_mapEvent.clear();
	}

	HRESULT hr = S_OK;
	int cConnections = m_vec.GetSize();
	if (cConnections)
	{
		DISPPARAMS params = { NULL, NULL, 0, 0 };
		for (int iConnection = 0; iConnection < cConnections; iConnection++)
		{
			Lock();
			CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
			Unlock();
			IDispatch* pConnection = static_cast<IDispatch*>(punkConnection.p);
			if (pConnection)
			{
				CComVariant varResult;
				hr = pConnection->Invoke(2, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
			}
		}
	}

	return S_OK;
}

void CSpaceTelescope::FireNodeEvent(int nIndex, CXobj* pXobj, CWebRTEvent* pObj)
{
	switch (nIndex)
	{
	case 0:
	{
		XobjType type = pXobj->m_nViewType;
		if (type == Grid || type == TabGrid)
		{
			for (auto& it : pXobj->m_vChildNodes)
			{
				FireNodeEvent(nIndex, it, pObj);
			}
		}
		else
		{
			for (auto& it : pXobj->m_mapWndXobjProxy)
			{
				it.second->OnWebRTDocEvent(pObj);
			}
		}
	}
	break;
	case 1:
	{
		for (auto& it : pXobj->m_mapWndXobjProxy)
		{
			it.second->OnWebRTDocEvent(pObj);
		}
	}
	break;
	case 2:
	{
		for (auto& it : pXobj->m_mapWndXobjProxy)
		{
			it.second->OnWebRTDocEvent(pObj);
		}
	}
	break;
	}
}

void CSpaceTelescope::FireAppEvent(CWebRTEvent* pObj)
{
	if (pObj)
	{
		if (m_pUniverseAppProxy)
			m_pUniverseAppProxy->OnWebRTEvent(pObj);
		for (auto& it : m_mapWebRTAppProxy)
		{
			if (it.second != m_pUniverseAppProxy)
				it.second->OnWebRTEvent(pObj);
		}
		if (m_pWebRTAppProxy)
			m_pWebRTAppProxy->OnWebRTEvent(pObj);
		CString strEventName = pObj->m_strEventName;
		strEventName.MakeLower();
		HRESULT hr = S_OK;
		int cConnections = m_vec.GetSize();

		if (cConnections)
		{
			CComVariant avarParams[1];
			avarParams[0] = (IWebRTEventObj*)pObj;
			avarParams[0].vt = VT_DISPATCH;
			DISPPARAMS params = { avarParams, NULL, 1, 0 };
			IDispatch* pConnection = nullptr;
			if (cConnections)
			{
				for (int iConnection = 0; iConnection < cConnections; iConnection++)
				{
					Lock();
					CComPtr<IUnknown> punkConnection = m_vec.GetAt(iConnection);
					Unlock();
					pConnection = static_cast<IDispatch*>(punkConnection.p);
					if (pConnection)
					{
						CComVariant varResult;
						hr = pConnection->Invoke(3, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_METHOD, &params, &varResult, NULL, NULL);
					}
				}
			}
		}

		delete pObj;
	}
}

CString CSpaceTelescope::GetXmlData(CString strName, CString strXml)
{
	if (strName == _T("") || strXml == _T(""))
		return _T("");
	int nLength = strName.GetLength();
	CString strKey = _T("<") + strName + _T(">");
	int nPos = strXml.Find(strKey);
	if (nPos != -1)
	{
		CString strData1 = strXml.Mid(nPos);
		strKey = _T("</") + strName + _T(">");
		nPos = strData1.Find(strKey);
		if (nPos != -1)
			return strData1.Left(nPos + nLength + 3);
	}
	return _T("");
}

BOOL CSpaceTelescope::LoadImageFromResource(ATL::CImage* pImage, HMODULE hMod, CString strResID, LPCTSTR lpTyp)
{
	if (pImage == nullptr)
		return false;

	pImage->Destroy();

	// 查找资源
	//HRSRC hRsrc = ::FindResource(hMod, nResID, lpTyp);
	HRSRC hRsrc = ::FindResource(hMod, strResID, lpTyp);
	if (hRsrc == NULL)
		return false;
	HGLOBAL hImgData = ::LoadResource(hMod, hRsrc);
	if (hImgData == NULL)
	{
		::FreeResource(hImgData);
		return false;
	}

	// 锁定内存中的指定资源
	LPVOID lpVoid = ::LockResource(hImgData);

	LPSTREAM pStream = nullptr;
	DWORD dwSize = ::SizeofResource(hMod, hRsrc);
	HGLOBAL hNew = ::GlobalAlloc(GHND, dwSize);
	LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
	::memcpy(lpByte, lpVoid, dwSize);

	// 解除内存中的指定资源
	::GlobalUnlock(hNew);
	// 从指定内存创建流对象
	HRESULT ht = ::CreateStreamOnHGlobal(hNew, true, &pStream);
	if (ht == S_OK)
	{
		// 加载图片
		pImage->Load(pStream);

	}
	GlobalFree(hNew);
	// 释放资源
	::FreeResource(hImgData);
	return true;
}

BOOL CSpaceTelescope::LoadImageFromResource(ATL::CImage* pImage, HMODULE hMod, UINT nResID, LPCTSTR lpTyp)
{
	if (pImage == nullptr)
		return false;

	pImage->Destroy();

	// 查找资源
	//HRSRC hRsrc = ::FindResource(hMod, nResID, lpTyp);
	HRSRC hRsrc = ::FindResource(hMod, MAKEINTRESOURCE(nResID), lpTyp);
	if (hRsrc == NULL)
		return false;
	HGLOBAL hImgData = ::LoadResource(hMod, hRsrc);
	if (hImgData == NULL)
	{
		::FreeResource(hImgData);
		return false;
	}

	// 锁定内存中的指定资源
	LPVOID lpVoid = ::LockResource(hImgData);

	LPSTREAM pStream = nullptr;
	DWORD dwSize = ::SizeofResource(hMod, hRsrc);
	HGLOBAL hNew = ::GlobalAlloc(GHND, dwSize);
	LPBYTE lpByte = (LPBYTE)::GlobalLock(hNew);
	::memcpy(lpByte, lpVoid, dwSize);

	// 解除内存中的指定资源
	::GlobalUnlock(hNew);
	// 从指定内存创建流对象
	HRESULT ht = ::CreateStreamOnHGlobal(hNew, true, &pStream);
	if (ht == S_OK)
	{
		// 加载图片
		pImage->Load(pStream);

	}
	GlobalFree(hNew);
	// 释放资源
	::FreeResource(hImgData);
	return true;
}

static CString g_strlastInfo = _T("");
void CSpaceTelescope::OnMonitorNotify(CString strInfo, int nAction) {
	if (g_strlastInfo.CompareNoCase(strInfo) == 0)
		return;
	g_strlastInfo = strInfo;
	int nRet = -1;
	CString str = _T("");
	int nPos = strInfo.ReverseFind('\\');
	CString strPath = strInfo.Left(nPos + 1);
	bool bActionAtAgent = false;
	if (strPath.CompareNoCase(m_strAgentPath) >= 0)
		bActionAtAgent = true;
	switch (nAction) {
	case FILE_ACTION_ADDED:
	{
		auto it = m_mapAppWhiteListDic.find(strPath);
		if (it != m_mapAppWhiteListDic.end())
		{
			m_bEnableAllDllInject = true;
			break;
		}
		if (bActionAtAgent)
			str.Format(_T("The File: \"%s\" was copyed to AgentApp Folder"), strInfo);
		else
			str.Format(_T("The File: \"%s\" was copyed to Application Folder"), strInfo);
	}
	break;
	case FILE_ACTION_REMOVED:
		if (bActionAtAgent)
			str.Format(_T("The File: \"%s\" was deleted in AgentApp Folder"), strInfo);
		else
			str.Format(_T("The File: \"%s\" was deleted in Application Folder"), strInfo);
		break;
	case FILE_ACTION_MODIFIED:
		if (bActionAtAgent)
			str.Format(_T("The File: \"%s\" was modified in AgentApp Folder"), strInfo);
		else
			str.Format(_T("The File: \"%s\" was modified in Application Folder"), strInfo);
		break;
	case FILE_ACTION_RENAMED_NEW_NAME:
	case FILE_ACTION_RENAMED_OLD_NAME:
		if (bActionAtAgent)
			str.Format(_T("The File: \"%s\" was renamed in AgentApp Folder"), strInfo);
		else
			str.Format(_T("The File: \"%s\" was renamed in Application Folder"), strInfo);
		break;
		break;
	default:
		str = _T("");
		break;
	}

	if (str.IsEmpty() == false) {
		// 配置 TASKDIALOGCONFIG
		TASKDIALOGCONFIG tdc = { 0 };
		tdc.cbSize = sizeof(tdc);
		tdc.hwndParent = m_hMainWnd;
		// 父窗口句柄（NULL 表示没有父窗口）
		if (!::IsWindow(m_hMainWnd))
			tdc.hwndParent = GetForegroundWindow();

		// 重要：不要设置 TDF_SIZE_TO_CONTENT，否则 cxWidth 会被忽略
		tdc.dwFlags = TDF_SIZE_TO_CONTENT | TDF_ALLOW_DIALOG_CANCELLATION;  // 允许用户按 ESC 关闭
		// 也可以什么都不设：tdc.dwFlags = 0;

		tdc.pszWindowTitle = L"Current Application Whill Be Closed";
		if (bActionAtAgent)
			tdc.pszMainInstruction = L"Find UnTrusted File Action in Agent Application:\r\n";
		else
			tdc.pszMainInstruction = L"Find UnTrusted File Action in Main Application:\r\n";
		tdc.pszContent = str;

		// **** 在这里设置你想要的宽度（单位：像素） ****
		tdc.cxWidth = 300;

		// 定义普通按钮
		TASKDIALOG_BUTTON buttons[] = {
		{ IDYES, L"是(&Y)" },
		{ IDNO,  L"否(&N)" },
		};
		tdc.pButtons = buttons;
		tdc.cButtons = ARRAYSIZE(buttons);
		tdc.nDefaultButton = IDYES;

		// 可选：自定义图标（也可以使用系统图标，如 TD_INFORMATION_ICON）
		tdc.pszMainIcon = TD_INFORMATION_ICON;

		// 调用 TaskDialogIndirect
		int nClickedButton = 0;
		HRESULT hr = TaskDialogIndirect(&tdc, &nClickedButton, NULL, NULL);
		if (SUCCEEDED(hr))
		{
			switch (nClickedButton)
			{
			case IDYES: {
				if (::IsWindow(g_pSpaceTelescope->m_hMainWnd))
				{
					monitor.Stop();
					::SetParent(g_pSpaceTelescope->m_hCosmosWnd, g_pSpaceTelescope->m_hMainWnd);
					::PostMessageW(g_pSpaceTelescope->m_hMainWnd, WM_CLOSE, 0, 0);
					::PostQuitMessage(0);
				}
			}
					  break;
			case IDNO:
				break;
			case IDCANCEL:
				break;
			}
		}
	}
	m_bEnableAllDllInject = true;
}

void CSpaceTelescope::CreatorSecureInit() {
	// 设置强 ACL（阻止普通用户写入/删除）
	if (m_bDirectoryACLSecure) {
		CreatorMonitor::SetSecureDirectoryAcl(m_strAgentPath);
		CreatorMonitor::SetSecureDirectoryAcl(m_strAppPath);
	}

	// ★ 启用文件夹事件监控：
	monitor.SetWatchDirectories(true);
	// 设置安全验证回调（例如验证数字签名）
	monitor.SetVerifyCallback([](const CString& path, int nAction) -> bool {
		if (nAction == FILE_ACTION_ADDED) {
			DWORD attr = GetFileAttributes(path);
			if (attr & FILE_ATTRIBUTE_DIRECTORY)
				ATLTRACE(L"新文件夹: %s\n", path);
			else
				ATLTRACE(L"新文件: %s\n", path);
		}
		else if (nAction == FILE_ACTION_REMOVED) {
			// 注意：已删除的项目可能无法获取属性，需在回调中自行判断
			ATLTRACE(L"已删除: %s\n", path);
		}

		/*
			// 1. 白名单路径：某些目录（如更新临时目录）可以在后续被更新组件重命名安装，
			//    可暂时放行，但要结合签名校验。
			// 2. 数字签名验证
			if (!VerifyEmbeddedSignature(filePath)) {
				// 签名无效或不存在 -> 高度可疑
				LogSecurityEvent(L"Unsigned DLL detected", filePath);
				QuarantineFile(filePath);   // 移动到隔离区或直接删除
				return false;               // 通知监控系统：此文件不安全
			}
			// 3. 签名者证书检查（必须是本公司的证书）
			if (!IsSignatureFromMyCompany(filePath)) {
				LogSecurityEvent(L"DLL signed by untrusted entity", filePath);
				QuarantineFile(filePath);
				return false;
			}
			// 4. 可选：哈希白名单二次确认
			if (!IsInKnownGoodHashList(filePath)) {
				// 可能是合法但未登记的新版本 DLL，建议记录并允许，或根据策略决定
				LogSecurityEvent(L"Unknown but signed DLL", filePath);
				// 如果 Agent 有自动更新机制，这里可以接受；否则可拒绝并等待人工审查
			}
			return true; // 安全
			*/

			// TODO: 实现真正的签名校验或哈希比对
		if (g_pSpaceTelescope)
			g_pSpaceTelescope->OnMonitorNotify(path, nAction);
		return true; // 暂时放行
		});

	// 添加要监控的扩展名
	while (m_strCreatorMonitorExt.Find(_T(",,")) != -1)
		m_strCreatorMonitorExt.Replace(_T(",,"), _T(","));
	while (m_strCreatorMonitorExt.Find(_T("..")) != -1)
		m_strCreatorMonitorExt.Replace(_T(".."), _T("."));
	m_strCreatorMonitorExt.Replace(_T(",,"), _T(","));
	if (!m_strCreatorMonitorExt.IsEmpty()) {
		CString strTest = _T("");
		int nPos = 0;
		CString strSource = m_strCreatorMonitorExt;
		CString strToken = strSource.Tokenize(_T(","), nPos);

		while (!strToken.IsEmpty())
		{
			CString strKey = _T("***") + strToken + _T("***");
			if (strTest.Find(strKey) == -1) {
				monitor.AddExtension(strToken);
				strTest += strKey;
			}
			strToken = strSource.Tokenize(_T(","), nPos);
		}
	}

	while (m_strCreatorAppWhiteListData.Find(_T(",,")) != -1)
		m_strCreatorAppWhiteListData.Replace(_T(",,"), _T(","));
	while (m_strCreatorAppWhiteListData.Find(_T("..")) != -1)
		m_strCreatorAppWhiteListData.Replace(_T(".."), _T("."));
	while (m_strCreatorAppWhiteListData.Find(_T("\\\\")) != -1)
		m_strCreatorAppWhiteListData.Replace(_T("\\\\"), _T("\\"));

	while (m_strCreatorAgentWhiteListData.Find(_T(",,")) != -1)
		m_strCreatorAgentWhiteListData.Replace(_T(",,"), _T(","));
	while (m_strCreatorAgentWhiteListData.Find(_T("..")) != -1)
		m_strCreatorAgentWhiteListData.Replace(_T(".."), _T("."));
	while (m_strCreatorAgentWhiteListData.Find(_T("\\\\")) != -1)
		m_strCreatorAgentWhiteListData.Replace(_T("\\\\"), _T("\\"));
	int nPos = 0;
	CString strSource = m_strCreatorAppWhiteListData;
	if (!m_strCreatorAppWhiteListData.IsEmpty()) {
		CString strToken = strSource.Tokenize(_T(","), nPos);
		while (!strToken.IsEmpty())
		{
			CString strPath = m_strAppPath + strToken + _T("\\");
			strPath.Replace(_T("\\\\"), _T("\\"));
			strPath = strPath.MakeLower();
			if (::PathIsDirectory(strPath)) {
				auto it = m_mapAppWhiteListDic.find(strPath);
				if (it == m_mapAppWhiteListDic.end())
					m_mapAppWhiteListDic[strPath] = _T("");
			}
			strToken = strSource.Tokenize(_T(","), nPos);
		}
	}
	if (!m_strCreatorAgentWhiteListData.IsEmpty()) {
		nPos = 0;
		strSource = m_strCreatorAgentWhiteListData;
		CString strToken = strSource.Tokenize(_T(","), nPos);

		while (!strToken.IsEmpty())
		{
			CString strPath = m_strAgentPath + strToken + _T("\\");
			strPath.Replace(_T("\\\\"), _T("\\"));
			strPath = strPath.MakeLower();
			if (::PathIsDirectory(strPath)) {
				auto it = m_mapAppWhiteListDic.find(strPath);
				if (it == m_mapAppWhiteListDic.end())
					m_mapAppWhiteListDic[strPath] = _T("");
			}
			strToken = strSource.Tokenize(_T(","), nPos);
		}
	}
	CString str = _T("");
	vector<std::pair<CString, Creator::SingleAttrFunc>> attrs;
	vector<CString> exclude = { m_strExeName + _T("WorkSpace.NET.dll") };
	while (m_strCreatorAppCheckExt.Find(_T(",,")) != -1)
		m_strCreatorAppCheckExt.Replace(_T(",,"), _T(","));
	while (m_strCreatorAppCheckExt.Find(_T("..")) != -1)
		m_strCreatorAppCheckExt.Replace(_T(".."), _T("."));
	str = m_strCreatorAppCheckExt + _T(",");
	if (str.Find(_T(".exe,")) == -1) {
		m_strCreatorAppCheckExt += _T(",.exe");
	}
	if (str.Find(_T(".dll,")) == -1) {
		m_strCreatorAppCheckExt += _T(",.dll");
	}
	if (str.Find(_T(".xml,")) == -1) {
		m_strCreatorAppCheckExt += _T(",.xml");
	}
	if (str.Find(_T(".html,")) == -1) {
		m_strCreatorAppCheckExt += _T(",.html");
	}
	if (str.Find(_T(".policy,")) == -1) {
		m_strCreatorAppCheckExt += _T(",.policy");
	}
	m_strCreatorAppCheckExt.Replace(_T(",,"), _T(","));

	str = m_strCreatorAgentCheckExt + _T(",");
	if (str.Find(_T(".exe,")) == -1) {
		m_strCreatorAgentCheckExt += _T(",.exe");
	}
	if (str.Find(_T(".dll,")) == -1) {
		m_strCreatorAgentCheckExt += _T(",.dll");
	}
	if (str.Find(_T(".xml,")) == -1) {
		m_strCreatorAgentCheckExt += _T(",.xml");
	}
	if (str.Find(_T(".html,")) == -1) {
		m_strCreatorAgentCheckExt += _T(",.html");
	}
	if (str.Find(_T(".policy,")) == -1) {
		m_strCreatorAgentCheckExt += _T(",.policy");
	}
	m_strCreatorAgentCheckExt.Replace(_T(",,"), _T(","));

	while (m_strCreatorAgentCheckExt.Find(_T(",,")) != -1)
		m_strCreatorAgentCheckExt.Replace(_T(",,"), _T(","));
	while (m_strCreatorAgentCheckExt.Find(_T("..")) != -1)
		m_strCreatorAgentCheckExt.Replace(_T(".."), _T("."));

	//{ L".exe",L".dll",L".ocx",L".xml",L".policy",L".json",L".ini", L".config", L".html",L".js",L".ts" };
	vector<CString> appcheckextensions = Creator::SplitCString(m_strCreatorAppCheckExt);

	while (m_strCreatorEvSignCheckExt.Find(_T(",,")) != -1)
		m_strCreatorEvSignCheckExt.Replace(_T(",,"), _T(","));
	while (m_strCreatorEvSignCheckExt.Find(_T("..")) != -1)
		m_strCreatorEvSignCheckExt.Replace(_T(".."), _T("."));

	str = m_strCreatorEvSignCheckExt + _T(",");
	if (str.Find(_T(".exe,")) == -1) {
		m_strCreatorEvSignCheckExt += _T(",.exe");
	}
	if (str.Find(_T(".dll,")) == -1) {
		m_strCreatorEvSignCheckExt += _T(",.dll");
	}
	if (str.Find(_T(".ocx,")) == -1) {
		m_strCreatorEvSignCheckExt += _T(",.ocx");
	}
	if (str.Find(_T(".msi,")) == -1) {
		m_strCreatorEvSignCheckExt += _T(",.msi");
	}
	m_strCreatorEvSignCheckExt.Replace(_T(",,"), _T(","));
	vector<CString> checkExts = Creator::SplitCString(m_strCreatorEvSignCheckExt);//{ L".exe", L".dll", L".ocx",L".msi" };
	vector<CString> whitelist = Creator::SplitCString(m_strCreatorAppWhiteListData);
	attrs.emplace_back(L"sha256", GetFileSha256);

	CString strPath = m_strAppPath;
	strPath.MakeLower();
	m_strCreatorAppData = m_strCreatorAppData = Creator::GenerateCreatorXml(
		strPath,
		L"",
		attrs,
		appcheckextensions,
		true,
		_T("creatordata"),
		exclude,
		false,
		GetFileEVSigned,                // checkFunc
		checkExts,                      // checkExtensions
		L"evsigned",                    // checkAttrName
		L"unevsigned",                  // uncheckedNodeName
		false,                          // 未通过节点平铺输出
		whitelist,                      // 白名单前缀
		L"UnEvsigned_Component_Not_in_TrustedDirectory",
		L"UnEvsigned_Component_in_TrustedDirectory",
		&m_strCreatorAppUnSignedData
	);

	m_strCreatorAppKey = SHA256Hash(m_strCreatorAppData);

	strPath = m_strAgentPath;
	strPath.MakeLower();
	vector<CString> agentcheckextensions = Creator::SplitCString(m_strCreatorAgentCheckExt);//{ L".exe",L".dll",L".ocx",L".xml",L".policy",L".json",L".ini", L".config", L".html",L".js",L".ts" };
	vector<CString> whitelist2 = Creator::SplitCString(m_strCreatorAgentWhiteListData);
	m_strCreatorAgentData = Creator::GenerateCreatorXml(
		strPath,
		L"",
		attrs,
		agentcheckextensions,
		true,
		_T("creatordata"),
		exclude,
		false,
		GetFileEVSigned,                // checkFunc
		checkExts,                      // checkExtensions
		L"evsigned",                    // checkAttrName
		L"unevsigned",                  // uncheckedNodeName
		false,                          // 未通过节点平铺输出
		whitelist2,                     // 白名单前缀
		L"UnEvsigned_Component_Not_in_TrustedDirectory",
		L"UnEvsigned_Component_in_TrustedDirectory",
		&m_strCreatorAgentUnSignedData
	);
	m_strCreatorAgentKey = SHA256Hash(m_strCreatorAgentData);
	if (m_strCreatorAppUnSignedData.IsEmpty() == false || m_strCreatorAgentUnSignedData.IsEmpty() == false)
		m_bEnableAllDllInject = true;

	SetEvent(g_hEvent);
	if (m_strCreatorAppUnSignedData.IsEmpty() == false) {
		// 配置 TASKDIALOGCONFIG
		TASKDIALOGCONFIG tdc = { 0 };
		tdc.cbSize = sizeof(tdc);
		tdc.hwndParent = m_hMainWnd;
		// 父窗口句柄（NULL 表示没有父窗口）
		if (!::IsWindow(m_hMainWnd))
			tdc.hwndParent = GetForegroundWindow();

		// 重要：不要设置 TDF_SIZE_TO_CONTENT，否则 cxWidth 会被忽略
		tdc.dwFlags = TDF_SIZE_TO_CONTENT | TDF_ALLOW_DIALOG_CANCELLATION;  // 允许用户按 ESC 关闭
		// 也可以什么都不设：tdc.dwFlags = 0;

		tdc.pszWindowTitle = L"Current Application Whill Be Run as Developer Model";
		tdc.pszMainInstruction = L"Find UnTrusted Components in Main Application Directory:\r\n";
		tdc.pszContent = m_strCreatorAppUnSignedData;

		// **** 在这里设置你想要的宽度（单位：像素） ****
		tdc.cxWidth = 300;

		// 设置回调
		//tdc.pfCallback = Creator::TaskDialogCallback; // 设置回调
		//tdc.lpCallbackData = g_pSpaceTelescope->m_dwThreadID;

		// 定义普通按钮
		TASKDIALOG_BUTTON buttons[] = {
			{ IDYES, L"Close(&Y)" },
		};
		tdc.pButtons = buttons;
		tdc.cButtons = ARRAYSIZE(buttons);
		tdc.nDefaultButton = IDYES;

		// 可选：自定义图标（也可以使用系统图标，如 TD_INFORMATION_ICON）
		tdc.pszMainIcon = TD_INFORMATION_ICON;

		// 调用 TaskDialogIndirect
		int nClickedButton = 0;
		HRESULT hr = TaskDialogIndirect(&tdc, &nClickedButton, NULL, NULL);
	}

	if (m_strCreatorAgentUnSignedData.IsEmpty() == false) {
		// 配置 TASKDIALOGCONFIG
		TASKDIALOGCONFIG tdc = { 0 };
		tdc.cbSize = sizeof(tdc);
		tdc.hwndParent = m_hMainWnd;
		// 父窗口句柄（NULL 表示没有父窗口）
		if (!::IsWindow(m_hMainWnd))
			tdc.hwndParent = GetForegroundWindow();

		// 重要：不要设置 TDF_SIZE_TO_CONTENT，否则 cxWidth 会被忽略
		tdc.dwFlags = TDF_SIZE_TO_CONTENT | TDF_ALLOW_DIALOG_CANCELLATION;  // 允许用户按 ESC 关闭
		// 也可以什么都不设：tdc.dwFlags = 0;

		tdc.pszWindowTitle = L"Current Application Whill Be Run as Developer Model";
		tdc.pszMainInstruction = L"Find UnTrusted Components in Agent Application Directory:\r\n";
		tdc.pszContent = m_strCreatorAgentUnSignedData;

		// **** 在这里设置你想要的宽度（单位：像素） ****
		tdc.cxWidth = 300;

		// 设置回调
		//tdc.pfCallback = Creator::TaskDialogCallback; // 设置回调
		//tdc.lpCallbackData = g_pSpaceTelescope->m_dwThreadID;

		// 定义普通按钮
		TASKDIALOG_BUTTON buttons[] = {
			{ IDYES, L"Close(&Y)" },
		};
		tdc.pButtons = buttons;
		tdc.cButtons = ARRAYSIZE(buttons);
		tdc.nDefaultButton = IDYES;

		// 可选：自定义图标（也可以使用系统图标，如 TD_INFORMATION_ICON）
		tdc.pszMainIcon = TD_INFORMATION_ICON;

		// 调用 TaskDialogIndirect
		int nClickedButton = 0;
		TaskDialogIndirect(&tdc, &nClickedButton, NULL, NULL);
	}

	// 添加多个需要监控的目录
	monitor.Start(m_strAppPath, true);
	monitor.AddDirectory(m_strAgentPath, true);

	if (g_hEvent2) {
		WaitForSingleObject(g_hEvent2, INFINITE);
		CloseHandle(g_hEvent2);
		g_hEvent2 = nullptr;
		if (m_strCreatorAppInitData.IsEmpty()) {
			// 配置 TASKDIALOGCONFIG
			TASKDIALOGCONFIG tdc = { 0 };
			tdc.cbSize = sizeof(tdc);
			tdc.hwndParent = m_hMainWnd;
			// 父窗口句柄（NULL 表示没有父窗口）
			if (!::IsWindow(m_hMainWnd))
				tdc.hwndParent = GetForegroundWindow();

			// 重要：不要设置 TDF_SIZE_TO_CONTENT，否则 cxWidth 会被忽略
			tdc.dwFlags = TDF_SIZE_TO_CONTENT | TDF_ALLOW_DIALOG_CANCELLATION;  // 允许用户按 ESC 关闭
			// 也可以什么都不设：tdc.dwFlags = 0;

			tdc.pszWindowTitle = L"Current Application Whill Be Run as Developer Model";
			tdc.pszMainInstruction = L"初始化函数:\r\n";
			CString strAppNativeWorkSpacePath = m_strAgentPath + m_strExeName + _T("WorkSpace.NET.dll\r\n初始化错误");
			tdc.pszContent = strAppNativeWorkSpacePath;

			// **** 在这里设置你想要的宽度（单位：像素） ****
			tdc.cxWidth = 300;

			// 设置回调
			//tdc.pfCallback = Creator::TaskDialogCallback; // 设置回调
			//tdc.lpCallbackData = g_pSpaceTelescope->m_dwThreadID;

			// 定义普通按钮
			TASKDIALOG_BUTTON buttons[] = {
				{ IDYES, L"Close(&Y)" },
			};
			tdc.pButtons = buttons;
			tdc.cButtons = ARRAYSIZE(buttons);
			tdc.nDefaultButton = IDYES;

			// 可选：自定义图标（也可以使用系统图标，如 TD_INFORMATION_ICON）
			tdc.pszMainIcon = TD_INFORMATION_ICON;

			// 调用 TaskDialogIndirect
			int nClickedButton = 0;
			TaskDialogIndirect(&tdc, &nClickedButton, NULL, NULL);
		}
	}
}

void CSpaceTelescope::CosmosLoad()
{
	::GetModuleFileName(::GetModuleHandle(_T("universe.dll")), m_szBuffer, MAX_PATH);
	CString _strWebRTPath = m_szBuffer;
	int nPos = _strWebRTPath.ReverseFind('\\');
	m_strWebRTPath = _strWebRTPath.Left(nPos + 1);
	::SetDllDirectory(m_strWebRTPath);
	TCHAR szDriver[MAX_PATH] = { 0 };
	TCHAR szDir[MAX_PATH] = { 0 };
	TCHAR szExt[MAX_PATH] = { 0 };
	TCHAR szFile2[MAX_PATH] = { 0 };
	::GetModuleFileName(NULL, m_szBuffer, MAX_PATH);

	_tsplitpath_s(m_szBuffer, szDriver, szDir, szFile2, szExt);
	m_strAppPath = szDriver;
	m_strAppPath += szDir;

	if (::PathFileExists(m_strAgentPath) == false) {
		m_strAgentPath = m_strAppPath;
		m_strConfigFile = m_strAgentPath + m_strExeName;
		m_strConfigFile += _T(".aiagent.policy");
	}

	m_strConfigFile.MakeLower();
	if (::PathFileExists(m_strConfigFile))
	{
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadFile(m_strConfigFile)) {
			m_strProductName = m_Parse.attr(_T("productname"), m_strExeName).MakeLower();
			m_strCompanyName = m_Parse.attr(_T("companyname"), m_strExeName + _T(" team")).MakeLower();
			if (m_bAgentModel) {
				m_bDirectoryACLSecure = m_Parse.attrBool(_T("aclsecure"));
				m_strCreatorMonitorExt = m_Parse.attr(_T("monitorexcludeext"), _T(".tmp,.temp")).MakeLower();
				m_strCreatorAppCheckExt = m_Parse.attr(_T("appcheckext"), _T(".exe,.dll,.ocx,.msi,.xml,.policy,.json,.js")).MakeLower();
				m_strCreatorAgentCheckExt = m_Parse.attr(_T("agentcheckext"), _T(".exe,.dll,.ocx,.msi")).MakeLower();
				m_strCreatorEvSignCheckExt = m_Parse.attr(_T("evsignext"), _T(".exe,.dll,.ocx,.msi")).MakeLower();
				m_strCreatorAppWhiteListData = m_Parse.attr(_T("apptrustedfolderlist"), _T("component,webpage,template,image")).MakeLower();
				m_strCreatorAgentWhiteListData = m_Parse.attr(_T("agenttrustedfolderlist"), _T("component,webpage,template,image")).MakeLower();
				if (!theApp.m_bAsynLodeMode) {
					CString strInject = m_Parse.attr(_T("inject"), _T(""));
					strInject.Trim();
					if (strInject.CompareNoCase(_T("false"))) {
						CString strVal = _T("false");
						m_Parse.put_attr(_T("inject"), strVal);
						m_Parse.SaveFile(m_strConfigFile);
					}
				}
				SetEvent(theApp.m_hCreatorInitEvent);
				BuildConfigDataFile(m_strExeName, m_strProductName, m_strCompanyName);
			}
		}
	}
}

void CSpaceTelescope::WebRTInit()
{
	CTangramXmlParse _m_Parse;
	bool bLoad = false;
	if (::PathFileExists(m_strConfigFile) == FALSE)
	{
		if (::PathFileExists(m_strConfigDataFile) == TRUE)
			::DeleteFile(m_strConfigDataFile);
		CString strExePath = m_strAppPath + m_strExeName + _T(".exe");
		CString strXml = _T("");
		strXml.Format(_T("<%s companypathname='%s %s'  productname='%s' exepath='%s' />"), m_strExeName, m_strExeName, _T("Team"), m_strExeName, strExePath);
		_m_Parse.LoadXml(strXml);
		_m_Parse.SaveFile(m_strConfigFile);
		bLoad = true;
		m_bEclipse = false;
		CString strplugins = m_strAgentPath + _T("plugins\\");
		if (::PathIsDirectory(strplugins)) {
			CString strPath = strplugins + _T("*.jar");
			_wfinddata_t fd;
			fd.attrib = FILE_ATTRIBUTE_DIRECTORY;
			intptr_t pf = _wfindfirst(strPath, &fd);
			if ((fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0) {
				m_bEclipse = true;
			}
			else {
				while (!_wfindnext(pf, &fd)) {
					if ((fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0) {
						m_bEclipse = true;
						break;
					}
				}
			}
			_findclose(pf);
		}
		if (m_bEclipse) {
			_m_Parse.put_attr(_T("eclipseapp"), _T("true"));
			_m_Parse.SaveFile(m_strConfigDataFile);
		}
	}

	if (bLoad == false) {
		bLoad = _m_Parse.LoadFile(m_strConfigFile);
	}
	if (bLoad) {
		m_nJVMVersion = _m_Parse.attrInt(_T("jvmver"), JNI_VERSION_10);
		m_strAppName = _m_Parse.attr(_T("appname"), _T("Tangram System"));
		m_strAppProxyID = _m_Parse.attr(_T("appproxy"), _T(""));
		CTangramXmlParse* pNtp = _m_Parse.GetChild(_T("ntp"));
		if (pNtp)
		{
			m_strNtpXml = pNtp->xml();
		}
	}

	if (m_bEclipse) {
		if (launchMode == -1)
			GetLaunchMode();
		if (launchMode != -1) {
			m_strStartJarPath = _m_Parse.attr(_T("startupjarname"), DEFAULT_EQUINOX_STARTUP);
			CString _strBridgeJavaClass = _m_Parse.attr(_T("bridgeclass"), _T("org.eclipse.equinox.launcher.JNIBridge"));
			_strBridgeJavaClass.Replace(_T("."), _T("/"));
			USES_CONVERSION;
			m_strBridgeJavaClass = T2A(_strBridgeJavaClass);
			jarFile = findStartupJar();
			m_bEclipse = (jarFile != nullptr);
		}
		else
			m_bEclipse = false;
	}
	else
	{
		CString strPath = m_strProgramFilePath + _T("\\tangram\\") + m_strExeName + _T("\\tangraminit.xml");
		if (::PathFileExists(strPath)) {
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadFile(strPath)) {
				int nCount = m_Parse.GetCount();
				for (int i = 0; i < nCount; i++) {
					CTangramXmlParse* pParse = m_Parse.GetChild(i);
					CString strID = pParse->attr(TGM_GRID_TYPE, _T(""));
					CString strXml = pParse->GetChild(0)->xml();
					if (strID == _T("xmlRibbon")) {
						CString strPath = m_strAppCommonDocPath + _T("OfficeRibbon\\") + m_strExeName + _T("\\ribbon.xml");
						CTangramXmlParse m_Parse2;
						if (m_Parse2.LoadXml(strXml))
							m_Parse2.SaveFile(strPath);
					}
					strID.MakeLower();
					m_mapValInfo[strID] = CComVariant(strXml);
				}
			}
		}
	}
}

void CSpaceTelescope::ExitInstance()
{
	if (g_hEvent)
		CloseHandle(g_hEvent);
	if (g_hEvent2)
		CloseHandle(g_hEvent2);
	monitor.Stop();
	if (m_mapEvent.size())
	{
		auto it = m_mapEvent.begin();
		for (it = m_mapEvent.begin(); it != m_mapEvent.end(); it++)
		{
			delete it->second;
		}
		m_mapEvent.clear();
	}
	if (::IsWindow(m_hCosmosWnd))
		::DestroyWindow(m_hCosmosWnd);
	if (m_hCBTHook)
		UnhookWindowsHookEx(m_hCBTHook);
	if (m_hForegroundIdleHook)
		UnhookWindowsHookEx(m_hForegroundIdleHook);
	for (auto& it : m_mapThreadInfo)
	{
		if (it.second->m_hGetMessageHook)
		{
			UnhookWindowsHookEx(it.second->m_hGetMessageHook);
			it.second->m_hGetMessageHook = NULL;
		}
		delete it.second;
	}
	m_mapThreadInfo.erase(m_mapThreadInfo.begin(), m_mapThreadInfo.end());
	_clearObjects();
	if (m_mapNuclei.size() > 1)
	{
		for (auto it2 = m_mapNuclei.begin(); it2 != m_mapNuclei.end(); ++it2)
		{
			delete it2->second;
		}
	}
	m_mapNuclei.clear();

	if (m_mapObjDic.size())
	{
		for (auto& it : m_mapObjDic)
		{
			it.second->Release();
		}
		m_mapObjDic.erase(m_mapObjDic.begin(), m_mapObjDic.end());
	}


	for (auto& it : m_mapValInfo)
	{
		if (it.first != _T("dtetangram"))
			::VariantClear(&it.second);
	}
	m_mapValInfo.erase(m_mapValInfo.begin(), m_mapValInfo.end());
	m_mapValInfo.clear();
}

CommonThreadInfo* CSpaceTelescope::GetThreadInfo(DWORD ThreadID)
{
	CommonThreadInfo* pInfo = nullptr;

	DWORD nThreadID = ThreadID;
	if (nThreadID == 0)
		nThreadID = GetCurrentThreadId();
	auto it = m_mapThreadInfo.find(nThreadID);
	if (it != m_mapThreadInfo.end())
	{
		pInfo = it->second;
	}
	else
	{
		pInfo = new CommonThreadInfo();
		pInfo->m_hGetMessageHook = NULL;
		m_mapThreadInfo[nThreadID] = pInfo;
	}
	return pInfo;
}

ULONG CSpaceTelescope::InternalRelease()
{
	if (m_bCanClose == false)
		return 1;
	else if (m_nAppID == 3)
	{
		m_nRef--;
		return m_nRef;
	}

	return 1;
}

void CSpaceTelescope::ProcessMsg(LPMSG lpMsg)
{
	switch (lpMsg->message)
	{
	case WM_NCLBUTTONDOWN:
	case WM_NCRBUTTONDOWN:
	case WM_LBUTTONDOWN:
	case WM_LBUTTONUP:
		HWND hPWnd = ::GetAncestor(lpMsg->hwnd, GA_ROOT);
		if (lpMsg->hwnd != hPWnd)
		{
			auto it = m_mapBrowserWnd.find(hPWnd);
			if (it != m_mapBrowserWnd.end())
			{
				HWND _hPWnd = ::GetParent(hPWnd);
				if (_hPWnd == nullptr)
				{
					CBrowser* pBrowserWnd = (CBrowser*)it->second;
					if (pBrowserWnd->m_pOmniboxViewViews && pBrowserWnd->m_pOmniboxViewViews->IsFocused() == false)
						return;
					CWebView* pWnd = pBrowserWnd->m_pVisibleWebView;
					if (pWnd && lpMsg->hwnd != pWnd->m_hWnd)
					{
						CXobj* pRetNode = (CXobj*)::SendMessage(lpMsg->hwnd, WM_HUBBLE_GETNODE, 0, 0);
						switch (lpMsg->message)
						{
							//case WM_POINTERDOWN:
						case WM_LBUTTONDOWN:
							if (pRetNode == nullptr || pRetNode->m_nViewType != Grid)
							{
								::SendMessage(pWnd->m_hWnd, WM_LBUTTONDOWN, (WPARAM)lpMsg, 0);
							}
							break;
						case WM_LBUTTONUP:
							//case WM_POINTERUP:
							if (pRetNode && pRetNode->m_nViewType == Grid)
							{
								::PostMessage(pWnd->m_hWnd, WM_LBUTTONDOWN, (WPARAM)lpMsg, 0);
							}
							break;
						}
					}
				}
			}
			return;
		}
		return;
	}
	if (m_bEclipse && m_pUniverseAppProxy)
	{
		BOOL bToolBarMg = false;
		IUniverseAppProxy* pProxy = m_pActiveAppProxy;
		HWND hActiveMenu = nullptr;
		if (pProxy == nullptr)
			pProxy = m_pUniverseAppProxy;
		if (pProxy)
		{
			hActiveMenu = pProxy->GetActivePopupMenu(lpMsg->hwnd);
		}
		if (lpMsg->message != WM_LBUTTONDOWN)
		{
			if (m_pWebRTDelegate)
			{
				if (m_pWebRTDelegate->OnUniversePreTranslateMessage(lpMsg))
					return;
			}
			if (pProxy)
			{
				pProxy->UniversePreTranslateMessage(lpMsg);
			}
		}
		else
		{
			::GetClassName(lpMsg->hwnd, m_szBuffer, MAX_PATH);
			CString strClassName = CString(m_szBuffer);
			if (strClassName.Find(_T("Afx:ToolBar:")) == 0)
			{
				bToolBarMg = true;
				ATLTRACE(_T("Afx:ToolBar:%x\n"), lpMsg->hwnd);
				if (::GetWindowLong(::GetParent(lpMsg->hwnd), GWL_STYLE) & WS_POPUP)
				{
					TranslateMessage(lpMsg);
					DispatchMessage(lpMsg);//
					return;
				}
			}
			else if (pProxy)
			{
				pProxy->UniversePreTranslateMessage(lpMsg);
			}
		}
		if (bToolBarMg == false && ::IsChild(hActiveMenu, lpMsg->hwnd) == false)
			::PostMessage(hActiveMenu, WM_CLOSE, 0, 0);
		return;
	}
	if (m_pActiveAppProxy)
	{
		HWND hMenuWnd = m_pActiveAppProxy->GetActivePopupMenu(nullptr);
		if (hMenuWnd && ::IsWindow(hMenuWnd))
			::PostMessage(hMenuWnd, WM_CLOSE, 0, 0);
	}
}

void CSpaceTelescope::AttachXobj(void* pXobjEvents)
{
	CXobjEvents* m_pCLREventConnector = (CXobjEvents*)pXobjEvents;
	CXobj* pXobj = (CXobj*)m_pCLREventConnector->m_pXobj;
	pXobj->m_pCLREventConnector = m_pCLREventConnector;
}

long CSpaceTelescope::GetIPCMsgIndex(CString strMsgID)
{
	auto it = m_mapIPCMsgIndexDic.find(strMsgID);
	if (it != m_mapIPCMsgIndexDic.end())
		return it->second;
	else
		return 0;
}

CSession* CSpaceTelescope::CreateCloudSession(CWebViewImpl* pOwner)
{
	CWebViewImpl* _pOwner = pOwner ? pOwner : m_pMainWebPageImpl;
	IPCSession* _pSession = _pOwner->m_pChromeRenderFrameHost->GetIPCSession();
	CWormhole* pSession = nullptr;
	auto it = m_mapWormhole.find(_pSession);
	if (it == m_mapWormhole.end())
	{
		pSession = new CWormhole();
		pSession->m_pOwner = _pOwner;
		pSession->m_pSession = _pSession;
		pSession->Insertint64(_T("domhandle"), (__int64)pSession);
		pSession->InsertString(L"sessionid", GetNewGUID());
		m_mapWormhole[_pSession] = pSession;
	}
	else
		pSession = it->second;
	return pSession;
}

CSession* CSpaceTelescope::GetCloudSession(IXobj* _pXobj)
{
	if (_pXobj)
	{
		CXobj* pXobj = (CXobj*)_pXobj;
		return pXobj->m_pWormhole;
	}
	return nullptr;
}

// 探测 folder 下是否存在目标文件 fileName（精确名称，不区分大小写）
// 若存在返回完整路径，否则返回空字符串
CString TryFindDirect(const CString& folder, const CString& fileName) {
	CString fullPath = folder + L"\\" + fileName;
	fullPath.Replace(_T("\\\\"), _T("\\"));
	WIN32_FIND_DATAW fd;
	HANDLE h = FindFirstFileExW(
		fullPath,
		FindExInfoBasic,            // 跳过短文件名，更快
		&fd,
		FindExSearchNameMatch,      // 按名称匹配
		nullptr,
		0);                         // 不设大小写敏感 → 忽略大小写
	if (h != INVALID_HANDLE_VALUE) {
		FindClose(h);
		return fullPath;
	}
	return L"";
}

// 在 dirpath 及其所有子目录中查找第一个名为 fileName 的文件
// 返回找到的完整路径；未找到返回空字符串
CString CSpaceTelescope::GetFileByName(const CString& dirpath, const CString& fileName) {
	// 1. 先检查根目录
	CString result = TryFindDirect(dirpath, fileName);
	if (!result.IsEmpty()) return result;

	// 2. 深度优先遍历子目录
	std::stack<CString> dirs;
	dirs.push(dirpath);

	while (!dirs.empty()) {
		CString current = dirs.top();
		dirs.pop();

		// 枚举 current 下的所有子目录（不返回文件，进一步加速）
		CString search = current + L"\\*";
		search.Replace(_T("\\\\"), _T("\\"));
		WIN32_FIND_DATAW fd;
		HANDLE h = FindFirstFileExW(
			search,
			FindExInfoBasic,
			&fd,
			FindExSearchLimitToDirectories,   // 只返回目录
			nullptr,
			FIND_FIRST_EX_LARGE_FETCH);       // 减少内核切换（Win10 1607+）
		if (h == INVALID_HANDLE_VALUE) continue;

		do {
			if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) {
				// 跳过 . 和 ..
				if (wcscmp(fd.cFileName, L".") == 0 || wcscmp(fd.cFileName, L"..") == 0)
					continue;

				CString subDir = current + L"\\" + fd.cFileName;
				subDir.Replace(_T("\\\\"), _T("\\"));
				// 试探该子目录下是否存在目标文件
				//CString::IsEmpty()
				result = TryFindDirect(subDir, fileName);
				if (!result.IsEmpty()) {
					FindClose(h);
					return result;   // 找到，立即返回
				}
				// 未找到，将子目录入栈，稍后深入
				dirs.push(subDir);
			}
		} while (FindNextFileW(h, &fd));
		FindClose(h);
	}
	return L"";  // 整棵树未找到
}

// 函数：在 rootPath 目录及其所有子目录中查找名为 strFileName 的第一个文件
// 注意：此实现仅适用于项目字符集设置为“使用 Unicode 字符集”的情况
//       如果需要在 ANSI/MBCS 下使用，请将 CString 显式改为 CStringW 并调整 API 调用
//CString CSpaceTelescope::GetFileByName(const CString& rootPath, const CString& strFileName)
//{
//	return FindFirstFileDeep(rootPath, strFileName);
//	//// 使用 vector 模拟栈，实现深度优先遍历
//	//std::vector<CString> directories;
//	////if (rootPath.back() != L'\\' && rootPath.back() != L'/') {
//	////	rootPath += L"\\";
//	////}
//	//directories.push_back(rootPath);
//
//	//while (!directories.empty())
//	//{
//	//	CString currentDir = directories.back();
//	//	directories.pop_back();
//	//	currentDir.Replace(_T("\\\\"), _T("\\"));
//
//	//	// 构建搜索通配符
//	//	CString searchPattern = currentDir + L"\\*";
//	//	searchPattern.Replace(_T("\\\\"), _T("\\"));
//	//	WIN32_FIND_DATAW findData;
//	//	HANDLE hFind = FindFirstFileW(searchPattern, &findData);
//
//	//	if (hFind == INVALID_HANDLE_VALUE)
//	//	{
//	//		// 可能无权限访问或目录为空，跳过该目录
//	//		continue;
//	//	}
//
//	//	do
//	//	{
//	//		// 跳过当前目录"."和上级目录".."
//	//		if (wcscmp(findData.cFileName, L".") == 0 ||
//	//			wcscmp(findData.cFileName, L"..") == 0)
//	//		{
//	//			continue;
//	//		}
//
//	//		// 构造完整路径
//	//		CString fullPath = currentDir + L"\\" + findData.cFileName;
//	//		fullPath.Replace(_T("\\\\"), _T("\\"));
//
//	//		// 如果是目录，则加入待遍历列表
//	//		if (findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
//	//		{
//	//			// 跳过重解析点（符号链接、交接点等）以防止无限循环
//	//			// 代价：将忽略位于符号链接目录下的文件
//	//			// 如需跟踪链接，请实现基于真实路径（GetFinalPathNameByHandle）的循环检测
//	//			if (findData.dwFileAttributes & FILE_ATTRIBUTE_REPARSE_POINT)
//	//			{
//	//				continue;
//	//			}
//	//			directories.push_back(fullPath);
//	//		}
//	//		// 如果是文件，且文件名匹配（不区分大小写）
//	//		else if (_wcsicmp(findData.cFileName, strFileName) == 0)
//	//		{
//	//			// 找到目标文件，先关闭搜索句柄再返回，避免资源泄漏
//	//			FindClose(hFind);
//	//			return fullPath;
//	//		}
//
//	//	} while (FindNextFileW(hFind, &findData) != 0);
//
//	//	// 目录遍历结束，关闭句柄
//	//	FindClose(hFind);
//	//}
//
//	//// 未找到文件，返回空字符串
//	//return CString();
//}

void CSpaceTelescope::SetMainWnd(HWND hMain)
{
	m_hMainWnd = hMain;

	CCloudWinForm* pWnd = nullptr;
	LRESULT l = ::SendMessage(hMain, WM_HUBBLE_DATA, 0, 20190214);
	if (l == 0)
	{
		//GetDefaultInitWebPage();
		pWnd = new CCloudWinForm();
		m_hFormNodeWnd = (HWND)hMain;
		pWnd->SubclassWindow(hMain);
	}
	else
		pWnd = (CCloudWinForm*)l;
	if (m_pCurMDIChildFormInfo)
	{
		pWnd->m_pChildFormsInfo = m_pCurMDIChildFormInfo;
		m_pCurMDIChildFormInfo = nullptr;
	}
}

IWebView* CSpaceTelescope::GetWebPageFromForm(HWND hForm)
{
	auto it = m_mapFormWebPage.find(hForm);
	if (it != m_mapFormWebPage.end())
		return it->second;
	return nullptr;
}

INucleus* CSpaceTelescope::ConnectNuclei(HWND hForm, HWND hGalaxy, CString _strNucleusName, INuclei* _pNuclei, NucleusInfo* pInfo)
{
	if (m_nAppID == 9)
		return nullptr;
	CNuclei* pNuclei = (CNuclei*)_pNuclei;
	CString strNucleusName = _strNucleusName;

	INucleus* pGalaxy = nullptr;
	pNuclei->CreateNucleus(CComVariant(0), CComVariant((__int64)hGalaxy), strNucleusName.AllocSysString(), &pGalaxy);
	if (pGalaxy)
	{
		CNucleus* _pGalaxy = (CNucleus*)pGalaxy;
		_pGalaxy->m_pNucleusInfo = pInfo;
		_pGalaxy->m_strCurrentXml = pInfo->m_strXobjXml;
		//CXobj* pParent = (CXobj*)GetXobj(pInfo->m_hCtrlHandle);
		//pParent->m_mapSubFrame[pInfo->m_strCtrlName] = _pGalaxy;
		IXobj* pXobj = nullptr;
		CString str = _T("");
		CString strKey = _T("default");
		str.Format(_T("<%s><nucleus><xobj name='%s' /></nucleus></%s>"), strKey, _strNucleusName, strKey);
		pGalaxy->Observe(CComBSTR(strKey), CComBSTR(_pGalaxy->m_strCurrentXml), &pXobj);
		if (pXobj)
		{
			::PostAppMessage(::GetCurrentThreadId(), WM_COSMOSMSG, (WPARAM)pInfo, 20230727);
			CXobj* _pXobj = (CXobj*)pXobj;
			HWND hWnd = _pXobj->m_pXobjShareData->m_pNuclei->m_hWnd;
			CCloudWinForm* pWnd = (CCloudWinForm*)::SendMessage(hWnd, WM_HUBBLE_DATA, 0, 20190214);
			if (pWnd)
			{
				if ((::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_MDICHILD) || (pWnd->m_bMdiForm && pWnd->m_strChildFormPath != _T("")))
					return pGalaxy;
			}
			if (::IsWindow(hForm))
			{
				pWnd = (CCloudWinForm*)::SendMessage(hForm, WM_HUBBLE_DATA, 0, 20190214);
				if (pWnd && pWnd->m_bMdiForm)
				{
					_pGalaxy->m_pParentMDIWinForm = pWnd;
					pWnd->m_hMDIClient = hGalaxy;
					pWnd->m_pClientGalaxy = _pGalaxy;
				}
			}
		}
	}

	return pGalaxy;
}

static BOOL DelTree(LPCTSTR lpszPath)
{
	SHFILEOPSTRUCT FileOp = { 0 };
	FileOp.fFlags = FOF_NOCONFIRMATION;
	FileOp.hNameMappings = NULL;
	FileOp.hwnd = NULL;
	FileOp.lpszProgressTitle = NULL;
	FileOp.pFrom = lpszPath;
	FileOp.pTo = NULL;
	FileOp.wFunc = FO_DELETE;
	return SHFileOperation(&FileOp) == 0;
}

void CSpaceTelescope::RemoveOldWebRTFiles(CString strBase, CString strVer) {
	auto t = create_task([strBase, strVer]()
		{
			Sleep(500);
			HANDLE hFind; // file handle 
			WIN32_FIND_DATA FindFileData{};
			FindFileData.dwFileAttributes = FILE_ATTRIBUTE_DIRECTORY;
			CString strDirs = _T("");
			if (::PathIsDirectory(strBase))
			{
				hFind = FindFirstFile(strBase + _T("*.*"), &FindFileData); // find the first file
				if (hFind != INVALID_HANDLE_VALUE)
				{
					bool bSearch = true;
					while (bSearch) // until we finds an entry
					{
						if (FindNextFile(hFind, &FindFileData))
						{
							// Don't care about . and ..
							//if(IsDots(FindFileData.cFileName))
							if ((_tcscmp(FindFileData.cFileName, _T(".")) == 0) ||
								(_tcscmp(FindFileData.cFileName, _T("..")) == 0))
								continue;

							// We have found a directory
							if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
							{
								CString strDirName = FindFileData.cFileName;
								if (strDirName.CompareNoCase(strVer)) {
									int v1 = 0, v2 = 0, v3 = 0, v4 = 0;
									if (!strDirName.IsEmpty())
									{
										_stscanf_s(strDirName, _T("%d.%d.%d.%d"), &v1, &v2, &v3, &v4);
										if (v1 > 0 && v3 > 0 && v2 == 0) {
											strDirs += FindFileData.cFileName;
											strDirs += _T("|");
										}
									}
								}
							}

						}//FindNextFile
						else
							break;
					}//while
					FindClose(hFind);
				}
			}
			if (strDirs.IsEmpty() == false)
			{
				int nPos = strDirs.Find(_T("|"));
				while (nPos != -1) {
					CString strName = strDirs.Left(nPos);
					strDirs = strDirs.Mid(nPos + 1);
					if (DelTree(strBase + strName + _T("\\")))
						break;
					nPos = strDirs.Find(_T("|"));
				}
			}
			return;
		});
}

CString CSpaceTelescope::GetTextResource(CString strFile, int Index, CString strType) {
	ResourceReader reader(strFile);
	std::wstring text = reader.GetWideTextResource(Index, strType);
	return text.c_str();
}

void CSpaceTelescope::InitMainPage(CString& strHTML)
{
	CTangramXmlParse m_Parse;
	if (m_Parse.LoadXml(strHTML))
	{
		if (g_pSpaceTelescope->m_bIsClrCoreApp == false)
			g_pSpaceTelescope->m_bIsClrCoreApp = m_Parse.attrBool(_T("dotnetapp"), false);
		CString CorePath = g_pSpaceTelescope->m_strProgramFilePath;
		CorePath += _T("\\dotnet\\shared\\Microsoft.NETCore.App\\");
		if (g_pSpaceTelescope->m_bIsClrCoreApp && ::PathIsDirectory(CorePath)) {
			g_pSpaceTelescope->m_strMiniClrCoreVer = m_Parse.attr(_T("minidotnetver"), _T("6.0.0.0"));
		}
		else {
			g_pSpaceTelescope->m_bIsClrCoreApp = false;
		}
	}

	CString strAppNativeWorkSpacePath = m_strAgentPath + m_strExeName + _T("WorkSpace.NET.dll");
	if (::PathFileExists(strAppNativeWorkSpacePath)) {
		bool IsValidEVSign = false;
		bool isWorkSpacePathNoEVSigned = EvCheck::CheckDllNoSigned(strAppNativeWorkSpacePath);
		if (isWorkSpacePathNoEVSigned == false) {
			IsValidEVSign = EvCheck::IsEVSigned(strAppNativeWorkSpacePath);
		}
		if ((IsValidEVSign || isWorkSpacePathNoEVSigned)) {
			LoadCLR();
			DWORD dwRetCode = 0;
			ICLRRuntimeHost* pHost = m_pClrHost;
			if (m_pClrCoreHost)
				pHost = m_pClrCoreHost;
			if (pHost) {
				HRESULT hrStart = pHost->ExecuteInDefaultAppDomain(
					strAppNativeWorkSpacePath,
					_T("Creator.WorkSpace"),
					_T("Init"),
					m_strCreatorAppKey + _T("|") + m_strCreatorAgentKey,
					&dwRetCode);
			}
		}
	}
}

bool CSpaceTelescope::ProcessMsg(MSG msg)
{
	return false;
}

bool g_bInit = false;
void CSpaceTelescope::BrowserAppStart()
{
	Init();
	if (g_bInit == true)
		return;
	g_bInit = true;
	if (g_hEvent) {
		WaitForSingleObject(g_hEvent, INFINITE);
		CloseHandle(g_hEvent);
		g_hEvent = nullptr;
	}

	SetEvent(g_hEvent2);

	if (m_strCreatorAppInitData != _T("OK")) {
		m_bEnableAllDllInject = true;
	}

	CString strName = m_strExeName;
	//CString strURL = m_strAgentPath + strName + _T(".app.html");
	CString strURL = GetFileByName(m_strAgentPath, strName + _T(".app.html"));
	if (::PathFileExists(strURL)) {
		m_strStartupURL = strURL;
		m_nAppType = APP_BROWSERAPP;
	}
	else if (m_bAgentModel) {
		HANDLE hHandle = ::GetProp(m_hMainWnd, _T("WebRTFrameWndInfo"));
		if (hHandle == NULL) {
			CString strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCDlg.app.html");
			if (::PathFileExists(strSRC)) {
				::CopyFile(strSRC, strURL, false);
				CTangramXmlParse m_Parse;
				if (m_Parse.LoadFile(m_strWebRTPath + _T("InitData.xml"))) {
					CString strName = _T("");
					for (int i = 0; i < m_Parse.GetCount(); i++)
					{
						CTangramXmlParse* pChild = m_Parse.GetChild(i);
						strName = pChild->text();
						if (pChild->attrBool(_T("folder")))
						{
							CString strFolder = m_strAgentPath + strName + _T("\\");
							CreateDirectory(strFolder, NULL);
							CopyFolder(m_strWebRTPath + strName + _T("\\"), strFolder);
						}
						else
						{
							CString strTargetName = strName;
							if (strName.CollateNoCase(_T("WorkSpace.NET.dll")) == 0) {
								strTargetName = m_strExeName + strName;
							}
							::CopyFile(m_strWebRTPath + strName, m_strAgentPath + strTargetName, false);
						}
					}
				}
			}
			m_strStartupURL = strURL;
			m_nAppType = APP_BROWSERAPP;
		}
	}

	if (m_strStartupURL != _T(""))
	{
		if ((m_nAppType != APP_BROWSER) && m_pBrowserFactory && ::IsWindow(m_hCosmosWnd)) {
			if (m_nAppType == APP_BROWSERAPP)
				if (!::IsWindow(m_hMainWnd)) {
					m_hMainWnd = m_hCosmosWnd;
				}
			::PostMessage(m_hCosmosWnd, WM_COSMOSMSG, 0, TANGRAM_CHROME_APP_INIT);
			if (m_nAppType != APP_BROWSER_ECLIPSE) {
				m_nAppType = APP_BROWSERAPP;
			}
			CString str = _T("<host popup='true'><url></url></host>");
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadXml(str)) {
				CTangramXmlParse* pParse = nullptr;
				m_Parse[_T("url")].put_text(m_strStartupURL);
			}
			m_hHostBrowserWnd = m_pBrowserFactory->CreateBrowser(m_hCosmosWnd, m_Parse.xml());
		}
		::PostAppMessage(::GetCurrentThreadId(), WM_COSMOSMSG, 0, 2019111701);
	}
	else {
		if (m_nAppType == APP_BROWSER)
		{
			TCHAR szDriver[MAX_PATH] = { 0 };
			TCHAR szDir[MAX_PATH] = { 0 };
			TCHAR szExt[MAX_PATH] = { 0 };
			TCHAR szFile2[MAX_PATH] = { 0 };
			TCHAR m_szBuffer[MAX_PATH];
			memset(m_szBuffer, 0, sizeof(m_szBuffer));
			::GetModuleFileName(NULL, m_szBuffer, MAX_PATH);
			CString path = m_szBuffer;
			_tsplitpath_s(m_szBuffer, szDriver, szDir, szFile2, szExt);
			m_strAppPath = szDriver;
			m_strAppPath += szDir;
			int nPos = path.ReverseFind('.');
			path = path.Left(nPos + 1) + _T("html");
			bool bBrowserApp = (::PathFileExists(path) && !::PathIsDirectory(path));
			if (bBrowserApp) {
				bool bNtp = false;
				CTangramXmlParse m_ParseHtml;
				if (m_ParseHtml.LoadFile(path))
				{
					CString strName = m_ParseHtml.name();
					if (strName.CompareNoCase(_T("ntp")) == 0) {
						if (m_ParseHtml.GetChild(_T("nucleus"))) {
							bNtp = true;
							m_strNtpXml = m_ParseHtml.xml();
							m_hHostBrowserWnd = m_pBrowserFactory->CreateBrowser(NULL, _T("tangram://newtab|"));
						}
					}
				}
				if (bNtp == false)
				{
					CString str = _T("<host popup='true'><url></url></host>");
					CTangramXmlParse m_Parse;
					if (m_Parse.LoadXml(str)) {
						CTangramXmlParse* pParse = nullptr;
						m_Parse[_T("url")].put_text(path);
					}
					m_hHostBrowserWnd = m_pBrowserFactory->CreateBrowser(nullptr, m_Parse.xml());
				}
			}
		}
	}
}

bool CSpaceTelescope::IsMDIClientNucleusNode(IXobj* pXobj)
{
	CXobj* _pXobj = (CXobj*)pXobj;
	HWND hWnd = _pXobj->m_pXobjShareData->m_pNuclei->m_hWnd;
	if (::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_MDICHILD)
	{
		return false;
	}

	return true;
}

IXobj* CSpaceTelescope::ObserveCtrl(__int64 handle, CString name, CString NodeTag)
{
	INucleus* pGalaxy = nullptr;
	GetNucleus(handle, &pGalaxy);
	if (pGalaxy)
	{
		CString strPath = m_strAppDataPath + name + _T("\\");
		if (::PathIsDirectory(strPath) == false)
		{
			::CreateDirectory(strPath, nullptr);
		}
		strPath += NodeTag + _T(".nodexml");
		if (::PathFileExists(strPath) == false)
		{
			CString strXml = _T("<nodexml><nucleus><xobj name='StartNode' /></nucleus></nodexml>");
			CTangramXmlParse m_Parse;
			m_Parse.LoadXml(strXml);
			m_Parse.SaveFile(strPath);
		}
		IXobj* pXobj = nullptr;
		pGalaxy->Observe(NodeTag.AllocSysString(), strPath.AllocSysString(), &pXobj);
		return pXobj;
	}
	return nullptr;
};

void CSpaceTelescope::Run()
{
	theApp.Run();
}

CString CSpaceTelescope::InitEclipse(_TCHAR* jarFile)
{
	if (m_hForegroundIdleHook == NULL)
		m_hForegroundIdleHook = SetWindowsHookEx(WH_FOREGROUNDIDLE, CUniverse::ForegroundIdleProc, NULL, ::GetCurrentThreadId());
	//if (m_hCBTHook == NULL)
	//	m_hCBTHook = SetWindowsHookEx(WH_CBT, CUniverse::CBTProc, NULL, ::GetCurrentThreadId());
	m_bEnableProcessFormTabKey = true;

	jclass			jarFileClass = nullptr;
	jclass			manifestClass = nullptr;
	jclass			attributesClass = nullptr;

	jmethodID		jarFileConstructor = nullptr;
	jmethodID		getManifestMethod = nullptr;
	jmethodID		getMainAttributesMethod = nullptr;
	jmethodID		closeJarMethod = nullptr;
	jmethodID		getValueMethod = nullptr;

	JNIEnv* pJVMenv = m_pWebRTDelegate->m_pJVMenv;
	jarFileClass = pJVMenv->FindClass("java/util/jar/JarFile");
	if (jarFileClass != nullptr) {
		manifestClass = pJVMenv->FindClass("java/util/jar/Manifest");
		if (manifestClass != nullptr) {
			attributesClass = pJVMenv->FindClass("java/util/jar/Attributes");
		}
	}
	DefaultExceptionProcess(pJVMenv);
	if (attributesClass == nullptr)
		return _T("");
	/* get the classes we need */

	/* find the methods */
	jarFileConstructor = pJVMenv->GetMethodID(jarFileClass, "<init>", "(Ljava/lang/String;Z)V");
	if (jarFileConstructor != nullptr) {
		getManifestMethod = pJVMenv->GetMethodID(jarFileClass, "getManifest", "()Ljava/util/jar/Manifest;");
		if (getManifestMethod != nullptr) {
			closeJarMethod = pJVMenv->GetMethodID(jarFileClass, "close", "()V");
			if (closeJarMethod != nullptr) {
				getMainAttributesMethod = pJVMenv->GetMethodID(manifestClass, "getMainAttributes", "()Ljava/util/jar/Attributes;");
				if (getMainAttributesMethod != nullptr) {
					getValueMethod = pJVMenv->GetMethodID(attributesClass, "getValue", "(Ljava/lang/String;)Ljava/lang/String;");
				}
			}
		}
	}
	DefaultExceptionProcess(pJVMenv);
	if (getValueMethod == nullptr)
		return _T("");

	jobject jarFileObject, manifest, attributes;

	jstring mainClassString = nullptr;
	jstring jarFileString, headerString;

	jarFileString = newJavaString(pJVMenv, jarFile);
	/* headerString = new String("Main-Class"); */
	headerString = newJavaString(pJVMenv, (_TCHAR*)_T("Main-Class"));
	if (jarFileString != nullptr && headerString != nullptr) {
		/* jarfileObject = new JarFile(jarFileString, false); */
		jarFileObject = pJVMenv->NewObject(jarFileClass, jarFileConstructor, jarFileString, JNI_FALSE);
		if (jarFileObject != nullptr) {
			/* manifest = jarFileObject.getManifest(); */
			manifest = pJVMenv->CallObjectMethod(jarFileObject, getManifestMethod);
			if (manifest != nullptr) {
				/*jarFileObject.close() */
				pJVMenv->CallVoidMethod(jarFileObject, closeJarMethod);
				if (!pJVMenv->ExceptionOccurred()) {
					/* attributes = manifest.getMainAttributes(); */
					attributes = pJVMenv->CallObjectMethod(manifest, getMainAttributesMethod);
					if (attributes != nullptr) {
						/* mainClassString = attributes.getValue(headerString); */
						mainClassString = (jstring)pJVMenv->CallObjectMethod(attributes, getValueMethod, headerString);
					}
				}
			}
			pJVMenv->DeleteLocalRef(jarFileObject);
		}
	}

	if (jarFileString != nullptr)
		pJVMenv->DeleteLocalRef(jarFileString);
	if (headerString != NULL)
		pJVMenv->DeleteLocalRef(headerString);

	DefaultExceptionProcess(pJVMenv);

	if (mainClassString == nullptr)
		return _T("");

	const _TCHAR* stringChars = (_TCHAR*)pJVMenv->GetStringChars(mainClassString, 0);
	CString strName = CString(stringChars);
	pJVMenv->ReleaseStringChars(mainClassString, (const jchar*)stringChars);
	strName.Trim();
	strName.Replace(_T("."), _T("/"));

	return strName;
}

void CSpaceTelescope::CreateEclipseApp(CString strKey, CString strXml)
{
	if (eclipseLibrary)
		return;
	m_bEclipse = false;
	CString strplugins = m_strAppPath + _T("plugins\\");
	if (::PathIsDirectory(strplugins))
	{
		CString strPath = strplugins + _T("*.jar");

		_wfinddata_t fd;
		fd.attrib = FILE_ATTRIBUTE_DIRECTORY;
		intptr_t pf = _wfindfirst(strPath, &fd);
		if ((fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0)
		{
			m_bEclipse = true;
		}
		else
		{
			while (!_wfindnext(pf, &fd))
			{
				if ((fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0)
				{
					m_bEclipse = true;
					break;
				}
			}
		}
		_findclose(pf);
	}
	if (m_bEclipse)
	{
		if (launchMode == -1)
			GetLaunchMode();
		if (launchMode != -1)
		{
			CTangramXmlParse _m_Parse;
			_m_Parse.LoadFile(m_strConfigFile);
			m_strStartJarPath = _m_Parse.attr(_T("startupjarname"), DEFAULT_EQUINOX_STARTUP);
			CString _strBridgeJavaClass = _m_Parse.attr(_T("bridgeclass"), _T("org.eclipse.equinox.launcher.JNIBridge"));
			_strBridgeJavaClass.Replace(_T("."), _T("/"));
			USES_CONVERSION;
			m_strBridgeJavaClass = T2A(_strBridgeJavaClass);
			jarFile = findStartupJar();
			m_bEclipse = (jarFile != nullptr);
		}
		else
			m_bEclipse = false;
	}
	if (m_bEclipse)
	{
		if (m_pUniverseAppProxy)
		{
			m_pUniverseAppProxy->m_pvoid = nullptr;
			if (m_hCBTHook == NULL)
				m_hCBTHook = SetWindowsHookEx(WH_CBT, CUniverse::CBTProc, NULL, ::GetCurrentThreadId());
			m_bEnableProcessFormTabKey = true;
			GetLaunchMode();
			if (launchMode != -1)
			{
				TCHAR	m_szBuffer[MAX_PATH];
				::GetModuleFileName(theApp.m_hInstance, m_szBuffer, MAX_PATH);
				eclipseLibrary = m_szBuffer;

				setlocale(LC_ALL, "");
				int		nArgs;
				szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
				CEclipseExtender* pExtender = new CComObject<CEclipseExtender>;
				m_pExtender = pExtender;
				runW(nArgs, szArglist, userVMarg);
				::PostQuitMessage(0);
			}
		}
	}
}

int CSpaceTelescope::LoadCLR()
{
	if (m_pClrCoreHost != nullptr || m_pClrHost != nullptr)
		return 0;
	bool bCoreCLR = ::GetModuleHandle(_T("hostfxr.dll")) != NULL || m_bIsClrCoreApp;

	CString strCosmosPath = m_strAppPath + _T("Cosmos.dll");
	//CString strCosmosCorePath = m_strAppPath + _T("CosmosCore.dll");

	//if (bCoreCLR && ::PathFileExists(strCosmosCorePath))
	//	strCosmosPath = strCosmosCorePath;

	if (::PathFileExists(strCosmosPath) == false) {
		TCHAR m_szBuffer[MAX_PATH];
		if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer) == S_OK) {
			strCosmosPath = CString(m_szBuffer);
			if (bCoreCLR)
				strCosmosPath += _T("\\Tangram\\Creator\\CosmosCore.dll");
			else
				strCosmosPath += _T("\\Tangram\\Creator\\Cosmos.dll");
		}
	}

	if (theApp.m_strCosmosVer == _T("") && ::PathFileExists(strCosmosPath))
	{
		DWORD dwHandle, InfoSize;
		CString strVersion;

		struct LANGANDCODEPAGE
		{
			WORD wLanguage;
			WORD wCodePage;
		}*lpTranslate;
		unsigned int cbTranslate = 0;

		InfoSize = GetFileVersionInfoSize(strCosmosPath, &dwHandle);


		char* InfoBuf = new char[InfoSize];

		GetFileVersionInfo(strCosmosPath, 0, InfoSize, InfoBuf);
		VerQueryValue(InfoBuf, TEXT("\\VarFileInfo\\Translation"), (LPVOID*)&lpTranslate, &cbTranslate);

		TCHAR SubBlock[300] = { 0 };

		wsprintf(SubBlock, TEXT("\\StringFileInfo\\%04x%04x\\ProductVersion"), lpTranslate[0].wLanguage, lpTranslate[0].wCodePage);

		TCHAR* lpBuffer = NULL;
		unsigned int dwBytes = 0;
		VerQueryValue(InfoBuf, SubBlock, (void**)&lpBuffer, &dwBytes);
		if (lpBuffer != NULL)
		{
			strVersion.Format(_T("%s"), (TCHAR*)lpBuffer);
		}

		delete[] InfoBuf;
		theApp.m_strCosmosVer = strVersion;
	}
#ifdef OpenSourceWebRT
	BOOL bLoadCLRCore = false;
#else
	BOOL bLoadCLRCore = m_bIsClrCoreApp;
	if (m_bCommercialEdition == false)
		bLoadCLRCore = false;
#endif
	CString CorePath = _T("");
	HMODULE	hMscoreeLib = NULL;
	if (bLoadCLRCore == false && theApp.m_strCosmosVer == _T("10.0.0.0")) {
		if (m_pCLRProxy == nullptr && m_pClrHost == nullptr)
		{
			hMscoreeLib = ::GetModuleHandle(L"CoreCLR.dll");
			if (hMscoreeLib) {
				FnGetCLRRuntimeHost pfnGetCLRRuntimeHost =
					(FnGetCLRRuntimeHost)::GetProcAddress(hMscoreeLib, "GetCLRRuntimeHost");
				if (!pfnGetCLRRuntimeHost)
				{
					printf("ERROR - GetCLRRuntimeHost not found");
					return -1;
				}
				// Get the hosting interface
				HRESULT hr = pfnGetCLRRuntimeHost(IID_ICLRRuntimeHost4, (IUnknown**)&m_pClrCoreHost);
				DWORD exitCode = -1;

				CWebRTImpl* pWebRTProxyBase = static_cast<CWebRTImpl*>(this);
				CString strInfo = _T("");
				strInfo.Format(_T("%I64d"), (__int64)pWebRTProxyBase);
				DWORD dwRetCode = 0;
				hr = m_pClrCoreHost->ExecuteInDefaultAppDomain(
					strCosmosPath,
					_T("Universe.WebRT"),
					_T("WebRTInit"),
					strInfo,
					&dwRetCode);
				return hr;
			}
			else {
				hMscoreeLib = LoadLibrary(TEXT("mscoree.dll"));
				if (hMscoreeLib)
				{
					CosmosCLRCreateInstance CLRCreateInstance = (CosmosCLRCreateInstance)GetProcAddress(hMscoreeLib, "CLRCreateInstance");
					if (CLRCreateInstance)
					{
						HRESULT hrStart = 0;
						ICLRMetaHost* m_pMetaHost = NULL;
						hrStart = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&m_pMetaHost);
						CString strVer = _T("v4.0.30319");
						ICLRRuntimeInfo* lpRuntimeInfo = nullptr;
						hrStart = m_pMetaHost->GetRuntime(strVer.AllocSysString(), IID_ICLRRuntimeInfo, (LPVOID*)&lpRuntimeInfo);
						if (FAILED(hrStart))
							return S_FALSE;
						hrStart = lpRuntimeInfo->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&m_pClrHost);
						if (FAILED(hrStart))
							return S_FALSE;

						hrStart = m_pClrHost->Start();
						if (FAILED(hrStart))
						{
							return S_FALSE;
						}
						if (hrStart == S_FALSE)
						{
							theApp.m_bHostCLR = true;
						}
						else
							m_bEnableProcessFormTabKey = true;

						CWebRTImpl* pWebRTProxyBase = static_cast<CWebRTImpl*>(this);
						CString strInfo = _T("");
						strInfo.Format(_T("%I64d"), (__int64)pWebRTProxyBase);
						DWORD dwRetCode = 0;
						hrStart = m_pClrHost->ExecuteInDefaultAppDomain(
							strCosmosPath,
							_T("Universe.WebRT"),
							_T("WebRTInit"),
							CComBSTR(strInfo),
							&dwRetCode);
						m_pMetaHost->Release();
						m_pMetaHost = nullptr;
						FreeLibrary(hMscoreeLib);
						if (hrStart != S_OK)
							return -1;
					}
				}
			}
		}
		if (m_pCLRProxy != nullptr && m_pClrHost == nullptr)
		{
			hMscoreeLib = ::GetModuleHandle(L"CoreCLR.dll");
			if (!hMscoreeLib) {
				HMODULE	hMscoreeLib = LoadLibrary(TEXT("mscoree.dll"));
				CosmosCLRCreateInstance CLRCreateInstance = (CosmosCLRCreateInstance)GetProcAddress(hMscoreeLib, "CLRCreateInstance");
				if (CLRCreateInstance)
				{
					HRESULT hrStart = 0;
					ICLRMetaHost* m_pMetaHost = NULL;
					hrStart = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost, (LPVOID*)&m_pMetaHost);
					CString strVer = _T("v4.0.30319");
					ICLRRuntimeInfo* lpRuntimeInfo = nullptr;
					hrStart = m_pMetaHost->GetRuntime(strVer.AllocSysString(), IID_ICLRRuntimeInfo, (LPVOID*)&lpRuntimeInfo);
					if (FAILED(hrStart))
						return S_FALSE;
					hrStart = lpRuntimeInfo->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&m_pClrHost);
					if (FAILED(hrStart))
						return S_FALSE;
				}
			}
			else
			{
				FnGetCLRRuntimeHost pfnGetCLRRuntimeHost =
					(FnGetCLRRuntimeHost)::GetProcAddress(hMscoreeLib, "GetCLRRuntimeHost");
				if (!pfnGetCLRRuntimeHost)
				{
					printf("ERROR - GetCLRRuntimeHost not found");
					return -1;
				}
				// Get the hosting interface
				HRESULT hr = pfnGetCLRRuntimeHost(IID_ICLRRuntimeHost4, (IUnknown**)&m_pClrCoreHost);
			}
		}
	}
#ifdef OpenSourceWebRT
#else
	else if (m_bCommercialEdition) {
		HRESULT hr = S_FALSE;
		hMscoreeLib = ::GetModuleHandle(L"coreclr.dll");
		if (m_pCLRProxy == nullptr) {
			CorePath = m_strProgramFilePath;
			CorePath += _T("\\dotnet\\shared\\Microsoft.NETCore.App\\");
			CorePath.Replace(_T("\\\\"), _T("\\"));
			HANDLE hFind; // file handle
			WIN32_FIND_DATA FindFileData;
			CString _strVer = m_strMiniClrCoreVer;// _T("6.0.18");
			CString _strPath = _T("");
			bool bClrCoreEnable = false;
			hFind = FindFirstFile(CorePath + _T("*.*"), &FindFileData); // find the first file
			if (hFind != INVALID_HANDLE_VALUE)
			{
				bool bSearch = true;
				while (bSearch) // until we finds an entry
				{
					if (FindNextFile(hFind, &FindFileData))
					{
						// Don't care about . and ..
						if ((_tcscmp(FindFileData.cFileName, _T(".")) == 0) ||
							(_tcscmp(FindFileData.cFileName, _T("..")) == 0))
							continue;

						// We have found a directory
						if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
						{
							CString strName = CString(FindFileData.cFileName);
							strName.MakeLower();
							_strPath = CorePath + FindFileData.cFileName + _T("\\coreclr.dll");
							if (::PathFileExists(_strPath))
							{
								if (strName.CompareNoCase(_strVer) <= 0)// || strName.Find(_T("preview")) != -1)
									continue;
								else {
									_strVer = strName;
									continue;
								}
							}
							else
								continue;
						}
						else
							continue;

					}//FindNextFile
					else
						break;
				}//while
				m_strClrCoreVer = _strVer;
				FindClose(hFind);
			}
			if (hMscoreeLib == NULL) {
				CorePath = m_strProgramFilePath;
				CorePath += _T("\\dotnet\\shared\\Microsoft.NETCore.App\\");
				CorePath += m_strClrCoreVer;
				CString strCoreRoot = CorePath;
				CorePath += _T("\\CoreCLR.dll");
				CorePath.Replace(_T("\\\\"), _T("\\"));
				hMscoreeLib = ::LoadLibraryExW(CorePath, NULL, 0);
				FnGetCLRRuntimeHost pfnGetCLRRuntimeHost =
					(FnGetCLRRuntimeHost)::GetProcAddress(hMscoreeLib, "GetCLRRuntimeHost");
				if (!pfnGetCLRRuntimeHost)
				{
					printf("ERROR - GetCLRRuntimeHost not found");
					return -1;
				}
				// Get the hosting interface
				hr = pfnGetCLRRuntimeHost(IID_ICLRRuntimeHost4, (IUnknown**)&m_pClrCoreHost);
				hr = m_pClrCoreHost->SetStartupFlags(
					// These startup flags control runtime-wide behaviors.
					// A complete list of STARTUP_FLAGS can be found in mscoree.h,
					// but some of the more common ones are listed below.
					static_cast<STARTUP_FLAGS>(
						// STARTUP_FLAGS::STARTUP_SERVER_GC |                                // Use server GC
						// STARTUP_FLAGS::STARTUP_LOADER_OPTIMIZATION_MULTI_DOMAIN |        // Maximize domain-neutral loading
						// STARTUP_FLAGS::STARTUP_LOADER_OPTIMIZATION_MULTI_DOMAIN_HOST |    // Domain-neutral loading for strongly-named assemblies
						STARTUP_FLAGS::STARTUP_CONCURRENT_GC |                        // Use concurrent GC
						STARTUP_FLAGS::STARTUP_SINGLE_APPDOMAIN |                    // All code executes in the default AppDomain
						// (required to use the runtimeHost->ExecuteAssembly helper function)
						STARTUP_FLAGS::STARTUP_LOADER_OPTIMIZATION_SINGLE_DOMAIN    // Prevents domain-neutral loading
						)
				);
				hr = m_pClrCoreHost->Start();

				int appDomainFlags =
					// APPDOMAIN_FORCE_TRIVIAL_WAIT_OPERATIONS |        // Do not pump messages during wait
					// APPDOMAIN_SECURITY_SANDBOXED |                    // Causes assemblies not from the TPA list to be loaded as partially trusted
					APPDOMAIN_ENABLE_PLATFORM_SPECIFIC_APPS |            // Enable platform-specific assemblies to run
					APPDOMAIN_ENABLE_PINVOKE_AND_CLASSIC_COMINTEROP |    // Allow PInvoking from non-TPA assemblies
					APPDOMAIN_DISABLE_TRANSPARENCY_ENFORCEMENT;            // Entirely disables transparency checks

				// TRUSTED_PLATFORM_ASSEMBLIES
				// "Trusted Platform Assemblies" are prioritized by the loader and always loaded with full trust.
				// A common pattern is to include any assemblies next to CoreCLR.dll as platform assemblies.
				// More sophisticated hosts may also include their own Framework extensions (such as AppDomain managers)
				// in this list.
				size_t tpaSize = 100 * MAX_PATH; // Starting size for our TPA (Trusted Platform Assemblies) list
				wchar_t* trustedPlatformAssemblies = new wchar_t[tpaSize];
				trustedPlatformAssemblies[0] = L'\0';
				// Extensions to probe for when finding TPA list files
				const wchar_t* tpaExtensions[] = {
					L"*.dll",
					L"*.exe",
					L"*.winmd"
				};

				// Probe next to CoreCLR.dll for any files matching the extensions from tpaExtensions and
				// add them to the TPA list. In a real host, this would likely be extracted into a separate function
				// and perhaps also run on other directories of interest.
				for (int i = 0; i < _countof(tpaExtensions); i++)
				{
					// Construct the file name search pattern
					wchar_t searchPath[MAX_PATH];
					wcscpy_s(searchPath, MAX_PATH, strCoreRoot);
					wcscat_s(searchPath, MAX_PATH, L"\\");
					wcscat_s(searchPath, MAX_PATH, tpaExtensions[i]);
					// Find files matching the search pattern
					WIN32_FIND_DATAW findData;
					HANDLE fileHandle = FindFirstFileW(searchPath, &findData);
					if (fileHandle != INVALID_HANDLE_VALUE)
					{
						do
						{
							if (CString(findData.cFileName).CompareNoCase(_T("WindowsBase.dll"))) {
								// Construct the full path of the trusted assembly
								wchar_t pathToAdd[MAX_PATH];
								wcscpy_s(pathToAdd, MAX_PATH, strCoreRoot);
								wcscat_s(pathToAdd, MAX_PATH, L"\\");
								wcscat_s(pathToAdd, MAX_PATH, findData.cFileName);
								// Check to see if TPA list needs expanded
								if (wcsnlen(pathToAdd, MAX_PATH) + (3) + wcsnlen(trustedPlatformAssemblies, tpaSize) >= tpaSize)
								{
									// Expand, if needed
									tpaSize *= 2;
									wchar_t* newTPAList = new wchar_t[tpaSize];
									wcscpy_s(newTPAList, tpaSize, trustedPlatformAssemblies);
									trustedPlatformAssemblies = newTPAList;
								}

								// Add the assembly to the list and delimited with a semi-colon
								wcscat_s(trustedPlatformAssemblies, tpaSize, pathToAdd);
								wcscat_s(trustedPlatformAssemblies, tpaSize, L";");
								// Note that the CLR does not guarantee which assembly will be loaded if an assembly
								// is in the TPA list multiple times (perhaps from different paths or perhaps with different NI/NI.dll
								// extensions. Therefore, a real host should probably add items to the list in priority order and only
								// add a file if it's not already present on the list.
								//
								// For this simple sample, though, and because we're only loading TPA assemblies from a single path,
								// we can ignore that complication.
							}
							else
							{
								TRACE(L"\n");
							}

						} while (FindNextFileW(fileHandle, &findData));
						FindClose(fileHandle);
					}
				}

				strCoreRoot = m_strProgramFilePath + _T("\\dotnet\\shared\\Microsoft.WindowsDesktop.App\\") + m_strClrCoreVer;
				if (!::PathIsDirectory(strCoreRoot)) {
					CorePath = m_strProgramFilePath;
					CorePath += _T("\\dotnet\\shared\\Microsoft.WindowsDesktop.App\\");
					CorePath.Replace(_T("\\\\"), _T("\\"));
					HANDLE hFind; // file handle
					WIN32_FIND_DATA FindFileData;
					CString _strVer = m_strMiniClrCoreVer;
					CString _strPath = _T("");
					bool bClrCoreEnable = false;
					hFind = FindFirstFile(CorePath + _T("*.*"), &FindFileData); // find the first file
					if (hFind != INVALID_HANDLE_VALUE)
					{
						bool bSearch = true;
						while (bSearch) // until we finds an entry
						{
							if (FindNextFile(hFind, &FindFileData))
							{
								// Don't care about . and ..
								if ((_tcscmp(FindFileData.cFileName, _T(".")) == 0) ||
									(_tcscmp(FindFileData.cFileName, _T("..")) == 0))
									continue;

								// We have found a directory
								if ((FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
								{
									CString strName = CString(FindFileData.cFileName);
									strName.MakeLower();
									_strPath = CorePath + FindFileData.cFileName + _T("\\System.Windows.Forms.dll");
									if (::PathFileExists(_strPath))
									{
										if (strName.CompareNoCase(_strVer) <= 0)// || strName.Find(_T("preview")) != -1)
											continue;
										else {
											_strVer = strName;
											continue;
										}
									}
									else
										continue;
								}
								else
									continue;

							}//FindNextFile
							else
								break;
						}//while
						strCoreRoot = m_strProgramFilePath + _T("\\dotnet\\shared\\Microsoft.WindowsDesktop.App\\") + _strVer;
						strCoreRoot.Replace(_T("\\\\"), _T("\\"));
						FindClose(hFind);
					}
				}
				for (int i = 0; i < _countof(tpaExtensions); i++)
				{
					// Construct the file name search pattern
					wchar_t searchPath[MAX_PATH];
					wcscpy_s(searchPath, MAX_PATH, strCoreRoot);
					wcscat_s(searchPath, MAX_PATH, L"\\");
					wcscat_s(searchPath, MAX_PATH, tpaExtensions[i]);
					// Find files matching the search pattern
					WIN32_FIND_DATAW findData;
					HANDLE fileHandle = FindFirstFileW(searchPath, &findData);
					if (fileHandle != INVALID_HANDLE_VALUE)
					{
						do
						{
							// Construct the full path of the trusted assembly
							wchar_t pathToAdd[MAX_PATH];
							wcscpy_s(pathToAdd, MAX_PATH, strCoreRoot);
							wcscat_s(pathToAdd, MAX_PATH, L"\\");
							wcscat_s(pathToAdd, MAX_PATH, findData.cFileName);
							// Check to see if TPA list needs expanded
							if (wcsnlen(pathToAdd, MAX_PATH) + (3) + wcsnlen(trustedPlatformAssemblies, tpaSize) >= tpaSize)
							{
								// Expand, if needed
								tpaSize *= 2;
								wchar_t* newTPAList = new wchar_t[tpaSize];
								wcscpy_s(newTPAList, tpaSize, trustedPlatformAssemblies);
								trustedPlatformAssemblies = newTPAList;
							}
							// Add the assembly to the list and delimited with a semi-colon
							wcscat_s(trustedPlatformAssemblies, tpaSize, pathToAdd);
							wcscat_s(trustedPlatformAssemblies, tpaSize, L";");
							// Note that the CLR does not guarantee which assembly will be loaded if an assembly
							// is in the TPA list multiple times (perhaps from different paths or perhaps with different NI/NI.dll
							// extensions. Therefore, a real host should probably add items to the list in priority order and only
							// add a file if it's not already present on the list.
							//
							// For this simple sample, though, and because we're only loading TPA assemblies from a single path,
							// we can ignore that complication.
						} while (FindNextFileW(fileHandle, &findData));
						FindClose(fileHandle);
					}
				}

				//if (m_bCommercialEdition && m_strProbePaths != _T("")) {
				//	int nPos = m_strProbePaths.Find(_T(";"));
				//	if (nPos == -1) {
				//		m_strProbePaths += _T(";");
				//		nPos = m_strProbePaths.Find(_T(";"));
				//	}
				//	CString strSubPath = _T("");
				//	CString strSubPath2 = m_strProbePaths;
				//	while (nPos != -1) {
				//		strSubPath = strSubPath2.Left(nPos);
				//		strSubPath2 = strSubPath.Mid(nPos + 1);
				//		CString _strPath = m_strAppPath + strSubPath;
				//		if (::PathIsDirectory(_strPath)) {

				//		}
				//		nPos = strSubPath2.Find(_T(";"));
				//	}
				//}

				wchar_t appPaths[MAX_PATH * 50];
				// Just use the targetApp provided by the user and remove the file name
				wcscpy_s(appPaths, m_strAppPath);
				// APP_NI_PATHS
				// App (NI) paths are the paths that will be probed for native images not found on the TPA list.
				// It will typically be similar to the app paths.
				// For this sample, we probe next to the app and in a hypothetical directory of the same name with 'NI' suffixed to the end.
				wchar_t appNiPaths[MAX_PATH * 50];
				wcscpy_s(appNiPaths, m_strAppPath);
				wcscat_s(appNiPaths, MAX_PATH * 50, L";");
				wcscat_s(appNiPaths, MAX_PATH * 50, m_strAppPath);
				wcscat_s(appNiPaths, MAX_PATH * 50, L"NI");

				wchar_t appAgentPaths[MAX_PATH * 50];
				wcscpy_s(appAgentPaths, m_strAgentPath);
				wcscat_s(appAgentPaths, MAX_PATH * 50, L";");
				wcscat_s(appAgentPaths, MAX_PATH * 50, m_strAgentPath);

				// NATIVE_DLL_SEARCH_DIRECTORIES
				// Native dll search directories are paths that the runtime will probe for native DLLs called via PInvoke
				wchar_t nativeDllSearchDirectories[MAX_PATH * 50];
				wcscpy_s(nativeDllSearchDirectories, appPaths);
				wcscat_s(nativeDllSearchDirectories, MAX_PATH * 50, L";");
				wcscat_s(nativeDllSearchDirectories, MAX_PATH * 50, strCoreRoot);
				// PLATFORM_RESOURCE_ROOTS
				// Platform resource roots are paths to probe in for resource assemblies (in culture-specific sub-directories)
				wchar_t platformResourceRoots[MAX_PATH * 50];
				wcscpy_s(platformResourceRoots, appPaths);
				DWORD domainId;
				// Setup key/value pairs for AppDomain  properties
				const wchar_t* propertyKeys[] = {
					L"TRUSTED_PLATFORM_ASSEMBLIES",
					L"APP_PATHS",
					L"AGENT_PATHS",
					L"APP_NI_PATHS",
					L"NATIVE_DLL_SEARCH_DIRECTORIES",
					L"PLATFORM_RESOURCE_ROOTS"
				};
				// Property values which were constructed in step 5
				const wchar_t* propertyValues[] = {
					trustedPlatformAssemblies,
					appPaths,
					appAgentPaths,
					appNiPaths,
					nativeDllSearchDirectories,
					platformResourceRoots
				};

				// Create the AppDomain
				hr = m_pClrCoreHost->CreateAppDomainWithManager(
					L"WebRT Host AppDomain",        // Friendly AD name
					appDomainFlags,
					NULL,                            // Optional AppDomain manager assembly name
					NULL,                            // Optional AppDomain manager type (including namespace)
					sizeof(propertyKeys) / sizeof(wchar_t*),
					propertyKeys,
					propertyValues,
					&domainId);
				//delete[] propertyKeys;
				//delete[] propertyValues;
				//void* pfnDelegate = NULL;
				//hr = m_pClrCoreHost->CreateDelegate(
				//	domainId,
				//	L"HW, Version=1.0.0.0, Culture=neutral", // Target managed assembly
				//	L"ConsoleApplication.Program",           // Target managed type
				//	L"Main",                                 // Target entry point (static method)
				//	(INT_PTR*)&pfnDelegate);

				//((void*)pfnDelegate)(NULL);
			}
			else {
				FnGetCLRRuntimeHost pfnGetCLRRuntimeHost =
					(FnGetCLRRuntimeHost)::GetProcAddress(hMscoreeLib, "GetCLRRuntimeHost");
				if (!pfnGetCLRRuntimeHost)
				{
					printf("ERROR - GetCLRRuntimeHost not found");
					return -1;
				}
				// Get the hosting interface
				HRESULT hr = pfnGetCLRRuntimeHost(IID_ICLRRuntimeHost4, (IUnknown**)&m_pClrCoreHost);
			}

			DWORD exitCode = -1;
			CWebRTImpl* pWebRTProxyBase = static_cast<CWebRTImpl*>(this);
			CString strInfo = _T("");
			strInfo.Format(_T("%I64d"), (__int64)pWebRTProxyBase);
			DWORD dwRetCode = 0;
			hr = m_pClrCoreHost->ExecuteInDefaultAppDomain(
				strCosmosPath,
				_T("Universe.WebRT"),
				_T("WebRTInit"),
				CComBSTR(strInfo),
				&dwRetCode);
			return hr;
		}
		else if (m_pCLRProxy != nullptr)
		{
			if (hMscoreeLib) {
				FnGetCLRRuntimeHost pfnGetCLRRuntimeHost =
					(FnGetCLRRuntimeHost)::GetProcAddress(hMscoreeLib, "GetCLRRuntimeHost");
				if (!pfnGetCLRRuntimeHost)
				{
					printf("ERROR - GetCLRRuntimeHost not found");
					return -1;
				}
				// Get the hosting interface
				HRESULT hr = pfnGetCLRRuntimeHost(IID_ICLRRuntimeHost4, (IUnknown**)&m_pClrCoreHost);
			}
		}
	}
#endif
	return 0;
}

BOOL CSpaceTelescope::EnumPopupMenuWndProc(HWND hWnd, LPARAM lParam)
{
	HWND hPWnd = (HWND)lParam;
	HWND hOwner = GetWindow(hWnd, GW_OWNER);
	if (hPWnd == hWnd)
		return false;
	bool bIsOwner = (hOwner == (HWND)hPWnd);
	if (::GetWindowLong(hWnd, GWL_STYLE) & WS_POPUP) {
		CString strClassName = _T("");
		if (bIsOwner) {
			HWND hToolBar = ::GetDlgItem(hWnd, 1);
			if (::IsWindow(hToolBar)) {
				::GetClassName(hToolBar, g_pSpaceTelescope->m_szBuffer, MAX_PATH);
				strClassName = g_pSpaceTelescope->m_szBuffer;
				if (strClassName.Find(_T("Afx:ToolBar:")) == 0)
				{
					::SendMessage(hWnd, WM_CLOSE, 0, 0);
					return true;
				}
			}
		}
		if (g_pSpaceTelescope->m_pCLRProxy && (::GetWindowLong(hWnd, GWL_EXSTYLE) & WS_EX_TOPMOST)) {
			::GetClassName(hWnd, g_pSpaceTelescope->m_szBuffer, MAX_PATH);
			strClassName = g_pSpaceTelescope->m_szBuffer;
			if (strClassName.Find(_T("WindowsForms10.Window.")) == 0) {
				if (g_pSpaceTelescope->m_pCLRProxy->IsWinForm(hWnd) == false) {
					::ShowWindow(hWnd, SW_HIDE);
					return true;
				}
			}
		}
	}
	return TRUE;
}

#ifdef OpenSourceWebRT
#else
struct Enum_FrameData {
	int FrameType;
	HWND hFrameWnd;
	void* pFrame = NULL;
};

static BOOL CALLBACK EnumCloudFrameViewProc(HWND hWnd, LPARAM lParam)
{
	Enum_FrameData& data = *(Enum_FrameData*)lParam;
	HWND hFrame = data.hFrameWnd;
	int nID = ::GetWindowLongPtr(hWnd, GWLP_ID);
	switch (data.FrameType) {
	case 0:
	{
		CCloudMDIFrame* pFrame = (CCloudMDIFrame*)data.pFrame;
		if (nID == AFX_IDW_PANE_FIRST)
			pFrame->m_hMDIClient;
		else {
			TCHAR szClassName[MAX_PATH] = { 0 };
			::GetClassName(hWnd, szClassName, MAX_PATH);
			CString strClassName = szClassName;
			if (strClassName.Find(_T("Afx:ControlBar:")) == 0) {
				if (nID != -1) {
					pFrame->m_mapControlBar[nID] = hWnd;
				}
			}
		}
	}
	break;
	case 1:
	{
		CCloudMDTFrame* pFrame = (CCloudMDTFrame*)data.pFrame;
		if (nID >= AFX_IDW_PANE_FIRST && nID < 19921963) {
			int nSize = pFrame->m_mapView.size();
			pFrame->m_mapView[nSize] = hWnd;
		}
		else {
			TCHAR szClassName[MAX_PATH] = { 0 };
			::GetClassName(hWnd, szClassName, MAX_PATH);
			CString strClassName = szClassName;
			if (strClassName.Find(_T("Afx:ControlBar:")) == 0) {
				if (nID != -1) {
					pFrame->m_mapControlBar[nID] = hWnd;
				}
			}
		}
	}
	break;
	case 2:
	{
		if (nID >= AFX_IDW_PANE_FIRST) {
			CCloudMDIChild* pFrame = (CCloudMDIChild*)data.pFrame;
			int nSize = pFrame->m_mapView.size();
			pFrame->m_mapView[nSize] = hWnd;
		}
	}
	break;
	}
	return TRUE;
}

void CSpaceTelescope::EnumCloudFrameViewOrControlBar(HWND hCloudFrame)
{
	Enum_FrameData data;
	LRESULT lRes = ::SendMessage(hCloudFrame, WM_COSMOSMSG, 11992, 11963);
	if (lRes) {
		CCloudMDIChild* pChildFrame = (CCloudMDIChild*)lRes;
		data.pFrame = pChildFrame;
		data.FrameType = 2;
	}
	else {
		auto it = m_mapMDIParent.find(hCloudFrame);
		if (it != m_mapMDIParent.end())
		{
			CCloudMDIFrame* pMDIFrame = it->second;
			data.pFrame = pMDIFrame;
			data.FrameType = 0;
		}
		else
		{
			auto it2 = m_mapMDTWindow.find(hCloudFrame);
			if (it2 != m_mapMDTWindow.end())
			{
				CCloudMDTFrame* pFrame = it2->second;
				data.pFrame = pFrame;
				data.FrameType = 1;
			}
		}
	}
	::EnumChildWindows(hCloudFrame, EnumCloudFrameViewProc, (LPARAM)&data);
}

CCloudMDTFrame* CSpaceTelescope::AttachCloudMDTFrame(HWND hWnd, bool bNewDoc) {
	CCloudMDTFrame* pMDTFrame = NULL;
	auto it = m_mapMDTWindow.find(hWnd);
	if (it != m_mapMDTWindow.end()) {
		pMDTFrame = it->second;
	}
	else {
		pMDTFrame = new CCloudMDTFrame();
		pMDTFrame->SubclassWindow(hWnd);
		pMDTFrame->m_bCreateNewMDTDoc = bNewDoc;
		m_mapMDTWindow[hWnd] = pMDTFrame;
		if (pMDTFrame->m_bFrameAttached == false) {
			EnumCloudFrameViewOrControlBar(hWnd);
			pMDTFrame->m_bFrameAttached = true;
		}
	}
	return pMDTFrame;
}

CString CSpaceTelescope::BuildConfigDataFile(CString strExeName, CString strProductName, CString strCompanyPathName)
{
	HRESULT hr = SHGetFolderPath(NULL, CSIDL_COMMON_APPDATA, NULL, 0, m_szBuffer);
	CString _strProductName = strProductName;
	if (strProductName == _T("")) {
		if (strExeName != _T(""))
			_strProductName = strExeName;
		else
			_strProductName = m_strExeName;
	}
	CString _strCompanyPathName = strCompanyPathName;
	if (_strCompanyPathName == _T("")) {
		if (strExeName != _T(""))
			_strCompanyPathName = strExeName + _T(" Team");
		else
			_strCompanyPathName = m_strExeName + _T(" Team");
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
	m_strCommonDataDir = _strAppDataPath + _T("CreatorData\\");
	if (!::PathIsDirectory(m_strCommonDataDir)) {
		CreateDirectory(m_strCommonDataDir, NULL);
	}

	if (strExeName == _T(""))
		_strAppDataPath += m_strExeName;
	else
		_strAppDataPath += strExeName;
	_strAppDataPath += _T("\\");
	_strAppDataPath.MakeLower();
	if (!::PathIsDirectory(_strAppDataPath))
		CreateDirectory(_strAppDataPath, NULL);
	_strAppKey = ComputeHash(_strAppDataPath + _T("@") + _strCompanyPathName + _T("@") + _strProductName);
	if (strExeName == _T(""))
		m_strAppKey = _strAppKey;
	_strAppDataPath += _strAppKey;
	_strAppDataPath += _T("\\");
	if (!::PathIsDirectory(_strAppDataPath))
		CreateDirectory(_strAppDataPath, NULL);
	if (m_strAppDataPath == _T("")) {
		m_strAppDataPath = _strAppDataPath;
	}
	_strConfigDataFile = _strAppDataPath;
	//if (strExeName == _T(""))
	//	_strConfigDataFile += m_strExeName;
	//else
	_strConfigDataFile += strExeName;
	_strConfigDataFile += _T(".policy");
	m_strConfigDataFile = _strConfigDataFile;
	return _strConfigDataFile;
}

void CSpaceTelescope::AttachMDIChild(HWND hFrame, HWND hMDIChild, HWND hChildClient) {
	if (::IsWindow(hFrame)) {
		CCloudMDIFrame* pMainFrame = NULL;
		auto it = m_mapMDIParent.find(hFrame);
		if (it != m_mapMDIParent.end()) {
			pMainFrame = it->second;
		}
		else {
			pMainFrame = new CCloudMDIFrame();
			pMainFrame->SubclassWindow(hFrame);
			pMainFrame->m_hMDIClient = ::GetDlgItem(hFrame, AFX_IDW_PANE_FIRST);
			m_mapMDIParent[hFrame] = pMainFrame;
			if (pMainFrame->m_bFrameAttached == false) {
				EnumCloudFrameViewOrControlBar(hFrame);
				pMainFrame->m_bFrameAttached = true;
			}
		}
		CCloudMDIChild* pChild = NULL;
		auto it2 = pMainFrame->m_mapMDIChild.find(hMDIChild);
		if (it2 == pMainFrame->m_mapMDIChild.end()) {
			CCloudMDIChild* pChild = new CCloudMDIChild();
			pChild->SubclassWindow(hMDIChild);
			pChild->m_pParent = pMainFrame;
			pChild->m_hMDIChildClient = hChildClient;
			pMainFrame->m_mapMDIChild[hMDIChild] = pChild;
		}
		else
			pChild = it2->second;
		if (pChild) {
			int nSize = pChild->m_mapView.size();
			pChild->m_mapView[nSize] = hChildClient;
			if (pChild->m_bFrameAttached == false) {
				EnumCloudFrameViewOrControlBar(hMDIChild);
				pChild->m_bFrameAttached = true;
			}
		}
	}
}

struct Enum_Data {
	int child_id;
	HWND FindHandle;
};

static BOOL IsMainWindow(HWND hWnd, int nChildID)
{
	HWND hChild = ::GetDlgItem(hWnd, AFX_IDW_PANE_FIRST);
	if (::IsWindow(hChild) == false) {
		hChild = ::GetDlgItem(hWnd, nChildID);
	}
	else {
		TCHAR szClassName[MAX_PATH] = { 0 };
		::GetClassName(hWnd, szClassName, MAX_PATH);
		CString strClassName = szClassName;
		if (strClassName.Find(_T("WinUIDesktopWin32WindowClass")) == 0) {
			hChild = ::FindWindowEx(hWnd, NULL, _T("Microsoft.UI.Content.DesktopChildSiteBridge"), NULL);
		}
	}

	return (GetWindow(hWnd, GW_OWNER) == (HWND)0) && ::IsWindow(hChild) && IsWindowVisible(hWnd);
}

static BOOL CALLBACK EnumControlBarProc(HWND hWnd, LPARAM lParam)
{
	TCHAR szClassName[MAX_PATH] = { 0 };
	::GetClassName(hWnd, szClassName, MAX_PATH);
	CString strClassName = szClassName;
	if (strClassName.Find(_T("Afx:ControlBar:")) == 0) {
		int dwID = ::GetDlgCtrlID(hWnd);
		if (dwID != -1) {
			g_pSpaceTelescope->m_mapControlBar[dwID] = hWnd;
		}
	}
	return TRUE;
}

static BOOL CALLBACK EnumThreadWndProc(HWND hWnd, LPARAM lParam)
{
	Enum_Data& data = *(Enum_Data*)lParam;
	//Find ControlBar:
	::EnumChildWindows(hWnd, EnumControlBarProc, NULL);
	if (!IsMainWindow(hWnd, data.child_id)) {
		return TRUE;
	}
	else {
		data.FindHandle = hWnd;
		// Find MainWnd and return:
	}
	return TRUE;
}

static HWND FindMainWindow(int nChildID = AFX_IDW_PANE_FIRST)
{
	Enum_Data data{};
	data.child_id = nChildID;
	data.FindHandle = 0;
	EnumThreadWindows(g_pSpaceTelescope->m_dwThreadID, EnumThreadWndProc, (LPARAM)&data);
	return data.FindHandle;
}

HWND CSpaceTelescope::GetMainWnd(int nChildID, CString strAppProxy) {
	HWND _hMainWnd = NULL;
	m_pUniverseAppProxy = (IUniverseAppProxy*)::GetWindowLongPtr(m_hCosmosWnd, GWLP_USERDATA);
	if (m_pUniverseAppProxy == NULL) {
		if (theApp.m_bAsynLodeMode) {
			if (m_pUniverseAppProxy == NULL && strAppProxy != _T("")) {
				CString strPath = m_strProgramFilePath + _T("\\Tangram\\Creator\\");
				if (::GetModuleHandle(_T("mfc140u.dll"))) {
					strPath += strAppProxy;
				}
				else if (::GetModuleHandle(_T("mfc140ud.dll"))) {
					strPath += _T("MFCAppProxyD.dll");
				}
				strPath.Replace(_T("\\\\"), _T("\\"));
				if (::PathFileExists(strPath)) {
					::LoadLibrary(strPath);
				}
			}
			if (m_pUniverseAppProxy)
			{
				m_hMainWnd = m_pUniverseAppProxy->QueryWndInfo(MainWnd, NULL);
				if (::IsWindow(m_hMainWnd))
					_hMainWnd = m_hMainWnd;
				HANDLE hHandle = ::GetProp(m_hMainWnd, _T("WebRTFrameWndInfo"));
				if (hHandle)
				{
					WebRTFrameWndInfo* pWebRTFrameWndInfo = (WebRTFrameWndInfo*)hHandle;
					switch (pWebRTFrameWndInfo->m_nFrameType) {
					case 1:
					{
						CCloudMDTFrame* pMainFrame = AttachCloudMDTFrame(m_hMainWnd, false);
					}
					break;
					}
				}
				else
				{
					if (m_pUniverseAppProxy->m_hMainWnd)
						_hMainWnd = m_hMainWnd = m_pUniverseAppProxy->m_hMainWnd;
					m_pMainWnd = new CWebRuntimeWnd();
					m_pMainWnd->SubclassWindow(m_hMainWnd);
					::SetParent(m_hCosmosWnd, m_hMainWnd);
					::SetParent(m_hHostBrowserWnd, m_hCosmosWnd);
				}
				//::PostMessage(m_hCosmosWnd, WM_COSMOSMSG, 0, 20240220);
				return m_hMainWnd;
			}
		}
	}
	else {
		m_hMainWnd = m_pUniverseAppProxy->QueryWndInfo(MainWnd, NULL);
		if (::IsWindow(m_hMainWnd)) {
			HANDLE hHandle = ::GetProp(m_hMainWnd, _T("WebRTFrameWndInfo"));
			if (hHandle)
			{
				WebRTFrameWndInfo* pWebRTFrameWndInfo = (WebRTFrameWndInfo*)hHandle;
				switch (pWebRTFrameWndInfo->m_nFrameType) {
				case 1:
					CCloudMDTFrame * pMainFrame = AttachCloudMDTFrame(m_hMainWnd, false);
					break;
				}
			}
			m_pUniverseAppProxy->AttachWebRT();
			return m_hMainWnd;
		}
	}

#ifdef OpenSourceWebRT
#else
	if (m_bCommercialEdition) {
		if (!::IsWindow(_hMainWnd)) {
			_hMainWnd = FindMainWindow(nChildID);
			if (::IsWindow(_hMainWnd)) {
				m_pMainWnd = new CWebRuntimeWnd();
				m_pMainWnd->SubclassWindow(m_hMainWnd);
				::SetParent(m_hCosmosWnd, m_hMainWnd);
				::SetParent(m_hHostBrowserWnd, m_hCosmosWnd);
				::PostMessage(m_hCosmosWnd, WM_COSMOSMSG, 0, 20240220);
				return m_hMainWnd;
			}
		}
		if (!::IsWindow(_hMainWnd))
		{
			if (m_hForegroundIdleHook == NULL)
				m_hForegroundIdleHook = SetWindowsHookEx(WH_FOREGROUNDIDLE, CUniverse::ForegroundIdleProc, NULL, ::GetCurrentThreadId());
			m_bMainWndNotFound = true;
			m_strAppProxyID = strAppProxy;
			m_nMainClientID = nChildID;
		}
	}
#endif
	return 0;
}
#endif

CString CSpaceTelescope::RemoveUTF8BOM(CString strUTF8)
{
	int cc = 0;
	if ((cc = WideCharToMultiByte(CP_UTF8, 0, strUTF8, -1, NULL, 0, 0, 0)) > 2)
	{
		char* cstr = (char*)malloc(cc);
		WideCharToMultiByte(CP_UTF8, 0, strUTF8, -1, cstr, cc, 0, 0);

		if (cstr[0] == (char)0xEF && cstr[1] == (char)0xBB && cstr[2] == (char)0xBF)
		{
			char* new_cstr = (char*)malloc(cc - 3);
			memcpy(new_cstr, cstr + 3, cc - 3);

			CStringW newStrUTF8;
			wchar_t* buf = newStrUTF8.GetBuffer(cc - 3);
			MultiByteToWideChar(CP_UTF8, 0, new_cstr, -1, buf, cc - 3);
			newStrUTF8.ReleaseBuffer();
			free(new_cstr);
			free(cstr);
			return newStrUTF8;
		}

		free(cstr);
	}
	return strUTF8;
}

CXobj* CSpaceTelescope::ObserveEx(long hWnd, CString strExXml, CString strXml)
{
	strXml = RemoveUTF8BOM(strXml);
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	CTangramXmlParse* m_pParse = new CTangramXmlParse();
	bool bXml = m_pParse->LoadXml(strXml);
	if (bXml == false)
		bXml = m_pParse->LoadFile(strXml);

	if (bXml == false)
	{
		delete m_pParse;
		return nullptr;
	}

	BOOL bSizable = m_pParse->attrBool(_T("sizable"), false);
	CTangramXmlParse* pWndXobj = m_pParse->GetChild(TGM_NUCLEUS);
	if (pWndXobj == nullptr)
	{
		delete m_pParse;
		return nullptr;
	}

	CTangramXmlParse* pXobj = pWndXobj->GetChild(TGM_XOBJ);
	if (pXobj == nullptr)
	{
		delete m_pParse;
		return nullptr;
	}

	HWND m_hHostMain = (HWND)hWnd;
	CNucleus* _pGalaxy = m_pNucleus;
	CWnd* pWnd = CWnd::FromHandle(m_hHostMain);
	if (pWnd)
	{
		::GetClassName(m_hHostMain, m_szBuffer, MAX_PATH);
		CString strName = CString(m_szBuffer);
		if (strName.Find(_T("AfxMDIClientGalaxy")) == 0)
			pWnd->ModifyStyle(0, WS_CLIPSIBLINGS);
		else
			pWnd->ModifyStyle(0, WS_CLIPSIBLINGS | WS_CLIPCHILDREN);
	}

	CXobj* pRootXobj = nullptr;
	m_pNuclei = nullptr;
	pRootXobj = _pGalaxy->ObserveInternal(m_pParse, m_strCurrentKey);
	m_strCurrentKey = _T("");
	if (pRootXobj != nullptr)
	{
		if (_pGalaxy->m_nGalaxyType == GalaxyType::CtrlBarGalaxy)
			pRootXobj->m_strCaption = m_pParse->attr(_T("caption"), _T(""));
		if (bSizable)
		{
			HWND hParent = ::GetParent(pRootXobj->m_pHostWnd->m_hWnd);
			CWindow m_wnd;
			m_wnd.Attach(hParent);
			if ((m_wnd.GetStyle() | WS_CHILD) == 0)
			{
				m_wnd.ModifyStyle(0, WS_SIZEBOX | WS_BORDER | WS_MINIMIZEBOX | WS_MAXIMIZEBOX);
			}
			m_wnd.Detach();
			::PostMessage(hParent, WM_COSMOSMSG, 0, 1965);
		}
	}
	return pRootXobj;
}

CXobj* CSpaceTelescope::ObserveEx2(HWND hWnd, CTangramXmlParse* pParse)
{
	if (pParse) {
		for (int i = 0; i < pParse->GetCount(); i++)
		{
			CTangramXmlParse* pChildParse = pParse->GetChild(i);
			int nID = pChildParse->attrInt(_T("id"));
			HWND hChild = ::GetDlgItem(hWnd, nID);
			if (::IsWindow(hChild))
			{
				ObserveEx((long)hChild, _T(""), pChildParse->xml());
				ObserveEx2(hChild, pChildParse);
			}
		}
	}
	return nullptr;
}

STDMETHODIMP CSpaceTelescope::get_HostChromeBrowserWnd(IBrowser** ppChromeWebBrowser)
{
	if (::GetModuleHandle(L"chrome_elf.dll"))
	{
		auto it = m_mapBrowserWnd.find(m_hHostBrowserWnd);
		if (it != m_mapBrowserWnd.end())
		{
			*ppChromeWebBrowser = it->second;
		}
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::get_RootNodes(IXobjCollection** pXobjColletion)
{
	if (m_pRootNodes == nullptr)
	{
		CComObject<CXobjCollection>::CreateInstance(&m_pRootNodes);
		m_pRootNodes->AddRef();
	}

	m_pRootNodes->m_pXobjs->clear();

	for (auto& it : m_mapNuclei)
	{
		CNuclei* pGalaxy = (CNuclei*)it.second;
		for (auto fit : pGalaxy->m_mapGalaxy)
		{
			CNucleus* pGalaxy = fit.second;
			for (auto& it : pGalaxy->m_mapXobj)
			{
				m_pRootNodes->m_pXobjs->push_back(it.second);
			}
		}
	}
	return m_pRootNodes->QueryInterface(IID_IXobjCollection, (void**)pXobjColletion);
}

STDMETHODIMP CSpaceTelescope::get_CurrentActiveXobj(IXobj** pVal)
{
	if (m_pActiveXobj)
		*pVal = m_pActiveXobj;

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::SetHostFocus(void)
{
	m_pNucleus = nullptr;
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::CreateCLRObjRemote(BSTR bstrObjID, BSTR bstrXmlData, LONGLONG hWnd, IDispatch** ppDisp)
{
	CString strID = OLE2T(bstrObjID);
	strID.Trim();
	strID.MakeLower();
	CString strXml = OLE2T(bstrXmlData);
	HWND hCtrl = NULL;
	HWND _hWnd = NULL;
	int nPos = strID.Find(_T(","));
	if (nPos == -1)
	{
		CString strAppID = strID;/*.Mid(nPos + 1))&& strAppID.Find(_T(",")==-1*/
		if (strAppID != _T(""))
		{
			CComPtr<IDispatch> pCtrlDisp;
			HRESULT hr = S_FALSE;
			hr = pCtrlDisp.CoCreateInstance(CComBSTR(strAppID));
			if (hr == S_OK)
			{
				*ppDisp = pCtrlDisp.Detach();
				_hWnd = ::CreateWindowEx(NULL, L"Cosmos Xobj Class", NULL, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, (HWND)hWnd, NULL, AfxGetInstanceHandle(), NULL);
				CAxWindow m_Wnd;
				m_Wnd.Attach((HWND)_hWnd);
				CComPtr<IUnknown> pUnk;
				m_Wnd.AttachControl(*ppDisp, &pUnk);
				::SetWindowLongPtr((HWND)hWnd, GWLP_USERDATA, (LONG_PTR)_hWnd);
				if (*ppDisp)
					(*ppDisp)->AddRef();
			}
		}
	}
	else
	{
		if (nPos != -1 || strID.CompareNoCase(_T("webruntimeproxy")) == 0 || strID.CompareNoCase(_T("chromert")) == 0)
		{
			LoadCLR();

			if (m_pCLRProxy && bstrObjID != L"")
			{
				*ppDisp = m_pCLRProxy->CreateCLRObj(OLE2T(bstrObjID));
				_hWnd = ::CreateWindowEx(NULL, L"Cosmos Xobj Class", NULL, WS_CHILD | WS_VISIBLE | WS_CLIPSIBLINGS | WS_CLIPCHILDREN, 0, 0, 0, 0, (HWND)hWnd, NULL, AfxGetInstanceHandle(), NULL);
				CAxWindow m_Wnd;
				m_Wnd.Attach((HWND)_hWnd);
				CComPtr<IUnknown> pUnk;
				m_Wnd.AttachControl(*ppDisp, &pUnk);
				::SetWindowLongPtr((HWND)hWnd, GWLP_USERDATA, (LONG_PTR)_hWnd);
				if (*ppDisp)
					(*ppDisp)->AddRef();
				CComQIPtr<IOleWindow> pOleWnd(*ppDisp);
				if (pOleWnd)
				{
					pOleWnd->GetWindow(&hCtrl);
				}
			}
		}
		else
		{
			CComPtr<IDispatch> pDisp;
			pDisp.CoCreateInstance(CComBSTR(strID));
			*ppDisp = pDisp.Detach();
			if (*ppDisp)
			{
				(*ppDisp)->AddRef();
			}
			else
				return S_FALSE;
		}
	}

	if (::IsWindow(hCtrl) && ::IsWindow(hCtrl) && hWnd && strXml != _T(""))
	{
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadXml(strXml))
		{
			CTangramXmlParse* pRemoteWebUIParse = m_Parse.GetChild(_T("webui"));
			if (pRemoteWebUIParse == nullptr)
				pRemoteWebUIParse = m_Parse.GetChild(_T("hostpage"));
			if (pRemoteWebUIParse)
			{
				CNucleus* m_pNucleus = NULL;
				INuclei* pNuclei = nullptr;
				CreateNucleusGroup((LONGLONG)_hWnd, &pNuclei);
				if (pNuclei == nullptr)
					return S_FALSE;
				CNuclei* _pNuclei = (CNuclei*)pNuclei;
				if (m_pNucleus == nullptr)
				{
					INucleus* pGalaxy = nullptr;
					_pNuclei->CreateNucleus(CComVariant(0), CComVariant((LONGLONG)hCtrl), CComBSTR(L"default"), &pGalaxy);
					if (pGalaxy == nullptr)
					{
						delete _pNuclei;
						_pNuclei = nullptr;
					}
					m_pNucleus = (CNucleus*)pGalaxy;
					IXobj* pNode = nullptr;
					HRESULT hr = m_pNucleus->Observe(CComBSTR("default"), CComBSTR(pRemoteWebUIParse->xml()), &pNode);
					return hr;
				}
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::CreateCLRObj(BSTR bstrObjID, IDispatch** ppDisp)
{
	CString strID = OLE2T(bstrObjID);
	strID.Trim();
	strID.MakeLower();
	int nPos = strID.Find(_T("@"));
	if (nPos != -1)
	{
		CString strAppID = strID.Mid(nPos + 1);
		if (strAppID != _T(""))
		{
			IWebRT* pRemoteTangram = nullptr;
			auto it = m_mapRemoteCosmos.find(strAppID);
			if (it == m_mapRemoteCosmos.end())
			{
				CComPtr<IDispatch> pApp;
				pApp.CoCreateInstance(CComBSTR(strAppID), nullptr, CLSCTX_LOCAL_SERVER | CLSCTX_INPROC_SERVER);
				if (pApp)
				{
					pApp->QueryInterface(IID_IWebRT, (void**)&pRemoteTangram);
					if (pRemoteTangram)
					{
						pRemoteTangram->AddRef();
						m_mapRemoteCosmos[strAppID] = pRemoteTangram;
						LONGLONG h = 0;
						pRemoteTangram->get_RemoteHelperHWND(&h);
						HWND hWnd = (HWND)h;
						if (::IsWindow(hWnd))
						{
							CHelperWnd* pWnd = new CHelperWnd();
							pWnd->m_strID = strAppID;
							pWnd->Create(hWnd, 0, strAppID, WS_VISIBLE | WS_CHILD);
							m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
						}
					}
					else
					{
						DISPID dispID = 0;
						DISPPARAMS dispParams = { NULL, NULL, 0, 0 };
						VARIANT result = { 0 };
						EXCEPINFO excepInfo;
						memset(&excepInfo, 0, sizeof excepInfo);
						UINT nArgErr = (UINT)-1; // initialize to invalid arg
						LPOLESTR func = CComBSTR("Tangram");
						HRESULT hr = pApp->GetIDsOfNames(GUID_NULL, &func, 1, LOCALE_SYSTEM_DEFAULT, &dispID);
						if (S_OK == hr)
						{
							hr = pApp->Invoke(dispID, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dispParams, &result, &excepInfo, &nArgErr);
							if (S_OK == hr && VT_DISPATCH == result.vt && result.pdispVal)
							{
								result.pdispVal->QueryInterface(IID_IWebRT, (void**)&pRemoteTangram);
								if (pRemoteTangram)
								{
									pRemoteTangram->AddRef();
									m_mapRemoteCosmos[strAppID] = pRemoteTangram;

									LONGLONG h = 0;
									pRemoteTangram->get_RemoteHelperHWND(&h);
									HWND hWnd = (HWND)h;
									if (::IsWindow(hWnd))
									{
										CHelperWnd* pWnd = new CHelperWnd();
										pWnd->m_strID = strAppID;
										pWnd->Create(hWnd, 0, _T(""), WS_CHILD);
										m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
									}
									::VariantClear(&result);
								}
							}
						}
					}
				}
			}
			else
			{
				pRemoteTangram = it->second;
			}
			if (pRemoteTangram)
			{
				strID = strID.Left(nPos);
				return pRemoteTangram->CreateCLRObj(CComBSTR(strID), ppDisp);
			}
		}
	}
	nPos = strID.Find(_T(","));
	if (nPos != -1 || strID.CompareNoCase(_T("webruntimeproxy")) == 0 || strID.CompareNoCase(_T("chromert")) == 0)
	{
		LoadCLR();

		if (m_pCLRProxy && bstrObjID != L"")
		{
			*ppDisp = m_pCLRProxy->CreateCLRObj(OLE2T(bstrObjID));
			if (*ppDisp)
				(*ppDisp)->AddRef();
		}
	}
	else
	{
		CComPtr<IDispatch> pDisp;
		pDisp.CoCreateInstance(CComBSTR(strID));
		*ppDisp = pDisp.Detach();
		if (*ppDisp)
		{
			(*ppDisp)->AddRef();
			return S_OK;
		}
		else
			return S_FALSE;
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::get_CreatingXobj(IXobj** pVal)
{
	if (m_pActiveXobj)
		*pVal = m_pActiveXobj;

	return S_OK;
}

CString CSpaceTelescope::EncodeFileToBase64(CString strSRC)
{
	DWORD dwDesiredAccess = GENERIC_READ;
	DWORD dwShareMode = FILE_SHARE_READ;
	DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;
	HANDLE hFile = ::CreateFile(strSRC, GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, NULL);

	if (hFile == INVALID_HANDLE_VALUE)
	{
		TRACE(_T("ERROR: CreateFile failed - %s\n"), strSRC);
		return _T("");
	}
	else
	{
		DWORD dwFileSizeHigh = 0;
		__int64 qwFileSize = GetFileSize(hFile, &dwFileSizeHigh);
		qwFileSize |= (((__int64)dwFileSizeHigh) << 32);
		DWORD dwFileSize = qwFileSize;
		if ((dwFileSize == 0) || (dwFileSize == INVALID_FILE_SIZE))
		{
			TRACE(_T("ERROR: GetFileSize failed - %s\n"), strSRC);
			CloseHandle(hFile);
			return _T("");
		}
		else
		{
			BYTE* buffer = new BYTE[dwFileSize];
			memset(buffer, 0, (dwFileSize) * sizeof(BYTE));
			DWORD dwBytesRead = 0;
			if (!ReadFile(hFile, buffer, dwFileSize, &dwBytesRead, NULL))
			{
				TRACE(_T("ERROR: ReadFile failed - %s\n"), strSRC);
				CloseHandle(hFile);
			}
			else
			{
				int nMaxLineLen = dwFileSize * 2;
				char* pDstInfo = new char[nMaxLineLen];
				memset(pDstInfo, 0, dwFileSize * 2);
				Base64Encode(buffer, dwFileSize, pDstInfo, &nMaxLineLen, 0);
				CString strInfo = CString(CA2W(pDstInfo));
				delete[] pDstInfo;
				delete[] buffer;
				CloseHandle(hFile);
				return strInfo;
			}
		}
	}

	return _T("");
}

CString CSpaceTelescope::Encode(CString strSRC, BOOL bEnCode)
{
	if (bEnCode)
	{
		LPCWSTR srcInfo = strSRC;
		std::string strSrc = (LPCSTR)CW2A(srcInfo, CP_UTF8);
		int nSrcLen = strSrc.length();
		int nDstLen = Base64EncodeGetRequiredLength(nSrcLen);
		char* pDstInfo = new char[nSrcLen * 2];
		memset(pDstInfo, 0, nSrcLen * 2);
		ATL::Base64Encode((BYTE*)strSrc.c_str(), nSrcLen, pDstInfo, &nDstLen);
		CString strInfo = CString(CA2W(pDstInfo));
		delete[] pDstInfo;
		return strInfo;
	}
	else
	{
		long nSrcSize = strSRC.GetLength();
		BYTE* pDecodeStr = new BYTE[nSrcSize];
		memset(pDecodeStr, 0, nSrcSize);
		int nLen = nSrcSize;
		ATL::Base64Decode(CW2A(strSRC), nSrcSize, pDecodeStr, &nLen);
		////直接在内存里面构建CIMAGE,需要使用IStream接口,如何使用
		////构建内存环境 
		//HGLOBAL hGlobal = GlobalAlloc(GMEM_MOVEABLE, nLen); 
		//void * pData = GlobalLock(hGlobal); 
		//memcpy(pData, pDecodeStr, nLen); 
		//// 拷贝位图数据进去 
		//GlobalUnlock(hGlobal); 
		//// 创建IStream 
		//IStream * pStream = NULL; 
		//if (CreateStreamOnHGlobal(hGlobal, TRUE, &pStream) != S_OK) 
		//	return _T(""); 
		//// 使用CImage加载位图内存 
		//CImage img; 
		//if (SUCCEEDED(img.Load(pStream)) ) 
		//{ 
		//	//CClientDC dc(this);
		//	////使用内在中构造的图像 直接在对话框上绘图 
		//	//img.Draw(dc.m_hDC, 0, 0, 500, 300); 
		//} 
		////释放内存
		//pStream->Release(); 
		//GlobalFree(hGlobal); 
		CString str = CString(CA2W((char*)pDecodeStr, CP_UTF8));
		delete[] pDecodeStr;
		pDecodeStr = NULL;
		return str;
	}
}

CString	CSpaceTelescope::BuildSipURICodeStr(CString strURI, CString strPrev, CString strFix, CString strData, int n1)
{
	CString strGUID = GetNewGUID();
	CString strHelp1 = _T("");
	CString strHelp2 = _T("");
	int nPos = strGUID.Find(_T("-"));
	strHelp1 = strGUID.Left(nPos);
	nPos = strGUID.ReverseFind('-');
	strHelp2 = strGUID.Mid(nPos + 1);
	CString strTime = _T("");
	CString strTime2 = _T("");
	if (strData == _T(""))
	{
		CTime startTime = CTime::GetCurrentTime();
		strTime.Format(_T("%d-%d-%d"), startTime.GetYear(), startTime.GetMonth(), startTime.GetDay());
		strTime2.Format(_T("%02d:%02d:%02d"), startTime.GetHour(), startTime.GetMinute(), startTime.GetSecond());
	}
	else
	{
		nPos = strData.Find(_T(" "));
		strTime = strData.Left(nPos);
		strTime2 = strData.Mid(nPos + 1);
	}
	int n2 = (rand() + 100) % 7 + 2;
	CString strRet = _T("");
	if (strURI != _T("") && strPrev != _T("") && strFix != _T(""))
	{
		int nPos = strURI.Find(_T("@"));
		if (nPos != -1)
		{
			CString s = _T("");
			s.Format(_T("%s%s%s%s%s%s%s%s"), strHelp1, strTime2, strPrev, strURI.Left(nPos), strHelp2, strTime, strFix, strURI.Mid(nPos));
			CString s1 = Encode(s, true);
			s1.Replace(_T("\r\n"), _T(""));
			int n = n1 * 10 + n2;
			int m = (n2 * 2) % 7 + 2;
			strGUID = GetNewGUID();
			strGUID.Replace(_T("-"), _T(""));
			strGUID = strGUID.Left(m);
			strRet.Format(_T("%s%d%s%d"), strGUID, n1, s1, n2);

			int nLen = strRet.GetLength();
			CString str = _T("");
			int nLen1 = nLen;
			while (nLen1)
			{
				nLen1 -= n;
				strGUID = GetNewGUID();
				strGUID.Replace(_T("-"), _T(""));
				if (nLen1)
					strGUID = strGUID.Left(m);
				str += strRet.Left(n);
				str += strGUID;
				strRet = strRet.Mid(n);
				if ((nLen1 < n) && nLen1)
				{
					str += strRet;
					strGUID = GetNewGUID();
					strGUID.Replace(_T("-"), _T(""));
					str += strGUID.Left(17);
					nLen1 = 0;
				}
			}
			strRet = str.MakeReverse();
			nPos = strRet.Find(_T("="));
			if (nPos != -1)
			{
				strGUID = GetNewGUID();
				strGUID.Replace(_T("-"), _T(""));
				CString strGUID2 = GetNewGUID();
				strGUID2.Replace(_T("-"), _T(""));
				strRet.Replace(_T("="), strGUID);
				strRet = strGUID.MakeReverse() + strGUID2.Left(13) + strRet;
			}
		}
	}
	return strRet;
}

CString CSpaceTelescope::tangram_for_eclipse(CString strKey, CString strData, CString strFeatures)
{
	return _T("");
}

CString	CSpaceTelescope::GetDataFromStr(CString strCoded, CString& strTime, CString strPrev, CString strFix, int n1)
{
	CString strRet = _T("");
	if (strCoded != _T(""))
	{
		CString strKey = strCoded.Left(32);
		CString strX = strCoded;
		int nCount = strX.Replace(strKey.MakeReverse(), _T("="));
		if (nCount == 1)
		{
			strCoded = strX.Mid(32 + 13);
		}
		strCoded = strCoded.MakeReverse();
		int nLen = strCoded.GetLength();
		strRet = strCoded.Left(nLen - 17);
		CString s1 = strRet.Mid(nLen - 18);
		strRet = strCoded.Left(nLen - 18);
		int n2 = _wtoi(s1);
		int n = n1 * 10 + n2;
		int m = (n2 * 2) % 7 + 2;
		nLen = strCoded.GetLength();
		int nIndex = -1;
		CString str = _T("");
		while (nLen)
		{
			str += strRet.Left(n);
			if (nLen >= m)
			{
				strRet = strRet.Mid(n + m);
				nLen = strRet.GetLength();
			}
			else
			{
				nLen = 0;
			}
		}
		strRet = str;
		strRet = strRet.Mid(m + 1);
		strRet = Encode(strRet, false);
		strRet = strRet.MakeReverse();
		strRet.Replace(strPrev, _T(""));
		strRet.Replace(strFix, _T(""));
		strRet = strRet.Mid(8);
		CString strTime1 = strRet.Left(8);
		strRet = strRet.Mid(8);
		int nPos = strRet.Find(_T("@"));
		CString strSip2 = strRet.Mid(nPos);
		strRet = strRet.Left(nPos);
		CString strTime2 = strRet.Mid(strRet.GetLength() - 10);
		strRet = strRet.Left(strRet.GetLength() - 22);
		strRet += strSip2;
		strTime2 += _T(" ");
		strTime2 += strTime1;
		strTime = strTime2;
	}
	return strRet;
}

STDMETHODIMP CSpaceTelescope::get_RemoteHelperHWND(LONGLONG* pVal)
{
	*pVal = (LONGLONG)m_hCosmosWnd;
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::get_AppKeyValue(BSTR bstrKey, VARIANT* pVal)
{
	CString strKey = OLE2T(bstrKey);
	if (strKey != _T(""))
	{
		strKey.Trim();
		strKey.MakeLower();
		if (strKey == _T("tangramproxy"))
		{
			(*pVal).vt = VT_I8;
			(*pVal).llVal = (__int64)(CWebRTImpl*)this;
			return S_OK;
		}
		if (strKey == _T("tangramobjcount"))
		{
			(*pVal).vt = VT_I4;
			(*pVal).lVal = (long)m_nTangramObj;
			return S_OK;
		}
		if (strKey == _T("tangrammsgwnd"))
		{
			(*pVal).vt = VT_I8;
			(*pVal).llVal = (LONGLONG)m_hCosmosWnd;
			return S_OK;
		}
		if (strKey == _T("eclipseapp"))
		{
			*pVal = CComVariant((bool)m_bEclipse);
			return S_OK;
		}
		if (strKey == _T("clrproxy"))
		{
			(*pVal).vt = VT_I8;
			(*pVal).llVal = (__int64)m_pCLRProxy;
			return S_OK;
		}

		auto it = m_mapValInfo.find(strKey);
		if (it != m_mapValInfo.end())
		{
			*pVal = CComVariant(it->second);
			return S_OK;
		}
	}
	return S_FALSE;
}

STDMETHODIMP CSpaceTelescope::put_AppKeyValue(BSTR bstrKey, VARIANT newVal)
{
	CString strKey = OLE2T(bstrKey);

	if (strKey == _T(""))
		return S_OK;
	strKey.Trim();
	strKey.MakeLower();

	auto it = m_mapValInfo.find(strKey);
	if (it != m_mapValInfo.end())
	{
		::VariantClear(&it->second);
		m_mapValInfo.erase(it);
	}
	if (newVal.vt == VT_BSTR)
	{
		CString strData = OLE2T(newVal.bstrVal);
		strData = strData.Trim();
		if (strKey == _T("tangramctrlappid") && strData != _T(""))
		{
			m_strCurrentAppID = strData;
		}
		if (strKey == _T("appname") && strData != _T(""))
		{
			m_strAppName = strData;
			::VariantClear(&newVal);
			return S_OK;
		}
	}

	if (strKey.CompareNoCase(_T("CLRProxy")) == 0)
	{
		if (newVal.llVal == 0 && m_pCLRProxy)
		{
			for (auto& it : m_mapThreadInfo)
			{
				if (it.second->m_hGetMessageHook)
				{
					UnhookWindowsHookEx(it.second->m_hGetMessageHook);
					it.second->m_hGetMessageHook = NULL;
				}
				delete it.second;
			}
			m_mapThreadInfo.erase(m_mapThreadInfo.begin(), m_mapThreadInfo.end());
			if (m_mapEvent.size())
			{
				auto it = m_mapEvent.begin();
				for (it = m_mapEvent.begin(); it != m_mapEvent.end(); it++)
				{
					delete it->second;
				}
				m_mapEvent.clear();
			}

			m_pCLRProxy = nullptr;

			if (m_hCBTHook)
				UnhookWindowsHookEx(m_hCBTHook);
			if (m_hForegroundIdleHook)
				UnhookWindowsHookEx(m_hForegroundIdleHook);
			_clearObjects();
			m_pWebRTAppProxy = nullptr;
		}
		return S_OK;
	}

	if (strKey.CompareNoCase(_T("StartData")) == 0)
	{
		m_strCurrentEclipsePagePath = OLE2T(newVal.bstrVal);
		if (m_mapWorkBenchWnd.size())
		{
			CComPtr<IWorkBenchWindow> pWorkBenchWindow;
			NewWorkBench(newVal.bstrVal, &pWorkBenchWindow);
		}
		return S_OK;
	}
	if (strKey.CompareNoCase(_T("unloadclr")) == 0)
	{
		if (m_pClrHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
		{
			if (m_hCBTHook)
			{
				UnhookWindowsHookEx(m_hCBTHook);
				m_hCBTHook = nullptr;
			}
			DWORD dw = m_pClrHost->Release();
			ASSERT(dw == 0);
			if (dw == 0)
			{
				m_pClrHost = nullptr;
				m_pCLRProxy = nullptr;
				OutputDebugString(_T("------------------ClrHost Release Successed!------------------------\n"));
			}
			OutputDebugString(_T("------------------End Stop CLR------------------------\n"));
		}
		if (m_pClrCoreHost && m_nAppID == -1 && theApp.m_bHostCLR == false)
		{
			if (m_hCBTHook)
			{
				UnhookWindowsHookEx(m_hCBTHook);
				m_hCBTHook = nullptr;
			}
			DWORD dw = m_pClrCoreHost->Release();
			ASSERT(dw == 0);
			if (dw == 0)
			{
				m_pClrHost = nullptr;
				m_pCLRProxy = nullptr;
				OutputDebugString(_T("------------------ClrHost Release Successed!------------------------\n"));
			}
			OutputDebugString(_T("------------------End Stop CLR------------------------\n"));
		}
		return S_OK;
	}

	m_mapValInfo[strKey] = newVal;
	if (strKey.CompareNoCase(_T("EnableProcessFormTabKey")) == 0)
	{
		m_bEnableProcessFormTabKey = (newVal.vt == VT_I4 && newVal.lVal == 0) ? false : true;
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::NavigateNode(IXobj* _pXobj, BSTR bstrBrowserID, BSTR bstrXml, IXobj** pVal)
{
	CXobj* pXobj = (CXobj*)_pXobj;
	if (pXobj->m_nViewType == Grid)
	{
		pXobj->m_pParentObj->ObserveEx(pXobj->m_nRow, pXobj->m_nCol, bstrBrowserID, bstrXml, pVal);
		if (pVal)
		{
			return S_OK;
		}
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::MessageBox(LONGLONG hWnd, BSTR bstrContext, BSTR bstrCaption, long nStyle, int* nRet)
{
	*nRet = ::MessageBox((HWND)hWnd, OLE2T(bstrContext), OLE2T(bstrCaption), nStyle);
	return S_OK;
}

CString CSpaceTelescope::GetNewGUID()
{
	GUID   m_guid;
	CString   strGUID = _T("");
	if (S_OK == ::CoCreateGuid(&m_guid))
	{
		strGUID.Format(_T("%08X-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X"),
			m_guid.Data1, m_guid.Data2, m_guid.Data3,
			m_guid.Data4[0], m_guid.Data4[1],
			m_guid.Data4[2], m_guid.Data4[3],
			m_guid.Data4[4], m_guid.Data4[5],
			m_guid.Data4[6], m_guid.Data4[7]);
	}

	return strGUID;
}

CString CSpaceTelescope::GetPropertyFromObject(IDispatch* pObj, CString strPropertyName)
{
	CString strRet = _T("");
	if (pObj)
	{
		//ITypeLib* pTypeLib = nullptr;
		//ITypeInfo* pTypeInfo = nullptr;
		//pObj->GetTypeInfo(0, 0, &pTypeInfo);
		//if (pTypeInfo)
		//{
		//	pTypeInfo->GetContainingTypeLib(&pTypeLib, 0);
		//	pTypeInfo->Release();
		//	pTypeLib->Release();
		//}

		BSTR szMember = strPropertyName.AllocSysString();
		DISPID dispid = -1;
		HRESULT hr = pObj->GetIDsOfNames(IID_NULL, &szMember, 1, LOCALE_USER_DEFAULT, &dispid);
		if (hr == S_OK)
		{
			DISPPARAMS dispParams = { NULL, NULL, 0, 0 };
			VARIANT result = { 0 };
			EXCEPINFO excepInfo;
			memset(&excepInfo, 0, sizeof excepInfo);
			UINT nArgErr = (UINT)-1;
			HRESULT hr = pObj->Invoke(dispid, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dispParams, &result, &excepInfo, &nArgErr);
			if (S_OK == hr && VT_BSTR == result.vt)
			{
				strRet = OLE2T(result.bstrVal);
			}
			::VariantClear(&result);
		}
	}
	return strRet;
}

STDMETHODIMP CSpaceTelescope::CreateNucleusGroup(LONGLONG hWnd, INuclei** ppNucleusCluster)
{
	HWND _hWnd = (HWND)hWnd;
	if (::IsWindow(_hWnd))
	{
		CNuclei* pNuclei = nullptr;
		auto it = m_mapNuclei.find(_hWnd);
		if (it != m_mapNuclei.end())
			pNuclei = (CNuclei*)it->second;
		else
		{
			pNuclei = new CComObject<CNuclei>();
			pNuclei->m_hWnd = _hWnd;
			m_mapNuclei[_hWnd] = pNuclei;

			for (auto& it : m_mapWebRTAppProxy)
			{
				CNucleiProxy* pWebRTProxy = it.second->OnNucleiCreated(pNuclei);
				if (pWebRTProxy)
					pNuclei->m_mapNucleiProxy[it.second] = pWebRTProxy;
			}
		}
		*ppNucleusCluster = pNuclei;
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::GetNucleus(LONGLONG hHostWnd, INucleus** ppNucleus)
{
	HWND m_hHostMain = (HWND)hHostWnd;
	DWORD dwID = ::GetWindowThreadProcessId(m_hHostMain, NULL);
	CommonThreadInfo* pThreadInfo = GetThreadInfo(dwID);

	CNucleus* m_pNucleus = nullptr;
	auto iter = pThreadInfo->m_mapGalaxy.find(m_hHostMain);
	if (iter != pThreadInfo->m_mapGalaxy.end())
	{
		m_pNucleus = (CNucleus*)iter->second;
		*ppNucleus = m_pNucleus;
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::GetItemText(IXobj* pXobj, long nCtrlID, LONG nMaxLengeh, BSTR* bstrRet)
{
	if (pXobj == nullptr)
		return S_OK;
	LONGLONG h = 0;
	pXobj->get_Handle(&h);

	HWND hWnd = (HWND)h;
	if (::IsWindow(hWnd))
	{
		if (nMaxLengeh == 0)
		{
			hWnd = ::GetDlgItem(hWnd, nCtrlID);
			m_HelperWnd.Attach(hWnd);
			CString strText(_T(""));
			m_HelperWnd.GetWindowText(strText);
			m_HelperWnd.Detach();
			*bstrRet = strText.AllocSysString();
		}
		else
		{
			LPWSTR lpsz = (LPWSTR)_T("");
			::GetDlgItemText(hWnd, nCtrlID, lpsz, nMaxLengeh);
			*bstrRet = CComBSTR(lpsz);
		}
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::SetItemText(IXobj* pXobj, long nCtrlID, BSTR bstrText)
{
	if (pXobj == nullptr)
		return S_OK;
	LONGLONG h = 0;
	pXobj->get_Handle(&h);

	HWND hWnd = (HWND)h;
	if (::IsWindow(hWnd))
		::SetDlgItemText(hWnd, nCtrlID, OLE2T(bstrText));

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::CreateApplication(BSTR bstrAppID, BSTR bstrXml)
{
	CString strAppID = OLE2T(bstrAppID);
	strAppID.Trim();
	strAppID.MakeLower();
	if (strAppID == _T(""))
		return S_FALSE;

	auto it = m_mapRemoteCosmos.find(strAppID);
	if (it == m_mapRemoteCosmos.end())
	{
		CComPtr<IDispatch> pApp;
		pApp.CoCreateInstance(bstrAppID, nullptr, CLSCTX_SERVER);// | CLSCTX_INPROC_SERVER);
		if (pApp)
		{
			int nPos = m_strOfficeAppIDs.Find(strAppID);
			if (nPos == -1)
			{
				IWebRT* pRemoteTangram = nullptr;
				HRESULT hr = pApp->QueryInterface(IID_IWebRT, (void**)&pRemoteTangram);
				if (hr != S_OK)
				{
					VARIANT result = { 0 };
					DISPID dispID = 0;
					DISPPARAMS dispParams = { NULL, NULL, 0, 0 };
					EXCEPINFO excepInfo;
					memset(&excepInfo, 0, sizeof excepInfo);
					UINT nArgErr = (UINT)-1; // initialize to invalid arg
					LPOLESTR func = CComBSTR("Tangram");
					hr = pApp->GetIDsOfNames(GUID_NULL, &func, 1, LOCALE_SYSTEM_DEFAULT, &dispID);
					if (S_OK == hr)
					{
						hr = pApp->Invoke(dispID, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dispParams, &result, &excepInfo, &nArgErr);
						if (S_OK == hr && VT_DISPATCH == result.vt && result.pdispVal)
						{
							result.pdispVal->QueryInterface(IID_IWebRT, (void**)&pRemoteTangram);
						}
					}
					::VariantClear(&result);
				}
				if (pRemoteTangram)
				{
					pRemoteTangram->AddRef();
					CString strModel = OLE2T(bstrXml);
					m_mapRemoteCosmos[strAppID] = pRemoteTangram;
					DWORD dwID = ::GetCurrentProcessId();
					CString str = _T("");
					str.Format(_T("tangramprocess:%d"), dwID);
					CComVariant var;
					var.vt = VT_DISPATCH;
					var.pdispVal = (IDispatch*)g_pSpaceTelescope;
					pRemoteTangram->put_AppKeyValue(CComBSTR(str), var);
					LONGLONG h = 0;
					pRemoteTangram->get_RemoteHelperHWND(&h);
					HWND hWnd = (HWND)h;
					if (::IsWindow(hWnd))
					{
						CHelperWnd* pWnd = new CHelperWnd();
						pWnd->m_strID = strAppID;
						pWnd->Create(hWnd, 0, _T(""), WS_CHILD);
						m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
					}
				}
			}
		}
		else
		{
			int nPos = strAppID.Find(_T(","));
			if (nPos != -1)
			{

			}
			return S_FALSE;
		}
	}
	else
	{
		DWORD dwID = ::GetCurrentProcessId();
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadXml(OLE2T(bstrXml)))
		{
			m_Parse.put_attr(_T("processid"), (__int64)dwID);

			it->second->put_AppKeyValue(CComBSTR(L"doctemplate"), CComVariant(m_Parse.xml()));
		}
	}
	return S_OK;
}

bool CSpaceTelescope::CheckUrl(CString& url)
{
	char* res = nullptr;
	char		dwCode[20];
	DWORD		dwIndex, dwCodeLen;
	HINTERNET   hSession, hFile;

	url.MakeLower();

	hSession = InternetOpen(_T("Tangram"), INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hSession)
	{
		//hFile = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_RELOAD, 0);
		hFile = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_IGNORE_REDIRECT_TO_HTTPS, 0);
		if (hFile == NULL)
		{
			InternetCloseHandle(hSession);
			return false;
		}
		dwIndex = 0;
		dwCodeLen = 10;
		HttpQueryInfo(hFile, HTTP_QUERY_STATUS_CODE, dwCode, &dwCodeLen, &dwIndex);
		res = dwCode;
		if (strcmp(res, "200 ") || strcmp(res, "302 "))
		{
			//200,302未重定位标志    
			if (hFile)
				InternetCloseHandle(hFile);
			InternetCloseHandle(hSession);
			return   true;
		}
	}
	return   false;
}

STDMETHODIMP CSpaceTelescope::UpdateXobj(IXobj* pXobj)
{
	CXobj* pWndXobj = (CXobj*)pXobj;
	if (pWndXobj)
	{
		if (pWndXobj->m_pWindow)
		{
			if (pWndXobj->m_nActivePage > 0)
			{
				CString strVal = _T("");
				strVal.Format(_T("%d"), pWndXobj->m_nActivePage);
				pWndXobj->m_pHostParse->put_attr(_T("activepage"), strVal);
			}
			pWndXobj->m_pWindow->Save();
		}
		if (pWndXobj->m_nViewType == Grid)
		{
			((CGridWnd*)pWndXobj->m_pHostWnd)->Save();
		}
		for (auto& it2 : pWndXobj->m_vChildNodes)
		{
			UpdateXobj(it2);
		}
		if ((pWndXobj == pWndXobj->m_pRootObj || pWndXobj->m_pParentObj == nullptr) && pWndXobj->m_pXobjShareData->m_pOfficeObj)
		{
			CTangramXmlParse* pWndParse = pWndXobj->m_pXobjShareData->m_pWebRTParse->GetChild(TGM_NUCLEUS);
			CString strXml = pWndParse->xml();
			CString strNodeName = pWndXobj->m_pXobjShareData->m_pWebRTParse->name();
			UpdateOfficeObj(pWndXobj->m_pXobjShareData->m_pOfficeObj, strXml, strNodeName);
		}
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::DestroyCtrl(LONGLONG hWnd)
{
	::DestroyWindow((HWND)hWnd);
	return S_OK;
};

HRESULT CSpaceTelescope::CreateBrowser(ULONGLONG hParentWnd, BSTR bstrUrls, IBrowser** ppRet)
{
	HWND hPWnd = (HWND)hParentWnd;
	if (hParentWnd == 1)
		hPWnd = m_hCosmosWnd;
	CString strUrls = OLE2T(bstrUrls);
	CString strPath = m_strAppPath;
	strUrls.Replace(_T("host:"), strPath);
	if (m_pBrowserFactory)
	{
		strUrls += _T("|");
		strUrls.Replace(_T("||"), _T("|"));
		HWND hRet = m_pBrowserFactory->CreateBrowser(hPWnd, strUrls);
		if (hParentWnd == 1)
		{
			m_hTempBrowserWnd = hRet;
			::PostAppMessage(m_dwThreadID, WM_COSMOSMSG, 0, 20201028);
		}
		*ppRet = (IBrowser*)::SendMessage(hRet, WM_COSMOSMSG, 20190527, 0);
	}
	return S_OK;
}

CTabStatsTrackerDelegate* CSpaceTelescope::SetTabStatsTrackerDelegate()
{
	return this;
}

STDMETHODIMP CSpaceTelescope::GetXobjFromHandle(LONGLONG hWnd, IXobj** ppRetXobj)
{
	HWND _hWnd = (HWND)hWnd;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
		*ppRetXobj = pInfo->m_pXobj;
	else
		return S_FALSE;
	return S_OK;
}

CString CSpaceTelescope::GetDocTemplateXml(CString strCaption, CString _strPath, CString strFilter)
{
	CString strTemplate = _T("");
	return strTemplate;
}

STDMETHODIMP CSpaceTelescope::get_HostWnd(LONGLONG* pVal)
{
	*pVal = (LONGLONG)m_hCosmosWnd;

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::get_RemoteCosmos(BSTR bstrID, IWebRT** pVal)
{
	CString strID = OLE2T(bstrID);
	strID.MakeLower();
	auto it = m_mapRemoteCosmos.find(strID);
	if (it != m_mapRemoteCosmos.end())
	{
		*pVal = it->second;
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::GetCtrlByName(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, IDispatch** ppRetDisp)
{
	if (m_pCLRProxy)
	{
		*ppRetDisp = m_pCLRProxy->GetCtrlByName(pCtrl, bstrName, bFindInChild ? true : false);
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::GetCtrlValueByName(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, BSTR* bstrVal)
{
	if (m_pCLRProxy)
	{
		*bstrVal = m_pCLRProxy->GetCtrlValueByName(pCtrl, bstrName, bFindInChild ? true : false);
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::SetCtrlValueByName(IDispatch* pCtrl, BSTR bstrName, VARIANT_BOOL bFindInChild, BSTR bstrVal)
{
	if (m_pCLRProxy)
	{
		m_pCLRProxy->SetCtrlValueByName(pCtrl, bstrName, bFindInChild ? true : false, bstrVal);
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::get_Extender(IWebRTExtender** pVal)
{
	if (m_pExtender)
	{
		*pVal = m_pExtender;
		(*pVal)->AddRef();
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::put_Extender(IWebRTExtender* newVal)
{
	if (m_pExtender == nullptr)
	{
		m_pExtender = newVal;
		m_pExtender->AddRef();
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::GetRemoteHostViewRect(LONGLONG hHostWnd, BSTR* strData)
{
	return S_OK;
};

STDMETHODIMP CSpaceTelescope::CreateCosmosCtrl(BSTR bstrAppID, IWebRTCtrl** ppRetCtrl)
{
	CString strAppID = OLE2T(bstrAppID);
	strAppID.Trim();
	strAppID.MakeLower();
	if (strAppID == _T(""))
	{
		return CoCreateInstance(CLSID_WebRTCtrl, NULL, CLSCTX_ALL, IID_IWebRTCtrl, (LPVOID*)ppRetCtrl);
	}
	auto it = m_mapRemoteCosmos.find(strAppID);
	if (it == m_mapRemoteCosmos.end())
	{
		CComPtr<IDispatch> pApp;
		pApp.CoCreateInstance(bstrAppID, nullptr, CLSCTX_LOCAL_SERVER | CLSCTX_INPROC_SERVER);
		if (pApp)
		{
			DISPID dispID = 0;
			DISPPARAMS dispParams = { NULL, NULL, 0, 0 };
			VARIANT result = { 0 };
			EXCEPINFO excepInfo;
			memset(&excepInfo, 0, sizeof excepInfo);
			UINT nArgErr = (UINT)-1; // initialize to invalid arg
			LPOLESTR func = CComBSTR("Tangram");
			HRESULT hr = pApp->GetIDsOfNames(GUID_NULL, &func, 1, LOCALE_SYSTEM_DEFAULT, &dispID);
			if (S_OK == hr)
			{
				hr = pApp->Invoke(dispID, IID_NULL, LOCALE_USER_DEFAULT, DISPATCH_PROPERTYGET, &dispParams, &result, &excepInfo, &nArgErr);
				if (S_OK == hr && VT_DISPATCH == result.vt && result.pdispVal)
				{
					IWebRT* pCloudAddin = nullptr;
					result.pdispVal->QueryInterface(IID_IWebRT, (void**)&pCloudAddin);
					if (pCloudAddin)
					{
						pCloudAddin->AddRef();
						m_mapRemoteCosmos[strAppID] = pCloudAddin;

						LONGLONG h = 0;
						pCloudAddin->get_RemoteHelperHWND(&h);
						HWND hWnd = (HWND)h;
						if (::IsWindow(hWnd))
						{
							CHelperWnd* pWnd = new CHelperWnd();
							pWnd->m_strID = strAppID;
							pWnd->Create(hWnd, 0, _T(""), WS_CHILD);
							m_mapRemoteTangramHelperWnd[strAppID] = pWnd;
						}
						::VariantClear(&result);
						return pCloudAddin->CreateCosmosCtrl(CComBSTR(L""), ppRetCtrl);
					}
				}
			}
		}
	}
	else
	{
		return it->second->CreateCosmosCtrl(CComBSTR(L""), ppRetCtrl);
	}
	return S_OK;
}

CWebRTEvent::CWebRTEvent()
{
	m_bNotFired = true;
	m_nEventIndex = 19631965;
	m_strEventName = _T("");
	m_pSourceObj = nullptr;
}

CWebRTEvent::~CWebRTEvent()
{
	auto it = g_pSpaceTelescope->m_mapEvent.find((LONGLONG)this);
	if (it != g_pSpaceTelescope->m_mapEvent.end())
		g_pSpaceTelescope->m_mapEvent.erase(it);
	m_strEventName = _T("");
	//m_pSourceObj->Release();
	m_pSourceObj = nullptr;
	for (auto& it : m_mapVar)
	{
		::VariantClear(&it.second);
	}
	m_mapVar.clear();
	for (auto& it : m_mapDisp)
	{
		//it.second->Release();
	}
	m_mapDisp.clear();
}

STDMETHODIMP CWebRTEvent::get_EventName(BSTR* pVal)
{
	*pVal = m_strEventName.AllocSysString();
	return S_OK;
}

STDMETHODIMP CWebRTEvent::put_EventName(BSTR newVal)
{
	m_strEventName = OLE2T(newVal);
	return S_OK;
}

STDMETHODIMP CWebRTEvent::get_Index(int* pVal)
{
	*pVal = m_nEventIndex;
	return S_OK;
}

STDMETHODIMP CWebRTEvent::put_Index(int newVal)
{
	m_nEventIndex = newVal;
	return S_OK;
}

STDMETHODIMP CWebRTEvent::get_Object(int nIndex, IDispatch** pVal)
{
	auto it = m_mapDisp.find(nIndex);
	if (it != m_mapDisp.end())
	{
		*pVal = it->second;
		//(*pVal)->AddRef();
		return S_OK;
	}

	return S_FALSE;
}

STDMETHODIMP CWebRTEvent::put_Object(int nIndex, IDispatch* newVal)
{
	auto it = m_mapDisp.find(nIndex);
	if (it != m_mapDisp.end())
	{
		it->second->Release();
		m_mapDisp.erase(it);
	}
	if (newVal)
	{
		m_mapDisp[nIndex] = newVal;
		newVal->AddRef();
	}
	return S_OK;
}

STDMETHODIMP CWebRTEvent::get_Value(int nIndex, VARIANT* pVal)
{
	auto it = m_mapVar.find(nIndex);
	if (it != m_mapVar.end())
	{
		*pVal = it->second;
		return S_OK;
	}

	return S_FALSE;
}

STDMETHODIMP CWebRTEvent::put_Value(int nIndex, VARIANT newVal)
{
	auto it = m_mapVar.find(nIndex);
	if (it != m_mapVar.end())
	{
		::VariantClear(&it->second);
		m_mapVar.erase(it);
		return S_OK;
	}
	m_mapVar[nIndex] = newVal;
	return S_FALSE;
}

STDMETHODIMP CWebRTEvent::get_eventSource(IDispatch** pVal)
{
	if (m_pSourceObj)
	{
		*pVal = m_pSourceObj;
		(*pVal)->AddRef();
		return S_OK;
	}

	return S_FALSE;
}

STDMETHODIMP CWebRTEvent::put_eventSource(IDispatch* pSource)
{
	if (m_pSourceObj == nullptr)
	{
		m_pSourceObj = pSource;
		m_pSourceObj->AddRef();
		return S_OK;
	}
	else
	{
		m_pSourceObj->Release();
		m_pSourceObj = nullptr;
		m_pSourceObj = pSource;
		m_pSourceObj->AddRef();
	}

	return S_FALSE;
}

STDMETHODIMP CSpaceTelescope::AttachObjEvent(IDispatch* pDisp, int nEventIndex)
{
	if (pDisp)
	{
		IDispatch* _pDisp = nullptr;
		if (pDisp->QueryInterface(IID_IDispatch, (void**)_pDisp) == S_OK && _pDisp)
		{
			auto it = m_mapObjEventDic.find(pDisp);
			if (it != m_mapObjEventDic.end())
			{
				CString strEventIndexs = it->second;
				if (nEventIndex >= 0)
				{
					CString strIndex = _T("");
					strIndex.Format(_T(",%d,"), nEventIndex);
					if (strEventIndexs.Find(strIndex) == -1)
					{
						strEventIndexs += strIndex;
						m_mapObjEventDic.erase(it);
						m_mapObjEventDic[pDisp] = strEventIndexs;
					}
				}
			}
			else
			{
				if (nEventIndex >= 0)
				{
					CString strIndex = _T("");
					strIndex.Format(_T(",%d,"), nEventIndex);
					m_mapObjEventDic[pDisp] = strIndex;
				}
			}
		}
	}
	return S_OK;
}

#include <wincrypt.h>

int CSpaceTelescope::CalculateByteMD5(BYTE* pBuffer, int BufferSize, CString& MD5)
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
		if (dw == NTE_BAD_KEYSET)               //同样，如果当不存在这样的容器的时候，创建一个
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

CString CSpaceTelescope::ComputeHash(CString source)
{
	std::string strSrc = (LPCSTR)CW2A(source, CP_UTF8);
	int nSrcLen = strSrc.length();
	CString strRet = _T("");
	CalculateByteMD5((BYTE*)strSrc.c_str(), nSrcLen, strRet);
	return strRet;
}

CString CSpaceTelescope::GetFileMD5(CString strSRC)
{
	DWORD dwDesiredAccess = GENERIC_READ;
	DWORD dwShareMode = FILE_SHARE_READ;
	DWORD dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL;
	HANDLE hFile = ::CreateFile(strSRC, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_RANDOM_ACCESS, NULL);

	if (hFile == INVALID_HANDLE_VALUE)
	{
		TRACE(_T("ERROR: CreateFile failed - %s\n"), strSRC);
		return _T("");
	}
	else
	{
		DWORD dwFileSizeHigh = 0;
		__int64 qwFileSize = GetFileSize(hFile, &dwFileSizeHigh);
		qwFileSize |= (((__int64)dwFileSizeHigh) << 32);
		DWORD dwFileSize = qwFileSize;
		if ((dwFileSize == 0) || (dwFileSize == INVALID_FILE_SIZE))
		{
			TRACE(_T("ERROR: GetFileSize failed - %s\n"), strSRC);
			CloseHandle(hFile);
			return _T("");
		}
		else
		{
			BYTE* buffer = new BYTE[dwFileSize];
			memset(buffer, 0, (dwFileSize) * sizeof(BYTE));
			DWORD dwBytesRead = 0;
			if (!ReadFile(hFile, buffer, dwFileSize, &dwBytesRead, NULL))
			{
				TRACE(_T("ERROR: ReadFile failed - %s\n"), strSRC);
				CloseHandle(hFile);
			}
			else
			{
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

CString GetFileMD5(const CString& dllPath) {
	return g_pSpaceTelescopeImpl->GetFileMD5(dllPath);
}

BOOL CSpaceTelescope::IsUserAdministrator()
{
	BOOL bRet = false;
	PSID psidRidGroup;
	SID_IDENTIFIER_AUTHORITY siaNtAuthority = SECURITY_NT_AUTHORITY;

	bRet = AllocateAndInitializeSid(&siaNtAuthority, 2, SECURITY_BUILTIN_DOMAIN_RID, DOMAIN_ALIAS_RID_ADMINS, 0, 0, 0, 0, 0, 0, &psidRidGroup);
	if (bRet)
	{
		if (!CheckTokenMembership(NULL, psidRidGroup, &bRet))
			bRet = false;
		FreeSid(psidRidGroup);
	}

	return (BOOL)bRet;
}


STDMETHODIMP CSpaceTelescope::GetWindowClientDefaultNode(IDispatch* pAddDisp, LONGLONG hParent, BSTR bstrWndClsName, BSTR bstrGalaxyClusterName, IXobj** ppXobj)
{
	return S_FALSE;
}

STDMETHODIMP CSpaceTelescope::CreateCosmosEventObj(IWebRTEventObj** ppWebRTEventObj)
{
	CWebRTEvent* pObj = new CComObject<CWebRTEvent>;
	*ppWebRTEventObj = pObj;
	m_mapEvent[(LONGLONG)pObj] = pObj;
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::FireCosmosEventObj(IWebRTEventObj* pWebRTEventObj)
{
	CWebRTEvent* pObj = (CWebRTEvent*)pWebRTEventObj;
	if (pObj)
	{
		FireAppEvent(pObj);
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::ObserveNuclei(LONGLONG hWnd, BSTR bstrGalaxys, BSTR bstrKey, BSTR bstrXml, VARIANT_BOOL bSave)
{
	LRESULT lRes = ::SendMessage((HWND)hWnd, WM_HUBBLE_DATA, 0, 20190214);
	CString _strXml = _T("<");
	CString strKey = OLE2T(bstrKey);
	CCloudWinForm* pWnd = nullptr;
	if (lRes)
	{
		pWnd = (CCloudWinForm*)lRes;
	}
	if (pWnd)
	{
		_strXml += strKey;
		_strXml += _T(">");
	}
	auto it = m_mapNuclei.find((HWND)hWnd);
	if (it != m_mapNuclei.end())
	{
		CString strFrames = OLE2T(bstrGalaxys);
		CString strKey = OLE2T(bstrKey);
		if (strFrames == _T(""))
		{
			for (auto it1 : ((CNuclei*)it->second)->m_mapGalaxy)
			{
				if (it1.second != ((CNuclei*)it->second)->m_pBKGalaxy)
				{
					IXobj* pXobj = nullptr;
					CXobj* pXobj2 = it1.second->m_pContainerNode;
					if (pXobj2)
					{
						it1.second->Observe(CComBSTR(it1.second->m_strCurrentKey), bstrXml, &pXobj);
					}
					else
					{
						if (it1.second->m_strCurrentKey != strKey)
							it1.second->Observe(bstrKey, bstrXml, &pXobj);
					}
				}
			}
		}
		else
		{
			strFrames = _T(",") + strFrames;
			for (auto it1 : ((CNuclei*)it->second)->m_mapGalaxy)
			{
				CString strName = _T(",") + it1.second->m_strNucleusName + _T(",");
				if (strFrames.Find(strName) != -1)
				{
					IXobj* pXobj = nullptr;
					it1.second->Observe(bstrKey, bstrXml, &pXobj);
				}
			}
		}
	}

	return S_OK;
}

STDMETHODIMP CSpaceTelescope::DeleteGalaxy(INucleus* pGalaxy)
{
	CNucleus* _pGalaxy = (CNucleus*)pGalaxy;
	if (_pGalaxy)
	{
		HWND hwnd = ::CreateWindowEx(NULL, _T("Cosmos Xobj Class"), _T(""), WS_CHILD, 0, 0, 0, 0, m_hCosmosWnd, NULL, AfxGetInstanceHandle(), NULL);
		_pGalaxy->ModifyHost((LONGLONG)::CreateWindowEx(NULL, _T("Cosmos Xobj Class"), _T(""), WS_CHILD, 0, 0, 0, 0, (HWND)hwnd, NULL, AfxGetInstanceHandle(), NULL));
		::DestroyWindow(hwnd);
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::DeletePage(LONGLONG GalaxyClusterHandle)
{
	m_bDeleteNuclei = TRUE;
	HWND hPage = (HWND)GalaxyClusterHandle;
	auto it = m_mapNuclei.find(hPage);
	if (it != m_mapNuclei.end())
	{
		CNuclei* pNuclei = (CNuclei*)it->second;
		auto it2 = pNuclei->m_mapGalaxy.begin();
		while (it2 != pNuclei->m_mapGalaxy.end())
		{
			CNucleus* pGalaxy = it2->second;
			pNuclei->m_mapGalaxy.erase(it2);
			if (pGalaxy)
			{
				pGalaxy->m_pNuclei = nullptr;
				RECT rc;
				HWND hwnd = pGalaxy->m_hWnd;
				int nSize = pGalaxy->m_mapXobj.size();
				if (nSize > 1)
				{
					for (auto& it : pGalaxy->m_mapXobj)
					{
						if (it.second != pGalaxy->m_pWorkXobj)
						{
							::SetParent(it.second->m_pHostWnd->m_hWnd, pGalaxy->m_pWorkXobj->m_pHostWnd->m_hWnd);
						}
					}
				}
				if (pGalaxy->m_pWorkXobj)
				{
					::GetWindowRect(pGalaxy->m_pWorkXobj->m_pHostWnd->m_hWnd, &rc);
					pGalaxy->GetParent().ScreenToClient(&rc);
					::DestroyWindow(pGalaxy->m_pWorkXobj->m_pHostWnd->m_hWnd);
					::SetWindowPos(hwnd, HWND_TOP, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOACTIVATE);
				}
			}
			it2 = pNuclei->m_mapGalaxy.begin();
		}
		delete pNuclei;
	}
	return S_OK;
}

_TCHAR* findProgram(_TCHAR* argv[]) {
	_TCHAR* program;
	/* windows, make sure we are looking for the .exe */
	_TCHAR* ch;
	int length = _tcslen(argv[0]);
	ch = (_TCHAR*)malloc((length + 5) * sizeof(_TCHAR));
	_tcscpy(ch, argv[0]);

	if (length <= 4 || _tcsicmp(&ch[length - 4], _T(".exe")) != 0)
		_tcscat(ch, _T_ECLIPSE(".exe"));

	program = findCommand(ch);
	if (ch != program)
		free(ch);
	if (program == NULL)
	{
		program = (_TCHAR*)malloc(MAX_PATH_LENGTH + 1);
		GetModuleFileName(NULL, program, MAX_PATH_LENGTH);
		argv[0] = program;
	}
	else if (_tcscmp(argv[0], program) != 0) {
		argv[0] = program;
	}
	return program;
}

/*
* Parse arguments of the command.
*/
void parseArgs(int* pArgc, _TCHAR* argv[], int useVMargs)
{
	int     index;

	/* Ensure the list of user argument is NULL terminated. */
	argv[*pArgc] = NULL;

	/* For each user defined argument */
	for (index = 0; index < *pArgc; index++) {
		if (_tcsicmp(argv[index], VMARGS) == 0) {
			if (useVMargs == 1) { //Use the VMargs as the user specified vmArgs
				userVMarg = &argv[index + 1];
			}
			argv[index] = NULL;
			*pArgc = index;
		}
		else if (_tcsicmp(argv[index], NAME) == 0) {
			name = argv[++index];
		}
		else if (_tcsicmp(argv[index], LIBRARY) == 0) {
			eclipseLibrary = argv[++index];
			index++;
		}
		else if (_tcsicmp(argv[index], SUPRESSERRORS) == 0) {
			suppressErrors = 1;
		}
		else if (_tcsicmp(argv[index], PROTECT) == 0) {
			if (_tcsicmp(argv[++index], ROOT) == 0) {
				protectRoot = 1;
			}
		}
	}
}

/* We need to look for --launcher.ini before parsing the other args */
_TCHAR* checkForIni(int argc, _TCHAR* argv[])
{
	int index;
	for (index = 0; index < (argc - 1); index++) {
		if (_tcsicmp(argv[index], INI) == 0) {
			return argv[++index];
		}
	}
	return NULL;
}

/*
* Create a new array containing user arguments from the config file first and
* from the command line second.
* Allocate an array large enough to host all the strings passed in from
* the argument configArgv and argv. That array is passed back to the
* argv argument. That array must be freed with the regular free().
* Note that both arg lists are expected to contain the argument 0 from the C
* main method. That argument contains the path/executable name. It is
* only copied once in the resulting list.
*
* Returns 0 if success.
*/
int createUserArgs(int configArgc, _TCHAR** configArgv, int* argc, _TCHAR*** argv)
{
	_TCHAR** newArray = (_TCHAR**)malloc((configArgc + *argc + 1) * sizeof(_TCHAR*));

	newArray[0] = (*argv)[0];	/* use the original argv[0] */
	memcpy(newArray + 1, configArgv, configArgc * sizeof(_TCHAR*));

	/* Skip the argument zero (program path and name) */
	memcpy(newArray + 1 + configArgc, *argv + 1, (*argc - 1) * sizeof(_TCHAR*));

	/* Null terminate the new list of arguments and return it. */
	*argv = newArray;
	*argc += configArgc;
	(*argv)[*argc] = NULL;

	return 0;
}

/*
* Determine the default official application name
*
* This function provides the default application name that appears in a variety of
* places such as: title of message dialog, title of splash screen window
* that shows up in Windows task bar.
* It is computed from the name of the launcher executable and
* by capitalizing the first letter. e.g. "c:/ide/eclipse.exe" provides
* a default name of "Eclipse".
*/
_TCHAR* getDefaultOfficialName(_TCHAR* program)
{
	_TCHAR* ch = NULL;

	/* Skip the directory part */
	ch = lastDirSeparator(program);
	if (ch == NULL) ch = program;
	else ch++;

	ch = _tcsdup(ch);
#ifdef _WIN32
	{
		/* Search for the extension .exe and cut it */
		_TCHAR* extension = _tcsrchr(ch, _T_ECLIPSE('.'));
		if (extension != NULL)
		{
			*extension = _T_ECLIPSE('\0');
		}
	}
#endif
	/* Upper case the first character */
#ifndef LINUX
	{
		*ch = _totupper(*ch);
	}
#else
	{
		if (*ch >= 'a' && *ch <= 'z')
		{
			*ch -= 32;
		}
	}
#endif
	return ch;
}

void CSpaceTelescope::EclipseInit()
{
	if (eclipseLibrary)
		return;
	GetLaunchMode();
	if (launchMode != -1)
	{
		TCHAR	m_szBuffer[MAX_PATH];
		::GetModuleFileName(theApp.m_hInstance, m_szBuffer, MAX_PATH);
		eclipseLibrary = m_szBuffer;
		if (m_pUniverseAppProxy == nullptr)
		{
			LoadCLR();
			m_pUniverseAppProxy = m_pWebRTAppProxy;
		}
		m_pUniverseAppProxy->m_pvoid = nullptr;
		m_bEnableProcessFormTabKey = true;

		setlocale(LC_ALL, "");
		int		nArgs;
		szArglist = CommandLineToArgvW(GetCommandLineW(), &nArgs);
		CEclipseExtender* pExtender = new CComObject<CEclipseExtender>;
		m_pExtender = pExtender;
		if (m_pUniverseAppProxy == NULL)
		{
			LoadCLR();
			m_pUniverseAppProxy = m_pWebRTAppProxy;
		}
		m_pUniverseAppProxy->m_pvoid = nullptr;
		m_bEnableProcessFormTabKey = true;
		if (m_nAppType != APP_BROWSER_ECLIPSE)
			m_nAppType = APP_ECLIPSE;
		runW(nArgs, szArglist, userVMarg);

		m_bChromeNeedClosed = true;

		for (auto& it : m_mapBrowserWnd)
		{
			::PostMessage(it.first, WM_CLOSE, 0, 0);
			//it.second->PostMessageW(WM_CLOSE, 0, 0);
		}

		if (::IsWindow(m_hCosmosWnd))
			::DestroyWindow(m_hCosmosWnd);
		if (::IsWindow(m_hMainWnd))
			::DestroyWindow(m_hMainWnd);
	}
}

void CSpaceTelescope::InitWebRTDocManager()
{
}

CString CSpaceTelescope::ConfigJavaVMInfo(CString stroption)
{
	CString strRet = _T("");
	if (stroption.Find(_T("java.class.path=")) != -1)
	{
		CString strJavaClassPath = m_strAppPath + _T("TangramJavaClassPath.xml");
		if (::PathFileExists(strJavaClassPath))
		{
			int nPos = stroption.Find(_T("="));
			CString s0 = stroption.Left(nPos + 1);
			stroption = stroption.Mid(nPos + 1);
			nPos = stroption.ReverseFind('/');
			if (nPos == -1)
				nPos = stroption.ReverseFind('\\');
			CTangramXmlParse m_Parse;
			if (m_Parse.LoadFile(strJavaClassPath))
			{
				CString s1 = _T("");
				CString str2 = stroption.Left(nPos + 1);
				int nCount = m_Parse.GetCount();
				for (int j = 0; j < nCount; j++)
				{
					CTangramXmlParse* pParse = m_Parse.GetChild(j);
					if (pParse)
					{
						CString strClass = pParse->attr(_T("classinfo"), _T(""));
						CString strLib = pParse->attr(_T("lib"), _T(""));
						if (strLib != _T("") && strClass != _T(""))
						{
							m_mapJavaNativeInfo[strLib] = strClass;
						}
						CString strFile = str2 + pParse->text();
						if (::PathFileExists(strFile))
						{
							s1 += strFile;
							s1 += _T(";");
						}
					}
				}
				stroption = s0 + stroption + ";" + s1;
				//stroption += m_strProgramFilePath + _T("Tangram\\tangramjava");
				strRet = stroption;
			}
		}
	}
	return strRet;
}

HICON CSpaceTelescope::GetAppIcon(int nIndex)
{
	switch (nIndex)
	{
	case 0:
	{
		if (m_hLargeIcon == nullptr)
		{
			if (m_pWebRTDelegate)
			{
				HICON icon = m_pWebRTDelegate->GetAppIcon(nIndex);
				if (icon)
				{
					m_hLargeIcon = icon;
					return m_hLargeIcon;
				}
			}
			if (m_pCLRProxy)
				m_hLargeIcon = m_pCLRProxy->GetAppIcon(nIndex);
			if (m_hLargeIcon == nullptr)
			{
				TCHAR m_szBuffer[MAX_PATH];
				::GetModuleFileName(GetModuleHandle(NULL), m_szBuffer, MAX_PATH);
				SHFILEINFOW info;
				if (SHGetFileInfoW(m_szBuffer,
					FILE_ATTRIBUTE_NORMAL,
					&info,
					sizeof(info),
					SHGFI_SYSICONINDEX | SHGFI_ICON | SHGFI_USEFILEATTRIBUTES))
				{
					m_hLargeIcon = info.hIcon;
				}
			}
		}
		return m_hLargeIcon;
	}
	break;
	case 1:
	{
		if (m_hSmallIcon == nullptr)
		{
			if (m_pWebRTDelegate)
			{
				HICON icon = m_pWebRTDelegate->GetAppIcon(nIndex);
				if (icon)
				{
					m_hLargeIcon = icon;
					return m_hLargeIcon;
				}
			}
			if (m_pCLRProxy)
				m_hSmallIcon = m_pCLRProxy->GetAppIcon(nIndex);
			if (m_hSmallIcon == nullptr)
			{
				TCHAR m_szBuffer[MAX_PATH];
				::GetModuleFileName(GetModuleHandle(NULL), m_szBuffer, MAX_PATH);
				SHFILEINFOW info;
				if (SHGetFileInfoW(m_szBuffer,
					FILE_ATTRIBUTE_NORMAL,
					&info,
					sizeof(info),
					SHGFI_SYSICONINDEX | SHGFI_ICON | SHGFI_USEFILEATTRIBUTES))
				{
					m_hSmallIcon = info.hIcon;
				}
			}
		}
		return m_hSmallIcon;
	}
	break;
	}

	return nullptr;
}

STDMETHODIMP CSpaceTelescope::CreateOfficeDocument(BSTR bstrXml)
{
	CComPtr<IWorkBenchWindow> pWorkBenchWindow;
	NewWorkBench(bstrXml, &pWorkBenchWindow);
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::NewWorkBench(BSTR bstrCosmosDoc, IWorkBenchWindow** ppWorkBenchWindow)
{
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::CreateOutLookObj(BSTR bstrObjType, int nType, BSTR bstrURL, IDispatch** ppRetDisp)
{
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::InitEclipseApp()
{
	if (launchMode == -1)
	{
		GetLaunchMode();
		if (launchMode == -1)
			return S_OK;
	}
	if (launchMode != -1 && m_pWebRTDelegate->m_pJVMenv == nullptr)
	{
		{
			if (m_strAppPath == _T(""))
				Init();
			CString strplugins = m_strAppPath + _T("plugins\\");
			m_bEclipse = ::PathIsDirectory(strplugins);
		}
		if (m_bEclipse)
		{
			CString strPath = m_strAppPath + _T("plugins\\*.jar");
			//CString strPath = strplugins + _T("*.jar");

			_wfinddata_t fd;
			fd.attrib = FILE_ATTRIBUTE_DIRECTORY;
			intptr_t pf = _wfindfirst(strPath, &fd);
			m_bEclipse = (fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0;
			if (m_bEclipse == false)
			{
				while (!_wfindnext(pf, &fd))
				{
					m_bEclipse = (fd.attrib & FILE_ATTRIBUTE_DIRECTORY) == 0;
					if (m_bEclipse)
					{
						break;
					}
				}
			}
			_findclose(pf);
		}
		if (m_bEclipse)
		{
			m_strStartJarPath = DEFAULT_EQUINOX_STARTUP;
			//CString _strBridgeJavaClass = _T("org/eclipse/equinox/launcher/JNIBridge");
			//_strBridgeJavaClass.Replace(_T("."), _T("/"));
			//USES_CONVERSION;
			m_strBridgeJavaClass = "org/eclipse/equinox/launcher/JNIBridge";// T2A(_strBridgeJavaClass);
			jarFile = findStartupJar();
			if (jarFile != nullptr)
			{
				//m_bLoadEclipseDelay = true;
				EclipseInit();
				if (::IsWindow(m_hMainWnd) == false)
				{
					if (m_nAppType == APP_ECLIPSE)
						::PostQuitMessage(0);
					else
						m_nAppType = APP_WILLCLOSE;
				}
			}
			else
				m_bEclipse = false;
		}
	}
	return S_OK;
}

STDMETHODIMP CSpaceTelescope::InitCLRApp(BSTR strInitXml, LONGLONG* llHandle)
{
	LoadCLR();
	CTangramXmlParse m_Parse;
	if (m_Parse.LoadXml(OLE2T(strInitXml)))
	{
		CString strObjName = m_Parse.attr(_T("objname"), _T(""));
		CString strFunctionName = m_Parse.attr(_T("functionname"), _T(""));
		if (!strObjName.IsEmpty() && !strFunctionName.IsEmpty()) {
			CString strLib = m_Parse.attr(_T("libname"), _T(""));
			CString strLibPath = GetFileByName(m_strAgentPath, strLib);
			if (::PathFileExists(strLibPath) == false) {
				strLibPath = GetFileByName(m_strAppPath, strLib);
			}

			if (::PathFileExists(strLibPath) == false || !VerfyEVSHASign(strLibPath)) {
				return S_FALSE;
			}
			DWORD dwRetCode = 0;
			ICLRRuntimeHost* pHost = m_pClrHost;
			if (m_pClrCoreHost)
				pHost = m_pClrCoreHost;
			if (pHost) {
				HRESULT hrStart = pHost->ExecuteInDefaultAppDomain(
					strLibPath,
					strObjName,
					strFunctionName,
					strInitXml,
					&dwRetCode);
				*llHandle = (LONGLONG)dwRetCode;
			}
		}
	}

	return S_OK;
}

__declspec(dllexport) IWebRT* __stdcall  GetWebRT()
{
	return static_cast<IWebRT*>(g_pSpaceTelescope);
}

__declspec(dllexport) CWebRTImpl* __stdcall  GetWebRTImpl(IWebRT** pWebRT)
{
	*pWebRT = static_cast<IWebRT*>(g_pSpaceTelescope);
	return static_cast<CWebRTImpl*>(g_pSpaceTelescope);
}

__declspec(dllexport) void __stdcall  InitWebRT(__int64 nIUnknow, __int64 nIWndUnknow) {
	g_pSpaceTelescope->put_AppKeyValue(CComBSTR("mainFormDisp"), CComVariant((LONGLONG)nIUnknow));
	if (nIWndUnknow)
		g_pSpaceTelescope->put_AppKeyValue(CComBSTR("mainWpfWndDisp"), CComVariant((LONGLONG)nIWndUnknow));
	g_pSpaceTelescope->LoadCLR();
}

typedef int(__stdcall* _InitApp)(bool bSupportCrashReporting, void*);
typedef bool(__stdcall* _IsBrowserModel)(bool bSupportCrashReporting, void*);
_InitApp FuncInitApp;
_IsBrowserModel FuncIsBrowserModel;

CString g_strChromeRTFilePath = _T("");
CString g_strUniverseFilePath = _T("");
CString g_strMFCAgentFilePath = _T("");

static void GetWebRTInfo() {
	TCHAR m_szBuffer[MAX_PATH];
	if (SHGetFolderPath(NULL, CSIDL_PROGRAM_FILES, NULL, 0, m_szBuffer) == S_OK) {
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

__declspec(dllexport) bool __stdcall  InitBrowser() {
	GetWebRTInfo();
	HMODULE hModuleAgent = ::GetModuleHandle(_T("AIAgent.dll"));
	if (hModuleAgent == NULL) {
		hModuleAgent = ::LoadLibrary(g_strChromeRTFilePath);
		if (hModuleAgent) {
			FuncIsBrowserModel =
				(_IsBrowserModel)GetProcAddress(hModuleAgent, "IsBrowserModel");
			if (FuncIsBrowserModel != NULL) {
				bool bRet = FuncIsBrowserModel(false, nullptr);
				if (bRet)
					return true;
			}
		}
	}
	return false;
}

__declspec(dllexport) IDispatch* __stdcall  BindDOMToNucleus(HWND hWnd, LPCTSTR strKey, LPCTSTR strXML) {
	if (g_pSpaceTelescope)
		return g_pSpaceTelescope->ObserveXml(hWnd, strKey, strXML);
	return nullptr;
}

__declspec(dllexport) bool __stdcall  InitAIGCAgent() {
	GetWebRTInfo();
	HMODULE hModuleAgent = ::GetModuleHandle(_T("AIAgent.dll"));
	if (hModuleAgent == NULL) {
		hModuleAgent = ::LoadLibrary(g_strChromeRTFilePath);
		if (hModuleAgent) {
			FuncIsBrowserModel =
				(_IsBrowserModel)GetProcAddress(hModuleAgent, "IsBrowserModel");
			if (FuncIsBrowserModel != NULL) {
				bool bRet = FuncIsBrowserModel(false, nullptr);
				if (bRet)
					return true;
			}
		}
	}
	return false;
}

__declspec(dllexport) void __stdcall  FreeCLR()
{
	if (g_pSpaceTelescope && g_pSpaceTelescope->m_pClrHost)
	{
		OutputDebugString(_T("------------------Begin Stop CLR------------------------\n"));
		HRESULT hr = g_pSpaceTelescope->m_pClrHost->Stop();
		ASSERT(hr == S_OK);
		if (hr == S_OK)
		{
			OutputDebugString(_T("------------------Stop CLR Successed!------------------------\n"));
		}
		DWORD dw = g_pSpaceTelescope->m_pClrHost->Release();
		ASSERT(dw == 0);
		if (dw == 0)
		{
			g_pSpaceTelescope->m_pClrHost = nullptr;
			OutputDebugString(_T("------------------ClrHost Release Successed!------------------------\n"));
		}
		OutputDebugString(_T("------------------End Stop CLR------------------------\n"));
	}
}

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void* reserved)
{
	JNIEnv* env = nullptr;
	if (vm->GetEnv(reinterpret_cast<void**>(&env), g_pSpaceTelescope->m_nJVMVersion) != JNI_OK) {
		return -1;
	}
	g_pSpaceTelescope->InitJNIForTangram();
	////FULL_CLASS_NAME是个Java类名字，定义了对应java类的全名（要把包名中的点(.)_替换成斜杠(/)）
	//clazz = env->FindClass(FULL_CLASS_NAME);
	//LOGDBG("register method, method count:%d", gsMethodCount);
	////注册JNI函数
	//env->RegisterNatives(clazz, gsNativeMethods,
	//	gsMethodCount);
	////必须返回一个JNI_VERSION_1_1以上（不含）的版本号，否则直接加载失败
	return g_pSpaceTelescope->m_nJVMVersion;
}

BOOL CSpaceTelescope::InitJNIForTangram()
{
	JNIEnv* _pJVMenv = nullptr;
	if (m_pWebRTDelegate->m_pJVMenv)
		_pJVMenv = m_pWebRTDelegate->m_pJVMenv;
	else
	{
		JNI_GetCreatedJavaVMs_ GetJavaVM = (JNI_GetCreatedJavaVMs_)::GetProcAddress(::GetModuleHandle(_T("jvm.dll")), "JNI_GetCreatedJavaVMs");
		if (GetJavaVM != nullptr) {
			JavaVM* pVM = nullptr;
			jsize nSize = 1;
			jsize nCount = 0;
			jint nRet = GetJavaVM(&pVM, nSize, &nCount);
			if (nRet == 0) {
				ASSERT(pVM != nullptr);
				if (pVM->GetEnv(reinterpret_cast<void**>(&_pJVMenv), m_nJVMVersion) != JNI_OK) {
					return FALSE;
				}
			}
			else {
				TRACE(_T("GetVM Failed\n"));
			}
		}
	}
	if (_pJVMenv) {
		CString strJavaJniPath = m_strAppPath + _T("TangramJniInfo.xml");
		CTangramXmlParse m_Parse;
		if (!(::PathFileExists(strJavaJniPath) && m_Parse.LoadFile(strJavaJniPath))) {
			auto it = m_mapValInfo.find(_T("tangramjniinfo"));
			if (it != m_mapValInfo.end()) {
				if (m_Parse.LoadXml(it->second.bstrVal) == false)
					return FALSE;
			}
			else
				return FALSE;
		}
		int nCount = m_Parse.GetCount();
		if (nCount == 0)
			return FALSE;
		jclass systemClass = NULL;
		jmethodID loadMethod = NULL;
		systemClass = _pJVMenv->FindClass("java/lang/System");
		try
		{
			if (systemClass != NULL) {
				loadMethod = _pJVMenv->GetStaticMethodID(systemClass, "load", "(Ljava/lang/String;)V");
				if (loadMethod != NULL) {
					for (int j = 0; j < nCount; j++) {
						CTangramXmlParse* pParse = m_Parse.GetChild(j);
						CString strLib = pParse->text();
						bool bExists = true;
						if (::PathFileExists(strLib) == false) {
							CString _strLib = strLib;
							strLib = m_strAppPath + _T("tangramjni\\") + strLib;
							if (::PathFileExists(strLib) == false) {
								strLib = m_strProgramFilePath + _T("tangram\\tangramjni\\") + _strLib;
								if (::PathFileExists(strLib) == false)
									bExists = false;
							}
						}
						if (bExists) {
							wchar_t* _strLib = strLib.GetBuffer();
							jstring jarFileString = newJavaString(_pJVMenv, _strLib);
							strLib.ReleaseBuffer();
							_pJVMenv->CallStaticVoidMethod(systemClass, loadMethod, jarFileString);
							if (jarFileString != NULL)
								_pJVMenv->DeleteLocalRef(jarFileString);
						}
					}
				}
			}
		}
		catch (...)
		{
		}
		if (_pJVMenv->ExceptionOccurred()) {
			_pJVMenv->ExceptionDescribe();
			_pJVMenv->ExceptionClear();
		}
	}
	return FALSE;
}

void CSpaceTelescope::ChromeTabCreated(CChromeTab* pTab)
{
	ATLTRACE(_T("Create Chrome Tab :%x\n"), pTab);
}

void CSpaceTelescope::OnRenderProcessCreated(CChromeRenderProcess* pProcess)
{

}

CChromeBrowserBase* CSpaceTelescope::GetChromeBrowserBase(HWND hHostWnd)
{
	CBrowser* pPWnd = nullptr;
	auto it2 = m_mapBrowserWnd.find(hHostWnd);
	if (it2 != m_mapBrowserWnd.end())
	{
		pPWnd = (CBrowser*)it2->second;
		return pPWnd->m_pBrowser;
	}
	return nullptr;
}

IBrowser* CSpaceTelescope::GetHostBrowser(HWND hNodeWnd)
{
	IXobj* pWndXobj = nullptr;
	HRESULT hr = GetXobjFromHandle((LONGLONG)hNodeWnd, &pWndXobj);
	if (hr == S_OK && pWndXobj != nullptr)
	{
		INucleus* pGalaxy = nullptr;
		hr = pWndXobj->get_WinNucleus(&pGalaxy);
		if (hr == S_OK && pGalaxy != nullptr)
		{
			IBrowser* pBrowser = nullptr;
			hr = pGalaxy->get_HostBrowser(&pBrowser);
			if (hr == S_OK && pBrowser != nullptr)
			{
				return pBrowser;
			}
		}
	}
	return nullptr;
}

void CSpaceTelescope::OnDocumentOnLoadCompleted(CChromeRenderFrameHost* pFrameHostBase, HWND hHtmlWnd, void* pVoid)
{
	CChromeRenderFrameHost* pHost = (CChromeRenderFrameHost*)pFrameHostBase;
	HWND hPWnd = ::GetParent(hHtmlWnd);
	auto it = m_mapWebView.find(hHtmlWnd);
	if (it != m_mapWebView.end())
	{
		CWebView* pWebView = (CWebView*)it->second;
		pWebView->m_pChromeRenderFrameHost = pFrameHostBase;
		pFrameHostBase->m_pProxy = (CWebViewImpl*)it->second;
		if (pWebView->m_pSession == nullptr)
			pWebView->m_pSession = CreateCloudSession(pWebView);
		if (pVoid)
		{
		}
		else
		{
			::PostMessage(hHtmlWnd, WM_COSMOSMSG, 20190115, 0);
		}
	}
}

void CSpaceTelescope::ChromeChildProcessCreated(
	CChromeChildProcessHostImpl*
	pChromeChildProcessHostImpl)
{

}

void CSpaceTelescope::OnSubBrowserWndCreated(HWND hParent, HWND hBrowser)
{
}

void CSpaceTelescope::ConnectMsgLoop(HWND hMsg)
{
	m_hMsgWnd = hMsg;
}

void CSpaceTelescope::OnExitMainMsgPump()
{
}

void CSpaceTelescope::OnUpdateParent(HWND hPWnd, HWND hWnd, int DeviceScaleFactor)
{
	auto it2 = m_mapBrowserWnd.find(hPWnd);
	if (it2 != m_mapBrowserWnd.end())
	{
		auto it = m_mapWebView.find(hWnd);
		if (it != m_mapWebView.end())
		{
			CWebView* pView = (CWebView*)it->second;
			CBrowser* pParent = ((CBrowser*)it2->second);
			pParent->m_fdevice_scale_factor = (float)DeviceScaleFactor / 100;
			pView->ParentChanged(pParent, hPWnd);
		}
	}
}

void CSpaceTelescope::OnWebRTMessage(HWND hWnd, CChromeRenderFrameHost* pChromeRenderFrameHost, IPCMsg* pIPCInfo)
{
	auto it = m_mapWebView.find(hWnd);
	if (it != m_mapWebView.end())
	{
		CWebView* pView = (CWebView*)it->second;
		pView->m_pChromeRenderFrameHost = (CChromeRenderFrameHost*)pChromeRenderFrameHost;
		pView->m_pChromeRenderFrameHost->m_pProxy = pView;
		CString strId = pIPCInfo->m_strId;
		CString strParam1 = pIPCInfo->m_strParam1;
		CString strParam2 = pIPCInfo->m_strParam2;
		CString strParam3 = pIPCInfo->m_strParam3;
		CString strParam4 = pIPCInfo->m_strParam4;
		CString strParam5 = pIPCInfo->m_strParam5;
		if (strId.CompareNoCase(_T("TANGRAM_CTRL_VALUE_MESSAGE")) == 0)
		{
			HWND hCtrl = (HWND)pIPCInfo->m_nHandleFrom;
			if (m_pCLRProxy)
			{
				IDispatch* pCtrl = m_pCLRProxy->GetCtrlFromHandle(hCtrl);
				if (pCtrl)
					m_pCLRProxy->SetCtrlValueByName(pCtrl, CComBSTR(""), true, CComBSTR(strParam4));
			}
		}
		else
		{
			pView->HandleChromeIPCMessage(strId, strParam1, strParam2, strParam3, strParam4, strParam5);
		}
	}

	m_pCurrentIPCMsg = nullptr;
}

CString CSpaceTelescope::GetProcessPath(const char* _ver, CString process_type)
{
	if (m_strSubProcessPath == _T(""))
	{
		if (m_strBrowserVer == _T(""))
			m_strBrowserVer = CString(_ver);
		TCHAR m_szBuffer[MAX_PATH];
		HMODULE hModule = m_hWebRTProxyModel;
		if (hModule) {
			::GetModuleFileName(hModule, m_szBuffer, MAX_PATH);
			CString strPath = m_szBuffer;
			int nPos = strPath.ReverseFind('\\');
			CString strBase = strPath.Left(nPos + 1);
			m_strSubProcessPath = strBase + _T("Creator.exe");
			if (!::PathFileExists(m_strSubProcessPath))
			{
				m_strSubProcessPath = strBase + m_strBrowserVer + _T("\\Creator.exe");
				if (!::PathFileExists(m_strSubProcessPath)) {
					m_strSubProcessPath = _T("");
				}
			}
			//if (!m_bOldVerFilesRemoved) {
			//	m_bOldVerFilesRemoved = true;
			//	RemoveOldWebRTFiles(strBase, m_strBrowserVer);
			//}
		}
	}

	return m_strSubProcessPath;
}

CString CSpaceTelescope::GetSchemeBaseName()
{
	return m_strExeName.MakeLower();
}

char* CSpaceTelescope::GetSchemeString(int nType, CString strKey)
{
	switch (nType)
	{
	case 0:
		return (char*)"chrome";
	}
	return nullptr;
}

WebRTFrameWndInfo* CSpaceTelescope::InsertWebRTFrameWndInfo(HWND hWnd) {
	WebRTFrameWndInfo* pWebRTFrameWndInfo = new WebRTFrameWndInfo();
	::SetProp(hWnd, _T("WebRTFrameWndInfo"), pWebRTFrameWndInfo);
	m_mapWebRTFrameWndInfo[hWnd] = pWebRTFrameWndInfo;
	return pWebRTFrameWndInfo;
}

void CSpaceTelescope::AttachControlBar(WebRTFrameWndInfo* pInfo, HWND hCtrlBar) {
	if (pInfo) {
		pInfo->m_mapCtrlBarWnd[::GetWindowLong(hCtrlBar, GWL_ID)] = hCtrlBar;
	}
}

void CSpaceTelescope::InserttoDataMap(int nType, CString strKey, void* pData)
{
	switch (nType)
	{
	case 0:
	{
		if (pData)
			m_mapWebRTAppProxy[strKey] = (IUniverseAppProxy*)pData;
		else
		{
			auto it = m_mapWebRTAppProxy.find(strKey);
			if (it != m_mapWebRTAppProxy.end())
			{
				m_mapWebRTAppProxy.erase(it);
			}
		}
	}
	break;
	case 1:
	{
		if (pData)
		{
			m_mapWindowProvider[strKey] = (IWindowProvider*)pData;
		}
		else
		{
			auto it = m_mapWindowProvider.find(strKey);
			if (it != m_mapWindowProvider.end())
			{
				m_mapWindowProvider.erase(it);
			}
		}
	}
	break;
	}
}

void CSpaceTelescope::SendIPCMsg(HWND hXobj, CString strMsgID)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			_pObj->m_pWormhole->InsertString(_T("msgID"), strMsgID);
			_pObj->m_pWormhole->SendMessage();
		}
	}
}

void CSpaceTelescope::InsertMsgData(HWND hXobj, CString strKey, CString strVal)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			_pObj->m_pWormhole->InsertString(strKey, strVal);
		}
	}
}

void CSpaceTelescope::InsertMsgData(HWND hXobj, CString strKey, __int64 llVal)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			_pObj->m_pWormhole->Insertint64(strKey, llVal);
		}
	}
}

void CSpaceTelescope::InsertMsgData(HWND hXobj, CString strKey, long lVal)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			_pObj->m_pWormhole->InsertLong(strKey, lVal);
		}
	}
}

void CSpaceTelescope::InsertMsgData(HWND hXobj, CString strKey, float fVal)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			_pObj->m_pWormhole->InsertFloat(strKey, fVal);
		}
	}
}

CString CSpaceTelescope::GetMsgStringData(HWND hXobj, CString strKey)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			return _pObj->m_pWormhole->GetString(strKey);
		}
	}
	return _T("");
}

__int64 CSpaceTelescope::GetMsgInt64(HWND hXobj, CString strKey)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			return _pObj->m_pWormhole->Getint64(strKey);
		}
	}
	return 0;
}

long CSpaceTelescope::GetMsgLong(HWND hXobj, CString strKey)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			return _pObj->m_pWormhole->GetLong(strKey);
		}
	}
	return 0;
}

float CSpaceTelescope::GetMsgFloat(HWND hXobj, CString strKey)
{
	HWND _hWnd = (HWND)hXobj;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		if (_pObj->m_pWormhole)
		{
			return _pObj->m_pWormhole->GetFloat(strKey);
		}
	}
	return 0.0f;
}

IXobj* CSpaceTelescope::GetXobj(HWND hWnd)
{
	HWND _hWnd = (HWND)hWnd;
	WebRTInfo* pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	while (pInfo == nullptr)
	{
		_hWnd = ::GetParent(_hWnd);
		if (_hWnd == 0)
			break;
		pInfo = (WebRTInfo*)::GetProp((HWND)_hWnd, _T("WebRTInfo"));
	}
	if (pInfo)
	{
		CXobj* _pObj = (CXobj*)pInfo->m_pXobj;
		return (IXobj*)_pObj;
	}
	return nullptr;
}

INucleus* CSpaceTelescope::GetNucleus(HWND hWnd)
{
	DWORD dwID = ::GetWindowThreadProcessId(hWnd, NULL);
	CommonThreadInfo* pThreadInfo = GetThreadInfo(dwID);

	CNucleus* m_pNucleus = nullptr;
	auto iter = pThreadInfo->m_mapGalaxy.find(hWnd);
	if (iter != pThreadInfo->m_mapGalaxy.end())
	{
		m_pNucleus = (CNucleus*)iter->second;
		return m_pNucleus;
	}
	return nullptr;
}

IXobj* CSpaceTelescope::ObserveXml(HWND hWnd, CString strKey, CString strXml)
{
	//IXobj* pXobj = GetXobj(hWnd);
	//if (pXobj)
	//{
	//	IXobj* pParentObj = nullptr;
	//	pXobj->get_ParentXobj(&pParentObj);
	//	IXobj* pRetObj = NULL;
	//	if (pParentObj)
	//	{
	//		CXobj* pPObj = (CXobj*)pParentObj;
	//		if (pPObj->m_nViewType == XobjType::Grid)
	//		{
	//			CXobj* _pObj = (CXobj*)pXobj;
	//			pPObj->ObserveEx(_pObj->m_nRow, _pObj->m_nCol, CComBSTR(strKey), CComBSTR(strXml), &pRetObj);
	//			return pRetObj;
	//		}
	//	}
	//	else
	//	{
	//		pXobj->Observe(CComBSTR(strKey), CComBSTR(strXml), &pRetObj);
	//		return pRetObj;
	//	}
	//}
	DWORD dwID = ::GetWindowThreadProcessId(hWnd, NULL);
	CommonThreadInfo* pThreadInfo = GetThreadInfo(dwID);

	CNucleus* m_pNucleus = nullptr;
	auto iter = pThreadInfo->m_mapGalaxy.find(hWnd);
	if (iter != pThreadInfo->m_mapGalaxy.end())
	{
		m_pNucleus = (CNucleus*)iter->second;
		IXobj* pXObj = nullptr;
		m_pNucleus->Observe(CComBSTR(strKey), CComBSTR(strXml), &pXObj);
		return pXObj;
	}
	else
	{
		HWND hPWnd = ::GetParent(hWnd);
		while (hPWnd)
		{
			bool bMDIChild = ::GetWindowLong(hPWnd, GWL_EXSTYLE) & WS_EX_MDICHILD;
			if (bMDIChild)
				break;
			HWND _hPWnd = ::GetParent(hPWnd);
			if (_hPWnd == nullptr)
			{
				break;
			}
			hPWnd = _hPWnd;
		}
		CNuclei* pNuclei = nullptr;
		auto it = m_mapNuclei.find(hPWnd);
		if (it != m_mapNuclei.end())
			pNuclei = (CNuclei*)it->second;
		else
		{
			pNuclei = new CComObject<CNuclei>();
			pNuclei->m_hWnd = hPWnd;
			m_mapNuclei[hPWnd] = pNuclei;
		}

		m_pNucleus = new CComObject<CNucleus>();
		CString strName = _T("default");
		m_pNucleus->m_strNucleusName = strName;
		//HWND _hPWnd = ::GetParent(hWnd);
		//::GetClassName(_hPWnd, m_szBuffer, MAX_PATH);
		//CString strClassName = CString(m_szBuffer);
		//if (strClassName.Find(_T("Afx:ControlBar:")) == 0)
		//{
		//	m_pNucleus->m_nGalaxyType = CtrlBarGalaxy;
		//	m_pNucleus->m_strDocTemplateID = _T("ControlBar");
		//	CWnd* pWnd = CWnd::FromHandlePermanent(_hPWnd);
		//	if (pWnd == nullptr)
		//	{
		//		CWebRTWnd* _pWnd = new CWebRTWnd();
		//		_pWnd->SubclassWindow(_hPWnd);
		//		_pWnd->m_hClient = hWnd;
		//	}
		//}
		//else if (strClassName.Find(_T("MDIClient")) == 0)
		//{
		//	m_pNucleus->m_nGalaxyType = MDIClientGalaxy;
		//	m_pNucleus->m_strDocTemplateID = _T("MDIClient");
		//}

		m_pNucleus->m_hHostWnd = hWnd;
		pThreadInfo->m_mapGalaxy[hWnd] = m_pNucleus;
		pNuclei->m_mapGalaxy[hWnd] = m_pNucleus;
		pNuclei->m_mapWnd[strName] = hWnd;

		for (auto& it : m_mapWebRTAppProxy)
		{
			CNucleusProxy* pGalaxyProxy = it.second->OnNucleusCreated(m_pNucleus);
			if (pGalaxyProxy)
			{
				m_pNucleus->m_mapGalaxyProxy[it.second] = pGalaxyProxy;
			}
		}
		IXobj* pXObj = nullptr;
		m_pNucleus->Observe(CComBSTR(strKey), CComBSTR(strXml), &pXObj);
		return pXObj;
	}
	return nullptr;
}

CWebViewImpl* CSpaceTelescope::GetWebPageImpl(HWND hWnd)
{
	CNucleus* pGalaxy = (CNucleus*)GetNucleus(hWnd);
	if (pGalaxy)
	{
		return pGalaxy->m_pWebViewWnd;
	}
	else
	{
		CXobj* pObj = (CXobj*)GetXobj(hWnd);
		if (pObj)
			return pObj->m_pWebView;
	}
	return nullptr;
}

CBrowserImpl* CSpaceTelescope::GetBrowserImpl(HWND hWnd)
{
	HWND hBrowser = hWnd;
	auto it = m_mapBrowserWnd.find(hBrowser);
	if (it != m_mapBrowserWnd.end())
		return (CBrowser*)it->second;
	CWebViewImpl* pPageImpl = GetWebPageImpl(hWnd);
	if (pPageImpl && pPageImpl->m_pChromeRenderFrameHost)
	{
		hBrowser = pPageImpl->m_pChromeRenderFrameHost->GetHostBrowserWnd();
		auto it = m_mapBrowserWnd.find(hBrowser);
		if (it != m_mapBrowserWnd.end())
			return (CBrowser*)it->second;
	}
	return nullptr;
}

bool CSpaceTelescope::SetFrameInfo(HWND hWnd, HWND hFrame, CString strTemplateID, void* pDoc, void* pDocTemplate)
{
	WebRTFrameWndInfo* pWebRTFrameWndInfo = (WebRTFrameWndInfo*)::GetProp(hFrame, _T("WebRTFrameWndInfo"));
	if (pWebRTFrameWndInfo == nullptr)
	{
		pWebRTFrameWndInfo = new WebRTFrameWndInfo();
		pWebRTFrameWndInfo->m_pDoc = pDoc;
		pWebRTFrameWndInfo->m_pDocTemplate = pDocTemplate;
		pWebRTFrameWndInfo->m_hClient = hWnd;
		m_mapWebRTFrameWndInfo[hFrame] = pWebRTFrameWndInfo;
		::SetProp(hFrame, _T("WebRTFrameWndInfo"), pWebRTFrameWndInfo);
	}
	auto it = m_mapDocDefaultName.find(strTemplateID);
	if (it != m_mapDocDefaultName.end())
	{
		auto it2 = m_mapDocAppName.find(strTemplateID);
		if (it2 != m_mapDocAppName.end())
			m_pUniverseAppProxy->SetFrameCaption(hWnd, it->second, it2->second);
	}

	return false;
}

void CSpaceTelescope::HeartbeatEvent()
{
#ifdef _DEBUG
	SYSTEMTIME st;
	GetLocalTime(&st);
	TRACE(_T("\n******HeartbeatEvent : %02d:%02d:%02d OnHeartbeatEvent was signaled. ******\n"), st.wHour, st.wMinute, st.wSecond);
#endif	
	::PostAppMessage(m_dwThreadID, WM_POWERBROADCAST, PBT_APMRESUMEAUTOMATIC, 0);
}

void CSpaceTelescope::Resume()
{

}

void CSpaceTelescope::BrowserAdded(CChromeBrowserBase* browser, HWND hBrowser)
{
	CBrowser* pBrowserWnd = new CComObject<CBrowser>();
	pBrowserWnd->SubclassWindow(hBrowser);
	pBrowserWnd->m_pBrowser = browser;
	m_mapBrowserWnd[hBrowser] = pBrowserWnd;
	browser->m_pProxy = pBrowserWnd;
	HWND hParent = ::GetParent(hBrowser);
	if (::IsWindow(hParent))
	{
		RevokeDragDrop(hBrowser);
	}
	else {
	}
}

void CSpaceTelescope::InitialOrInsertedTab(HWND hWebView, HWND hBrowser)
{
	CBrowser* pBrowser = nullptr;
	auto it = m_mapBrowserWnd.find(hBrowser);
	if (it != m_mapBrowserWnd.end())
	{
		pBrowser = (CBrowser*)it->second;
		auto it2 = m_mapWebView.find(hWebView);
		if (it2 == m_mapWebView.end())
		{
			m_pHtmlWndCreated = new CComObject<CWebView>;
			m_pHtmlWndCreated->SubclassWindow(hWebView);
			if (m_pCLRProxy)
				m_pCLRProxy->OnWebPageCreated(hWebView, (CWebViewImpl*)m_pHtmlWndCreated, (IWebView*)m_pHtmlWndCreated, 0);
			m_pHtmlWndCreated->m_bDevToolWnd = false;
			m_mapWebView[hWebView] = m_pHtmlWndCreated;
			if (pBrowser->m_pBrowser && hWebView == pBrowser->m_pBrowser->GetActiveWebContentWnd())
				pBrowser->m_pVisibleWebView = m_pHtmlWndCreated;
			m_pActiveHtmlWnd = pBrowser->m_pVisibleWebView;
			m_pNucleus = nullptr;
			m_bWinFormActived = false;
			pBrowser->m_mapChildPage[hWebView] = m_pHtmlWndCreated;
			//::PostMessage(hWebView, WM_COSMOSMSG, 20190331, 1);
		}
	}
}

void CSpaceTelescope::OnTabChangedAt(HWND hWebView, HWND hBrowser, int nIndex, BrowserTabChangeType type, void* content)
{
	auto it = m_mapBrowserWnd.find(hBrowser);
	if (it != m_mapBrowserWnd.end())
	{
		CBrowser* pBrowser = (CBrowser*)it->second;
		switch (type)
		{
		case BrowserTabChangeType::LoadingOnly:
		{
		}
		break;
		case BrowserTabChangeType::All:
		{
			if (pBrowser->m_pVisibleWebView && pBrowser->m_pVisibleWebView->m_hWnd == hWebView)
			{
				pBrowser->m_bSZMode = true;
				theApp.m_bAppStarting = false;
				if (pBrowser->m_pMDIParent)
					pBrowser->m_pMDIParent->m_bCreateNewDoc = false;
				pBrowser->m_pVisibleWebView->m_bCanShow = true;
				::PostMessage(hBrowser, WM_BROWSERLAYOUT, 1, 7);
			}
			else if (::IsWindow(m_hWaitTabWebPageWnd) && m_nWaitTabCounts)
			{
				m_nWaitTabCounts--;
				if (m_nWaitTabCounts == 0)
				{
					::PostMessage(m_hWaitTabWebPageWnd, WM_COSMOSMSG, 20210411, 1);
				}
			}
		}
		break;
		}
	}
}

void CSpaceTelescope::WebContentsDestroyed(HWND hWebView, HWND hBrowser)
{

}

void CSpaceTelescope::BrowserRemoved(CChromeBrowserBase* browser, HWND hBrowser)
{
}

CString CSpaceTelescope::GetCreatorData(CString strKey)
{
	if (strKey.CompareNoCase(_T("productname")) == 0) {
		return m_strProductName;
	}
	else if (strKey.CompareNoCase(_T("companyname")) == 0) {
		return m_strCompanyName;
	}
	else if (strKey.CompareNoCase(_T("CmdLine")) == 0) {
		return m_strCmdLine;
	}
	else if (strKey.CompareNoCase(_T("enabledomipcevent")) == 0) {
		if (m_strCreatorAppInitData.CompareNoCase(_T("OK")))
			return _T("true");
		return _T("false");
	}
	else if (strKey.CompareNoCase(_T("AgentModel")) == 0) {
		if (m_bAgentModel)
			return _T("true");
	}
	else if (strKey.Find(_T("CreatorInitInfo-")) == 0) {
		CString strXmlFile = _T("");
		strXmlFile.Format(_T("%s%s.CreatorKey"), m_strCommonDataDir, m_strExeName + _T(".exe"));
		if (strKey.CompareNoCase(_T("CreatorInitInfo-") + m_strCreatorAppKey + _T("@") + m_strCreatorAgentKey) == 0) {
			if (::PathFileExists(strXmlFile))DeleteFile(strXmlFile);
			m_strCreatorAppInitData = _T("OK");
			return _T("OK");
		}
		m_bEnableAllDllInject = true;
		CString strXmlData = _T("");
		strXmlData.Format(_T("<CreatorKey appsha256key='%s' agentsha256key='%s' />"), m_strCreatorAppKey, m_strCreatorAgentKey);
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadXml(strXmlData))
			m_Parse.SaveFile(strXmlFile);
	}

	return _T("");
}

void CSpaceTelescope::SetCreatorData(CString strKey, CString strVal) {
	if (strKey == _T("AgentPath")) {
		if (m_strAgentPath == _T(""))
			m_strAgentPath = strVal;
		CosmosLoad();
		return;
	}
	else if (strKey == _T("CmdLine")) {
		m_strCmdLine = strVal;
		return;
	}
	//else if (strKey == _T("needinject")) {
	//	CTangramXmlParse m_Parse;
	//	if (m_Parse.LoadFile(m_strConfigFile))
	//	{
	//		CString strInject = m_Parse.attr(_T("inject"), _T(""));
	//		strInject.Trim();
	//		if (strInject.CompareNoCase(strVal)) {
	//			m_Parse.put_attr(_T("inject"), strVal);
	//			m_Parse.SaveFile(m_strConfigFile);
	//		}
	//	}
	//	return;
	//}

	if (m_bAgentModel && strVal == _T("InitStartInfo") && ::PathFileExists(m_strStartupURL) == false) {
		m_strStartupURL = m_strAgentPath + m_strExeName + _T(".app.html");
		if (::PathFileExists(m_strStartupURL))
			return;
		CString strSRC = _T("");
		if (strKey == _T("CLRMDIAppInfo")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("TangramMDIForm.app.html");
		}
		else if (strKey == _T("CLRSDIAppInfo")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("TangramForm.app.html");
		}
		else if (strKey == _T("MFCMDTApp")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCMDT.app.html");
		}
		else if (strKey == _T("MFCMDTAppEx")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCMDTEx.app.html");
		}
		else if (strKey == _T("MFCMDIApp")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCMDI.app.html");
		}
		else if (strKey == _T("MFCMDIAppEx")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCMDIEx.app.html");
		}
		else if (strKey == _T("MFCSDIApp")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCSDI.app.html");
		}
		else if (strKey == _T("MFCSDIAppEx")) {
			strSRC = m_strWebRTPath + _T("template\\");
			strSRC += _T("NativeMFCSDIEx.app.html");
		}
		::CopyFile(strSRC, m_strStartupURL, false);
		CTangramXmlParse m_Parse;
		if (m_Parse.LoadFile(m_strWebRTPath + _T("InitData.xml"))) {
			CString strName = _T("");
			for (int i = 0; i < m_Parse.GetCount(); i++)
			{
				CTangramXmlParse* pChild = m_Parse.GetChild(i);
				strName = pChild->text();
				if (pChild->attrBool(_T("folder")))
				{
					CString strFolder = m_strAgentPath + strName + _T("\\");
					CreateDirectory(strFolder, NULL);
					CopyFolder(m_strWebRTPath + strName + _T("\\"), strFolder);
				}
				else
				{
					CString strTargetName = strName;
					if (strName.CollateNoCase(_T("WorkSpace.NET.dll")) == 0) {
						strTargetName = m_strExeName + strName;
					}
					::CopyFile(m_strWebRTPath + strName, m_strAgentPath + strTargetName, false);
				}
			}
		}
		return;
	}
}

//NetworkChangeNotify:
void CSpaceTelescope::OnNetworkChangeNotify(int ConnectType, __int64 NetworkHandle)
{
	int nType = ConnectType;
	switch (nType)
	{

	}
	TRACE(_T("\n"));
}

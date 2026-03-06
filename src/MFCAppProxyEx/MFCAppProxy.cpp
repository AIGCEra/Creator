
// MFCAppProxy.cpp: 定义应用程序的类行为。
//

#include "pch.h"
#include "framework.h"
#include "afxwinappex.h"
#include "MFCAppProxy.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMFCAppProxyApp 构造

CMFCAppProxyApp::CMFCAppProxyApp() noexcept
{
}

// 唯一的 CMFCAppProxyApp 对象

CMFCAppProxyApp theApp;

// CMFCAppProxyApp 初始化

BOOL CMFCAppProxyApp::InitInstance()
{
	::MessageBox(NULL, L"", L"", MB_OK);
	//CWinAppEx::InitInstance();
	WebRTInit(_T(""));
	return TRUE;
}



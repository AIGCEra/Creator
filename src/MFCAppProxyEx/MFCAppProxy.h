
// MFCAppProxy.h: MFCAppProxy 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含 'pch.h' 以生成 PCH"
#endif

#include "resource.h"       // 主符号


// CMFCAppProxyApp:
// 有关此类的实现，请参阅 MFCAppProxy.cpp
//

class CMFCAppProxyApp : public CAppProxy //CAIGCWinAppEx
{
public:
	CMFCAppProxyApp() noexcept;

// 重写
private:
	virtual BOOL InitInstance();
};

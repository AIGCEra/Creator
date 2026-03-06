/********************************************************************************
 *           Web Runtime for Application - Version 1.0.0.202112150001           *
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

#include "stdafx.h"
#include "Cosmos.h"
#include "UniverseApp.h"
#include "Wormhole.h"
#include "xobj.h"
#include "WinNucleus.h"
#include"chromium\WebPage.h"
CWormhole::CWormhole()
{
	m_pSession = nullptr;
	m_pBrowser = nullptr;
	m_pParantXObj = nullptr;
#ifdef _DEBUG
	g_pSpaceTelescope->m_nSessionCount++;
#endif	
}

CWormhole::~CWormhole()
{
	auto it = g_pSpaceTelescope->m_mapWormhole.find(m_pSession);
	if (it != g_pSpaceTelescope->m_mapWormhole.end())
	{
		g_pSpaceTelescope->m_mapWormhole.erase(it);
	}
#ifdef _DEBUG
	g_pSpaceTelescope->m_nSessionCount--;
#endif	
}

void CWormhole::InsertString(CString key, CString value)
{
	m_pOwner->m_pChromeRenderFrameHost->InsertString(m_pSession, key, value);
}

void CWormhole::InsertLong(CString key, long value)
{
	m_pOwner->m_pChromeRenderFrameHost->InsertLong(m_pSession, key, value);
}

void CWormhole::Insertint64(CString key, __int64 value)
{
	m_pOwner->m_pChromeRenderFrameHost->Insertint64(m_pSession, key, value);
}

void CWormhole::InsertFloat(CString key, float value)
{
	m_pOwner->m_pChromeRenderFrameHost->InsertFloat(m_pSession, key, value);
}

CString CWormhole::GetString(CString key)
{
	return m_pOwner->m_pChromeRenderFrameHost->GetString(m_pSession, key);
}

long CWormhole::GetLong(CString key)
{
	return m_pOwner->m_pChromeRenderFrameHost->GetLong(m_pSession, key);
}

__int64 CWormhole::Getint64(CString key)
{
	return m_pOwner->m_pChromeRenderFrameHost->Getint64(m_pSession, key);
}

float CWormhole::GetFloat(CString key)
{
	return m_pOwner->m_pChromeRenderFrameHost->GetFloat(m_pSession, key);
}

void CWormhole::SendMessage()
{
	if (m_pOwner)
	{
		m_pOwner->m_pChromeRenderFrameHost->SendCosmosMessage(m_pSession);
	}
}

void CWormhole::addEventListener(CString ListenerName)
{
}

void CWormhole::removeEventListener(CString ListenerName) {
}



#include "AppProxy.h"

IWebRT* g_pWebRT = nullptr;

namespace CommonUniverse {
	typedef IWebRT* (__stdcall* GetWebRT)();
	typedef CWebRTImpl* (__stdcall* GetWebRTImpl)(IWebRT**);
	typedef bool(__stdcall* _IsBrowserModel)(bool bSupportCrashReporting, void*);
	_IsBrowserModel FuncIsBrowserModel;
	CWebRTImpl* g_pSpaceTelescopeImpl = nullptr;
	void DpiUtil::SetProcessDpiAwarenessContext(DPI_AWARENESS_CONTEXT dpiAwarenessContext)
	{
		// Call the latest DPI awareness function possible
		static auto SetProcessDpiAwarenessContextFunc = []() {
			return reinterpret_cast<decltype(&::SetProcessDpiAwarenessContext)>(
				::GetProcAddress(GetUser32Module(), "SetProcessDpiAwarenessContext"));
			}();

			if (SetProcessDpiAwarenessContextFunc)
			{
				// Windows 10 1703+: SetProcessDpiAwarenessContext
				SetProcessDpiAwarenessContextFunc(dpiAwarenessContext);
			}
			else
			{
				static auto SetProcessDpiAwarenessFunc = []() {
					return reinterpret_cast<decltype(&::SetProcessDpiAwareness)>(
						::GetProcAddress(GetShcoreModule(), "SetProcessDpiAwareness"));
					}();
					if (SetProcessDpiAwarenessFunc)
					{
						// Windows 8.1+: SetProcessDpiAwareness
						SetProcessDpiAwarenessFunc(
							ProcessDpiAwarenessFromDpiAwarenessContext(dpiAwarenessContext));
					}
					else if (dpiAwarenessContext != DPI_AWARENESS_CONTEXT_UNAWARE)
					{
						// Windows 7+: SetProcessDPIAware
						::SetProcessDPIAware();
					}
			}
	}

	HMODULE DpiUtil::GetUser32Module()
	{
		static HMODULE user32Module = nullptr;
		if (user32Module == nullptr)
		{
			user32Module = LoadLibraryA("User32.dll");
		}
		return user32Module;
	}

	HMODULE DpiUtil::GetShcoreModule()
	{
		static HMODULE shcoreModule = nullptr;
		if (shcoreModule == nullptr)
		{
			shcoreModule = LoadLibraryA("Shcore.dll");
		}
		return shcoreModule;
	}

	PROCESS_DPI_AWARENESS DpiUtil::ProcessDpiAwarenessFromDpiAwarenessContext(
		DPI_AWARENESS_CONTEXT dpiAwarenessContext)
	{
		if (dpiAwarenessContext == DPI_AWARENESS_CONTEXT_UNAWARE ||
			dpiAwarenessContext == DPI_AWARENESS_CONTEXT_UNAWARE_GDISCALED)
		{
			return PROCESS_DPI_UNAWARE;
		}
		if (dpiAwarenessContext == DPI_AWARENESS_CONTEXT_SYSTEM_AWARE)
		{
			return PROCESS_SYSTEM_DPI_AWARE;
		}
		if (dpiAwarenessContext == DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE ||
			dpiAwarenessContext == DPI_AWARENESS_CONTEXT_PER_MONITOR_AWARE_V2)
		{
			return PROCESS_PER_MONITOR_DPI_AWARE;
		}
		// All DPI awarenes contexts should be covered above.
		//FAIL_FAST();
		return PROCESS_DPI_UNAWARE;
	}

	CTangramXmlParse::CTangramXmlParse(void)
	{
		Initialize();
		elem = NULL;
		m_pParentParse = NULL;
	}

	CTangramXmlParse::~CTangramXmlParse(void)
	{
		Clear();
		//if (m_pUnknown) 
		//{
		//	m_pUnknown->Release();
		//	m_pUnknown = NULL;
		//}
		elem = NULL;
	}


	void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMElement> _elem)
	{
		Initialize();
		elem = _elem;
		//m_pUnknown = NULL;
		//elem->QueryInterface(IID_IUnknown,(void**)&m_pUnknown);

		CComPtr<IXMLDOMNodeList> pList = NULL;
		if (_elem->get_childNodes(&pList) == S_OK)
		{
			_CTangramXmlParse(pList);
		}
	}

	void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMNode> _node)
	{
		CComPtr<IXMLDOMElement> pElem = NULL;
		if (_node->QueryInterface<IXMLDOMElement>(&pElem) == S_OK)
		{
			_CTangramXmlParse(pElem);
		}
	}

	void CTangramXmlParse::ModifyNameAttrByFix(CString strNameFix)
	{
		if (strNameFix != _T(""))
		{
			CComVariant var;
			CComBSTR bstrAttrName(L"id");
			CComBSTR bstrNAME(L"Name");
			HRESULT hr = elem->getAttribute(bstrNAME, &var);
			CString strNAME = OLE2T(var.bstrVal);
			hr = elem->getAttribute(bstrAttrName, &var);
			if (var.vt == VT_BSTR)
			{
				CString strName = OLE2T(var.bstrVal);
				CComBSTR bstrName = CComBSTR(strNameFix);
				CString _strName = OLE2T(var.bstrVal);
				if (_strName == _T(""))
					bstrName += strNAME;
				else
					bstrName += var.bstrVal;
				var.bstrVal = bstrName;
				hr = elem->setAttribute(bstrAttrName, var);
			}
			if (hr != S_OK)
			{
				::VariantClear(&var);
				CString _strName = strNameFix + strNAME;
				var.vt = VT_BSTR;
				var.bstrVal = _strName.AllocSysString();
				hr = elem->setAttribute(bstrAttrName, var);
			}
			::VariantClear(&var);
			//::SysFreeString(bstrAttrName);
			int nCount = GetCount();
			for (int i = 0; i < nCount; i++)
			{
				GetChild(i)->ModifyNameAttrByFix(strNameFix);
			}
		}
	}

	CTangramXmlParse* CTangramXmlParse::AddNode(CTangramXmlParse* pParse, CString strNameFix)
	{
		if (pParse)
		{
			if (strNameFix != _T(""))
			{
				pParse->ModifyNameAttrByFix(strNameFix);
			}
			CComPtr<IXMLDOMElement> pElem = pParse->GetElement();
			CComPtr<IXMLDOMDocument> pDoc;
			elem->get_ownerDocument(&pDoc);
			if (pDoc)
			{
				CComPtr<IXMLDOMNode> pNode;
				HRESULT hr = elem->appendChild(pElem, &pNode);
				if (hr == S_OK)
				{
					CTangramXmlParse* pWebRTXmlParse = new CTangramXmlParse(pNode);
					m_aChildElements.push_back(pWebRTXmlParse);
					return pWebRTXmlParse;
				}
			}
		}
		return NULL;
	}

	CTangramXmlParse* CTangramXmlParse::AddTabNode(CString strName, CString strObjTypeID, CString strObjID, CString strStyle, int nPages)
	{
		strName.Trim();
		if (strName == _T(""))
			return NULL;
		strObjTypeID.Trim().MakeLower();
		strStyle.Trim().MakeLower();
		if (strObjTypeID == _T(""))
			strObjTypeID = _T("tabbedwnd");
		if (strObjTypeID == _T("tabbedwnd"))
		{
			if (strStyle == _T(""))
				strStyle = _T("19");
		}
		CTangramXmlParse* pNode = AddNode(_T("xobj"));
		pNode->put_attr(_T("gridtype"), strObjID);
		pNode->put_attr(_T("id"), strName);
		pNode->put_attr(_T("objid"), strObjTypeID);
		pNode->put_attr(_T("tabstyle"), strStyle);
		if (nPages)
		{
			CString strVal = _T("");
			for (int i = 0; i < nPages; i++)
			{
				CTangramXmlParse* _pNode = pNode->AddNode(_T("xobj"));
				strVal.Format(_T("%s_Page%d"), strName, i);
				_pNode->put_attr(_T("id"), strVal);
				_pNode->put_attr(_T("caption"), strVal);
			}
		}
		return pNode;
	}

	CTangramXmlParse* CTangramXmlParse::AddSplitterNode(int nRows, int nCols, CString strName, int nWidth, int nHeight)
	{
		strName.Trim();
		if (strName == _T(""))
			return NULL;
		nRows = nRows % 16;
		nCols = nCols % 16;
		if (nWidth * nHeight && nRows * nCols > 1)
		{
			CTangramXmlParse* pNode = AddNode(_T("xobj"));
			int _nWidth = nWidth / nCols;
			int _nHeight = nHeight / nRows;
			CString strRows = _T("");
			CString strCols = _T("");
			if (pNode)
			{
				pNode->put_attr(_T("gridtype"), CString(_T("xobj")));
				pNode->put_attr(_T("id"), strName);
				CString strVal = _T("");
				strVal.Format(_T("%d"), nRows);
				pNode->put_attr(_T("rows"), strVal);
				strVal.Format(_T("%d"), nCols);
				pNode->put_attr(_T("cols"), strVal);
				strVal.Format(_T("%d,"), _nWidth);
				CString	strVal2 = _T("");
				CString	strVal3 = _T("");
				strVal2.Format(_T("%d,"), _nHeight);
				for (int i = 0; i < nCols; i++)
				{
					if (i < nCols - 1)
					{
						strRows += strVal;
					}
					for (int j = 0; j < nRows; j++)
					{
						if (i == 0 && j < nRows - 1)
						{
							strCols += strVal2;
						}
						CTangramXmlParse* _pNode = pNode->AddNode(_T("xobj"));
						strVal3.Format(_T("%s_View%02d%02d"), strName, i, j);
						_pNode->put_attr(_T("id"), strVal3);
					}
				}
				pNode->put_attr(_T("width"), strRows);
				pNode->put_attr(_T("height"), strCols);
				return pNode;
			}
		}

		return NULL;
	}

	BOOL CTangramXmlParse::ModifyNode(int nRow, int nCol, CString strName, CString strXml)
	{
		int nIndex = 0;
		CString strID = this->attr(_T("gridtype"), _T(""));
		if (strID == _T(""))
			return FALSE;
		int nCount = GetCount();
		if (nCount == 0)
			return FALSE;
		nRow = nRow % 16;
		nCol = nCol % 16;
		int nRows = attrInt(_T("rows"), 0);
		int nCols = attrInt(_T("cols"), 0);
		if (nRow >= nRows || nCol > nCols)
			return FALSE;

		nIndex = nRow * nCols + nCol;
		CTangramXmlParse* pChild = GetChild(nIndex);

		CTangramXmlParse m_Parse;
		if (m_Parse.LoadXml(strXml) || m_Parse.LoadFile(strXml))
		{
			CTangramXmlParse* pWindow = m_Parse.GetChild(TGM_NUCLEUS);
			if (pWindow)
			{
				CTangramXmlParse* pNode = pWindow->GetChild(_T("xobj"));
				if (pNode)
				{
					if (ReplaceNode(pChild, pNode, strName))
						return TRUE;
				}
			}
		}
		return FALSE;
	}

	CTangramXmlParse* CTangramXmlParse::ReplaceNode(CTangramXmlParse* pOldParse, CTangramXmlParse* pNewParse, CString strNameFix)
	{
		int nCount = GetCount();
		for (int i = 0; i < nCount; i++)
		{
			CTangramXmlParse* pChild = GetChild(i);
			if (pChild == pOldParse)
			{
				if (strNameFix != _T(""))
				{
					pNewParse->ModifyNameAttrByFix(strNameFix);
				}
				CString strCapOld = pOldParse->attr(_T("caption"), _T(""));
				CComPtr<IXMLDOMElement> pElem = pOldParse->GetElement();
				CComPtr<IXMLDOMElement> pNewElem = pNewParse->GetElement();
				CComPtr<IXMLDOMNode> pOutNode;
				HRESULT hr = elem->replaceChild(pNewElem, pElem, &pOutNode);
				CComPtr<IXMLDOMNodeList> pList = NULL;
				if (elem->get_childNodes(&pList) == S_OK)
				{
					CComPtr<IXMLDOMNode> pNode;
					pList->get_item(i, &pNode);
					CComPtr<IXMLDOMElement> pElem = NULL;
					if (pNode->QueryInterface<IXMLDOMElement>(&pElem) == S_OK)
					{
						CTangramXmlParse* pOldChild = pChild;
						pChild = new CTangramXmlParse(pElem);
						pChild->m_pParentParse = this;
						m_aChildElements[i] = pChild;
						delete pOldChild;
						CString strCap = pChild->attr(_T("caption"), _T(""));
						if (strCap == _T("") && strCapOld != _T(""))
							pChild->put_attr(_T("caption"), strCapOld);
						return pChild;
					}
				}
				break;
			}
		}
		return NULL;
	}

	void CTangramXmlParse::_CTangramXmlParse(CComPtr<IXMLDOMNodeList> _nlist)
	{
		long nLen = 0;
		_nlist->get_length(&nLen);
		for (long i = 0; i < nLen; i++)
		{
			CComPtr<IXMLDOMNode> pNode = NULL;
			CComPtr<IXMLDOMElement> pElem = NULL;
			if (_nlist->get_item(i, &pNode) == S_OK)
			{
				if (pNode->QueryInterface<IXMLDOMElement>(&pElem) == S_OK)
				{
					//m_aChildElements.Add(new CTangramXmlParse(pElem));
					CTangramXmlParse* pChild = new CTangramXmlParse(pElem);
					pChild->m_pParentParse = this;
					m_aChildElements.push_back(pChild);
				}
			}
		}
	}

	CTangramXmlParse* CTangramXmlParse::GetChild(int nIndex)
	{
		if (nIndex < 0 || nIndex >= GetCount())
			return NULL;
		return m_aChildElements[nIndex];
	}

	CTangramXmlParse* CTangramXmlParse::GetChild(CString strName)
	{
		for (int i = 0; i < GetCount(); i++)
		{
			if (m_aChildElements[i]->name().CompareNoCase(strName) == 0)
				return m_aChildElements[i];
		}
		return NULL;
	}

	CTangramXmlParse& CTangramXmlParse::operator[](CString strName)
	{
		CTangramXmlParse* pXml = GetChild(strName);
		if (pXml != NULL) return *pXml;
		//ASSERT(FALSE);//don't have the node.
		return *this;
	}

	CTangramXmlParse& CTangramXmlParse::operator[](int nIndex)
	{
		CTangramXmlParse* pXml = GetChild(nIndex);
		if (pXml != NULL) return *pXml;
		//ASSERT(FALSE);//index is overflow
		return *this;
	}

	CTangramXmlParse* CTangramXmlParse::FindItem(LPCTSTR strItemname)
	{
		CTangramXmlParse* pItem = NULL;

		//if (name().CompareNoCase(strItemname) == 0)
		//{
		//	pItem = this;
		//}

		if (pItem == NULL)
		{
			for (int i = 0; i < GetCount(); i++)
			{
				CTangramXmlParse* pI = GetChild(i);
				if (pI->name().CompareNoCase(strItemname) == 0)
				{
					pItem = pI;
					break;
				}
			}
		}

		if (pItem == NULL)
		{
			for (int i = 0; i < GetCount(); i++)
			{
				CTangramXmlParse* pX = GetChild(i)->FindItem(strItemname);

				if (pX != NULL)
				{
					pItem = pX;
					break;
				}
			}
		}
		return pItem;
	}

	CTangramXmlParse* CTangramXmlParse::FindItemByName(LPCTSTR strItemname)
	{
		CTangramXmlParse* pItem = NULL;

		//if (name().CompareNoCase(strItemname) == 0)
		//{
		//	pItem = this;
		//}

		if (pItem == NULL)
		{
			for (int i = 0; i < GetCount(); i++)
			{
				CTangramXmlParse* pI = GetChild(i);
				CString strName = pI->attr(_T("id"), _T(""));
				if (strName.CompareNoCase(strItemname) == 0)
				{
					pItem = pI;
					break;
				}
			}
		}

		if (pItem == NULL)
		{
			for (int i = 0; i < GetCount(); i++)
			{
				CTangramXmlParse* pX = GetChild(i)->FindItemByName(strItemname);

				if (pX != NULL)
				{
					pItem = pX;
					break;
				}
			}
		}
		return pItem;
	}

	bool CTangramXmlParse::operator==(CTangramXmlParse& nItem)
	{
		IUnknown* pUn1 = NULL;
		elem->QueryInterface(IID_IUnknown, (void**)&pUn1);

		IUnknown* pUn2 = NULL;
		nItem.elem->QueryInterface(IID_IUnknown, (void**)&pUn2);

		bool bRet = (pUn2 == pUn1);

		pUn1->Release();
		pUn2->Release();

		return bRet;
	}

	void CTangramXmlParse::Initialize()
	{
		m_strFile = _T("");
		m_bCanSave = false;
	}

	CTangramXmlParse* CTangramXmlParse::_FindParseByEle(CTangramXmlParse* _pParent, IUnknown* pEle)
	{
		IUnknown* pUn1 = NULL;
		_pParent->elem->QueryInterface(IID_IUnknown, (void**)&pUn1);
		if (pUn1 == pEle)
		{
			pUn1->Release();
			return _pParent;
		}
		pUn1->Release();

		int c = (int)_pParent->GetCount();

		for (int i = 0; i < c; i++)
		{
			CTangramXmlParse* pValue = _FindParseByEle(_pParent->m_aChildElements[i], pEle);
			if (pValue != NULL) return pValue;
		}
		return NULL;
	}

	CTangramXmlParse* CTangramXmlParse::GetParseByElement(IXMLDOMElement* pEle)
	{
		if (elem == NULL) return NULL;
		CTangramXmlParse* pParse = NULL;
		IUnknown* pUnk = NULL;

		if (pEle->QueryInterface(IID_IUnknown, (void**)&pUnk) == S_OK)
		{
			pParse = _FindParseByEle(this, pUnk);
			pUnk->Release();
		}
		return pParse;
	}

	CTangramXmlParse* CTangramXmlParse::AddNode(CString name)
	{
		CComPtr<IXMLDOMDocument> pDoc = NULL;
		CComPtr<IXMLDOMElement> pElement = NULL;
		if (elem->get_ownerDocument(&pDoc) == S_OK)
		{
			pDoc->createElement(CComBSTR(name), &pElement);
			if (pElement != NULL)
			{
				if (elem->appendChild(pElement, NULL) == S_OK)
				{
					CTangramXmlParse* pWebRTXmlParse = new CTangramXmlParse(pElement);
					m_aChildElements.push_back(pWebRTXmlParse);
					return pWebRTXmlParse;
				}
			}
		}
		return NULL;
	}

	HRESULT CTangramXmlParse::RemoveNode(CString name)
	{
		CTangramXmlParse* pNode = GetChild(name);
		return RemoveNode(pNode);
	}

	HRESULT CTangramXmlParse::RemoveNode(CTangramXmlParse* pNode)
	{
		if (pNode == NULL) return E_FAIL;

		HRESULT hr = elem->removeChild(pNode->elem, NULL);
		if (hr == S_OK)
		{
			//for(int i = 0; i<GetCount(); i++)
			//{
			//	if (m_aChildElements[i] == pNode)
			//	{
			//		m_aChildElements.RemoveAt(i);
			//		//m_aChildElements.erase(m_aChildElements.at(i));
			//		delete pNode;
			//		break;
			//	}
			//}

			vector<CTangramXmlParse*>::iterator it;
			//for(int i = 0; i<GetCount(); i++)
			for (it = m_aChildElements.begin(); it != m_aChildElements.end(); it++)
			{
				if (*it == pNode)
				{
					//m_aChildElements.RemoveAt(i);
					m_aChildElements.erase(it);
					delete pNode;
					break;
				}
			}
		}
		return hr;
	}

	HRESULT CTangramXmlParse::RemoveNode(int index)
	{
		if (index >= GetCount()) return -1;
		CTangramXmlParse* pNode = m_aChildElements[index];
		return RemoveNode(pNode);
	}

	HRESULT CTangramXmlParse::RemoveSubNodes()
	{
		for (int i = GetCount(); i >= 0; i--)
			RemoveNode(i);
		return S_OK;
	}

	bool CTangramXmlParse::put_text(CString text)
	{
		CComPtr<IXMLDOMNodeList> pSubNodeList;
		elem->get_childNodes(&pSubNodeList);
		long sublen;
		bool bFound = false;
		pSubNodeList->get_length(&sublen);
		for (long j = 0; j < sublen; j++)
		{
			CComPtr<IXMLDOMNode> pChildNode = NULL;
			if (pSubNodeList->get_item(j, &pChildNode) == S_OK)
			{
				BSTR subname = NULL;
				pChildNode->get_nodeName(&subname);
				if (wcscmp(subname, L"#text") == 0)
				{
					pChildNode->put_text(CComBSTR(text));
					bFound = true;
					break;
				}
			}
		}
		if (!bFound) elem->put_text(CComBSTR(text));
		return true;
	}

	bool CTangramXmlParse::put_attr(CString name, CString value)
	{
		return (elem->setAttribute(CComBSTR(name), CComVariant(CComBSTR(value))) == S_OK);
	}

	bool CTangramXmlParse::put_attr(CString name, int value)
	{
		CString strInfo;
		strInfo.Format(_T("%d"), value);
		return put_attr(name, strInfo);
	}

	bool CTangramXmlParse::put_attr(CString name, __int64 value)
	{
		CString strInfo;
		strInfo.Format(_T("%I64d"), value);
		return put_attr(name, strInfo);
	}

	bool CTangramXmlParse::put_attr(CString name, bool value)
	{
		CString strInfo = _T("false");
		if (value) strInfo = _T("true");
		return put_attr(name, strInfo);
	}

	CString CTangramXmlParse::name()
	{
		if (!elem) return _T("");

		BSTR bstr = ::SysAllocString(L"");
		elem->get_tagName(&bstr);
		CString strName = OLE2T(bstr);
		::SysFreeString(bstr);

		return strName;
	}

	CString CTangramXmlParse::xml()
	{
		if (!elem) return _T("");
		CComBSTR bn;
		elem->get_xml(&bn);
		return CString(bn);
	}

	CString CTangramXmlParse::text()
	{
		if (!elem) return _T("");
		CComPtr<IXMLDOMNodeList> pList = NULL;
		if (elem->get_childNodes(&pList) == S_OK)
		{
			long nLen = 0;
			pList->get_length(&nLen);
			for (long i = 0; i < nLen; i++)
			{
				CComPtr<IXMLDOMNode> pNode = NULL;
				if (pList->get_item(i, &pNode) == S_OK)
				{
					BSTR name = NULL;
					pNode->get_nodeName(&name);
					if (CString(name).CompareNoCase(_T("#text")) == 0)
					{
						BSTR value = NULL;
						pNode->get_text(&value);
						return CString(value);
					}
				}
			}
		}
		return _T("");
	}

	CString CTangramXmlParse::attr(const CString name, CString def) const
	{
		if (!elem) return _T("");
		CComBSTR bname(name);
		CComVariant val(VT_EMPTY);
		elem->getAttribute(bname, &val);

		if (val.vt == VT_BSTR)
		{
			CString strRet = OLE2T(val.bstrVal);
			if (strRet != _T(""))
				return strRet;
		}
		return def;
	}

	DWORD CTangramXmlParse::attr(const CString name, DWORD def) const
	{
		if (!elem) return 0;
		CComBSTR bname(name);
		CComVariant vall(VT_EMPTY);
		elem->getAttribute(bname, &vall);
		if (vall.vt == VT_BSTR)
		{
			//DWORD rr = DWORD();
			CString s = _T("");
			s += vall.bstrVal;
			DWORD rr = _ttoi(s);
			return rr;
		}
		return def;
	}

	//HKEY CTangramXmlParse::attr(const CString name) const
	//{
	//	if(!elem) return 0;
	//}

	bool CTangramXmlParse::attrBool(const CString name, bool def) const
	{
		CString a = attr(name, _T(""));
		if (a.CompareNoCase(_T("true")) == 0) return true;
		else if (a.CompareNoCase(_T("false")) == 0) return false;
		else return def;
	}

	int CTangramXmlParse::attrInt(const CString name, int def) const
	{
		CString str = attr(name, _T(""));
		if (str.IsEmpty()) return def;
		return _ttoi(str);
	}

	__int64 CTangramXmlParse::attrInt64(const CString name, __int64 def) const
	{
		CString str = attr(name, _T(""));
		if (str.IsEmpty()) return def;
		return _ttoi64(str);
	}

	CString CTangramXmlParse::val() const
	{
		USES_CONVERSION;
		if (!elem) return _T("");
		CComVariant val(VT_EMPTY);
		elem->get_nodeTypedValue(&val);
		if (val.vt == VT_BSTR) return OLE2T(val.bstrVal);
		return _T("");
	}

	//ÐÂÔö
	DWORD CTangramXmlParse::vall() const
	{
		USES_CONVERSION;
		if (!elem) return 0;
		CComVariant val(VT_EMPTY);
		elem->get_nodeTypedValue(&val);
		if (val.vt == VT_I8 || val.vt == VT_I4) return DWORD(val.lVal);
		return 0;
	}

	bool CTangramXmlParse::LoadXml(CString strXML)
	{
		//HRESULT hr = CoInitialize(NULL);
		if (m_pDoc != NULL) m_pDoc.Release();
		if (CoCreateInstance(CLSID_DOMDocument, NULL, CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&m_pDoc) == S_OK)
		{
			VARIANT_BOOL vb;
			if ((m_pDoc->load(CComVariant(strXML), &vb) != S_OK) || !vb)
			{
				m_pDoc->loadXML(CComBSTR(strXML), &vb);
			}
			if (!vb)
			{
				return false;
			}
			CComPtr<IXMLDOMElement> pEle;
			if (m_pDoc->get_documentElement(&pEle) == S_OK)
			{
				Clear();
				_CTangramXmlParse(pEle);
				return true;
			}
		}
		return false;
	}

	bool CTangramXmlParse::LoadFile(CString strFile)
	{
		//HRESULT hr = CoInitializeEx(NULL,0);
		if (m_pDoc != NULL) m_pDoc.Release();
		if (CoCreateInstance(CLSID_DOMDocument, NULL, CLSCTX_INPROC_SERVER, IID_IXMLDOMDocument, (void**)&m_pDoc) == S_OK)
		{
			CComVariant file(strFile);
			VARIANT_BOOL vb;
			if (m_pDoc->load(file, &vb) == S_OK)
			{
				if (!vb)
				{
					return false;
				}
				CComPtr<IXMLDOMElement> pEle;
				if (m_pDoc->get_documentElement(&pEle) == S_OK)
				{
					Clear();
					_CTangramXmlParse(pEle);

					m_bCanSave = true;
					m_strFile = strFile;

					return true;
				}
			}
		}
		return false;
	}
	bool CTangramXmlParse::SaveFile(CString strFile)
	{
		if (m_pDoc == NULL)
		{
			elem->get_ownerDocument(&m_pDoc);
		}

		if (strFile.Compare(_T("")) == 0)
		{
			if (m_bCanSave)
			{
				strFile = m_strFile;
			}
		}

		CComVariant var(strFile);
		return (m_pDoc->save(var) == S_OK);
	}

	bool CTangramXmlParse::Reflash()
	{
		Clear();
		if (elem)
			_CTangramXmlParse(elem);
		return true;
	}

	bool CTangramXmlParse::Clear()
	{
		for (int i = 0; i < GetCount(); i++)
		{
			delete m_aChildElements[i];
		}
		//m_aChildElements.RemoveAll();
		m_aChildElements.clear();
		return true;
	}

	class CWebRTProxy : public IWebRTDelegate {
	public:
		CWebRTProxy() {};
		virtual ~CWebRTProxy() {
		}

		// IWebRTDelegate:
		virtual bool OnAppIdle(BOOL& bIdle, LONG lCount) {
			_AFX_THREAD_STATE* pState = AfxGetThreadState();
			while (bIdle &&
				!::PeekMessage(&(pState->m_msgCur), NULL, NULL, NULL, PM_NOREMOVE)) {
				if (!AfxGetApp()->OnIdle(lCount++))
					bIdle = FALSE;  // assume "no idle" state
			}
			return true;
		}

		virtual bool DoIdleWork() {
			if (g_pSpaceTelescopeImpl && g_pSpaceTelescopeImpl->m_hMainWnd &&
				::IsWindow(g_pSpaceTelescopeImpl->m_hMainWnd) == false)
				g_pSpaceTelescopeImpl->m_hMainWnd = NULL;
			return false;
		}

		virtual bool IsAppIdleMessage() {
			_AFX_THREAD_STATE* pState = AfxGetThreadState();
			if (AfxGetApp() && AfxGetApp()->IsIdleMessage(&(pState->m_msgCur))) {
				return true;
			}
			return false;
		}

		virtual void ProcessMsg(MSG* msg) {
			if (msg->message != WM_KICKIDLE) {
				::TranslateMessage(msg);
				::DispatchMessage(msg);
			}
		}

		virtual void ForegroundIdleProc() {
			// send WM_IDLEUPDATECMDUI to the main window
			CWinApp* pApp = AfxGetApp();
			if (pApp) {
				CWnd* pMainWnd = AfxGetApp()->m_pMainWnd;
				if (pMainWnd != NULL && pMainWnd->m_hWnd != NULL &&
					pMainWnd->IsWindowVisible()) {
					AfxCallWndProc(pMainWnd, pMainWnd->m_hWnd, WM_IDLEUPDATECMDUI,
						(WPARAM)TRUE, 0);
					pMainWnd->SendMessageToDescendants(WM_IDLEUPDATECMDUI, (WPARAM)TRUE, 0,
						TRUE, TRUE);
				}
			}
		}

		virtual bool OnUniversePreTranslateMessage(MSG* pMsg) {
			HWND hwnd = pMsg->hwnd;
			CWinApp* pApp = AfxGetApp();
			if (pApp == NULL)
				return false;
			if (pApp && pApp->m_pMainWnd == NULL) {
				if (::IsWindow(g_pSpaceTelescopeImpl->m_hMainWnd)) {
					pApp->m_pMainWnd = CWnd::FromHandlePermanent(g_pSpaceTelescopeImpl->m_hMainWnd);
				}
			}
			CWnd* pWnd = CWnd::FromHandlePermanent(hwnd);
			if (pWnd) {
				if (CMFCPopupMenu::GetActiveMenu() &&
					!::IsWindow(CMFCPopupMenu::GetActiveMenu()->m_hWnd)) {
					return true;
				}
				if (pMsg->message == WM_LBUTTONDOWN) {
					if (pApp && pApp->m_pMainWnd)
						pApp->m_pMainWnd->PreTranslateMessage(pMsg);
					return true;
				}
				return pWnd->PreTranslateMessage(pMsg);
			}
			else {
				switch (pMsg->message) {
				case WM_NCLBUTTONDOWN:
				case WM_NCRBUTTONDOWN:
				case WM_LBUTTONDOWN:
				case WM_RBUTTONDOWN:
				case WM_LBUTTONUP:
					// case WM_POINTERDOWN:
					// case WM_POINTERUP:
				case WM_SETWNDFOCUSE:
					if (pApp && pApp->m_pMainWnd) {
						if (g_pSpaceTelescopeImpl->m_bIsDlgApp) {
							if (::IsChild(pApp->m_pMainWnd->m_hWnd, pMsg->hwnd)) {
								{ return false; }
							}
						}
						pApp->m_pMainWnd->PreTranslateMessage(pMsg);
						return true;
					}
					break;
				case WM_KEYDOWN: {
					if (pApp && pApp->m_pMainWnd) {
						if (pMsg->wParam == VK_TAB && IsDialogMessage(pMsg->hwnd, pMsg)) {
							CWnd* pWnd = CWnd::FromHandlePermanent(::GetParent(pMsg->hwnd));
							if (pWnd)
								return pWnd->PreTranslateMessage(pMsg);
						}
						pApp->m_pMainWnd->PreTranslateMessage(pMsg);
						return true;
					}
				} break;
				}
				return TRUE;
			}
			return pApp->PreTranslateMessage(pMsg);
		}

		virtual HICON GetAppIcon(int nIndex) {
			CWinApp* pApp = AfxGetApp();
			if (pApp && pApp->m_pMainWnd) {
				switch (nIndex) {
				case 0:
					return reinterpret_cast<HICON>(
						GetClassLongPtr(AfxGetApp()->m_pMainWnd->m_hWnd, GCLP_HICON));
					break;
				case 1:
					return reinterpret_cast<HICON>(
						GetClassLongPtr(AfxGetApp()->m_pMainWnd->m_hWnd, GCLP_HICONSM));
					break;
				}
			}
			else
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
					return info.hIcon;
				}
			}
			return NULL;
		}
	};

	CWebRTProxy theAppProxy;

	CAppProxy theApp;

	CAppProxy::CAppProxy() {
		m_nShellCmd = CCommandLineInfo::FileNew;
		m_ClientRect = { 0,0,0,0 };
		WebRTInit(_T(""));
	}

	CAppProxy::~CAppProxy() {
		ControlBarCleanUp();
	}

	bool CAppProxy::WebRTInit(CString strID) {
		HMODULE hModule = ::GetModuleHandle(_T("universe.dll"));
		if (hModule) {
			GetWebRTImpl _pWebRTImplFunction;
			_pWebRTImplFunction = (GetWebRTImpl)GetProcAddress(hModule, "GetWebRTImpl");
			g_pSpaceTelescopeImpl = _pWebRTImplFunction(&g_pWebRT);
			g_pSpaceTelescopeImpl->m_pWebRTDelegate = (IWebRTDelegate*)&theAppProxy;
			g_pSpaceTelescopeImpl->m_pUniverseAppProxy = (IUniverseAppProxy*)this;
		}
		return true;
	}

	CString CAppProxy::QueryDocType(HWND hWnd) {
		CWnd* pWnd = CWnd::FromHandle(hWnd);
		CFrameWnd* pFrame = pWnd->GetParentFrame();
		if (pFrame) {
			CString strType =
				(LPCTSTR)::SendMessage(pFrame->m_hWnd, WM_COSMOSMSG, 0, 10000);
			if (strType == _T("") && pFrame == AfxGetApp()->m_pMainWnd &&
				pFrame->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd))) {
				strType = _T("mdiframe");
			}
			if (strType == _T("") && pFrame == AfxGetApp()->m_pMainWnd &&
				pFrame->IsKindOf(RUNTIME_CLASS(CMiniFrameWnd))) {
				strType = _T("miniframe");
			}
			return strType;
		}
		return _T("");
	}

	CString CAppProxy::QueryWndClassName(HWND hWnd) {
		CWnd* pWnd = CWnd::FromHandlePermanent(hWnd);
		if (pWnd) {
			CRuntimeClass* pClassInfo = pWnd->GetRuntimeClass();
			if (pClassInfo) {
				return CString(pClassInfo->m_lpszClassName);
			}
		}
		return _T("");
	}

	void CAppProxy::AttachCDockablePane(CDockablePane* pDockablePane, WebRTFrameWndInfo* pWebRTFrameWndInfo)
	{
		if (pDockablePane->IsKindOf(RUNTIME_CLASS(CTabbedPane)))
		{
			CTabbedPane* pTabbedPane = (CTabbedPane*)pDockablePane;
			POSITION pos = NULL;
			CObList _list;
			pTabbedPane->GetPaneList(_list);
			for (pos = _list.GetHeadPosition(); pos != NULL;) {
				CBasePane* _pBar = (CBasePane*)_list.GetNext(pos);
				if (_pBar->IsKindOf(RUNTIME_CLASS(CTabbedPane)))
				{
					CDockablePane* pDockablePane = (CDockablePane*)_pBar;
					AttachCDockablePane(pDockablePane, pWebRTFrameWndInfo);
				}
				else
					g_pSpaceTelescopeImpl->AttachControlBar(pWebRTFrameWndInfo, _pBar->m_hWnd);
			}
		}
	}

	HWND CAppProxy::QueryWndInfo(QueryType nType, HWND hWnd) {
		CWinApp* pApp = AfxGetApp();
		CWnd* m_pMainWnd = AfxGetMainWnd();
		if (hWnd == NULL && m_pMainWnd) {
			m_hMainWnd = m_pMainWnd->m_hWnd;
			CCommandLineInfo cmdInfo;
			pApp->ParseCommandLine(cmdInfo);
			m_nShellCmd = cmdInfo.m_nShellCommand;
			if (m_pMainWnd->IsKindOf(RUNTIME_CLASS(CFrameWnd))) {
				WebRTFrameWndInfo* pWebRTFrameWndInfo = nullptr;
				HANDLE hHandle = ::GetProp(m_pMainWnd->m_hWnd, _T("WebRTFrameWndInfo"));
				if (hHandle == 0)
				{
					pWebRTFrameWndInfo = g_pSpaceTelescopeImpl->InsertWebRTFrameWndInfo(m_hMainWnd);
					hHandle = pWebRTFrameWndInfo;					
				}
				else
				{
					pWebRTFrameWndInfo = (WebRTFrameWndInfo*)hHandle;
				}
				m_pDockingManager = GetDockingManager(m_pMainWnd);
				if (m_pDockingManager) {
					if (m_pMainWnd->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd))) {
						CMDIFrameWnd* pMDIFrame = (CMDIFrameWnd*)m_pMainWnd;
						m_pMDIClientAreaWnd = CWnd::FromHandlePermanent(pMDIFrame->m_hWndMDIClient);
						m_pvoid = m_pMDIClientAreaWnd;
					}
					POSITION pos = NULL;
					CObList list;
					m_pDockingManager->GetPaneList(list, TRUE);
					for (pos = list.GetHeadPosition(); pos != NULL;)
					{
						CBasePane* pBar = (CBasePane*)list.GetNext(pos);
						ASSERT_VALID(pBar);
						if (pBar->IsKindOf(RUNTIME_CLASS(CDockablePane)))
						{
							CDockablePane* pDockablePane = (CDockablePane*)pBar;

							if (pBar->IsKindOf(RUNTIME_CLASS(CTabbedPane)))
								AttachCDockablePane(pDockablePane, pWebRTFrameWndInfo);
							else
								g_pSpaceTelescopeImpl->AttachControlBar(pWebRTFrameWndInfo, pBar->m_hWnd);
						}
					}
				}

				if (pWebRTFrameWndInfo) {
					if (m_pMainWnd->IsKindOf(RUNTIME_CLASS(CFrameWnd)))
					{
						POSITION nPos = pApp->GetFirstDocTemplatePosition();
						while (nPos) {
							CDocTemplate* pTemplate = pApp->GetNextDocTemplate(nPos);
							POSITION pos = pTemplate->GetFirstDocPosition();
							while (pos != NULL) {
								CDocument* pDoc = pTemplate->GetNextDoc(pos);
								POSITION pos2 = pDoc->GetFirstViewPosition();
								while (pos2 != NULL) {
									CView* pView = pDoc->GetNextView(pos2);
									ASSERT_VALID(pView);
									if (m_pMainWnd->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd))) {
										if (pTemplate->IsKindOf(RUNTIME_CLASS(CMultiDocTemplate))) {
											pWebRTFrameWndInfo->m_nFrameType = 2;
										}
									}
									else
									{
										CFrameWnd* pFrame = pView->GetParentFrame();
										if (m_pMainWnd == pFrame) {
											if (m_pDockingManager)
												m_pvoid = m_pDockingManager;
											else
												m_pvoid = nullptr;
											g_pSpaceTelescopeImpl->m_hFirstView = pView->m_hWnd;
											if (pTemplate->IsKindOf(RUNTIME_CLASS(CMultiDocTemplate)))
												pWebRTFrameWndInfo->m_nFrameType = 1;
											else
												pWebRTFrameWndInfo->m_nFrameType = 4;
										}
									}
								}
							}
						}
						CFrameWnd* pFrame = (CFrameWnd*)m_pMainWnd;
						if (pFrame) {
							if (pFrame->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd))) {
								pWebRTFrameWndInfo->m_nFrameType = 2;
								pWebRTFrameWndInfo->m_hClient = ((CMDIFrameWnd*)pFrame)->m_hWndMDIClient;
								POSITION nPos = pApp->GetFirstDocTemplatePosition();
								while (nPos) {
									CDocTemplate* pTemplate = pApp->GetNextDocTemplate(nPos);
									POSITION pos = pTemplate->GetFirstDocPosition();
									CDocument* pDoc = pTemplate->GetNextDoc(pos);
									POSITION pos2 = pDoc->GetFirstViewPosition();
									while (pos2 != NULL) {
										CView* pView = pDoc->GetNextView(pos2);
										ASSERT_VALID(pView);
										g_pSpaceTelescopeImpl->AttachMDIChild(m_hMainWnd, pView->GetParentFrame()->m_hWnd, pView->m_hWnd);
									}
								}
							}
							else {
								if (pWebRTFrameWndInfo->m_pDoc == NULL) {
									CDocument* m_pDoc = pFrame->GetActiveDocument();
									if (m_pDoc) {
										pWebRTFrameWndInfo->m_hClient = pFrame->GetActiveView()->m_hWnd;
										pWebRTFrameWndInfo->m_pDoc = m_pDoc;
										CDocTemplate* pTemplate = m_pDoc->GetDocTemplate();
										pWebRTFrameWndInfo->m_pDocTemplate = pTemplate;
										pWebRTFrameWndInfo->m_nFrameType = pTemplate->IsKindOf(RUNTIME_CLASS(CMultiDocTemplate)) ? 1 : 4;
										//POSITION pos2 = m_pDoc->GetFirstViewPosition();
										//while (pos2 != NULL) {
										//	CView* pView = m_pDoc->GetNextView(pos2);
										//	ASSERT_VALID(pView);
										//	g_pSpaceTelescopeImpl->AttachMDIChild(NULL, pFrame->m_hWnd, pView->m_hWnd);
										//}
									}
								}
							}
						}
					}
				}
			}
			return m_hMainWnd;
		}
		CWnd* pWnd = CWnd::FromHandlePermanent(hWnd);
		switch (nType) {
		case MainWnd:
			if (m_pMainWnd) {
				return m_pMainWnd->m_hWnd;
			}
			else {
				if (m_hMainWnd)
					return m_hMainWnd;
			}
			break;
		case CanClose: {
			if (pWnd) {
				if (pWnd->IsKindOf(RUNTIME_CLASS(CFrameWnd))) {
					CFrameWnd* _pFrame = (CFrameWnd*)pWnd;
					POSITION nPos = pApp->GetFirstDocTemplatePosition();
					while (nPos) {
						CDocTemplate* pTemplate = pApp->GetNextDocTemplate(nPos);
						POSITION pos = pTemplate->GetFirstDocPosition();
						while (pos != NULL) {
							CDocument* pDoc = pTemplate->GetNextDoc(pos);
							POSITION pos2 = pDoc->GetFirstViewPosition();
							while (pos2 != NULL) {
								CView* pView = pDoc->GetNextView(pos2);
								ASSERT_VALID(pView);
								CFrameWnd* pFrame = pView->GetParentFrame();
								if (_pFrame == pFrame) {
									if (pDoc->CanCloseFrame(pFrame)) {
										return pFrame->m_hWnd;
									}
									else
										return NULL;
								}
							}
						}
					}
				}
			}

			return NULL;
		} break;
		case DocView: {
			if (pWnd && pWnd->IsKindOf(RUNTIME_CLASS(CView))) {
				CView* pView = static_cast<CView*>(pWnd);
				WebRTFrameWndInfo* pWebRTFrameWndInfo = nullptr;
				CDocument* pDoc = pView->GetDocument();
				if (pDoc) {
					HWND hRetFrame = NULL;
					CDocTemplate* pTemplate = pDoc->GetDocTemplate();
					CFrameWnd* pFrame = pView->GetParentFrame();
					if (pFrame) {
						hRetFrame = pFrame->m_hWnd;
						CString strInfo = m_strCreatingDOCID;
						if (strInfo == _T(""))
							strInfo = _T("default");
						CRuntimeClass* pClsInfo = pView->GetRuntimeClass();
						CString strName = CString(pClsInfo->m_lpszClassName);
						bool bRet = g_pSpaceTelescopeImpl->SetFrameInfo(hWnd, hRetFrame, strInfo,
							pDoc, pTemplate);

						pWebRTFrameWndInfo = (WebRTFrameWndInfo*)::GetProp(
							hRetFrame, _T("WebRTFrameWndInfo"));
						if (pWebRTFrameWndInfo == nullptr) {
							__int64 nType = 0;
							if (pFrame->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd)))
								nType = 2;
							else if (pFrame->IsKindOf(RUNTIME_CLASS(CMDIChildWnd)))
								nType = 3;
							else if (pTemplate->IsKindOf(RUNTIME_CLASS(CMultiDocTemplate)))
								nType = 1;
							::SetProp(hRetFrame, _T("CosmosFrameWndType"), (HANDLE)nType);
						}
						else {
							pWebRTFrameWndInfo->m_hClient = hWnd;
							if (pWebRTFrameWndInfo->m_pDoc == nullptr && pDoc) {
								pWebRTFrameWndInfo->m_pDoc = pDoc;
								pWebRTFrameWndInfo->m_pDocTemplate = pDoc->GetDocTemplate();
							}
							if (pFrame->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd)))
								pWebRTFrameWndInfo->m_nFrameType = 2;
							else if (pFrame->IsKindOf(RUNTIME_CLASS(CMDIChildWnd))) {
								pWebRTFrameWndInfo->m_nFrameType = 3;
							}
							else if (pTemplate->IsKindOf(
								RUNTIME_CLASS(CMultiDocTemplate))) {
								pWebRTFrameWndInfo->m_nFrameType = 1;
							}
							else if (pFrame->IsKindOf(RUNTIME_CLASS(CFrameWnd)))
								pWebRTFrameWndInfo->m_nFrameType = 4;
						}
					}
					return hRetFrame;
				}
			}
		} break;
		case QueryDestroy: {
			if (pWnd)
			{
				pApp->m_pMainWnd = pWnd;
				return pWnd->m_hWnd;
			}
		} break;
		case ObserveComplete: {
			for (auto& it : m_mapViewDoc) {
				it.second->AddView(it.first);
			}
			m_mapViewDoc.erase(m_mapViewDoc.begin(), m_mapViewDoc.end());
		} break;
		case RecalcLayout: {
			CFrameWnd* pFrame = pWnd->GetParentFrame();
			if (pFrame) {
				pFrame->RecalcLayout();
			}
			else {
				if (pWnd && pWnd->IsFrameWnd()) {
					pFrame = (CFrameWnd*)pWnd;
					pFrame->RecalcLayout();
				}
			}
			if (pFrame)
				return pFrame->m_hWnd;
		} break;
		case SetMainWndNULL: {
			if (g_pSpaceTelescopeImpl->m_hMainWnd) {
				pApp->m_pMainWnd = nullptr;
			}
		} break;
		}
		return NULL;
	}

	bool CAppProxy::SetFrameCaption(HWND hWnd,
		CString strCaption,
		CString strAppName) {
		if (strCaption == _T("") || !::IsWindow(hWnd))
			return false;
		CWnd* pWnd = CWnd::FromHandlePermanent(hWnd);
		CFrameWnd* pFrame = nullptr;
		if (pWnd) {
			if (pWnd->IsKindOf(RUNTIME_CLASS(CFrameWnd))) {
				pFrame = (CFrameWnd*)pWnd;
			}
			else {
				pFrame = pWnd->GetParentFrame();
			}
			if (pFrame) {
				WebRTFrameWndInfo* pWebRTFrameWndInfo = (WebRTFrameWndInfo*)::GetProp(
					pFrame->m_hWnd, _T("WebRTFrameWndInfo"));
				if (pWebRTFrameWndInfo) {
					CDocument* pDoc = (CDocument*)pWebRTFrameWndInfo->m_pDoc;
					if (pDoc) {
						CString strPath = pDoc->GetPathName();
						if (strPath == _T("")) {
							CString strTitle = pDoc->GetTitle();
							CDocTemplate* pTemplate =
								(CDocTemplate*)pWebRTFrameWndInfo->m_pDocTemplate;
							CString name = _T("");
							pTemplate->GetDocString(name, CDocTemplate::docName);
							strTitle.Replace(name, strCaption);
							pDoc->SetTitle(strTitle);
							switch (pWebRTFrameWndInfo->m_nFrameType) {
							case 1:
							case 4:
								::SetWindowText(pFrame->m_hWnd, strTitle + _T(" - ") +
									strAppName + _T(" - ") +
									g_pSpaceTelescopeImpl->m_strAppName);
								break;
							default:
								::SetWindowText(pFrame->m_hWnd, strTitle);
								break;
							}
						}
						return true;
					}
				}
			}
		}
		else {
			pWnd = CWnd::FromHandle(hWnd);
			if (pWnd)
				pFrame = pWnd->GetParentFrame();
		}
		if (pFrame) {
			CString strText = _T("");
			pFrame->GetWindowText(strText);
			CString strTitle = pFrame->GetTitle();
			int nPos = strText.ReverseFind('-');
			if (nPos != -1) {
				CString s1 = strText.Left(nPos + 1);
				s1 += _T(" ");
				s1 += strCaption;
				::SetWindowText(pFrame->m_hWnd, s1);
				pFrame->SetTitle(strCaption);
				return true;
			}
			else {
				pFrame->SetTitle(strCaption);
				::SetWindowText(pFrame->m_hWnd, strCaption);
			}
			return true;
		}

		return false;
	}

	CString CAppProxy::QueryParentInfo(HWND hPWnd, void* lpInfo) {
		CWnd* pParent = CWnd::FromHandlePermanent(hPWnd);
		if (pParent) {
			CFrameWnd* pParentFrame = nullptr;
			if (pParent->IsKindOf(RUNTIME_CLASS(CFrameWnd))) {
				if (pParent->IsKindOf(RUNTIME_CLASS(CMDIFrameWnd)))
					return _T("");
				pParentFrame = (CFrameWnd*)pParent;
			}
			else
				pParentFrame = pParent->GetParentFrame();
			if (pParentFrame) {
				CCreateContext* pContext = (CCreateContext*)lpInfo;
				CDocument* pDoc = pContext->m_pCurrentDoc;
				CDocTemplate* pTemplate = pContext->m_pNewDocTemplate;
				CString strExt = _T("");
				pTemplate->GetDocString(strExt, CDocTemplate::filterExt);
				strExt.MakeLower();
				if (strExt == _T(""))
					strExt = _T("default");
				return strExt;
			}
		}
		return _T("");
	}

	void CAppProxy::OnIPCMsg(CWebViewImpl* pWebViewImpl,
		CString strType,
		CString strParam1,
		CString strParam2,
		CString strParam3,
		CString strParam4,
		CString strParam5) {
		if (strType.CompareNoCase(_T("COSMOS_CREATE_DOC")) == 0) {
			int nCount = 0;
			m_strCreatingDOCID = _T("");
			CWinApp* pApp = AfxGetApp();
			CDocTemplate* pTemplate = nullptr;
			POSITION nPos = pApp->GetFirstDocTemplatePosition();
			while (nPos) {
				nCount++;
				pTemplate = pApp->GetNextDocTemplate(nPos);
				CString strExt = _T("");
				pTemplate->GetDocString(strExt, CDocTemplate::filterExt);
				strExt.MakeLower();
				if (strExt == _T(""))
					strExt = _T("default");
				if (strExt != _T("") && strExt.CompareNoCase(strParam1) == 0) {
					m_strCreatingDOCID = strParam2;
					pTemplate->OpenDocumentFile(nullptr);
					return;
				}
			}
			if (pTemplate && m_strCreatingDOCID == _T("") && nCount == 1)
			{
				m_strCreatingDOCID = strParam2;
				pTemplate->OpenDocumentFile(nullptr);
				return;
			}
		}
	}

	RECT CAppProxy::GetClientAreaBounds()
	{
		if (m_pDockingManager)
			return m_pDockingManager->GetClientAreaBounds();
		else
			return m_ClientRect;
		return CRect(0, 0, 0, 0);
	}

	void CAppProxy::CalcWindowRectForMDITabbedGroups(LPRECT rc)
	{
		if (m_pMDIClientAreaWnd)
			((CMDIClientAreaWnd*)m_pMDIClientAreaWnd)->CalcWindowRectForMDITabbedGroups(rc, 0);
	}
}  // namespace CommonUniverse



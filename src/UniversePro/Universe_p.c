

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for ..\CommonFile\Universe.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "Universe.h"

#define TYPE_FORMAT_STRING_SIZE   1561                              
#define PROC_FORMAT_STRING_SIZE   9121                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _Universe_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } Universe_MIDL_TYPE_FORMAT_STRING;

typedef struct _Universe_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } Universe_MIDL_PROC_FORMAT_STRING;

typedef struct _Universe_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } Universe_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const Universe_MIDL_TYPE_FORMAT_STRING Universe__MIDL_TypeFormatString;
extern const Universe_MIDL_PROC_FORMAT_STRING Universe__MIDL_ProcFormatString;
extern const Universe_MIDL_EXPR_FORMAT_STRING Universe__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTExtender_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IEclipseExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IOfficeExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTTreeNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTTreeNode_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTTreeViewCallBack_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTTreeViewCallBack_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTTreeView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTTreeView_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTEventObj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTEventObj_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IXobj_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXobj_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IAppExtender_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRT_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRT_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO INucleus_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INucleus_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IXobjCollection_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IXobjCollection_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO INuclei_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO INuclei_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IBrowser_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IBrowser_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebView_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebView_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IOfficeObject_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTCtrl_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IWebRTAppCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IWebRTAppCtrl_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const Universe_MIDL_PROC_FORMAT_STRING Universe__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Close */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 16 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 26 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveWorkBenchWindow */

/* 32 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 34 */	NdrFcLong( 0x0 ),	/* 0 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 48 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 50 */	NdrFcShort( 0x0 ),	/* 0 */
/* 52 */	NdrFcShort( 0x1 ),	/* 1 */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 58 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 60 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 62 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 64 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 66 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 68 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddVBAFormsScript */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 92 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter OfficeObject */

/* 102 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 104 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter bstrKey */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 118 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitVBAForm */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0xa ),	/* 10 */
/* 134 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 138 */	NdrFcShort( 0x8 ),	/* 8 */
/* 140 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 142 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 152 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 154 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter nStyle */

/* 158 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 160 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 164 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 166 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 168 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 170 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 172 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 174 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 178 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNucleusFromVBAForm */

/* 182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 188 */	NdrFcShort( 0xb ),	/* 11 */
/* 190 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 196 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 198 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 208 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 210 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 212 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter ppNucleus */

/* 214 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 216 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 218 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 222 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetActiveTopXobj */

/* 226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0xc ),	/* 12 */
/* 234 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 242 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pForm */

/* 252 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 254 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 256 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter WndXobj */

/* 258 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 260 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 262 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Object */


	/* Procedure GetObjectFromWnd */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0xd ),	/* 13 */
/* 278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 294 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */


	/* Parameter hWnd */

/* 296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 298 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */


	/* Parameter ppObjFromWnd */

/* 302 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 304 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 306 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */


	/* Return value */

/* 308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 310 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_WndXobj */

/* 314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x7 ),	/* 7 */
/* 322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 326 */	NdrFcShort( 0x8 ),	/* 8 */
/* 328 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 330 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 340 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 342 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 344 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 346 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 348 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Pages */

/* 352 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 354 */	NdrFcLong( 0x0 ),	/* 0 */
/* 358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 360 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 362 */	NdrFcShort( 0x1c ),	/* 28 */
/* 364 */	NdrFcShort( 0x8 ),	/* 8 */
/* 366 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 368 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter retVal */

/* 378 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 380 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInitTreeView */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x9 ),	/* 9 */
/* 398 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pTangramTreeView */

/* 416 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 420 */	NdrFcShort( 0x8c ),	/* Type Offset=140 */

	/* Parameter bstrXml */

/* 422 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 426 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 430 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnClick */

/* 434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 440 */	NdrFcShort( 0xa ),	/* 10 */
/* 442 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 448 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 450 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 460 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 464 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXmlData */

/* 466 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 470 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddURLs */


	/* Procedure OnInit */

/* 478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 484 */	NdrFcShort( 0xb ),	/* 11 */
/* 486 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 492 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 494 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURLs */


	/* Parameter bstrXml */

/* 504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 508 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */


	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnNewPage */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0xc ),	/* 12 */
/* 524 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 532 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nNewPage */

/* 542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosAction */

/* 554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0xd ),	/* 13 */
/* 562 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 570 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 572 */	NdrFcShort( 0x1 ),	/* 1 */
/* 574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 580 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 582 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 584 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrRetXml */

/* 586 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 588 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 590 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 594 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_TangramTreeViewCallBack */

/* 598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x7 ),	/* 7 */
/* 606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 610 */	NdrFcShort( 0x8 ),	/* 8 */
/* 612 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 614 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x1 ),	/* 1 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 624 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 626 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 628 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter newVal */

/* 630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 632 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 634 */	NdrFcShort( 0xb0 ),	/* Type Offset=176 */

	/* Return value */

/* 636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 638 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rows */


	/* Procedure get_FirstRoot */

/* 642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x8 ),	/* 8 */
/* 650 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x24 ),	/* 36 */
/* 656 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 658 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRows */


	/* Parameter pVal */

/* 668 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 670 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 676 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure AddTreeNode */

/* 680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x9 ),	/* 9 */
/* 688 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 696 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hItem */

/* 706 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 708 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXml */

/* 712 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 714 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 716 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 718 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 720 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 722 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InsertNode */

/* 724 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0xa ),	/* 10 */
/* 732 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 736 */	NdrFcShort( 0x24 ),	/* 36 */
/* 738 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 740 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x1 ),	/* 1 */
/* 746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 750 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 752 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 754 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hItem */

/* 756 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 758 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 764 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_eventSource */

/* 768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x7 ),	/* 7 */
/* 776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 782 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 784 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 794 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 796 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 798 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 802 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_eventSource */

/* 806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 814 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 820 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 822 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter eventSource */

/* 832 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 834 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 836 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 840 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */


	/* Procedure get_Count */


	/* Procedure get_Cols */


	/* Procedure get_Index */

/* 844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x9 ),	/* 9 */
/* 852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x24 ),	/* 36 */
/* 858 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 860 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */


	/* Parameter pCount */


	/* Parameter nCols */


	/* Parameter nVal */

/* 870 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Index */

/* 882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 888 */	NdrFcShort( 0xa ),	/* 10 */
/* 890 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 896 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 898 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 914 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 918 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentNavigateKey */


	/* Procedure get_EventName */

/* 920 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 926 */	NdrFcShort( 0xb ),	/* 11 */
/* 928 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 934 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 936 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 938 */	NdrFcShort( 0x1 ),	/* 1 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 946 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 948 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 950 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */


	/* Return value */

/* 952 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 954 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EventName */

/* 958 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 960 */	NdrFcLong( 0x0 ),	/* 0 */
/* 964 */	NdrFcShort( 0xc ),	/* 12 */
/* 966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 970 */	NdrFcShort( 0x8 ),	/* 8 */
/* 972 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 974 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x1 ),	/* 1 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 984 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 986 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 988 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 990 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 992 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 994 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Object */

/* 996 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 998 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1002 */	NdrFcShort( 0xe ),	/* 14 */
/* 1004 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1006 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1012 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1020 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 1022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1024 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1026 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 1028 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1030 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1032 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 1034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1036 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Value */

/* 1040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1046 */	NdrFcShort( 0xf ),	/* 15 */
/* 1048 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1054 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1056 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1064 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 1066 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1068 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 1072 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1074 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1076 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 1078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1080 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Value */

/* 1084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1092 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1096 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1098 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1100 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 1110 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter newVal */

/* 1116 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1120 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ChildNodes */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1144 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppXobjColletion */

/* 1154 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1158 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Return value */

/* 1160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Row */

/* 1166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1172 */	NdrFcShort( 0xa ),	/* 10 */
/* 1174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1182 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 1192 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1198 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1202 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Col */

/* 1204 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1206 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1210 */	NdrFcShort( 0xb ),	/* 11 */
/* 1212 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1216 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1218 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1220 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCol */

/* 1230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1232 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1236 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1238 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XobjType */

/* 1242 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1244 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1248 */	NdrFcShort( 0xc ),	/* 12 */
/* 1250 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1256 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1258 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 1268 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 1270 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1272 */	NdrFcShort( 0x546 ),	/* Type Offset=1350 */

	/* Return value */

/* 1274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1276 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ParentXobj */

/* 1280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0xd ),	/* 13 */
/* 1288 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1294 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1296 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1298 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppXobj */

/* 1306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1308 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1310 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 1312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1314 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_URL */

/* 1318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0xe ),	/* 14 */
/* 1326 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1332 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1334 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1336 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1344 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1348 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_URL */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0xf ),	/* 15 */
/* 1364 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1372 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 1382 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1386 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Nuclei */

/* 1394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1400 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1402 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1408 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1410 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1418 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1420 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1422 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1424 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 1426 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1428 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActiveTopXobj */


	/* Procedure get_RootXobj */

/* 1432 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1434 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1446 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1448 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1456 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter ppXobj */

/* 1458 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1460 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1462 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */


	/* Return value */

/* 1464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1466 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 1470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1476 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1478 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1484 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1486 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1488 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 1496 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1498 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1500 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 1502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AxPlugIn */

/* 1508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1514 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1516 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1522 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1524 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1528 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrPlugInName */

/* 1534 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1538 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 1540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1544 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 1546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1548 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XobjNames */


	/* Procedure get_Caption */

/* 1552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1560 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1566 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1568 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1570 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 1578 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1580 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1582 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */


	/* Return value */

/* 1584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1586 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Caption */

/* 1590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1598 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1604 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1606 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1610 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCaption */

/* 1616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1618 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1620 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1624 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 1628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1636 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1642 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1644 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1652 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1654 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1656 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1658 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1662 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Name */

/* 1666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1672 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1682 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 1692 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1696 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1700 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Objects */

/* 1704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1712 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1714 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1716 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1718 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1720 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 1730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1732 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppXobjColletion */

/* 1736 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1738 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1740 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Return value */

/* 1742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 1748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1754 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1760 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1764 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 1774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1778 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Attribute */

/* 1786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1794 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1800 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1802 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1806 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 1812 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1816 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 1818 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1822 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1826 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Attribute */

/* 1830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1836 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1838 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1844 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1846 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1850 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 1856 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1858 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1860 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrVal */

/* 1862 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1864 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1866 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 1868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Tag */

/* 1874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1880 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1882 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1890 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVar */

/* 1900 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 1902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1904 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 1906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Tag */

/* 1912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1918 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1920 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1926 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1928 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vVar */

/* 1938 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1940 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1942 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 1944 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1946 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1948 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OuterXml */

/* 1950 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1952 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1956 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1958 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1964 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1966 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 1976 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1978 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1980 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 1982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1984 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Key */

/* 1988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1994 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1996 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2004 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2014 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2018 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2022 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WebView */

/* 2026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2032 */	NdrFcShort( 0x20 ),	/* 32 */
/* 2034 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2040 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2042 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2052 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2056 */	NdrFcShort( 0x564 ),	/* Type Offset=1380 */

	/* Return value */

/* 2058 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2060 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NameAtWindowPage */

/* 2064 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2070 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2072 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2076 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2078 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2080 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2088 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2090 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2092 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2094 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2098 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 2102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2110 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2118 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2126 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2128 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2130 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2134 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2136 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 2140 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2142 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2146 */	NdrFcShort( 0x23 ),	/* 35 */
/* 2148 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2154 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2156 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2164 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2168 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2170 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WinNucleus */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2186 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2192 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2194 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2206 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2208 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 2210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2212 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XML */

/* 2216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2222 */	NdrFcShort( 0x25 ),	/* 37 */
/* 2224 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2230 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2232 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2240 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2242 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2244 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2246 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2250 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 2254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2260 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2268 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2270 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2278 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2280 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2282 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2284 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 2286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2288 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 2292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x27 ),	/* 39 */
/* 2300 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2306 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2308 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2318 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2320 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2322 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 2324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2326 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DocXml */

/* 2330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2336 */	NdrFcShort( 0x28 ),	/* 40 */
/* 2338 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2344 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2346 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2354 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2356 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2358 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2360 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 2362 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2364 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2366 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbMiddle */

/* 2368 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2374 */	NdrFcShort( 0x29 ),	/* 41 */
/* 2376 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2382 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2384 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2394 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2396 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2400 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2402 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbMiddle */

/* 2406 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2408 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2412 */	NdrFcShort( 0x2a ),	/* 42 */
/* 2414 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2416 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2420 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2422 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2434 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2440 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbRightBottom */

/* 2444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2450 */	NdrFcShort( 0x2b ),	/* 43 */
/* 2452 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2456 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2460 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2468 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2472 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2478 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbRightBottom */

/* 2482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2488 */	NdrFcShort( 0x2c ),	/* 44 */
/* 2490 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2494 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2496 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2498 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2506 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2508 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2510 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2514 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2516 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rgbLeftTop */

/* 2520 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2526 */	NdrFcShort( 0x2d ),	/* 45 */
/* 2528 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2532 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2534 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2536 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2544 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2546 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2548 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2554 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_rgbLeftTop */

/* 2558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2564 */	NdrFcShort( 0x2e ),	/* 46 */
/* 2566 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2574 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmin */

/* 2596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2602 */	NdrFcShort( 0x2f ),	/* 47 */
/* 2604 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2612 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2620 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2622 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2624 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2630 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmin */

/* 2634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2640 */	NdrFcShort( 0x30 ),	/* 48 */
/* 2642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2648 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2650 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2660 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Hmax */

/* 2672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2678 */	NdrFcShort( 0x31 ),	/* 49 */
/* 2680 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2684 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2686 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2688 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2696 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2700 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2704 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2706 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Hmax */

/* 2710 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2712 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2716 */	NdrFcShort( 0x32 ),	/* 50 */
/* 2718 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2724 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2726 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2734 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2736 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2738 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmin */

/* 2748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x33 ),	/* 51 */
/* 2756 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2760 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2762 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2764 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2772 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2776 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2782 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmin */

/* 2786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2792 */	NdrFcShort( 0x34 ),	/* 52 */
/* 2794 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2800 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2802 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2804 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2812 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2814 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2820 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vmax */

/* 2824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2830 */	NdrFcShort( 0x35 ),	/* 53 */
/* 2832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2836 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2838 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2840 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2850 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2854 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vmax */

/* 2862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2868 */	NdrFcShort( 0x36 ),	/* 54 */
/* 2870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2876 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2878 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2888 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2890 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2892 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2896 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostXobj */

/* 2900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2906 */	NdrFcShort( 0x37 ),	/* 55 */
/* 2908 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2914 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2916 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 2926 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2930 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 2932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HostXobj */

/* 2938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2944 */	NdrFcShort( 0x38 ),	/* 56 */
/* 2946 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 2954 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 2964 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2966 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 2968 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ActivePage */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x39 ),	/* 57 */
/* 2984 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 2986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2988 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2992 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3000 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3004 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3010 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ActivePage */

/* 3014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3020 */	NdrFcShort( 0x3a ),	/* 58 */
/* 3022 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3024 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3026 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3028 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3030 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 3040 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3042 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3048 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostGalaxy */

/* 3052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3058 */	NdrFcShort( 0x3b ),	/* 59 */
/* 3060 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3066 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3068 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3076 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3078 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3080 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3082 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 3084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3086 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_OfficeObj */

/* 3090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3096 */	NdrFcShort( 0x3c ),	/* 60 */
/* 3098 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3106 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 3116 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3118 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3120 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 3122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3124 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ActiveTabPage */

/* 3128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3134 */	NdrFcShort( 0x3d ),	/* 61 */
/* 3136 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3144 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pXobj */

/* 3154 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3156 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3158 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 3160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3162 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXobjs */

/* 3166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x3e ),	/* 62 */
/* 3174 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3180 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3182 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3192 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3194 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3196 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 3198 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3200 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3202 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Parameter ppXobjs */

/* 3204 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3208 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Parameter pCount */

/* 3210 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3212 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3218 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXobj */

/* 3222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3228 */	NdrFcShort( 0x3f ),	/* 63 */
/* 3230 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3232 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3236 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3238 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 3248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 3254 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3258 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppXobj */

/* 3260 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3264 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3266 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3270 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 3272 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3278 */	NdrFcShort( 0x40 ),	/* 64 */
/* 3280 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3282 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3284 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3286 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3288 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3292 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3298 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3300 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3302 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 3304 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3306 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3308 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 3310 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3312 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3314 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 3316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3318 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendIPCMessage */

/* 3322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3328 */	NdrFcShort( 0x41 ),	/* 65 */
/* 3330 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3334 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3336 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3338 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3340 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrTo */

/* 3348 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3350 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3352 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrPayload */

/* 3354 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3356 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3358 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrExtra */

/* 3360 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3362 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3364 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrMsgId */

/* 3366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3368 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3370 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrRes */

/* 3372 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3374 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3376 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 3378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3380 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 3384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3390 */	NdrFcShort( 0x42 ),	/* 66 */
/* 3392 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3398 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3400 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3404 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3410 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3412 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3414 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 3416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3418 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3420 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 3422 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3424 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3426 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3428 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3430 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LoadXML */

/* 3434 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3436 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3440 */	NdrFcShort( 0x43 ),	/* 67 */
/* 3442 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3444 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3446 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3448 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3450 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3454 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3458 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nType */

/* 3460 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3462 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrXML */

/* 3466 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3468 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3470 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3472 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3474 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveEx */

/* 3478 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3480 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3484 */	NdrFcShort( 0x44 ),	/* 68 */
/* 3486 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 3488 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3490 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3492 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3494 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRow */

/* 3504 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3506 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nCol */

/* 3510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3512 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 3516 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3518 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3520 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 3522 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3524 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3526 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 3528 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3530 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3532 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3534 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3536 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 3538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXobjByName */

/* 3540 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3546 */	NdrFcShort( 0x45 ),	/* 69 */
/* 3548 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3554 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3556 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3568 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3570 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 3572 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3574 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3576 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Return value */

/* 3578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 3584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3590 */	NdrFcShort( 0x46 ),	/* 70 */
/* 3592 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3594 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3596 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3598 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3600 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3610 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3612 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3614 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 3616 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3618 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3620 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 3622 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3624 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3626 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 3628 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3630 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3632 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 3634 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3636 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3640 */	NdrFcShort( 0x47 ),	/* 71 */
/* 3642 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 3644 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3646 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3648 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3650 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3658 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3660 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3662 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3664 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 3666 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3668 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3670 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 3672 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3676 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3678 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3680 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateURL */

/* 3684 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3686 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3690 */	NdrFcShort( 0x48 ),	/* 72 */
/* 3692 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3698 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3700 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3704 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3708 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 3710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3712 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3714 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter dispObjforScript */

/* 3716 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 3718 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3720 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 3722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3724 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChildXobjByName */

/* 3728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3734 */	NdrFcShort( 0x49 ),	/* 73 */
/* 3736 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3742 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3744 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3748 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 3754 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3758 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 3760 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3762 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3764 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 3766 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3768 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3770 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUIScript */

/* 3772 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3774 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3778 */	NdrFcShort( 0x4a ),	/* 74 */
/* 3780 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3784 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3786 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3788 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3792 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCtrlName */

/* 3798 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3800 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3802 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrVal */

/* 3804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3806 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3808 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 3810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3812 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ProcessNotify */

/* 3816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3822 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3824 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3830 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 3832 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 3834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3836 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXmlNotify */

/* 3842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3844 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3846 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 3848 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3850 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostChromeBrowserWnd */

/* 3854 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3856 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3860 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3862 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3866 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3868 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3870 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3878 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 3880 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3882 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3884 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 3886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3888 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 3892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3900 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3908 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 3910 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3918 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3922 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 3924 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 3926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3928 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 3930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 3936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3942 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3944 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 3946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3950 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3952 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 3962 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3964 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 3966 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter newVal */

/* 3968 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 3970 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 3972 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 3974 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3976 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */


	/* Procedure get_RemoteHelperHWND */

/* 3980 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3986 */	NdrFcShort( 0xa ),	/* 10 */
/* 3988 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 3990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3992 */	NdrFcShort( 0x2c ),	/* 44 */
/* 3994 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3996 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4000 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4004 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 4006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4008 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4010 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4014 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteHelperHWND */

/* 4018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0xb ),	/* 11 */
/* 4026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4030 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4034 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4044 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4046 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4048 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4052 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootNodes */

/* 4056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4062 */	NdrFcShort( 0xc ),	/* 12 */
/* 4064 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4068 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4070 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4072 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppXobjColletion */

/* 4082 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4084 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4086 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Return value */

/* 4088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4090 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Extender */

/* 4094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4100 */	NdrFcShort( 0xd ),	/* 13 */
/* 4102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4108 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4110 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4118 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4120 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4122 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4124 */	NdrFcShort( 0x590 ),	/* Type Offset=1424 */

	/* Return value */

/* 4126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4128 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Extender */

/* 4132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4138 */	NdrFcShort( 0xe ),	/* 14 */
/* 4140 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4146 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4148 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 4158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4160 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4162 */	NdrFcShort( 0x594 ),	/* Type Offset=1428 */

	/* Return value */

/* 4164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4166 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CurrentActiveXobj */

/* 4170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4176 */	NdrFcShort( 0xf ),	/* 15 */
/* 4178 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4184 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4186 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4194 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4196 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4198 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4200 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 4202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4204 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CreatingXobj */

/* 4208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4214 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4222 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4224 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 4234 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4238 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 4240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteCosmos */

/* 4246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4252 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4254 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4260 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4262 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrID */

/* 4272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4276 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 4278 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4282 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NavigateNode */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4298 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4304 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4306 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4310 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pXobj */

/* 4316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4318 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4320 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter bstrBrowserID */

/* 4322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4324 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4326 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 4328 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4330 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4332 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 4334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4336 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4338 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 4340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4342 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNucleusGroup */

/* 4346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4352 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4354 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4356 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4360 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4362 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 4372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4376 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppNucleusCluster */

/* 4378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4382 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 4384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOfficeDocument */

/* 4390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4398 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4402 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4406 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4414 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 4416 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4418 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4420 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4422 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4424 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCLRObj */

/* 4428 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4430 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4434 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4436 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4442 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4444 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 4454 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4456 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4458 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppDisp */

/* 4460 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4462 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4464 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 4466 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4468 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateApplication */

/* 4472 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4474 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4478 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4480 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4486 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4488 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4492 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4496 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 4498 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4500 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4502 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 4504 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4506 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4508 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4512 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNucleus */

/* 4516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4522 */	NdrFcShort( 0x17 ),	/* 23 */
/* 4524 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4526 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4532 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 4542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4544 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4546 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppNucleus */

/* 4548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4550 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4552 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetItemText */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4568 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4572 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4574 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4576 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4578 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4584 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pXobj */

/* 4586 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4588 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4590 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter nCtrlID */

/* 4592 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4594 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxLengeh */

/* 4598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4600 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrRet */

/* 4604 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4606 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4608 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 4610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4612 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetItemText */

/* 4616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x19 ),	/* 25 */
/* 4624 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4630 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4632 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pXobj */

/* 4642 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4646 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter nCtrlID */

/* 4648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrText */

/* 4654 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4658 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 4660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4662 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure FireCosmosEventObj */

/* 4666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4672 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4674 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4680 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4682 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4690 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pWebRTEventObj */

/* 4692 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4694 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4696 */	NdrFcShort( 0x5bc ),	/* Type Offset=1468 */

	/* Return value */

/* 4698 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4700 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MessageBox */

/* 4704 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4710 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4712 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 4714 */	NdrFcShort( 0x18 ),	/* 24 */
/* 4716 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4718 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 4720 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4724 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 4730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4732 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4734 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrContext */

/* 4736 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4738 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4740 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrCaption */

/* 4742 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4744 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4746 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nStyle */

/* 4748 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4750 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRet */

/* 4754 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4756 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4760 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4762 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeletePage */

/* 4766 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4772 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4774 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4776 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4778 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4780 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4782 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4790 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter PageHandle */

/* 4792 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4794 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4796 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 4798 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4800 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetHostFocus */

/* 4804 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4806 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4812 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4818 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4820 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4828 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4830 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4832 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4834 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UpdateXobj */

/* 4836 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4838 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4842 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4844 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4850 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4852 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4860 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pXobj */

/* 4862 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4864 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4866 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 4868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4870 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCosmosEventObj */

/* 4874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4880 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4882 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4888 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4890 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4898 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppWebRTEventObj */

/* 4900 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4902 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4904 */	NdrFcShort( 0x5ce ),	/* Type Offset=1486 */

	/* Return value */

/* 4906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4908 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitEclipseApp */

/* 4912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4918 */	NdrFcShort( 0x20 ),	/* 32 */
/* 4920 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 4928 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 4938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4940 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateOutLookObj */

/* 4944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4952 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 4954 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 4960 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjType */

/* 4970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4972 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 4974 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nType */

/* 4976 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4978 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 4980 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrURL */

/* 4982 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4984 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 4986 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetDisp */

/* 4988 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4990 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 4992 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 4994 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4996 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 4998 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveNuclei */

/* 5000 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5002 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5006 */	NdrFcShort( 0x22 ),	/* 34 */
/* 5008 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5010 */	NdrFcShort( 0x16 ),	/* 22 */
/* 5012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5014 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5016 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 5026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5028 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5030 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrGalaxys */

/* 5032 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5034 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5036 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrKey */

/* 5038 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5040 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5042 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 5044 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5046 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5048 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bSaveToConfigFile */

/* 5050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5052 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5054 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 5056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5058 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlByName */

/* 5062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5068 */	NdrFcShort( 0x23 ),	/* 35 */
/* 5070 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5072 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5076 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5078 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 5088 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5092 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter bstrName */

/* 5094 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5098 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 5100 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5104 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter ppCtrlDisp */

/* 5106 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5108 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5110 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 5112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5114 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXobjFromHandle */

/* 5118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5126 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5128 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5132 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5134 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 5144 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5148 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppRetXobj */

/* 5150 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5154 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 5156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5158 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlValueByName */

/* 5162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x25 ),	/* 37 */
/* 5170 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5172 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5174 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5176 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5178 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 5180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 5188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5190 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5192 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter bstrName */

/* 5194 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5196 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5198 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 5200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5204 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5206 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5208 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5210 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 5212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5214 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCtrlValueByName */

/* 5218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x26 ),	/* 38 */
/* 5226 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5228 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5230 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5232 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5234 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5238 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5242 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCtrl */

/* 5244 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5246 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5248 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter bstrName */

/* 5250 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5252 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5254 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bFindInChild */

/* 5256 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5258 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5260 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter bstrVal */

/* 5262 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5264 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5266 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 5268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5270 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCosmosCtrl */

/* 5274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5280 */	NdrFcShort( 0x27 ),	/* 39 */
/* 5282 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5288 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5290 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrAppID */

/* 5300 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5304 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetCtrl */

/* 5306 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5310 */	NdrFcShort( 0x5d2 ),	/* Type Offset=1490 */

	/* Return value */

/* 5312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5314 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCLRApp */

/* 5318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5324 */	NdrFcShort( 0x28 ),	/* 40 */
/* 5326 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5330 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5334 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strInitXml */

/* 5344 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5346 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5348 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter llHandle */

/* 5350 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5352 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5354 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5356 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5360 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteGalaxy */

/* 5362 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5364 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5368 */	NdrFcShort( 0x29 ),	/* 41 */
/* 5370 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5376 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5378 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5386 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pGalaxy */

/* 5388 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5390 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5392 */	NdrFcShort( 0x72 ),	/* Type Offset=114 */

	/* Return value */

/* 5394 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5396 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5398 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetWindowClientDefaultNode */

/* 5400 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5402 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5406 */	NdrFcShort( 0x2a ),	/* 42 */
/* 5408 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 5410 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5412 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5414 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 5416 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5424 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pAddDisp */

/* 5426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5428 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5430 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter hParent */

/* 5432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5434 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5436 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter bstrWndClaName */

/* 5438 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5440 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5442 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrGalaxyClusterName */

/* 5444 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5446 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5448 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 5450 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5452 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5454 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 5456 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5458 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5460 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateBrowser */

/* 5462 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5468 */	NdrFcShort( 0x2b ),	/* 43 */
/* 5470 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5472 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5476 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5478 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5482 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5486 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hParentWnd */

/* 5488 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5490 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5492 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter strUrls */

/* 5494 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5496 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5498 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRet */

/* 5500 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5502 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5504 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 5506 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5508 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NewWorkBench */

/* 5512 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5514 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5518 */	NdrFcShort( 0x2c ),	/* 44 */
/* 5520 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5524 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5526 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5528 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5532 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5536 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrCosmosDoc */

/* 5538 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5540 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5542 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppWorkBenchWindow */

/* 5544 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5546 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5548 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 5550 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5552 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5554 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateCLRObjRemote */

/* 5556 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5558 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5562 */	NdrFcShort( 0x2d ),	/* 45 */
/* 5564 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 5566 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5568 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5570 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5572 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5576 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrObjID */

/* 5582 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5584 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5586 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXmlData */

/* 5588 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5590 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5592 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hWnd */

/* 5594 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5596 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5598 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter ppDisp */

/* 5600 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5602 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5604 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 5606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5608 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DestroyCtrl */

/* 5612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5618 */	NdrFcShort( 0x2e ),	/* 46 */
/* 5620 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5622 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5628 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5636 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 5638 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5640 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5642 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 5644 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5646 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetRemoteHostViewRect */

/* 5650 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5656 */	NdrFcShort( 0x2f ),	/* 47 */
/* 5658 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5660 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5664 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 5666 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 5676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5678 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5680 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter strData */

/* 5682 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5684 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5686 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 5688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5690 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosCommand */

/* 5694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5700 */	NdrFcShort( 0x30 ),	/* 48 */
/* 5702 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5706 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5708 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5710 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5720 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5722 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5724 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 5726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5728 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosGetImage */

/* 5732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5738 */	NdrFcShort( 0x31 ),	/* 49 */
/* 5740 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5746 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5748 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 5750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5756 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter strValue */

/* 5758 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5760 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5762 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppdispImage */

/* 5764 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5766 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5768 */	NdrFcShort( 0x5e8 ),	/* Type Offset=1512 */

	/* Return value */

/* 5770 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5772 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosGetVisible */

/* 5776 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5782 */	NdrFcShort( 0x32 ),	/* 50 */
/* 5784 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5788 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5790 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5792 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5794 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5800 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5802 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5804 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5806 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter varVisible */

/* 5808 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 5810 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5812 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 5814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5816 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosOnLoad */

/* 5820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5826 */	NdrFcShort( 0x33 ),	/* 51 */
/* 5828 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 5836 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5844 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5846 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5848 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5850 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Return value */

/* 5852 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5854 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5856 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosGetItemCount */

/* 5858 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5864 */	NdrFcShort( 0x34 ),	/* 52 */
/* 5866 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5868 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5870 */	NdrFcShort( 0x24 ),	/* 36 */
/* 5872 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5874 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5882 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5884 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5886 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5888 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter nCount */

/* 5890 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5892 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5898 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosGetItemLabel */

/* 5902 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5904 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5908 */	NdrFcShort( 0x35 ),	/* 53 */
/* 5910 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5916 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5918 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5928 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5930 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5932 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter nIndex */

/* 5934 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5936 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrLabel */

/* 5940 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5942 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5944 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 5946 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5948 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 5950 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CosmosGetItemID */

/* 5952 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5954 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5958 */	NdrFcShort( 0x36 ),	/* 54 */
/* 5960 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 5962 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5964 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5966 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5968 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5970 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter RibbonControl */

/* 5978 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5980 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 5982 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter nIndex */

/* 5984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5986 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 5988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrID */

/* 5990 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5992 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 5994 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 5996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5998 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Xobj */

/* 6002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6008 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6010 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6016 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6018 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 6020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6022 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 6028 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6030 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6032 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter ppXobj */

/* 6034 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6036 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6038 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 6040 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6042 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6044 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */


	/* Procedure get__NewEnum */

/* 6046 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6048 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6054 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6058 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6060 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6062 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6070 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */


	/* Parameter ppVal */


	/* Parameter ppVal */

/* 6072 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6074 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6076 */	NdrFcShort( 0x5fe ),	/* Type Offset=1534 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 6078 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6080 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */

/* 6084 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6086 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6090 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6092 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6096 */	NdrFcShort( 0x2c ),	/* 44 */
/* 6098 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6100 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6112 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6114 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6118 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VisibleXobj */

/* 6122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6128 */	NdrFcShort( 0xa ),	/* 10 */
/* 6130 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6136 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6138 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6148 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6150 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6152 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 6154 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6156 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Nuclei */


	/* Procedure get_Nuclei */

/* 6160 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6166 */	NdrFcShort( 0xc ),	/* 12 */
/* 6168 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6174 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6176 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 6186 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6188 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6190 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */


	/* Return value */

/* 6192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6194 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostWebPage */

/* 6198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6204 */	NdrFcShort( 0xd ),	/* 13 */
/* 6206 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6214 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebPage */

/* 6224 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6226 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6228 */	NdrFcShort( 0x564 ),	/* Type Offset=1380 */

	/* Return value */

/* 6230 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6232 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HostBrowser */

/* 6236 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6238 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6242 */	NdrFcShort( 0xe ),	/* 14 */
/* 6244 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6248 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6250 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6252 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6260 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppChromeWebBrowser */

/* 6262 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6264 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6266 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 6268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6270 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Count */

/* 6274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6280 */	NdrFcShort( 0xf ),	/* 15 */
/* 6282 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6286 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6288 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6290 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 6300 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6302 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6308 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RootXobjs */

/* 6312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6318 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6320 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6324 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6328 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppXobjColletion */

/* 6338 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6340 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6342 */	NdrFcShort( 0x530 ),	/* Type Offset=1328 */

	/* Return value */

/* 6344 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6346 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GalaxyXML */

/* 6350 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6352 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6356 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6358 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6364 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6366 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6368 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6370 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6372 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6374 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6376 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6378 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6380 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 6382 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6384 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_GalaxyType */

/* 6388 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6390 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6394 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6396 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6400 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6402 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6404 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6414 */	NdrFcShort( 0x2010 ),	/* Flags:  out, srv alloc size=8 */
/* 6416 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6418 */	NdrFcShort( 0x546 ),	/* Type Offset=1350 */

	/* Return value */

/* 6420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6422 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Name */

/* 6426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6432 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6434 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6440 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6442 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6444 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6450 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6452 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6454 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6456 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 6458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6460 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Detach */

/* 6464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6480 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Attach */

/* 6496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6502 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6504 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6510 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 6512 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 6522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ModifyHost */

/* 6528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6534 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6536 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6538 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6540 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6542 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6544 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6546 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHostWnd */

/* 6554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6556 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6558 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 6560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6562 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 6566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6572 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6574 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 6576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6580 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6582 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6586 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6588 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6590 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 6592 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6594 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6596 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 6598 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6600 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6602 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 6604 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6606 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6608 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 6610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6612 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXml */

/* 6616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6624 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6630 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6632 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 6634 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6636 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6640 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrRootName */

/* 6642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6644 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6646 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrRet */

/* 6648 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6650 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6652 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 6654 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6656 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6658 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XobjCount */

/* 6660 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6662 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6666 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6668 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6672 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6674 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6676 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCount */

/* 6686 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6688 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6692 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6694 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6696 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Item */

/* 6698 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6704 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6706 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6708 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6710 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6712 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 6714 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6720 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter iIndex */

/* 6724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6726 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppTopWindow */

/* 6730 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6732 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6734 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 6736 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6738 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6740 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get__NewEnum */

/* 6742 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6744 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6748 */	NdrFcShort( 0x9 ),	/* 9 */
/* 6750 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6756 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6758 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppVal */

/* 6768 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6770 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6772 */	NdrFcShort( 0x5fe ),	/* Type Offset=1534 */

	/* Return value */

/* 6774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6776 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WinNucleus */

/* 6780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6786 */	NdrFcShort( 0x7 ),	/* 7 */
/* 6788 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6794 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6796 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 6798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6804 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 6806 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 6808 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6810 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter ppNucleus */

/* 6812 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6814 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6816 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 6818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6820 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NucleiXML */

/* 6824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6830 */	NdrFcShort( 0xa ),	/* 10 */
/* 6832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6836 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6838 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6840 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 6842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6848 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6850 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 6852 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6854 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 6856 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6858 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Parent */

/* 6862 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6868 */	NdrFcShort( 0xb ),	/* 11 */
/* 6870 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6874 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6876 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 6878 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 6880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6886 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 6888 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6890 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6892 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 6894 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6896 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Xobj */

/* 6900 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6902 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6906 */	NdrFcShort( 0xc ),	/* 12 */
/* 6908 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6912 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6914 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6916 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6920 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6924 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNodeName */

/* 6926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6928 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6930 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 6932 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6934 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6936 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 6938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6940 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_XObject */

/* 6944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6950 */	NdrFcShort( 0xd ),	/* 13 */
/* 6952 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6956 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6958 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6960 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 6962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6968 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrName */

/* 6970 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6972 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 6974 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 6976 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 6978 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 6980 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 6982 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6984 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 6986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NucleusName */

/* 6988 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6990 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6994 */	NdrFcShort( 0xe ),	/* 14 */
/* 6996 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 6998 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7002 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7004 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 7006 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7012 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hHwnd */

/* 7014 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7016 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7018 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 7020 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 7022 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7024 */	NdrFcShort( 0xa6 ),	/* Type Offset=166 */

	/* Return value */

/* 7026 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7028 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Handle */

/* 7032 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7034 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7038 */	NdrFcShort( 0xf ),	/* 15 */
/* 7040 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x2c ),	/* 44 */
/* 7046 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7048 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7052 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7058 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7060 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7062 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 7064 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7066 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7068 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Width */

/* 7070 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7072 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7076 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7078 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7082 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7084 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7086 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7094 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7096 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7098 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7104 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Width */

/* 7108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7114 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7116 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7122 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7124 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 7134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7136 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7142 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Height */

/* 7146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7152 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7154 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7158 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7162 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7170 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7172 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7174 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7180 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Height */

/* 7184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7190 */	NdrFcShort( 0x13 ),	/* 19 */
/* 7192 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7194 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7196 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7200 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 7210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7212 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7216 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7218 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateNucleus */

/* 7222 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7224 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7228 */	NdrFcShort( 0x15 ),	/* 21 */
/* 7230 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7234 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7236 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7238 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 7240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7242 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ParentObj */

/* 7248 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7250 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7252 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter HostWnd */

/* 7254 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7256 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7258 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter bstrNucleusName */

/* 7260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7262 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7264 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pRetGalaxy */

/* 7266 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7268 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7270 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 7272 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7274 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 7278 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7280 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7284 */	NdrFcShort( 0x16 ),	/* 22 */
/* 7286 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 7288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7292 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 7294 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7298 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Parent */

/* 7304 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7306 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7308 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter CtrlName */

/* 7310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7312 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7314 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter NucleusName */

/* 7316 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7318 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7320 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrKey */

/* 7322 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7324 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7326 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7328 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7330 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7332 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 7334 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7336 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7338 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7340 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7342 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 7344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveCtrl */

/* 7346 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7348 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7352 */	NdrFcShort( 0x17 ),	/* 23 */
/* 7354 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7358 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7360 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7362 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 7364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7366 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7370 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Ctrl */

/* 7372 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7374 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7376 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter bstrKey */

/* 7378 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7380 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7382 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7384 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7386 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7388 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 7390 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7392 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7394 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7396 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7398 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetXobj */

/* 7402 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7404 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7408 */	NdrFcShort( 0x18 ),	/* 24 */
/* 7410 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7416 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7418 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7422 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7426 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNucleusName */

/* 7428 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7430 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7432 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrNodeName */

/* 7434 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7436 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7438 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pRetNode */

/* 7440 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7442 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7444 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7448 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCtrlInXobj */

/* 7452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0x19 ),	/* 25 */
/* 7460 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7466 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7468 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7472 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter NodeName */

/* 7478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7482 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter CtrlName */

/* 7484 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7488 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppCtrl */

/* 7490 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7494 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 7496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7498 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetNucleusFromCtrl */

/* 7502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x1a ),	/* 26 */
/* 7510 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7516 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7518 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7526 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ctrl */

/* 7528 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7530 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7532 */	NdrFcShort( 0x46 ),	/* Type Offset=70 */

	/* Parameter ppNucleus */

/* 7534 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7536 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7538 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 7540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveNuclei */

/* 7546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7552 */	NdrFcShort( 0x1b ),	/* 27 */
/* 7554 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7556 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7560 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7562 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7566 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7570 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrGalaxys */

/* 7572 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7574 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7576 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrKey */

/* 7578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7580 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7582 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7584 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7586 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7588 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bSaveToConfigFile */

/* 7590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7592 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7594 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 7596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7598 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Ctrl */

/* 7602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7608 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7610 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7614 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7616 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7618 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 7620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7626 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter vIndex */

/* 7628 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 7630 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7632 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Parameter ppCtrl */

/* 7634 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7636 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7638 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Return value */

/* 7640 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7642 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CosmosCtrl */

/* 7646 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0xb ),	/* 11 */
/* 7654 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7656 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7660 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 7662 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hWnd */

/* 7672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7674 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7676 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 7678 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7680 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7682 */	NdrFcShort( 0x602 ),	/* Type Offset=1538 */

	/* Return value */

/* 7684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7686 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WinNucleus */

/* 7690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7696 */	NdrFcShort( 0xd ),	/* 13 */
/* 7698 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7704 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7706 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7714 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7716 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7718 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7720 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 7722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7724 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Active */

/* 7728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7734 */	NdrFcShort( 0xe ),	/* 14 */
/* 7736 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7744 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7752 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7754 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7756 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7758 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseTangramUI */

/* 7760 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7766 */	NdrFcShort( 0xf ),	/* 15 */
/* 7768 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7772 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7774 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 7776 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7784 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 7786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7788 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 7792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7798 */	NdrFcShort( 0x10 ),	/* 16 */
/* 7800 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7806 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7808 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7812 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7816 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 7818 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7820 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7822 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7824 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7826 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7828 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 7830 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7832 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7834 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7838 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveEx */

/* 7842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7848 */	NdrFcShort( 0x11 ),	/* 17 */
/* 7850 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7856 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7858 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7862 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7866 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 7868 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7870 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7872 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7874 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7876 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7878 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 7880 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7882 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7884 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7886 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7888 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7890 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveinView */

/* 7892 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7894 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7898 */	NdrFcShort( 0x12 ),	/* 18 */
/* 7900 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 7902 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7904 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7906 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 7908 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 7910 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7912 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7916 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nIndex */

/* 7918 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 7920 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 7924 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7926 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7928 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 7930 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7932 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7934 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppRetXobj */

/* 7936 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7938 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 7940 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7942 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7944 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 7946 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RemoteXobj */

/* 7948 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7950 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7954 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7956 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7960 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7962 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 7964 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 7966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7968 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7972 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 7974 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7976 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 7978 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 7980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7982 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 7984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RemoteXobj */

/* 7986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7992 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7994 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 7996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8002 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8012 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8016 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Return value */

/* 8018 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8022 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DrawHandle */

/* 8024 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8026 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8030 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8032 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8034 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8036 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8038 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8040 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8048 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8052 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8054 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8058 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenURL */

/* 8062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8068 */	NdrFcShort( 0xa ),	/* 10 */
/* 8070 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8072 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8078 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8086 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrURL */

/* 8088 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8090 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8092 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter nDisposition */

/* 8094 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8096 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8098 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter bstrKey */

/* 8100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8102 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8104 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 8106 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8108 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8110 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 8112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8114 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HWND */


	/* Procedure get_HostWnd */

/* 8118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8124 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8126 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8130 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8132 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8134 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8142 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */


	/* Parameter pVal */

/* 8144 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8146 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8148 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 8150 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8152 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_HostWnd */

/* 8156 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8164 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8166 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8170 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8172 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8184 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8186 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8188 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8190 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WebBrowser */

/* 8194 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8196 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8200 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8202 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8206 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8208 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8210 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8214 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8218 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppWebBrowser */

/* 8220 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8222 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8224 */	NdrFcShort( 0x57a ),	/* Type Offset=1402 */

	/* Return value */

/* 8226 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8228 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8230 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateForm */

/* 8232 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8234 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8238 */	NdrFcShort( 0xa ),	/* 10 */
/* 8240 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8242 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8246 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8248 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8260 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8262 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter hParent */

/* 8264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8266 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8268 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter pRetForm */

/* 8270 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8272 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8274 */	NdrFcShort( 0x84 ),	/* Type Offset=132 */

	/* Return value */

/* 8276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8278 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 8282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8288 */	NdrFcShort( 0xb ),	/* 11 */
/* 8290 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8298 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8308 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8310 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8312 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 8314 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8316 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8318 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pRetXobj */

/* 8320 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8322 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8324 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 8326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8328 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendXmlMessage */

/* 8332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8338 */	NdrFcShort( 0xc ),	/* 12 */
/* 8340 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8346 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8348 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8352 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8356 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter sender */

/* 8358 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8360 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8362 */	NdrFcShort( 0x5c ),	/* Type Offset=92 */

	/* Parameter bstrXml */

/* 8364 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8366 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8368 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 8370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8372 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Show */

/* 8376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8382 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8384 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8386 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8388 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8392 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bShow */

/* 8402 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8404 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8406 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8410 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 8414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8422 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 8424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8428 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 8430 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8438 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8440 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8442 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8444 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 8446 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8448 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8450 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 8452 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8454 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8456 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 8458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8460 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnloadCosmos */

/* 8464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8470 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8472 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8478 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 8480 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8488 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 8490 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8492 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8494 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Cosmos */

/* 8496 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8498 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8504 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8510 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8512 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8518 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8520 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8522 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8524 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8526 */	NdrFcShort( 0x5a6 ),	/* Type Offset=1446 */

	/* Return value */

/* 8528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8530 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_tag */

/* 8534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8540 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8542 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8548 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8550 */	0xa,		/* 10 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 8552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8558 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8560 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8562 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8564 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 8566 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8568 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8570 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_tag */

/* 8572 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8574 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8578 */	NdrFcShort( 0xa ),	/* 10 */
/* 8580 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8584 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8586 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 8588 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 8590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8592 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8598 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8600 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8602 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 8604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8606 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppCtrl */

/* 8610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8616 */	NdrFcShort( 0xb ),	/* 11 */
/* 8618 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8620 */	NdrFcShort( 0x6 ),	/* 6 */
/* 8622 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8624 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8626 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newVal */

/* 8636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8638 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8640 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 8642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8644 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Handle */

/* 8648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0xb ),	/* 11 */
/* 8656 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8658 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8664 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8668 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8672 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrHandleName */

/* 8674 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8676 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8678 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter newVal */

/* 8680 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 8682 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8684 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8686 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8688 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EclipseViewHandle */

/* 8692 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8694 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8698 */	NdrFcShort( 0xc ),	/* 12 */
/* 8700 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8702 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8704 */	NdrFcShort( 0x2c ),	/* 44 */
/* 8706 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8708 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8716 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8720 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8722 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 8724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8726 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Nuclei */

/* 8730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0xd ),	/* 13 */
/* 8738 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8742 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8744 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8746 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8754 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8756 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8758 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8760 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 8762 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8764 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WorkBenchWindow */

/* 8768 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8770 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8774 */	NdrFcShort( 0xe ),	/* 14 */
/* 8776 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8782 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8784 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8794 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8796 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8798 */	NdrFcShort( 0x30 ),	/* Type Offset=48 */

	/* Return value */

/* 8800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8802 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopNuclei */

/* 8806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8812 */	NdrFcShort( 0xf ),	/* 15 */
/* 8814 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8820 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8822 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8824 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8828 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8830 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8832 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8834 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8836 */	NdrFcShort( 0x54a ),	/* Type Offset=1354 */

	/* Return value */

/* 8838 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8840 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_TopGalaxy */

/* 8844 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8850 */	NdrFcShort( 0x10 ),	/* 16 */
/* 8852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8856 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8858 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8860 */	0xa,		/* 10 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 8862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pVal */

/* 8870 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8872 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8874 */	NdrFcShort( 0x6e ),	/* Type Offset=110 */

	/* Return value */

/* 8876 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8878 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AppKeyValue */

/* 8882 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8884 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8888 */	NdrFcShort( 0x12 ),	/* 18 */
/* 8890 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8894 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8896 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8898 */	0xa,		/* 10 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 8900 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8902 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8908 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8910 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8912 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter pVal */

/* 8914 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 8916 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8918 */	NdrFcShort( 0x514 ),	/* Type Offset=1300 */

	/* Return value */

/* 8920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8922 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AppKeyValue */

/* 8926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8932 */	NdrFcShort( 0x13 ),	/* 19 */
/* 8934 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 8936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8940 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8942 */	0xa,		/* 10 */
			0xc5,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance has big byval param */
/* 8944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8946 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8950 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrKey */

/* 8952 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8954 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 8956 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter newVal */

/* 8958 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 8960 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 8962 */	NdrFcShort( 0x526 ),	/* Type Offset=1318 */

	/* Return value */

/* 8964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8966 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 8968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Observe */

/* 8970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8976 */	NdrFcShort( 0x14 ),	/* 20 */
/* 8978 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 8980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8982 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8984 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 8986 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 8988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8990 */	NdrFcShort( 0x1 ),	/* 1 */
/* 8992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8994 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNucleusName */

/* 8996 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 8998 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9000 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrKey */

/* 9002 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9004 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9006 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 9008 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9010 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9012 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 9014 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9016 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9018 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 9020 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9022 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9024 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ObserveEx */

/* 9026 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9028 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9032 */	NdrFcShort( 0x15 ),	/* 21 */
/* 9034 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 9036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9038 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9040 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9042 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9044 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9046 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9050 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrNucleusName */

/* 9052 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9054 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9056 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrKey */

/* 9058 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9060 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9062 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter bstrXml */

/* 9064 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9066 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9068 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Parameter ppXobj */

/* 9070 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9072 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 9074 */	NdrFcShort( 0x58 ),	/* Type Offset=88 */

	/* Return value */

/* 9076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9078 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 9080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure InitCtrl */

/* 9082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9088 */	NdrFcShort( 0x16 ),	/* 22 */
/* 9090 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 9092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9098 */	0xa,		/* 10 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 9100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9106 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter bstrXml */

/* 9108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9110 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 9112 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 9114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9116 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 9118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const Universe_MIDL_TYPE_FORMAT_STRING Universe__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x12, 0x0,	/* FC_UP */
/*  4 */	NdrFcShort( 0x18 ),	/* Offset= 24 (28) */
/*  6 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/*  8 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 12 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 14 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 16 */	0x0 , 
			0x0,		/* 0 */
/* 18 */	NdrFcLong( 0x0 ),	/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 28 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (6) */
/* 34 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (2) */
/* 48 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 50 */	NdrFcShort( 0x2 ),	/* Offset= 2 (52) */
/* 52 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 54 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 58 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 60 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 62 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 64 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 66 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 68 */	0x5d,		/* 93 */
			0x34,		/* 52 */
/* 70 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 72 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x0 ),	/* 0 */
/* 80 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 82 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 84 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 86 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 88 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 90 */	NdrFcShort( 0x2 ),	/* Offset= 2 (92) */
/* 92 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 94 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 98 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 100 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 102 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 104 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 106 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 108 */	0x0,		/* 0 */
			0x4,		/* 4 */
/* 110 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 112 */	NdrFcShort( 0x2 ),	/* Offset= 2 (114) */
/* 114 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 116 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 120 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 122 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 124 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 126 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 128 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 130 */	0x0,		/* 0 */
			0x3,		/* 3 */
/* 132 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 134 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (70) */
/* 136 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 138 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 140 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 142 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 146 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 148 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 150 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 152 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 154 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 156 */	0x83,		/* 131 */
			0xa5,		/* 165 */
/* 158 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 160 */	NdrFcShort( 0x6 ),	/* Offset= 6 (166) */
/* 162 */	
			0x13, 0x0,	/* FC_OP */
/* 164 */	NdrFcShort( 0xff78 ),	/* Offset= -136 (28) */
/* 166 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (162) */
/* 176 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 178 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 182 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 184 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 186 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 188 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 190 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 192 */	0x83,		/* 131 */
			0xa6,		/* 166 */
/* 194 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 196 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 198 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 200 */	NdrFcShort( 0x44c ),	/* Offset= 1100 (1300) */
/* 202 */	
			0x13, 0x0,	/* FC_OP */
/* 204 */	NdrFcShort( 0x434 ),	/* Offset= 1076 (1280) */
/* 206 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 208 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 210 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 212 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 214 */	0x0 , 
			0x0,		/* 0 */
/* 216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 224 */	NdrFcShort( 0x2 ),	/* Offset= 2 (226) */
/* 226 */	NdrFcShort( 0x10 ),	/* 16 */
/* 228 */	NdrFcShort( 0x2f ),	/* 47 */
/* 230 */	NdrFcLong( 0x14 ),	/* 20 */
/* 234 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 236 */	NdrFcLong( 0x3 ),	/* 3 */
/* 240 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 242 */	NdrFcLong( 0x11 ),	/* 17 */
/* 246 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 248 */	NdrFcLong( 0x2 ),	/* 2 */
/* 252 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 254 */	NdrFcLong( 0x4 ),	/* 4 */
/* 258 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 260 */	NdrFcLong( 0x5 ),	/* 5 */
/* 264 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 266 */	NdrFcLong( 0xb ),	/* 11 */
/* 270 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 272 */	NdrFcLong( 0xa ),	/* 10 */
/* 276 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 278 */	NdrFcLong( 0x6 ),	/* 6 */
/* 282 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (514) */
/* 284 */	NdrFcLong( 0x7 ),	/* 7 */
/* 288 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 290 */	NdrFcLong( 0x8 ),	/* 8 */
/* 294 */	NdrFcShort( 0xff7c ),	/* Offset= -132 (162) */
/* 296 */	NdrFcLong( 0xd ),	/* 13 */
/* 300 */	NdrFcShort( 0xdc ),	/* Offset= 220 (520) */
/* 302 */	NdrFcLong( 0x9 ),	/* 9 */
/* 306 */	NdrFcShort( 0xff14 ),	/* Offset= -236 (70) */
/* 308 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 312 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (538) */
/* 314 */	NdrFcLong( 0x24 ),	/* 36 */
/* 318 */	NdrFcShort( 0x378 ),	/* Offset= 888 (1206) */
/* 320 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 324 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1206) */
/* 326 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 330 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1210) */
/* 332 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 336 */	NdrFcShort( 0x36e ),	/* Offset= 878 (1214) */
/* 338 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 342 */	NdrFcShort( 0x36c ),	/* Offset= 876 (1218) */
/* 344 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 348 */	NdrFcShort( 0x36a ),	/* Offset= 874 (1222) */
/* 350 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 354 */	NdrFcShort( 0x368 ),	/* Offset= 872 (1226) */
/* 356 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 360 */	NdrFcShort( 0x366 ),	/* Offset= 870 (1230) */
/* 362 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 366 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1214) */
/* 368 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 372 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1218) */
/* 374 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 378 */	NdrFcShort( 0x358 ),	/* Offset= 856 (1234) */
/* 380 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 384 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1230) */
/* 386 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 390 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1238) */
/* 392 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 396 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1242) */
/* 398 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 402 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1246) */
/* 404 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 408 */	NdrFcShort( 0x34a ),	/* Offset= 842 (1250) */
/* 410 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 414 */	NdrFcShort( 0x348 ),	/* Offset= 840 (1254) */
/* 416 */	NdrFcLong( 0x10 ),	/* 16 */
/* 420 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 422 */	NdrFcLong( 0x12 ),	/* 18 */
/* 426 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 428 */	NdrFcLong( 0x13 ),	/* 19 */
/* 432 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 434 */	NdrFcLong( 0x15 ),	/* 21 */
/* 438 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 440 */	NdrFcLong( 0x16 ),	/* 22 */
/* 444 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 446 */	NdrFcLong( 0x17 ),	/* 23 */
/* 450 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 452 */	NdrFcLong( 0xe ),	/* 14 */
/* 456 */	NdrFcShort( 0x326 ),	/* Offset= 806 (1262) */
/* 458 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 462 */	NdrFcShort( 0x32a ),	/* Offset= 810 (1272) */
/* 464 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 468 */	NdrFcShort( 0x328 ),	/* Offset= 808 (1276) */
/* 470 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 474 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1214) */
/* 476 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 480 */	NdrFcShort( 0x2e2 ),	/* Offset= 738 (1218) */
/* 482 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 486 */	NdrFcShort( 0x2e0 ),	/* Offset= 736 (1222) */
/* 488 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 492 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (1218) */
/* 494 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 498 */	NdrFcShort( 0x2d0 ),	/* Offset= 720 (1218) */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x0 ),	/* Offset= 0 (504) */
/* 506 */	NdrFcLong( 0x1 ),	/* 1 */
/* 510 */	NdrFcShort( 0x0 ),	/* Offset= 0 (510) */
/* 512 */	NdrFcShort( 0xffff ),	/* Offset= -1 (511) */
/* 514 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 516 */	NdrFcShort( 0x8 ),	/* 8 */
/* 518 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 520 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 532 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 534 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 536 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 538 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (542) */
/* 542 */	
			0x13, 0x0,	/* FC_OP */
/* 544 */	NdrFcShort( 0x284 ),	/* Offset= 644 (1188) */
/* 546 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 548 */	NdrFcShort( 0x20 ),	/* 32 */
/* 550 */	NdrFcShort( 0xa ),	/* 10 */
/* 552 */	NdrFcLong( 0x8 ),	/* 8 */
/* 556 */	NdrFcShort( 0x64 ),	/* Offset= 100 (656) */
/* 558 */	NdrFcLong( 0xd ),	/* 13 */
/* 562 */	NdrFcShort( 0x98 ),	/* Offset= 152 (714) */
/* 564 */	NdrFcLong( 0x9 ),	/* 9 */
/* 568 */	NdrFcShort( 0xcc ),	/* Offset= 204 (772) */
/* 570 */	NdrFcLong( 0xc ),	/* 12 */
/* 574 */	NdrFcShort( 0x100 ),	/* Offset= 256 (830) */
/* 576 */	NdrFcLong( 0x24 ),	/* 36 */
/* 580 */	NdrFcShort( 0x170 ),	/* Offset= 368 (948) */
/* 582 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 586 */	NdrFcShort( 0x18c ),	/* Offset= 396 (982) */
/* 588 */	NdrFcLong( 0x10 ),	/* 16 */
/* 592 */	NdrFcShort( 0x1b0 ),	/* Offset= 432 (1024) */
/* 594 */	NdrFcLong( 0x2 ),	/* 2 */
/* 598 */	NdrFcShort( 0x1d0 ),	/* Offset= 464 (1062) */
/* 600 */	NdrFcLong( 0x3 ),	/* 3 */
/* 604 */	NdrFcShort( 0x1f0 ),	/* Offset= 496 (1100) */
/* 606 */	NdrFcLong( 0x14 ),	/* 20 */
/* 610 */	NdrFcShort( 0x210 ),	/* Offset= 528 (1138) */
/* 612 */	NdrFcShort( 0xffff ),	/* Offset= -1 (611) */
/* 614 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 618 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 624 */	0x0 , 
			0x0,		/* 0 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 634 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 638 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 640 */	0x0 , 
			0x0,		/* 0 */
/* 642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 650 */	
			0x13, 0x0,	/* FC_OP */
/* 652 */	NdrFcShort( 0xfd90 ),	/* Offset= -624 (28) */
/* 654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 656 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 658 */	NdrFcShort( 0x10 ),	/* 16 */
/* 660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 662 */	NdrFcShort( 0x6 ),	/* Offset= 6 (668) */
/* 664 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 666 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 668 */	
			0x11, 0x0,	/* FC_RP */
/* 670 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (614) */
/* 672 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 682 */	0x0 , 
			0x0,		/* 0 */
/* 684 */	NdrFcLong( 0x0 ),	/* 0 */
/* 688 */	NdrFcLong( 0x0 ),	/* 0 */
/* 692 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 696 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 698 */	0x0 , 
			0x0,		/* 0 */
/* 700 */	NdrFcLong( 0x0 ),	/* 0 */
/* 704 */	NdrFcLong( 0x0 ),	/* 0 */
/* 708 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 710 */	NdrFcShort( 0xff42 ),	/* Offset= -190 (520) */
/* 712 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 714 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 716 */	NdrFcShort( 0x10 ),	/* 16 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x6 ),	/* Offset= 6 (726) */
/* 722 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 724 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 726 */	
			0x11, 0x0,	/* FC_RP */
/* 728 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (672) */
/* 730 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 738 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 740 */	0x0 , 
			0x0,		/* 0 */
/* 742 */	NdrFcLong( 0x0 ),	/* 0 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 754 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 756 */	0x0 , 
			0x0,		/* 0 */
/* 758 */	NdrFcLong( 0x0 ),	/* 0 */
/* 762 */	NdrFcLong( 0x0 ),	/* 0 */
/* 766 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 768 */	NdrFcShort( 0xfd46 ),	/* Offset= -698 (70) */
/* 770 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 772 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 774 */	NdrFcShort( 0x10 ),	/* 16 */
/* 776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 778 */	NdrFcShort( 0x6 ),	/* Offset= 6 (784) */
/* 780 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 782 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 784 */	
			0x11, 0x0,	/* FC_RP */
/* 786 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (730) */
/* 788 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 798 */	0x0 , 
			0x0,		/* 0 */
/* 800 */	NdrFcLong( 0x0 ),	/* 0 */
/* 804 */	NdrFcLong( 0x0 ),	/* 0 */
/* 808 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 812 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 814 */	0x0 , 
			0x0,		/* 0 */
/* 816 */	NdrFcLong( 0x0 ),	/* 0 */
/* 820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 824 */	
			0x13, 0x0,	/* FC_OP */
/* 826 */	NdrFcShort( 0x1c6 ),	/* Offset= 454 (1280) */
/* 828 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 830 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 832 */	NdrFcShort( 0x10 ),	/* 16 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x6 ),	/* Offset= 6 (842) */
/* 838 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 840 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 842 */	
			0x11, 0x0,	/* FC_RP */
/* 844 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (788) */
/* 846 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 848 */	NdrFcLong( 0x2f ),	/* 47 */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 858 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 860 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 862 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 864 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 866 */	NdrFcShort( 0x1 ),	/* 1 */
/* 868 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 870 */	NdrFcShort( 0x4 ),	/* 4 */
/* 872 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 874 */	0x0 , 
			0x0,		/* 0 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 884 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 886 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 888 */	NdrFcShort( 0x18 ),	/* 24 */
/* 890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 892 */	NdrFcShort( 0xa ),	/* Offset= 10 (902) */
/* 894 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 896 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 898 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (846) */
/* 900 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 902 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 904 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (864) */
/* 906 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x0 , 
			0x0,		/* 0 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 926 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 930 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 932 */	0x0 , 
			0x0,		/* 0 */
/* 934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	
			0x13, 0x0,	/* FC_OP */
/* 944 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (886) */
/* 946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x10 ),	/* 16 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x6 ),	/* Offset= 6 (960) */
/* 956 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 958 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 960 */	
			0x11, 0x0,	/* FC_RP */
/* 962 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (906) */
/* 964 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 966 */	NdrFcShort( 0x8 ),	/* 8 */
/* 968 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 970 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 972 */	NdrFcShort( 0x10 ),	/* 16 */
/* 974 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 976 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 978 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (964) */
			0x5b,		/* FC_END */
/* 982 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 984 */	NdrFcShort( 0x20 ),	/* 32 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0xa ),	/* Offset= 10 (998) */
/* 990 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 992 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 994 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (970) */
			0x5b,		/* FC_END */
/* 998 */	
			0x11, 0x0,	/* FC_RP */
/* 1000 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (672) */
/* 1002 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1004 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1006 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1012 */	0x0 , 
			0x0,		/* 0 */
/* 1014 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1018 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1022 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1024 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1026 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1036) */
/* 1032 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1034 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1036 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1038 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1002) */
/* 1040 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1042 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1044 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1046 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1050 */	0x0 , 
			0x0,		/* 0 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1060 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1074) */
/* 1070 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1072 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1074 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1076 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1040) */
/* 1078 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1082 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1086 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1088 */	0x0 , 
			0x0,		/* 0 */
/* 1090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1100 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1102 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1112) */
/* 1108 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1110 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1112 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1114 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1078) */
/* 1116 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1120 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1124 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1126 */	0x0 , 
			0x0,		/* 0 */
/* 1128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1136 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1138 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1140 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1150) */
/* 1146 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 1148 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1150 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1152 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1116) */
/* 1154 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1158 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1160 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1162 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1164 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1166 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1168 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 1170 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1172 */	0x0 , 
			0x0,		/* 0 */
/* 1174 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1178 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1182 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1184 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1154) */
/* 1186 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1188 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1190 */	NdrFcShort( 0x38 ),	/* 56 */
/* 1192 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1162) */
/* 1194 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1194) */
/* 1196 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1198 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1200 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1202 */	0x0,		/* 0 */
			NdrFcShort( 0xfd6f ),	/* Offset= -657 (546) */
			0x5b,		/* FC_END */
/* 1206 */	
			0x13, 0x0,	/* FC_OP */
/* 1208 */	NdrFcShort( 0xfebe ),	/* Offset= -322 (886) */
/* 1210 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1212 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1214 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1216 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1218 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1220 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1222 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1224 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1226 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1228 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1230 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1232 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1234 */	
			0x13, 0x0,	/* FC_OP */
/* 1236 */	NdrFcShort( 0xfd2e ),	/* Offset= -722 (514) */
/* 1238 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1240 */	NdrFcShort( 0xfbca ),	/* Offset= -1078 (162) */
/* 1242 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1244 */	NdrFcShort( 0xfd2c ),	/* Offset= -724 (520) */
/* 1246 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1248 */	NdrFcShort( 0xfb66 ),	/* Offset= -1178 (70) */
/* 1250 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1252 */	NdrFcShort( 0xfd36 ),	/* Offset= -714 (538) */
/* 1254 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1258) */
/* 1258 */	
			0x13, 0x0,	/* FC_OP */
/* 1260 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1280) */
/* 1262 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1264 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1266 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1268 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1270 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1272 */	
			0x13, 0x0,	/* FC_OP */
/* 1274 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1262) */
/* 1276 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1278 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1280 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1282 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1286) */
/* 1288 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1290 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1292 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1294 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1296 */	NdrFcShort( 0xfbbe ),	/* Offset= -1090 (206) */
/* 1298 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1300 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1304 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0xfbae ),	/* Offset= -1106 (202) */
/* 1310 */	
			0x11, 0x0,	/* FC_RP */
/* 1312 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1318) */
/* 1314 */	
			0x12, 0x0,	/* FC_UP */
/* 1316 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1280) */
/* 1318 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1322 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1314) */
/* 1328 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1330 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1332) */
/* 1332 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1334 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1338 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1340 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1342 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1344 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1346 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1348 */	0x0,		/* 0 */
			0x17,		/* 23 */
/* 1350 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1352 */	0xd,		/* FC_ENUM16 */
			0x5c,		/* FC_PAD */
/* 1354 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1356 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1358) */
/* 1358 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1360 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1364 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1366 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1368 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1370 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1372 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1374 */	0x0,		/* 0 */
			0x2,		/* 2 */
/* 1376 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1378 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1380 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1382 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1384) */
/* 1384 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1386 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1390 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1392 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1394 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1396 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1398 */	0x20,		/* 32 */
			0x18,		/* 24 */
/* 1400 */	0x9,		/* 9 */
			0x3,		/* 3 */
/* 1402 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1404 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1406) */
/* 1406 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1408 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1412 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1414 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1416 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1418 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1420 */	0x20,		/* 32 */
			0x18,		/* 24 */
/* 1422 */	0x8,		/* 8 */
			0x28,		/* 40 */
/* 1424 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1426 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1428) */
/* 1428 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1430 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1434 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1436 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1438 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1440 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1442 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1444 */	0x1,		/* 1 */
			0x1,		/* 1 */
/* 1446 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1450) */
/* 1450 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1452 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1456 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1458 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1460 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1462 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1464 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1466 */	0x0,		/* 0 */
			0x1,		/* 1 */
/* 1468 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1470 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1474 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1476 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1478 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1480 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1482 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1484 */	0x9,		/* 9 */
			0x28,		/* 40 */
/* 1486 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1488 */	NdrFcShort( 0xffec ),	/* Offset= -20 (1468) */
/* 1490 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1492 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1494) */
/* 1494 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1496 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1500 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1502 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1504 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1506 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1508 */	0x19,		/* 25 */
			0x82,		/* 130 */
/* 1510 */	0x31,		/* 49 */
			0xdc,		/* 220 */
/* 1512 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1514 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1516) */
/* 1516 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1518 */	NdrFcLong( 0x7bf80981 ),	/* 2079852929 */
/* 1522 */	NdrFcShort( 0xbf32 ),	/* -16590 */
/* 1524 */	NdrFcShort( 0x101a ),	/* 4122 */
/* 1526 */	0x8b,		/* 139 */
			0xbb,		/* 187 */
/* 1528 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 1530 */	0x0,		/* 0 */
			0x30,		/* 48 */
/* 1532 */	0xc,		/* 12 */
			0xab,		/* 171 */
/* 1534 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1536 */	NdrFcShort( 0xfc08 ),	/* Offset= -1016 (520) */
/* 1538 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1540 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1542) */
/* 1542 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1544 */	NdrFcLong( 0x19631222 ),	/* 425923106 */
/* 1548 */	NdrFcShort( 0x1992 ),	/* 6546 */
/* 1550 */	NdrFcShort( 0x612 ),	/* 1554 */
/* 1552 */	0x19,		/* 25 */
			0x65,		/* 101 */
/* 1554 */	0x6,		/* 6 */
			0x1,		/* 1 */
/* 1556 */	0x20,		/* 32 */
			0x16,		/* 22 */
/* 1558 */	0x9,		/* 9 */
			0x12,		/* 18 */

			0x0
        }
    };

XFG_TRAMPOLINES(BSTR)
XFG_TRAMPOLINES(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree)
            
            }
            

        };



/* Standard interface: __MIDL_itf_Universe_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWebRTExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x01,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32
    };



/* Object interface: IEclipseExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x18}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    0
    };



/* Object interface: IOfficeExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x63,0x12,0x22}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    32,
    76,
    126,
    182,
    226,
    270
    };



/* Object interface: IWebRTTreeNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0xC9,0x51}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTTreeNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };



/* Object interface: IWebRTTreeViewCallBack, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTTreeViewCallBack_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    314,
    352,
    390,
    434,
    478,
    516,
    554
    };



/* Object interface: IWebRTTreeView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTTreeView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    598,
    642,
    680,
    724
    };



/* Object interface: IWebRTEventObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTEventObj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    768,
    806,
    844,
    882,
    920,
    958,
    270,
    996,
    1040,
    1084
    };



/* Object interface: IXobj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x04}} */

#pragma code_seg(".orpc")
static const unsigned short IXobj_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1128,
    642,
    844,
    1166,
    1204,
    1242,
    1280,
    1318,
    1356,
    1394,
    1432,
    1470,
    1508,
    1552,
    1590,
    1628,
    1666,
    1704,
    1748,
    1786,
    1830,
    1874,
    1912,
    1950,
    1988,
    2026,
    2064,
    2102,
    2140,
    2178,
    2216,
    2254,
    2292,
    2330,
    2368,
    2406,
    2444,
    2482,
    2520,
    2558,
    2596,
    2634,
    2672,
    2710,
    2748,
    2786,
    2824,
    2862,
    2900,
    2938,
    2976,
    3014,
    3052,
    3090,
    3128,
    3166,
    3222,
    3272,
    3322,
    3384,
    3434,
    3478,
    3540,
    3584,
    3634,
    3684,
    3728,
    3772
    };



/* Object interface: IAppExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x20,0x07}} */

#pragma code_seg(".orpc")
static const unsigned short IAppExtender_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3816
    };



/* Object interface: IWebRT, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRT_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    3854,
    3892,
    3936,
    3980,
    4018,
    4056,
    4094,
    4132,
    4170,
    4208,
    4246,
    4290,
    4346,
    4390,
    4428,
    4472,
    4516,
    4560,
    4616,
    4666,
    4704,
    4766,
    4804,
    4836,
    4874,
    4912,
    4944,
    5000,
    5062,
    5118,
    5162,
    5218,
    5274,
    5318,
    5362,
    5400,
    5462,
    5512,
    5556,
    5612,
    5650,
    5694,
    5732,
    5776,
    5820,
    5858,
    5902,
    5952
    };



/* Object interface: INucleus, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short INucleus_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6002,
    6046,
    6084,
    6122,
    920,
    6160,
    6198,
    6236,
    6274,
    6312,
    6350,
    6388,
    6426,
    6464,
    6496,
    6528,
    6566,
    6616
    };



/* Object interface: IXobjCollection, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x17}} */

#pragma code_seg(".orpc")
static const unsigned short IXobjCollection_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6660,
    6698,
    6742
    };



/* Object interface: INuclei, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short INuclei_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6780,
    6046,
    844,
    6824,
    6862,
    6900,
    6944,
    6988,
    7032,
    7070,
    7108,
    7146,
    7184,
    1552,
    7222,
    7278,
    7346,
    7402,
    7452,
    7502,
    7546
    };



/* Object interface: IWorkBenchWindow, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x5D,0x34}} */

#pragma code_seg(".orpc")
static const unsigned short IWorkBenchWindow_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7602,
    6046,
    844,
    3980,
    7646,
    6160,
    7690,
    7728,
    7760,
    7792,
    7842,
    7892
    };



/* Object interface: IBrowser, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x08,0x28}} */

#pragma code_seg(".orpc")
static const unsigned short IBrowser_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7948,
    7986,
    8024,
    8062,
    478
    };



/* Object interface: IWebView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x09,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IWebView_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8118,
    8156,
    8194,
    8232,
    8282,
    8332
    };



/* Object interface: IOfficeObject, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x65,0x06,0x06}} */

#pragma code_seg(".orpc")
static const unsigned short IOfficeObject_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8376,
    8414,
    8464
    };



/* Object interface: IWebRTCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x31,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8118,
    8496,
    8534,
    8572
    };



/* Object interface: IWebRTAppCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x10,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IWebRTAppCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8118,
    8496,
    8534,
    8572,
    8610
    };



/* Object interface: IEclipseCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x12}} */

#pragma code_seg(".orpc")
static const unsigned short IEclipseCtrl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    8118,
    8496,
    8534,
    8572,
    8648,
    8692,
    8730,
    8768,
    8806,
    8844,
    1432,
    8882,
    8926,
    8970,
    9026,
    9082
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for ..\CommonFile\Universe.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)



extern const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag1440_t;
extern const __midl_frag1440_t __midl_frag1440;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1439_t;
extern const __midl_frag1439_t __midl_frag1439;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1438_t;
extern const __midl_frag1438_t __midl_frag1438;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1437_t;
extern const __midl_frag1437_t __midl_frag1437;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1435_t;
extern const __midl_frag1435_t __midl_frag1435;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1434_t;
extern const __midl_frag1434_t __midl_frag1434;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1433_t;
extern const __midl_frag1433_t __midl_frag1433;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1426_t;
extern const __midl_frag1426_t __midl_frag1426;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1413_t;
extern const __midl_frag1413_t __midl_frag1413;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1412_t;
extern const __midl_frag1412_t __midl_frag1412;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1411_t;
extern const __midl_frag1411_t __midl_frag1411;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1408_t;
extern const __midl_frag1408_t __midl_frag1408;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1406_t;
extern const __midl_frag1406_t __midl_frag1406;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1405_t;
extern const __midl_frag1405_t __midl_frag1405;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1404_t;
extern const __midl_frag1404_t __midl_frag1404;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1401_t;
extern const __midl_frag1401_t __midl_frag1401;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1396_t;
extern const __midl_frag1396_t __midl_frag1396;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1394_t;
extern const __midl_frag1394_t __midl_frag1394;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1393_t;
extern const __midl_frag1393_t __midl_frag1393;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1392_t;
extern const __midl_frag1392_t __midl_frag1392;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1391_t;
extern const __midl_frag1391_t __midl_frag1391;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1389_t;
extern const __midl_frag1389_t __midl_frag1389;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1388_t;
extern const __midl_frag1388_t __midl_frag1388;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1387_t;
extern const __midl_frag1387_t __midl_frag1387;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1386_t;
extern const __midl_frag1386_t __midl_frag1386;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1384_t;
extern const __midl_frag1384_t __midl_frag1384;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1383_t;
extern const __midl_frag1383_t __midl_frag1383;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1382_t;
extern const __midl_frag1382_t __midl_frag1382;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1381_t;
extern const __midl_frag1381_t __midl_frag1381;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1374_t;
extern const __midl_frag1374_t __midl_frag1374;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1373_t;
extern const __midl_frag1373_t __midl_frag1373;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1372_t;
extern const __midl_frag1372_t __midl_frag1372;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1367_t;
extern const __midl_frag1367_t __midl_frag1367;

typedef 
NDR64_FORMAT_CHAR
__midl_frag1365_t;
extern const __midl_frag1365_t __midl_frag1365;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1364_t;
extern const __midl_frag1364_t __midl_frag1364;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1359_t;
extern const __midl_frag1359_t __midl_frag1359;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1354_t;
extern const __midl_frag1354_t __midl_frag1354;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1352_t;
extern const __midl_frag1352_t __midl_frag1352;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1351_t;
extern const __midl_frag1351_t __midl_frag1351;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1350_t;
extern const __midl_frag1350_t __midl_frag1350;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1349_t;
extern const __midl_frag1349_t __midl_frag1349;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag1343_t;
extern const __midl_frag1343_t __midl_frag1343;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1334_t;
extern const __midl_frag1334_t __midl_frag1334;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1325_t;
extern const __midl_frag1325_t __midl_frag1325;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1314_t;
extern const __midl_frag1314_t __midl_frag1314;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1313_t;
extern const __midl_frag1313_t __midl_frag1313;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1312_t;
extern const __midl_frag1312_t __midl_frag1312;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1308_t;
extern const __midl_frag1308_t __midl_frag1308;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1306_t;
extern const __midl_frag1306_t __midl_frag1306;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1305_t;
extern const __midl_frag1305_t __midl_frag1305;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1304_t;
extern const __midl_frag1304_t __midl_frag1304;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1303_t;
extern const __midl_frag1303_t __midl_frag1303;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1300_t;
extern const __midl_frag1300_t __midl_frag1300;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1283_t;
extern const __midl_frag1283_t __midl_frag1283;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1276_t;
extern const __midl_frag1276_t __midl_frag1276;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1261_t;
extern const __midl_frag1261_t __midl_frag1261;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1227_t;
extern const __midl_frag1227_t __midl_frag1227;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1226_t;
extern const __midl_frag1226_t __midl_frag1226;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1225_t;
extern const __midl_frag1225_t __midl_frag1225;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1223_t;
extern const __midl_frag1223_t __midl_frag1223;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1216_t;
extern const __midl_frag1216_t __midl_frag1216;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1215_t;
extern const __midl_frag1215_t __midl_frag1215;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1213_t;
extern const __midl_frag1213_t __midl_frag1213;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1212_t;
extern const __midl_frag1212_t __midl_frag1212;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1211_t;
extern const __midl_frag1211_t __midl_frag1211;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1210_t;
extern const __midl_frag1210_t __midl_frag1210;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1202_t;
extern const __midl_frag1202_t __midl_frag1202;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1193_t;
extern const __midl_frag1193_t __midl_frag1193;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1186_t;
extern const __midl_frag1186_t __midl_frag1186;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag1177_t;
extern const __midl_frag1177_t __midl_frag1177;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1156_t;
extern const __midl_frag1156_t __midl_frag1156;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag1141_t;
extern const __midl_frag1141_t __midl_frag1141;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag1128_t;
extern const __midl_frag1128_t __midl_frag1128;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1126_t;
extern const __midl_frag1126_t __midl_frag1126;

typedef 
struct _NDR64_USER_MARSHAL_FORMAT
__midl_frag1125_t;
extern const __midl_frag1125_t __midl_frag1125;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1124_t;
extern const __midl_frag1124_t __midl_frag1124;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1123_t;
extern const __midl_frag1123_t __midl_frag1123;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1120_t;
extern const __midl_frag1120_t __midl_frag1120;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1099_t;
extern const __midl_frag1099_t __midl_frag1099;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1092_t;
extern const __midl_frag1092_t __midl_frag1092;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1085_t;
extern const __midl_frag1085_t __midl_frag1085;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1058_t;
extern const __midl_frag1058_t __midl_frag1058;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1047_t;
extern const __midl_frag1047_t __midl_frag1047;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag1036_t;
extern const __midl_frag1036_t __midl_frag1036;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag1004_t;
extern const __midl_frag1004_t __midl_frag1004;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1003_t;
extern const __midl_frag1003_t __midl_frag1003;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag1002_t;
extern const __midl_frag1002_t __midl_frag1002;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag1001_t;
extern const __midl_frag1001_t __midl_frag1001;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag990_t;
extern const __midl_frag990_t __midl_frag990;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag989_t;
extern const __midl_frag989_t __midl_frag989;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag988_t;
extern const __midl_frag988_t __midl_frag988;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag987_t;
extern const __midl_frag987_t __midl_frag987;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag955_t;
extern const __midl_frag955_t __midl_frag955;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag947_t;
extern const __midl_frag947_t __midl_frag947;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag933_t;
extern const __midl_frag933_t __midl_frag933;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag929_t;
extern const __midl_frag929_t __midl_frag929;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag922_t;
extern const __midl_frag922_t __midl_frag922;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag920_t;
extern const __midl_frag920_t __midl_frag920;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag919_t;
extern const __midl_frag919_t __midl_frag919;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag918_t;
extern const __midl_frag918_t __midl_frag918;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag915_t;
extern const __midl_frag915_t __midl_frag915;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag892_t;
extern const __midl_frag892_t __midl_frag892;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag885_t;
extern const __midl_frag885_t __midl_frag885;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag877_t;
extern const __midl_frag877_t __midl_frag877;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag865_t;
extern const __midl_frag865_t __midl_frag865;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag861_t;
extern const __midl_frag861_t __midl_frag861;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag855_t;
extern const __midl_frag855_t __midl_frag855;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag853_t;
extern const __midl_frag853_t __midl_frag853;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag852_t;
extern const __midl_frag852_t __midl_frag852;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag851_t;
extern const __midl_frag851_t __midl_frag851;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag848_t;
extern const __midl_frag848_t __midl_frag848;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag839_t;
extern const __midl_frag839_t __midl_frag839;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag829_t;
extern const __midl_frag829_t __midl_frag829;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag823_t;
extern const __midl_frag823_t __midl_frag823;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag813_t;
extern const __midl_frag813_t __midl_frag813;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag803_t;
extern const __midl_frag803_t __midl_frag803;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag793_t;
extern const __midl_frag793_t __midl_frag793;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag789_t;
extern const __midl_frag789_t __midl_frag789;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag788_t;
extern const __midl_frag788_t __midl_frag788;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag787_t;
extern const __midl_frag787_t __midl_frag787;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag786_t;
extern const __midl_frag786_t __midl_frag786;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag767_t;
extern const __midl_frag767_t __midl_frag767;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag763_t;
extern const __midl_frag763_t __midl_frag763;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag756_t;
extern const __midl_frag756_t __midl_frag756;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag747_t;
extern const __midl_frag747_t __midl_frag747;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag741_t;
extern const __midl_frag741_t __midl_frag741;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag735_t;
extern const __midl_frag735_t __midl_frag735;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag718_t;
extern const __midl_frag718_t __midl_frag718;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag707_t;
extern const __midl_frag707_t __midl_frag707;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag700_t;
extern const __midl_frag700_t __midl_frag700;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag688_t;
extern const __midl_frag688_t __midl_frag688;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag687_t;
extern const __midl_frag687_t __midl_frag687;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag686_t;
extern const __midl_frag686_t __midl_frag686;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag682_t;
extern const __midl_frag682_t __midl_frag682;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag681_t;
extern const __midl_frag681_t __midl_frag681;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag626_t;
extern const __midl_frag626_t __midl_frag626;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag619_t;
extern const __midl_frag619_t __midl_frag619;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag611_t;
extern const __midl_frag611_t __midl_frag611;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag604_t;
extern const __midl_frag604_t __midl_frag604;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag593_t;
extern const __midl_frag593_t __midl_frag593;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag588_t;
extern const __midl_frag588_t __midl_frag588;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag566_t;
extern const __midl_frag566_t __midl_frag566;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag558_t;
extern const __midl_frag558_t __midl_frag558;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag551_t;
extern const __midl_frag551_t __midl_frag551;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag539_t;
extern const __midl_frag539_t __midl_frag539;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag530_t;
extern const __midl_frag530_t __midl_frag530;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag375_t;
extern const __midl_frag375_t __midl_frag375;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag290_t;
extern const __midl_frag290_t __midl_frag290;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag287_t;
extern const __midl_frag287_t __midl_frag287;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag283_t;
extern const __midl_frag283_t __midl_frag283;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag279_t;
extern const __midl_frag279_t __midl_frag279;

typedef 
NDR64_FORMAT_CHAR
__midl_frag278_t;
extern const __midl_frag278_t __midl_frag278;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag277_t;
extern const __midl_frag277_t __midl_frag277;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag276_t;
extern const __midl_frag276_t __midl_frag276;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag275_t;
extern const __midl_frag275_t __midl_frag275;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag267_t;
extern const __midl_frag267_t __midl_frag267;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag266_t;
extern const __midl_frag266_t __midl_frag266;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag265_t;
extern const __midl_frag265_t __midl_frag265;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag264_t;
extern const __midl_frag264_t __midl_frag264;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag261_t;
extern const __midl_frag261_t __midl_frag261;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag258_t;
extern const __midl_frag258_t __midl_frag258;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag256_t;
extern const __midl_frag256_t __midl_frag256;

typedef 
NDR64_FORMAT_CHAR
__midl_frag255_t;
extern const __midl_frag255_t __midl_frag255;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag254_t;
extern const __midl_frag254_t __midl_frag254;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag253_t;
extern const __midl_frag253_t __midl_frag253;

typedef 
NDR64_FORMAT_CHAR
__midl_frag246_t;
extern const __midl_frag246_t __midl_frag246;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag245_t;
extern const __midl_frag245_t __midl_frag245;

typedef 
NDR64_FORMAT_CHAR
__midl_frag238_t;
extern const __midl_frag238_t __midl_frag238;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag237_t;
extern const __midl_frag237_t __midl_frag237;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag236_t;
extern const __midl_frag236_t __midl_frag236;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag235_t;
extern const __midl_frag235_t __midl_frag235;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag233_t;
extern const __midl_frag233_t __midl_frag233;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag232_t;
extern const __midl_frag232_t __midl_frag232;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag231_t;
extern const __midl_frag231_t __midl_frag231;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag230_t;
extern const __midl_frag230_t __midl_frag230;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag227_t;
extern const __midl_frag227_t __midl_frag227;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag226_t;
extern const __midl_frag226_t __midl_frag226;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag225_t;
extern const __midl_frag225_t __midl_frag225;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag222_t;
extern const __midl_frag222_t __midl_frag222;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag221_t;
extern const __midl_frag221_t __midl_frag221;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag220_t;
extern const __midl_frag220_t __midl_frag220;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag217_t;
extern const __midl_frag217_t __midl_frag217;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag216_t;
extern const __midl_frag216_t __midl_frag216;

typedef 
struct 
{
    struct _NDR64_FIX_ARRAY_HEADER_FORMAT frag1;
}
__midl_frag215_t;
extern const __midl_frag215_t __midl_frag215;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag214_t;
extern const __midl_frag214_t __midl_frag214;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag7;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag8;
    } frag2;
}
__midl_frag208_t;
extern const __midl_frag208_t __midl_frag208;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag203_t;
extern const __midl_frag203_t __midl_frag203;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag202_t;
extern const __midl_frag202_t __midl_frag202;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag199_t;
extern const __midl_frag199_t __midl_frag199;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag198_t;
extern const __midl_frag198_t __midl_frag198;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag197_t;
extern const __midl_frag197_t __midl_frag197;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag194_t;
extern const __midl_frag194_t __midl_frag194;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag193_t;
extern const __midl_frag193_t __midl_frag193;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag188_t;
extern const __midl_frag188_t __midl_frag188;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag187_t;
extern const __midl_frag187_t __midl_frag187;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag186_t;
extern const __midl_frag186_t __midl_frag186;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag181_t;
extern const __midl_frag181_t __midl_frag181;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag175_t;
extern const __midl_frag175_t __midl_frag175;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag174_t;
extern const __midl_frag174_t __midl_frag174;

typedef 
struct 
{
    struct _NDR64_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    NDR64_UINT32 frag13;
}
__midl_frag173_t;
extern const __midl_frag173_t __midl_frag173;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag172_t;
extern const __midl_frag172_t __midl_frag172;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag171_t;
extern const __midl_frag171_t __midl_frag171;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct 
{
    struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag169_t;
extern const __midl_frag169_t __midl_frag169;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag160_t;
extern const __midl_frag160_t __midl_frag160;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag151_t;
extern const __midl_frag151_t __midl_frag151;

typedef 
struct 
{
    struct _NDR64_NON_ENCAPSULATED_UNION frag1;
    struct _NDR64_UNION_ARM_SELECTOR frag2;
    struct _NDR64_UNION_ARM frag3;
    struct _NDR64_UNION_ARM frag4;
    struct _NDR64_UNION_ARM frag5;
    struct _NDR64_UNION_ARM frag6;
    struct _NDR64_UNION_ARM frag7;
    struct _NDR64_UNION_ARM frag8;
    struct _NDR64_UNION_ARM frag9;
    struct _NDR64_UNION_ARM frag10;
    struct _NDR64_UNION_ARM frag11;
    struct _NDR64_UNION_ARM frag12;
    struct _NDR64_UNION_ARM frag13;
    struct _NDR64_UNION_ARM frag14;
    struct _NDR64_UNION_ARM frag15;
    struct _NDR64_UNION_ARM frag16;
    struct _NDR64_UNION_ARM frag17;
    struct _NDR64_UNION_ARM frag18;
    struct _NDR64_UNION_ARM frag19;
    struct _NDR64_UNION_ARM frag20;
    struct _NDR64_UNION_ARM frag21;
    struct _NDR64_UNION_ARM frag22;
    struct _NDR64_UNION_ARM frag23;
    struct _NDR64_UNION_ARM frag24;
    struct _NDR64_UNION_ARM frag25;
    struct _NDR64_UNION_ARM frag26;
    struct _NDR64_UNION_ARM frag27;
    struct _NDR64_UNION_ARM frag28;
    struct _NDR64_UNION_ARM frag29;
    struct _NDR64_UNION_ARM frag30;
    struct _NDR64_UNION_ARM frag31;
    struct _NDR64_UNION_ARM frag32;
    struct _NDR64_UNION_ARM frag33;
    struct _NDR64_UNION_ARM frag34;
    struct _NDR64_UNION_ARM frag35;
    struct _NDR64_UNION_ARM frag36;
    struct _NDR64_UNION_ARM frag37;
    struct _NDR64_UNION_ARM frag38;
    struct _NDR64_UNION_ARM frag39;
    struct _NDR64_UNION_ARM frag40;
    struct _NDR64_UNION_ARM frag41;
    struct _NDR64_UNION_ARM frag42;
    struct _NDR64_UNION_ARM frag43;
    struct _NDR64_UNION_ARM frag44;
    struct _NDR64_UNION_ARM frag45;
    struct _NDR64_UNION_ARM frag46;
    struct _NDR64_UNION_ARM frag47;
    struct _NDR64_UNION_ARM frag48;
    struct _NDR64_UNION_ARM frag49;
    NDR64_UINT32 frag50;
}
__midl_frag150_t;
extern const __midl_frag150_t __midl_frag150;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_REGION_FORMAT frag1;
        struct _NDR64_EMBEDDED_COMPLEX_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
    } frag2;
}
__midl_frag149_t;
extern const __midl_frag149_t __midl_frag149;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag139_t;
extern const __midl_frag139_t __midl_frag139;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag133_t;
extern const __midl_frag133_t __midl_frag133;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag124_t;
extern const __midl_frag124_t __midl_frag124;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag113_t;
extern const __midl_frag113_t __midl_frag113;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag108_t;
extern const __midl_frag108_t __midl_frag108;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag102_t;
extern const __midl_frag102_t __midl_frag102;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag97_t;
extern const __midl_frag97_t __midl_frag97;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag67_t;
extern const __midl_frag67_t __midl_frag67;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag63_t;
extern const __midl_frag63_t __midl_frag63;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag62_t;
extern const __midl_frag62_t __midl_frag62;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag61_t;
extern const __midl_frag61_t __midl_frag61;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag58_t;
extern const __midl_frag58_t __midl_frag58;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag33_t;
extern const __midl_frag33_t __midl_frag33;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct 
{
    struct _NDR64_CONF_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag7_t;
extern const __midl_frag7_t __midl_frag7;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag1440_t __midl_frag1440 =
0x5    /* FC64_INT32 */;

static const __midl_frag1439_t __midl_frag1439 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag7
};

static const __midl_frag1438_t __midl_frag1438 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1439
};

static const __midl_frag1437_t __midl_frag1437 =
{ 
/* InitCtrl */
    { 
    /* InitCtrl */      /* procedure InitCtrl */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1435_t __midl_frag1435 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x00, 0x04}
    }
};

static const __midl_frag1434_t __midl_frag1434 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1435
};

static const __midl_frag1433_t __midl_frag1433 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1434
};

static const __midl_frag1426_t __midl_frag1426 =
{ 
/* ObserveEx */
    { 
    /* ObserveEx */      /* procedure ObserveEx */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrNucleusName */      /* parameter bstrNucleusName */
        &__midl_frag1438,
        { 
        /* bstrNucleusName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1413_t __midl_frag1413 =
{ 
/* *_wireVARIANT */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag149
};

static const __midl_frag1412_t __midl_frag1412 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1413
};

static const __midl_frag1411_t __midl_frag1411 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1412
};

static const __midl_frag1408_t __midl_frag1408 =
{ 
/* put_AppKeyValue */
    { 
    /* put_AppKeyValue */      /* procedure put_AppKeyValue */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1412,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1406_t __midl_frag1406 =
{ 
/* *_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag149
};

static const __midl_frag1405_t __midl_frag1405 =
{ 
/* wireVARIANT */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 1 /* 0x1 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 24 /* 0x18 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1406
};

static const __midl_frag1404_t __midl_frag1404 =
{ 
/* *wireVARIANT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1405
};

static const __midl_frag1401_t __midl_frag1401 =
{ 
/* get_AppKeyValue */
    { 
    /* get_AppKeyValue */      /* procedure get_AppKeyValue */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1405,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1396_t __midl_frag1396 =
{ 
/* get_ActiveTopXobj */
    { 
    /* get_ActiveTopXobj */      /* procedure get_ActiveTopXobj */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1433,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1394_t __midl_frag1394 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x00, 0x03}
    }
};

static const __midl_frag1393_t __midl_frag1393 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1394
};

static const __midl_frag1392_t __midl_frag1392 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1393
};

static const __midl_frag1391_t __midl_frag1391 =
{ 
/* get_TopGalaxy */
    { 
    /* get_TopGalaxy */      /* procedure get_TopGalaxy */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1392,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1389_t __midl_frag1389 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x00, 0x02}
    }
};

static const __midl_frag1388_t __midl_frag1388 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1389
};

static const __midl_frag1387_t __midl_frag1387 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1388
};

static const __midl_frag1386_t __midl_frag1386 =
{ 
/* get_TopNuclei */
    { 
    /* get_TopNuclei */      /* procedure get_TopNuclei */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1387,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1384_t __midl_frag1384 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x5d, 0x34}
    }
};

static const __midl_frag1383_t __midl_frag1383 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1384
};

static const __midl_frag1382_t __midl_frag1382 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1383
};

static const __midl_frag1381_t __midl_frag1381 =
{ 
/* get_WorkBenchWindow */
    { 
    /* get_WorkBenchWindow */      /* procedure get_WorkBenchWindow */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1382,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1374_t __midl_frag1374 =
0x7    /* FC64_INT64 */;

static const __midl_frag1373_t __midl_frag1373 =
{ 
/* *LONGLONG */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1374
};

static const __midl_frag1372_t __midl_frag1372 =
{ 
/* get_EclipseViewHandle */
    { 
    /* get_EclipseViewHandle */      /* procedure get_EclipseViewHandle */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1374,
        { 
        /* pVal */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1367_t __midl_frag1367 =
{ 
/* put_Handle */
    { 
    /* put_Handle */      /* procedure put_Handle */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrHandleName */      /* parameter bstrHandleName */
        &__midl_frag1438,
        { 
        /* bstrHandleName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1374,
        { 
        /* newVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1365_t __midl_frag1365 =
0x4    /* FC64_INT16 */;

static const __midl_frag1364_t __midl_frag1364 =
{ 
/* put_AppCtrl */
    { 
    /* put_AppCtrl */      /* procedure put_AppCtrl */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1365,
        { 
        /* newVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1359_t __midl_frag1359 =
{ 
/* put_tag */
    { 
    /* put_tag */      /* procedure put_tag */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1412,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1354_t __midl_frag1354 =
{ 
/* get_tag */
    { 
    /* get_tag */      /* procedure get_tag */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1405,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1352_t __midl_frag1352 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x00, 0x01}
    }
};

static const __midl_frag1351_t __midl_frag1351 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1352
};

static const __midl_frag1350_t __midl_frag1350 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1351
};

static const __midl_frag1349_t __midl_frag1349 =
{ 
/* get_Cosmos */
    { 
    /* get_Cosmos */      /* procedure get_Cosmos */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1350,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1343_t __midl_frag1343 =
{ 
/* UnloadCosmos */
    { 
    /* UnloadCosmos */      /* procedure UnloadCosmos */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1334_t __midl_frag1334 =
{ 
/* Observe */
    { 
    /* Observe */      /* procedure Observe */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1325_t __midl_frag1325 =
{ 
/* SendXmlMessage */
    { 
    /* SendXmlMessage */      /* procedure SendXmlMessage */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* sender */      /* parameter sender */
        &__midl_frag1434,
        { 
        /* sender */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1314_t __midl_frag1314 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00020400,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag1313_t __midl_frag1313 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1314
};

static const __midl_frag1312_t __midl_frag1312 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1313
};

static const __midl_frag1308_t __midl_frag1308 =
{ 
/* CreateForm */
    { 
    /* CreateForm */      /* procedure CreateForm */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* hParent */      /* parameter hParent */
        &__midl_frag1374,
        { 
        /* hParent */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pRetForm */      /* parameter pRetForm */
        &__midl_frag1312,
        { 
        /* pRetForm */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1306_t __midl_frag1306 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x20, 0x18, 0x08, 0x28}
    }
};

static const __midl_frag1305_t __midl_frag1305 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1306
};

static const __midl_frag1304_t __midl_frag1304 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1305
};

static const __midl_frag1303_t __midl_frag1303 =
{ 
/* get_WebBrowser */
    { 
    /* get_WebBrowser */      /* procedure get_WebBrowser */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppWebBrowser */      /* parameter ppWebBrowser */
        &__midl_frag1304,
        { 
        /* ppWebBrowser */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1300_t __midl_frag1300 =
{ 
/* put_HostWnd */
    { 
    /* put_HostWnd */      /* procedure put_HostWnd */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1374,
        { 
        /* newVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1283_t __midl_frag1283 =
{ 
/* OpenURL */
    { 
    /* OpenURL */      /* procedure OpenURL */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrURL */      /* parameter bstrURL */
        &__midl_frag1438,
        { 
        /* bstrURL */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nDisposition */      /* parameter nDisposition */
        &__midl_frag1440,
        { 
        /* nDisposition */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1276_t __midl_frag1276 =
{ 
/* put_RemoteXobj */
    { 
    /* put_RemoteXobj */      /* procedure put_RemoteXobj */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1434,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1261_t __midl_frag1261 =
{ 
/* ObserveinView */
    { 
    /* ObserveinView */      /* procedure ObserveinView */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppRetXobj */      /* parameter ppRetXobj */
        &__midl_frag1433,
        { 
        /* ppRetXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1227_t __midl_frag1227 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x20, 0x16, 0x09, 0x12}
    }
};

static const __midl_frag1226_t __midl_frag1226 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1227
};

static const __midl_frag1225_t __midl_frag1225 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1226
};

static const __midl_frag1223_t __midl_frag1223 =
{ 
/* get_CosmosCtrl */
    { 
    /* get_CosmosCtrl */      /* procedure get_CosmosCtrl */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1225,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1216_t __midl_frag1216 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1440
};

static const __midl_frag1215_t __midl_frag1215 =
{ 
/* get_Count */
    { 
    /* get_Count */      /* procedure get_Count */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pCount */      /* parameter pCount */
        &__midl_frag1440,
        { 
        /* pCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1213_t __midl_frag1213 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x00000000,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag1212_t __midl_frag1212 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1213
};

static const __midl_frag1211_t __midl_frag1211 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1212
};

static const __midl_frag1210_t __midl_frag1210 =
{ 
/* get__NewEnum */
    { 
    /* get__NewEnum */      /* procedure get__NewEnum */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppVal */      /* parameter ppVal */
        &__midl_frag1211,
        { 
        /* ppVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1202_t __midl_frag1202 =
{ 
/* get_Ctrl */
    { 
    /* get_Ctrl */      /* procedure get_Ctrl */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* vIndex */      /* parameter vIndex */
        &__midl_frag1412,
        { 
        /* vIndex */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppCtrl */      /* parameter ppCtrl */
        &__midl_frag1225,
        { 
        /* ppCtrl */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1193_t __midl_frag1193 =
{ 
/* ObserveNuclei */
    { 
    /* ObserveNuclei */      /* procedure ObserveNuclei */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrGalaxys */      /* parameter bstrGalaxys */
        &__midl_frag1438,
        { 
        /* bstrGalaxys */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bSaveToConfigFile */      /* parameter bSaveToConfigFile */
        &__midl_frag1365,
        { 
        /* bSaveToConfigFile */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1186_t __midl_frag1186 =
{ 
/* GetNucleusFromCtrl */
    { 
    /* GetNucleusFromCtrl */      /* procedure GetNucleusFromCtrl */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ctrl */      /* parameter ctrl */
        &__midl_frag1313,
        { 
        /* ctrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppNucleus */      /* parameter ppNucleus */
        &__midl_frag1392,
        { 
        /* ppNucleus */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1177_t __midl_frag1177 =
{ 
/* GetCtrlInXobj */
    { 
    /* GetCtrlInXobj */      /* procedure GetCtrlInXobj */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* NodeName */      /* parameter NodeName */
        &__midl_frag1438,
        { 
        /* NodeName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* CtrlName */      /* parameter CtrlName */
        &__midl_frag1438,
        { 
        /* CtrlName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppCtrl */      /* parameter ppCtrl */
        &__midl_frag1312,
        { 
        /* ppCtrl */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1156_t __midl_frag1156 =
{ 
/* ObserveCtrl */
    { 
    /* ObserveCtrl */      /* procedure ObserveCtrl */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Ctrl */      /* parameter Ctrl */
        &__midl_frag1412,
        { 
        /* Ctrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppRetXobj */      /* parameter ppRetXobj */
        &__midl_frag1433,
        { 
        /* ppRetXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1141_t __midl_frag1141 =
{ 
/* Observe */
    { 
    /* Observe */      /* procedure Observe */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Parent */      /* parameter Parent */
        &__midl_frag1313,
        { 
        /* Parent */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* CtrlName */      /* parameter CtrlName */
        &__midl_frag1438,
        { 
        /* CtrlName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* NucleusName */      /* parameter NucleusName */
        &__midl_frag1438,
        { 
        /* NucleusName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* ppRetXobj */      /* parameter ppRetXobj */
        &__midl_frag1433,
        { 
        /* ppRetXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag1128_t __midl_frag1128 =
{ 
/* CreateNucleus */
    { 
    /* CreateNucleus */      /* procedure CreateNucleus */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ParentObj */      /* parameter ParentObj */
        &__midl_frag1412,
        { 
        /* ParentObj */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HostWnd */      /* parameter HostWnd */
        &__midl_frag1412,
        { 
        /* HostWnd */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrNucleusName */      /* parameter bstrNucleusName */
        &__midl_frag1438,
        { 
        /* bstrNucleusName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pRetGalaxy */      /* parameter pRetGalaxy */
        &__midl_frag1392,
        { 
        /* pRetGalaxy */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag1126_t __midl_frag1126 =
{ 
/* *FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag7
};

static const __midl_frag1125_t __midl_frag1125 =
{ 
/* wireBSTR */
    0xa2,    /* FC64_USER_MARSHAL */
    (NDR64_UINT8) 128 /* 0x80 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    (NDR64_UINT16) 7 /* 0x7 */,
    (NDR64_UINT16) 8 /* 0x8 */,
    (NDR64_UINT32) 8 /* 0x8 */,
    (NDR64_UINT32) 0 /* 0x0 */,
    &__midl_frag1126
};

static const __midl_frag1124_t __midl_frag1124 =
{ 
/* *wireBSTR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1125
};

static const __midl_frag1123_t __midl_frag1123 =
{ 
/* get_XobjNames */
    { 
    /* get_XobjNames */      /* procedure get_XobjNames */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1125,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1120_t __midl_frag1120 =
{ 
/* put_Height */
    { 
    /* put_Height */      /* procedure put_Height */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1440,
        { 
        /* newVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag1099_t __midl_frag1099 =
{ 
/* get_NucleusName */
    { 
    /* get_NucleusName */      /* procedure get_NucleusName */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hHwnd */      /* parameter hHwnd */
        &__midl_frag1374,
        { 
        /* hHwnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1125,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1092_t __midl_frag1092 =
{ 
/* get_XObject */
    { 
    /* get_XObject */      /* procedure get_XObject */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1312,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1085_t __midl_frag1085 =
{ 
/* get_Xobj */
    { 
    /* get_Xobj */      /* procedure get_Xobj */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrNodeName */      /* parameter bstrNodeName */
        &__midl_frag1438,
        { 
        /* bstrNodeName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1433,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1058_t __midl_frag1058 =
{ 
/* get_WinNucleus */
    { 
    /* get_WinNucleus */      /* procedure get_WinNucleus */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* vIndex */      /* parameter vIndex */
        &__midl_frag1412,
        { 
        /* vIndex */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppNucleus */      /* parameter ppNucleus */
        &__midl_frag1392,
        { 
        /* ppNucleus */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1047_t __midl_frag1047 =
{ 
/* get_Item */
    { 
    /* get_Item */      /* procedure get_Item */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* iIndex */      /* parameter iIndex */
        &__midl_frag1440,
        { 
        /* iIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppTopWindow */      /* parameter ppTopWindow */
        &__midl_frag1433,
        { 
        /* ppTopWindow */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1036_t __midl_frag1036 =
{ 
/* GetXml */
    { 
    /* GetXml */      /* procedure GetXml */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrRootName */      /* parameter bstrRootName */
        &__midl_frag1438,
        { 
        /* bstrRootName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrRet */      /* parameter bstrRet */
        &__midl_frag1125,
        { 
        /* bstrRet */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag1004_t __midl_frag1004 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x00, 0x17}
    }
};

static const __midl_frag1003_t __midl_frag1003 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1004
};

static const __midl_frag1002_t __midl_frag1002 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1003
};

static const __midl_frag1001_t __midl_frag1001 =
{ 
/* get_RootXobjs */
    { 
    /* get_RootXobjs */      /* procedure get_RootXobjs */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppXobjColletion */      /* parameter ppXobjColletion */
        &__midl_frag1002,
        { 
        /* ppXobjColletion */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag990_t __midl_frag990 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x20, 0x18, 0x09, 0x03}
    }
};

static const __midl_frag989_t __midl_frag989 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag990
};

static const __midl_frag988_t __midl_frag988 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag989
};

static const __midl_frag987_t __midl_frag987 =
{ 
/* get_HostWebPage */
    { 
    /* get_HostWebPage */      /* procedure get_HostWebPage */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppChromeWebPage */      /* parameter ppChromeWebPage */
        &__midl_frag988,
        { 
        /* ppChromeWebPage */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag955_t __midl_frag955 =
{ 
/* get_Xobj */
    { 
    /* get_Xobj */      /* procedure get_Xobj */
        (NDR64_UINT32) 36569411 /* 0x22e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* vIndex */      /* parameter vIndex */
        &__midl_frag1412,
        { 
        /* vIndex */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag947_t __midl_frag947 =
{ 
/* CosmosGetItemID */
    { 
    /* CosmosGetItemID */      /* procedure CosmosGetItemID */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* RibbonControl */      /* parameter RibbonControl */
        &__midl_frag1313,
        { 
        /* RibbonControl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrID */      /* parameter bstrID */
        &__midl_frag1125,
        { 
        /* bstrID */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag933_t __midl_frag933 =
{ 
/* CosmosGetItemCount */
    { 
    /* CosmosGetItemCount */      /* procedure CosmosGetItemCount */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* RibbonControl */      /* parameter RibbonControl */
        &__midl_frag1313,
        { 
        /* RibbonControl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nCount */      /* parameter nCount */
        &__midl_frag1440,
        { 
        /* nCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag929_t __midl_frag929 =
{ 
/* CosmosOnLoad */
    { 
    /* CosmosOnLoad */      /* procedure CosmosOnLoad */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* RibbonControl */      /* parameter RibbonControl */
        &__midl_frag1313,
        { 
        /* RibbonControl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag922_t __midl_frag922 =
{ 
/* CosmosGetVisible */
    { 
    /* CosmosGetVisible */      /* procedure CosmosGetVisible */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* RibbonControl */      /* parameter RibbonControl */
        &__midl_frag1313,
        { 
        /* RibbonControl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* varVisible */      /* parameter varVisible */
        &__midl_frag1405,
        { 
        /* varVisible */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag920_t __midl_frag920 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x7bf80981,
        0xbf32,
        0x101a,
        {0x8b, 0xbb, 0x00, 0xaa, 0x00, 0x30, 0x0c, 0xab}
    }
};

static const __midl_frag919_t __midl_frag919 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag920
};

static const __midl_frag918_t __midl_frag918 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag919
};

static const __midl_frag915_t __midl_frag915 =
{ 
/* CosmosGetImage */
    { 
    /* CosmosGetImage */      /* procedure CosmosGetImage */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* strValue */      /* parameter strValue */
        &__midl_frag1438,
        { 
        /* strValue */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppdispImage */      /* parameter ppdispImage */
        &__midl_frag918,
        { 
        /* ppdispImage */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag892_t __midl_frag892 =
{ 
/* CreateCLRObjRemote */
    { 
    /* CreateCLRObjRemote */      /* procedure CreateCLRObjRemote */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrObjID */      /* parameter bstrObjID */
        &__midl_frag1438,
        { 
        /* bstrObjID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXmlData */      /* parameter bstrXmlData */
        &__midl_frag1438,
        { 
        /* bstrXmlData */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppDisp */      /* parameter ppDisp */
        &__midl_frag1312,
        { 
        /* ppDisp */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag885_t __midl_frag885 =
{ 
/* NewWorkBench */
    { 
    /* NewWorkBench */      /* procedure NewWorkBench */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrCosmosDoc */      /* parameter bstrCosmosDoc */
        &__midl_frag1438,
        { 
        /* bstrCosmosDoc */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppWorkBenchWindow */      /* parameter ppWorkBenchWindow */
        &__midl_frag1382,
        { 
        /* ppWorkBenchWindow */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag877_t __midl_frag877 =
{ 
/* CreateBrowser */
    { 
    /* CreateBrowser */      /* procedure CreateBrowser */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hParentWnd */      /* parameter hParentWnd */
        &__midl_frag1374,
        { 
        /* hParentWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* strUrls */      /* parameter strUrls */
        &__midl_frag1438,
        { 
        /* strUrls */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppRet */      /* parameter ppRet */
        &__midl_frag1304,
        { 
        /* ppRet */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag865_t __midl_frag865 =
{ 
/* GetWindowClientDefaultNode */
    { 
    /* GetWindowClientDefaultNode */      /* procedure GetWindowClientDefaultNode */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pAddDisp */      /* parameter pAddDisp */
        &__midl_frag1313,
        { 
        /* pAddDisp */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* hParent */      /* parameter hParent */
        &__midl_frag1374,
        { 
        /* hParent */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrWndClaName */      /* parameter bstrWndClaName */
        &__midl_frag1438,
        { 
        /* bstrWndClaName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrGalaxyClusterName */      /* parameter bstrGalaxyClusterName */
        &__midl_frag1438,
        { 
        /* bstrGalaxyClusterName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag861_t __midl_frag861 =
{ 
/* DeleteGalaxy */
    { 
    /* DeleteGalaxy */      /* procedure DeleteGalaxy */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pGalaxy */      /* parameter pGalaxy */
        &__midl_frag1393,
        { 
        /* pGalaxy */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag855_t __midl_frag855 =
{ 
/* InitCLRApp */
    { 
    /* InitCLRApp */      /* procedure InitCLRApp */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 48 /* 0x30 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* strInitXml */      /* parameter strInitXml */
        &__midl_frag1438,
        { 
        /* strInitXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* llHandle */      /* parameter llHandle */
        &__midl_frag1374,
        { 
        /* llHandle */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag853_t __midl_frag853 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x31, 0xdc}
    }
};

static const __midl_frag852_t __midl_frag852 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag853
};

static const __midl_frag851_t __midl_frag851 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag852
};

static const __midl_frag848_t __midl_frag848 =
{ 
/* CreateCosmosCtrl */
    { 
    /* CreateCosmosCtrl */      /* procedure CreateCosmosCtrl */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrAppID */      /* parameter bstrAppID */
        &__midl_frag1438,
        { 
        /* bstrAppID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppRetCtrl */      /* parameter ppRetCtrl */
        &__midl_frag851,
        { 
        /* ppRetCtrl */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag839_t __midl_frag839 =
{ 
/* SetCtrlValueByName */
    { 
    /* SetCtrlValueByName */      /* procedure SetCtrlValueByName */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pCtrl */      /* parameter pCtrl */
        &__midl_frag1313,
        { 
        /* pCtrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrVal */      /* parameter bstrVal */
        &__midl_frag1438,
        { 
        /* bstrVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag829_t __midl_frag829 =
{ 
/* GetCtrlValueByName */
    { 
    /* GetCtrlValueByName */      /* procedure GetCtrlValueByName */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pCtrl */      /* parameter pCtrl */
        &__midl_frag1313,
        { 
        /* pCtrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrVal */      /* parameter bstrVal */
        &__midl_frag1125,
        { 
        /* bstrVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag823_t __midl_frag823 =
{ 
/* GetXobjFromHandle */
    { 
    /* GetXobjFromHandle */      /* procedure GetXobjFromHandle */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppRetXobj */      /* parameter ppRetXobj */
        &__midl_frag1433,
        { 
        /* ppRetXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag813_t __midl_frag813 =
{ 
/* GetCtrlByName */
    { 
    /* GetCtrlByName */      /* procedure GetCtrlByName */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pCtrl */      /* parameter pCtrl */
        &__midl_frag1313,
        { 
        /* pCtrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppCtrlDisp */      /* parameter ppCtrlDisp */
        &__midl_frag1312,
        { 
        /* ppCtrlDisp */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag803_t __midl_frag803 =
{ 
/* ObserveNuclei */
    { 
    /* ObserveNuclei */      /* procedure ObserveNuclei */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 22 /* 0x16 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrGalaxys */      /* parameter bstrGalaxys */
        &__midl_frag1438,
        { 
        /* bstrGalaxys */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bSaveToConfigFile */      /* parameter bSaveToConfigFile */
        &__midl_frag1365,
        { 
        /* bSaveToConfigFile */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag793_t __midl_frag793 =
{ 
/* CreateOutLookObj */
    { 
    /* CreateOutLookObj */      /* procedure CreateOutLookObj */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrObjType */      /* parameter bstrObjType */
        &__midl_frag1438,
        { 
        /* bstrObjType */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nType */      /* parameter nType */
        &__midl_frag1440,
        { 
        /* nType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrURL */      /* parameter bstrURL */
        &__midl_frag1438,
        { 
        /* bstrURL */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppRetDisp */      /* parameter ppRetDisp */
        &__midl_frag1312,
        { 
        /* ppRetDisp */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag789_t __midl_frag789 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x20, 0x16, 0x09, 0x28}
    }
};

static const __midl_frag788_t __midl_frag788 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag789
};

static const __midl_frag787_t __midl_frag787 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag788
};

static const __midl_frag786_t __midl_frag786 =
{ 
/* CreateCosmosEventObj */
    { 
    /* CreateCosmosEventObj */      /* procedure CreateCosmosEventObj */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppWebRTEventObj */      /* parameter ppWebRTEventObj */
        &__midl_frag787,
        { 
        /* ppWebRTEventObj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag767_t __midl_frag767 =
{ 
/* MessageBox */
    { 
    /* MessageBox */      /* procedure MessageBox */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 24 /* 0x18 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrContext */      /* parameter bstrContext */
        &__midl_frag1438,
        { 
        /* bstrContext */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrCaption */      /* parameter bstrCaption */
        &__midl_frag1438,
        { 
        /* bstrCaption */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* nStyle */      /* parameter nStyle */
        &__midl_frag1440,
        { 
        /* nStyle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* nRet */      /* parameter nRet */
        &__midl_frag1440,
        { 
        /* nRet */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag763_t __midl_frag763 =
{ 
/* FireCosmosEventObj */
    { 
    /* FireCosmosEventObj */      /* procedure FireCosmosEventObj */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pWebRTEventObj */      /* parameter pWebRTEventObj */
        &__midl_frag788,
        { 
        /* pWebRTEventObj */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag756_t __midl_frag756 =
{ 
/* SetItemText */
    { 
    /* SetItemText */      /* procedure SetItemText */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pXobj */      /* parameter pXobj */
        &__midl_frag1434,
        { 
        /* pXobj */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nCtrlID */      /* parameter nCtrlID */
        &__midl_frag1440,
        { 
        /* nCtrlID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrText */      /* parameter bstrText */
        &__midl_frag1438,
        { 
        /* bstrText */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag747_t __midl_frag747 =
{ 
/* GetItemText */
    { 
    /* GetItemText */      /* procedure GetItemText */
        (NDR64_UINT32) 5112131 /* 0x4e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pXobj */      /* parameter pXobj */
        &__midl_frag1434,
        { 
        /* pXobj */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nCtrlID */      /* parameter nCtrlID */
        &__midl_frag1440,
        { 
        /* nCtrlID */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* nMaxLengeh */      /* parameter nMaxLengeh */
        &__midl_frag1440,
        { 
        /* nMaxLengeh */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrRet */      /* parameter bstrRet */
        &__midl_frag1125,
        { 
        /* bstrRet */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag741_t __midl_frag741 =
{ 
/* GetNucleus */
    { 
    /* GetNucleus */      /* procedure GetNucleus */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hHostWnd */      /* parameter hHostWnd */
        &__midl_frag1374,
        { 
        /* hHostWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppNucleus */      /* parameter ppNucleus */
        &__midl_frag1392,
        { 
        /* ppNucleus */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag735_t __midl_frag735 =
{ 
/* CreateApplication */
    { 
    /* CreateApplication */      /* procedure CreateApplication */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrAppID */      /* parameter bstrAppID */
        &__midl_frag1438,
        { 
        /* bstrAppID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag718_t __midl_frag718 =
{ 
/* CreateNucleusGroup */
    { 
    /* CreateNucleusGroup */      /* procedure CreateNucleusGroup */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hWnd */      /* parameter hWnd */
        &__midl_frag1374,
        { 
        /* hWnd */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppNucleusCluster */      /* parameter ppNucleusCluster */
        &__midl_frag1387,
        { 
        /* ppNucleusCluster */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag707_t __midl_frag707 =
{ 
/* NavigateNode */
    { 
    /* NavigateNode */      /* procedure NavigateNode */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pXobj */      /* parameter pXobj */
        &__midl_frag1434,
        { 
        /* pXobj */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrBrowserID */      /* parameter bstrBrowserID */
        &__midl_frag1438,
        { 
        /* bstrBrowserID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1433,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag700_t __midl_frag700 =
{ 
/* get_RemoteCosmos */
    { 
    /* get_RemoteCosmos */      /* procedure get_RemoteCosmos */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrID */      /* parameter bstrID */
        &__midl_frag1438,
        { 
        /* bstrID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1350,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag688_t __midl_frag688 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x20, 0x16, 0x01, 0x01}
    }
};

static const __midl_frag687_t __midl_frag687 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag688
};

static const __midl_frag686_t __midl_frag686 =
{ 
/* put_Extender */
    { 
    /* put_Extender */      /* procedure put_Extender */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag687,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag682_t __midl_frag682 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag687
};

static const __midl_frag681_t __midl_frag681 =
{ 
/* get_Extender */
    { 
    /* get_Extender */      /* procedure get_Extender */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag682,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag626_t __midl_frag626 =
{ 
/* NavigateURL */
    { 
    /* NavigateURL */      /* procedure NavigateURL */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrURL */      /* parameter bstrURL */
        &__midl_frag1438,
        { 
        /* bstrURL */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dispObjforScript */      /* parameter dispObjforScript */
        &__midl_frag1313,
        { 
        /* dispObjforScript */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag619_t __midl_frag619 =
{ 
/* SetCtrlValueByName */
    { 
    /* SetCtrlValueByName */      /* procedure SetCtrlValueByName */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrVal */      /* parameter bstrVal */
        &__midl_frag1438,
        { 
        /* bstrVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag611_t __midl_frag611 =
{ 
/* GetCtrlValueByName */
    { 
    /* GetCtrlValueByName */      /* procedure GetCtrlValueByName */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrVal */      /* parameter bstrVal */
        &__midl_frag1125,
        { 
        /* bstrVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag604_t __midl_frag604 =
{ 
/* GetXobjByName */
    { 
    /* GetXobjByName */      /* procedure GetXobjByName */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1002,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag593_t __midl_frag593 =
{ 
/* ObserveEx */
    { 
    /* ObserveEx */      /* procedure ObserveEx */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nRow */      /* parameter nRow */
        &__midl_frag1440,
        { 
        /* nRow */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nCol */      /* parameter nCol */
        &__midl_frag1440,
        { 
        /* nCol */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppRetXobj */      /* parameter ppRetXobj */
        &__midl_frag1433,
        { 
        /* ppRetXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag588_t __midl_frag588 =
{ 
/* LoadXML */
    { 
    /* LoadXML */      /* procedure LoadXML */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nType */      /* parameter nType */
        &__midl_frag1440,
        { 
        /* nType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXML */      /* parameter bstrXML */
        &__midl_frag1438,
        { 
        /* bstrXML */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag566_t __midl_frag566 =
{ 
/* SendIPCMessage */
    { 
    /* SendIPCMessage */      /* procedure SendIPCMessage */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrTo */      /* parameter bstrTo */
        &__midl_frag1438,
        { 
        /* bstrTo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrPayload */      /* parameter bstrPayload */
        &__midl_frag1438,
        { 
        /* bstrPayload */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrExtra */      /* parameter bstrExtra */
        &__midl_frag1438,
        { 
        /* bstrExtra */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* bstrMsgId */      /* parameter bstrMsgId */
        &__midl_frag1438,
        { 
        /* bstrMsgId */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* bstrRes */      /* parameter bstrRes */
        &__midl_frag1125,
        { 
        /* bstrRes */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag558_t __midl_frag558 =
{ 
/* GetCtrlByName */
    { 
    /* GetCtrlByName */      /* procedure GetCtrlByName */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 6 /* 0x6 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bFindInChild */      /* parameter bFindInChild */
        &__midl_frag1365,
        { 
        /* bFindInChild */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppCtrlDisp */      /* parameter ppCtrlDisp */
        &__midl_frag1312,
        { 
        /* ppCtrlDisp */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag551_t __midl_frag551 =
{ 
/* GetXobj */
    { 
    /* GetXobj */      /* procedure GetXobj */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nRow */      /* parameter nRow */
        &__midl_frag1440,
        { 
        /* nRow */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nCol */      /* parameter nCol */
        &__midl_frag1440,
        { 
        /* nCol */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag539_t __midl_frag539 =
{ 
/* GetXobjs */
    { 
    /* GetXobjs */      /* procedure GetXobjs */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrName */      /* parameter bstrName */
        &__midl_frag1438,
        { 
        /* bstrName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppXobjs */      /* parameter ppXobjs */
        &__midl_frag1002,
        { 
        /* ppXobjs */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pCount */      /* parameter pCount */
        &__midl_frag1440,
        { 
        /* pCount */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag530_t __midl_frag530 =
{ 
/* get_OfficeObj */
    { 
    /* get_OfficeObj */      /* procedure get_OfficeObj */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1312,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag375_t __midl_frag375 =
{ 
/* get_Objects */
    { 
    /* get_Objects */      /* procedure get_Objects */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nType */      /* parameter nType */
        &__midl_frag1440,
        { 
        /* nType */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppXobjColletion */      /* parameter ppXobjColletion */
        &__midl_frag1002,
        { 
        /* ppXobjColletion */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag290_t __midl_frag290 =
{ 
/* put_Value */
    { 
    /* put_Value */      /* procedure put_Value */
        (NDR64_UINT32) 36438339 /* 0x22c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation, actual guaranteed */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1412,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag287_t __midl_frag287 =
{ 
/* *UINT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1440
};

static const __midl_frag283_t __midl_frag283 =
{ 
/* *ULONGLONG */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1374
};

static const __midl_frag279_t __midl_frag279 =
{ 
/* *USHORT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1365
};

static const __midl_frag278_t __midl_frag278 =
0x10    /* FC64_CHAR */;

static const __midl_frag277_t __midl_frag277 =
{ 
/* *CHAR */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag278
};

static const __midl_frag276_t __midl_frag276 =
{ 
/* *DECIMAL */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag275
};

static const __midl_frag275_t __midl_frag275 =
{ 
/* DECIMAL */
    { 
    /* DECIMAL */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DECIMAL */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag267_t __midl_frag267 =
{ 
/* **_wireVARIANT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1406
};

static const __midl_frag266_t __midl_frag266 =
{ 
/* *_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag169
};

static const __midl_frag265_t __midl_frag265 =
{ 
/* **_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag266
};

static const __midl_frag264_t __midl_frag264 =
{ 
/* ***_wireSAFEARRAY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag265
};

static const __midl_frag261_t __midl_frag261 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1313
};

static const __midl_frag258_t __midl_frag258 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1212
};

static const __midl_frag256_t __midl_frag256 =
{ 
/* **FLAGGED_WORD_BLOB */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1126
};

static const __midl_frag255_t __midl_frag255 =
0xc    /* FC64_FLOAT64 */;

static const __midl_frag254_t __midl_frag254 =
{ 
/* *DATE */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag255
};

static const __midl_frag253_t __midl_frag253 =
{ 
/* *CY */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag160
};

static const __midl_frag246_t __midl_frag246 =
0xb    /* FC64_FLOAT32 */;

static const __midl_frag245_t __midl_frag245 =
{ 
/* *FLOAT */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag246
};

static const __midl_frag238_t __midl_frag238 =
0x2    /* FC64_INT8 */;

static const __midl_frag237_t __midl_frag237 =
{ 
/* *BYTE */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag238
};

static const __midl_frag236_t __midl_frag236 =
{ 
/* *_wireBRECORD */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag201
};

static const __midl_frag235_t __midl_frag235 =
{ 
/*  */
    { 
    /* *hyper */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag232
    }
};

static const __midl_frag233_t __midl_frag233 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag232_t __midl_frag232 =
{ 
/* *hyper */
    { 
    /* *hyper */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *hyper */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag233
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1374
    }
};

static const __midl_frag231_t __midl_frag231 =
{ 
/* HYPER_SIZEDARR */
    { 
    /* HYPER_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* HYPER_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag235,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag230_t __midl_frag230 =
{ 
/*  */
    { 
    /* *ULONG */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag227
    }
};

static const __midl_frag227_t __midl_frag227 =
{ 
/* *ULONG */
    { 
    /* *ULONG */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *ULONG */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag233
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag1440
    }
};

static const __midl_frag226_t __midl_frag226 =
{ 
/* DWORD_SIZEDARR */
    { 
    /* DWORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DWORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag230,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag225_t __midl_frag225 =
{ 
/*  */
    { 
    /* *short */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag222
    }
};

static const __midl_frag222_t __midl_frag222 =
{ 
/* *short */
    { 
    /* *short */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* *short */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag233
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1365
    }
};

static const __midl_frag221_t __midl_frag221 =
{ 
/* WORD_SIZEDARR */
    { 
    /* WORD_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WORD_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag225,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag220_t __midl_frag220 =
{ 
/*  */
    { 
    /* *byte */
        0x22,    /* FC64_OP */
        (NDR64_UINT8) 32 /* 0x20 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag217
    }
};

static const __midl_frag217_t __midl_frag217 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag233
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag238
    }
};

static const __midl_frag216_t __midl_frag216 =
{ 
/* BYTE_SIZEDARR */
    { 
    /* BYTE_SIZEDARR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* BYTE_SIZEDARR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag220,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag215_t __midl_frag215 =
{ 
/*  */
    { 
    /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
        0x40,    /* FC64_FIX_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* struct _NDR64_FIX_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag214_t __midl_frag214 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag209
    }
};

static const __midl_frag210_t __midl_frag210 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag209_t __midl_frag209 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag210
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag1213
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1212
    }
};

static const __midl_frag208_t __midl_frag208 =
{ 
/* SAFEARR_HAVEIID */
    { 
    /* SAFEARR_HAVEIID */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_HAVEIID */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        &__midl_frag214,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x4,    /* FC64_INT16 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag215
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag207_t __midl_frag207 =
{ 
/*  */
    { 
    /* **_wireBRECORD */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag199
    }
};

static const __midl_frag204_t __midl_frag204 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag203_t __midl_frag203 =
{ 
/* *byte */
    { 
    /* *byte */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *byte */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag204
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag238
    }
};

static const __midl_frag202_t __midl_frag202 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x0000002f,
        0x0000,
        0x0000,
        {0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46}
    }
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* _wireBRECORD */
    { 
    /* _wireBRECORD */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *struct _NDR64_POINTER_FORMAT */
            0x24,    /* FC64_IP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag202
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *byte */
            0x22,    /* FC64_OP */
            (NDR64_UINT8) 32 /* 0x20 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag203
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag199_t __midl_frag199 =
{ 
/* **_wireBRECORD */
    { 
    /* **_wireBRECORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireBRECORD */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag210
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireBRECORD */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag201
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag236
    }
};

static const __midl_frag198_t __midl_frag198 =
{ 
/* SAFEARR_BRECORD */
    { 
    /* SAFEARR_BRECORD */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BRECORD */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag207,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag197_t __midl_frag197 =
{ 
/*  */
    { 
    /* **_wireVARIANT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag194
    }
};

static const __midl_frag194_t __midl_frag194 =
{ 
/* **_wireVARIANT */
    { 
    /* **_wireVARIANT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **_wireVARIANT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag210
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *_wireVARIANT */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag149
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1406
    }
};

static const __midl_frag193_t __midl_frag193 =
{ 
/* SAFEARR_VARIANT */
    { 
    /* SAFEARR_VARIANT */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_VARIANT */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag197,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag192_t __midl_frag192 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag187
    }
};

static const __midl_frag188_t __midl_frag188 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag187_t __midl_frag187 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag188
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag1314
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1313
    }
};

static const __midl_frag186_t __midl_frag186 =
{ 
/* SAFEARR_DISPATCH */
    { 
    /* SAFEARR_DISPATCH */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_DISPATCH */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag192,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag185_t __midl_frag185 =
{ 
/*  */
    { 
    /* **struct _NDR64_POINTER_FORMAT */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag180
    }
};

static const __midl_frag181_t __midl_frag181 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag180_t __midl_frag180 =
{ 
/* ** */
    { 
    /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag181
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *struct _NDR64_POINTER_FORMAT */
                0x24,    /* FC64_IP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag1213
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1212
    }
};

static const __midl_frag179_t __midl_frag179 =
{ 
/* SAFEARR_UNKNOWN */
    { 
    /* SAFEARR_UNKNOWN */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_UNKNOWN */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag185,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag178_t __midl_frag178 =
{ 
/*  */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x20,    /* FC64_RP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag175
    }
};

static const __midl_frag175_t __midl_frag175 =
{ 
/* **FLAGGED_WORD_BLOB */
    { 
    /* **FLAGGED_WORD_BLOB */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* **FLAGGED_WORD_BLOB */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag181
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *FLAGGED_WORD_BLOB */
                0x22,    /* FC64_OP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag7
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag1126
    }
};

static const __midl_frag174_t __midl_frag174 =
{ 
/* SAFEARR_BSTR */
    { 
    /* SAFEARR_BSTR */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* SAFEARR_BSTR */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag178,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag173_t __midl_frag173 =
{ 
/* SAFEARRAYUNION */
    { 
    /* SAFEARRAYUNION */
        0x50,    /* FC64_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 10 /* 0xa */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag174,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag179,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag186,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 12 /* 0xc */,
        &__midl_frag193,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag198,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 32781 /* 0x800d */,
        &__midl_frag208,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag216,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag221,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag226,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag231,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag172_t __midl_frag172 =
{ 
/* SAFEARRAYBOUND */
    { 
    /* SAFEARRAYBOUND */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* SAFEARRAYBOUND */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag171_t __midl_frag171 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag170_t __midl_frag170 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag171
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag172
    }
};

static const __midl_frag169_t __midl_frag169 =
{ 
/* _wireSAFEARRAY */
    { 
    /* _wireSAFEARRAY */
        0x36,    /* FC64_CONF_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireSAFEARRAY */
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 1 /* 0x1 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        0,
        0,
        0,
        &__midl_frag170,
    },
    { 
    /*  */
        { 
        /* _wireSAFEARRAY */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 1 /* 0x1 */,
            (NDR64_UINT16) 12 /* 0xc */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag173
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag160_t __midl_frag160 =
{ 
/* CY */
    { 
    /* CY */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* CY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag151_t __midl_frag151 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x3,    /* FC64_UINT16 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag150_t __midl_frag150 =
{ 
/* __MIDL_IOleAutomationTypes_0004 */
    { 
    /* __MIDL_IOleAutomationTypes_0004 */
        0x51,    /* FC64_NON_ENCAPSULATED_UNION */
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT8) 0 /* 0x0 */,
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag151,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM_SELECTOR */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT8) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 47 /* 0x2f */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 20 /* 0x14 */,
        &__midl_frag1374,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 3 /* 0x3 */,
        &__midl_frag1440,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 17 /* 0x11 */,
        &__midl_frag238,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 2 /* 0x2 */,
        &__midl_frag1365,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 4 /* 0x4 */,
        &__midl_frag246,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 5 /* 0x5 */,
        &__midl_frag255,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 11 /* 0xb */,
        &__midl_frag1365,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 10 /* 0xa */,
        &__midl_frag1440,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 6 /* 0x6 */,
        &__midl_frag160,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 7 /* 0x7 */,
        &__midl_frag255,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8 /* 0x8 */,
        &__midl_frag1126,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 13 /* 0xd */,
        &__midl_frag1212,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 9 /* 0x9 */,
        &__midl_frag1313,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 8192 /* 0x2000 */,
        &__midl_frag265,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 36 /* 0x24 */,
        &__midl_frag236,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16420 /* 0x4024 */,
        &__midl_frag236,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16401 /* 0x4011 */,
        &__midl_frag237,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16386 /* 0x4002 */,
        &__midl_frag279,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16387 /* 0x4003 */,
        &__midl_frag287,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16404 /* 0x4014 */,
        &__midl_frag283,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16388 /* 0x4004 */,
        &__midl_frag245,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16389 /* 0x4005 */,
        &__midl_frag254,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16395 /* 0x400b */,
        &__midl_frag279,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16394 /* 0x400a */,
        &__midl_frag287,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16390 /* 0x4006 */,
        &__midl_frag253,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16391 /* 0x4007 */,
        &__midl_frag254,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16392 /* 0x4008 */,
        &__midl_frag256,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16397 /* 0x400d */,
        &__midl_frag258,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16393 /* 0x4009 */,
        &__midl_frag261,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 24576 /* 0x6000 */,
        &__midl_frag264,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16396 /* 0x400c */,
        &__midl_frag267,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16 /* 0x10 */,
        &__midl_frag278,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 18 /* 0x12 */,
        &__midl_frag1365,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 19 /* 0x13 */,
        &__midl_frag1440,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 21 /* 0x15 */,
        &__midl_frag1374,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 22 /* 0x16 */,
        &__midl_frag1440,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 23 /* 0x17 */,
        &__midl_frag1440,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 14 /* 0xe */,
        &__midl_frag275,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16398 /* 0x400e */,
        &__midl_frag276,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16400 /* 0x4010 */,
        &__midl_frag277,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16402 /* 0x4012 */,
        &__midl_frag279,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16403 /* 0x4013 */,
        &__midl_frag287,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16405 /* 0x4015 */,
        &__midl_frag283,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16406 /* 0x4016 */,
        &__midl_frag287,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 16407 /* 0x4017 */,
        &__midl_frag287,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 0 /* 0x0 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    { 
    /* struct _NDR64_UNION_ARM */
        (NDR64_INT64) 1 /* 0x1 */,
        0,
        (NDR64_UINT32) 0 /* 0x0 */
    },
    (NDR64_UINT32) 4294967295 /* 0xffffffff */
};

static const __midl_frag149_t __midl_frag149 =
{ 
/* _wireVARIANT */
    { 
    /* _wireVARIANT */
        0x34,    /* FC64_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _wireVARIANT */
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        0,
        0,
        0,
    },
    { 
    /*  */
        { 
        /* _wireVARIANT */
            0x30,    /* FC64_STRUCT */
            (NDR64_UINT8) 3 /* 0x3 */,
            (NDR64_UINT16) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_EMBEDDED_COMPLEX_FORMAT */
            0x91,    /* FC64_EMBEDDED_COMPLEX */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag150
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag144_t __midl_frag144 =
{ 
/* get_Value */
    { 
    /* get_Value */      /* procedure get_Value */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1405,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag139_t __midl_frag139 =
{ 
/* put_Object */
    { 
    /* put_Object */      /* procedure put_Object */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1313,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag133_t __midl_frag133 =
{ 
/* get_Object */
    { 
    /* get_Object */      /* procedure get_Object */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nIndex */      /* parameter nIndex */
        &__midl_frag1440,
        { 
        /* nIndex */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1312,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* put_EventName */
    { 
    /* put_EventName */      /* procedure put_EventName */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1438,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag124_t __midl_frag124 =
{ 
/* get_EventName */
    { 
    /* get_EventName */      /* procedure get_EventName */
        (NDR64_UINT32) 4849987 /* 0x4a0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn, ClientCorrelation */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1125,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* put_Index */
    { 
    /* put_Index */      /* procedure put_Index */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1440,
        { 
        /* newVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* get_Index */
    { 
    /* get_Index */      /* procedure get_Index */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* nVal */      /* parameter nVal */
        &__midl_frag1440,
        { 
        /* nVal */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag113_t __midl_frag113 =
{ 
/* put_eventSource */
    { 
    /* put_eventSource */      /* procedure put_eventSource */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* eventSource */      /* parameter eventSource */
        &__midl_frag1313,
        { 
        /* eventSource */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag108_t __midl_frag108 =
{ 
/* get_eventSource */
    { 
    /* get_eventSource */      /* procedure get_eventSource */
        (NDR64_UINT32) 655683 /* 0xa0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1312,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag102_t __midl_frag102 =
{ 
/* InsertNode */
    { 
    /* InsertNode */      /* procedure InsertNode */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* hItem */      /* parameter hItem */
        &__midl_frag1440,
        { 
        /* hItem */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag97_t __midl_frag97 =
{ 
/* AddTreeNode */
    { 
    /* AddTreeNode */      /* procedure AddTreeNode */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* hItem */      /* parameter hItem */
        &__midl_frag1440,
        { 
        /* hItem */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag91_t __midl_frag91 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x83, 0xa6}
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag91
};

static const __midl_frag87_t __midl_frag87 =
{ 
/* put_TangramTreeViewCallBack */
    { 
    /* put_TangramTreeViewCallBack */      /* procedure put_TangramTreeViewCallBack */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag90,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag80_t __midl_frag80 =
{ 
/* CosmosAction */
    { 
    /* CosmosAction */      /* procedure CosmosAction */
        (NDR64_UINT32) 7209283 /* 0x6e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrRetXml */      /* parameter bstrRetXml */
        &__midl_frag1125,
        { 
        /* bstrRetXml */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag67_t __midl_frag67 =
{ 
/* OnClick */
    { 
    /* OnClick */      /* procedure OnClick */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXmlData */      /* parameter bstrXmlData */
        &__midl_frag1438,
        { 
        /* bstrXmlData */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag63_t __midl_frag63 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x19631222,
        0x1992,
        0x0612,
        {0x19, 0x65, 0x06, 0x01, 0x19, 0x82, 0x83, 0xa5}
    }
};

static const __midl_frag62_t __midl_frag62 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag63
};

static const __midl_frag61_t __midl_frag61 =
{ 
/* OnInitTreeView */
    { 
    /* OnInitTreeView */      /* procedure OnInitTreeView */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pTangramTreeView */      /* parameter pTangramTreeView */
        &__midl_frag62,
        { 
        /* pTangramTreeView */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag58_t __midl_frag58 =
{ 
/* *long */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag1440
};

static const __midl_frag57_t __midl_frag57 =
{ 
/* get_Pages */
    { 
    /* get_Pages */      /* procedure get_Pages */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 32 /* 0x20 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* retVal */      /* parameter retVal */
        &__midl_frag1440,
        { 
        /* retVal */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* put_WndXobj */
    { 
    /* put_WndXobj */      /* procedure put_WndXobj */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1434,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* GetActiveTopXobj */
    { 
    /* GetActiveTopXobj */      /* procedure GetActiveTopXobj */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pForm */      /* parameter pForm */
        &__midl_frag1313,
        { 
        /* pForm */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* WndXobj */      /* parameter WndXobj */
        &__midl_frag1433,
        { 
        /* WndXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag33_t __midl_frag33 =
{ 
/* GetNucleusFromVBAForm */
    { 
    /* GetNucleusFromVBAForm */      /* procedure GetNucleusFromVBAForm */
        (NDR64_UINT32) 917827 /* 0xe0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* pForm */      /* parameter pForm */
        &__midl_frag1313,
        { 
        /* pForm */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ppNucleus */      /* parameter ppNucleus */
        &__midl_frag1392,
        { 
        /* ppNucleus */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* InitVBAForm */
    { 
    /* InitVBAForm */      /* procedure InitVBAForm */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* newVal */      /* parameter newVal */
        &__midl_frag1313,
        { 
        /* newVal */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* nStyle */      /* parameter nStyle */
        &__midl_frag1440,
        { 
        /* nStyle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppXobj */      /* parameter ppXobj */
        &__midl_frag1433,
        { 
        /* ppXobj */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* AddVBAFormsScript */
    { 
    /* AddVBAFormsScript */      /* procedure AddVBAFormsScript */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* OfficeObject */      /* parameter OfficeObject */
        &__midl_frag1313,
        { 
        /* OfficeObject */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* bstrKey */      /* parameter bstrKey */
        &__midl_frag1438,
        { 
        /* bstrKey */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* bstrXml */      /* parameter bstrXml */
        &__midl_frag1438,
        { 
        /* bstrXml */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag9_t __midl_frag9 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/*  */
    { 
    /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 1 /* 0x1 */,
        { 
        /* struct _NDR64_CONF_ARRAY_HEADER_FORMAT */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag9
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 2 /* 0x2 */,
        &__midl_frag1365
    }
};

static const __midl_frag7_t __midl_frag7 =
{ 
/* FLAGGED_WORD_BLOB */
    { 
    /* FLAGGED_WORD_BLOB */
        0x32,    /* FC64_CONF_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* FLAGGED_WORD_BLOB */
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        &__midl_frag8
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* get_ActiveWorkBenchWindow */
    { 
    /* get_ActiveWorkBenchWindow */      /* procedure get_ActiveWorkBenchWindow */
        (NDR64_UINT32) 3014979 /* 0x2e0143 */,    /* auto handle */ /* IsIntrepreted, [object], ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* bstrID */      /* parameter bstrID */
        &__midl_frag1438,
        { 
        /* bstrID */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pVal */      /* parameter pVal */
        &__midl_frag1382,
        { 
        /* pVal */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out] */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Close */
    { 
    /* Close */      /* procedure Close */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag1440,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"


XFG_TRAMPOLINES64(BSTR)
XFG_TRAMPOLINES64(VARIANT)

static const USER_MARSHAL_ROUTINE_QUADRUPLE NDR64_UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserSize64)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserMarshal64)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserUnmarshal64)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(BSTR_UserFree64)
            
            }
            ,
            {
            (USER_MARSHAL_SIZING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserSize64)
            ,(USER_MARSHAL_MARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserMarshal64)
            ,(USER_MARSHAL_UNMARSHALLING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserUnmarshal64)
            ,(USER_MARSHAL_FREEING_ROUTINE)XFG_TRAMPOLINE_FPTR(VARIANT_UserFree64)
            
            }
            

        };



/* Standard interface: __MIDL_itf_Universe_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IWebRTExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x01,0x01}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTExtender_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag2,
    &__midl_frag4
    };


static const MIDL_SYNTAX_INFO IWebRTExtender_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTExtender_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTExtender_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTExtender_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTExtender_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTExtender_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTExtender_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTExtender_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(9) _IWebRTExtenderProxyVtbl = 
{
    &IWebRTExtender_ProxyInfo,
    &IID_IWebRTExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTExtender::Close */ ,
    (void *) (INT_PTR) -1 /* IWebRTExtender::get_ActiveWorkBenchWindow */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTExtenderStubVtbl =
{
    &IID_IWebRTExtender,
    &IWebRTExtender_ServerInfo,
    9,
    &IWebRTExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x18}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IEclipseExtender_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag2,
    &__midl_frag4,
    0
    };


static const MIDL_SYNTAX_INFO IEclipseExtender_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IEclipseExtender_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseExtender_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IEclipseExtender_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IEclipseExtender_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IEclipseExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IEclipseExtender_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IEclipseExtender_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(9) _IEclipseExtenderProxyVtbl = 
{
    0,
    &IID_IEclipseExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* forced delegation IWebRTExtender::Close */ ,
    0 /* forced delegation IWebRTExtender::get_ActiveWorkBenchWindow */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IEclipseExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IEclipseExtenderStubVtbl =
{
    &IID_IEclipseExtender,
    &IEclipseExtender_ServerInfo,
    9,
    &IEclipseExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x63,0x12,0x22}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IOfficeExtender_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag2,
    &__midl_frag4,
    &__midl_frag15,
    &__midl_frag23,
    &__midl_frag33,
    &__midl_frag40,
    &__midl_frag133
    };


static const MIDL_SYNTAX_INFO IOfficeExtender_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IOfficeExtender_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeExtender_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IOfficeExtender_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IOfficeExtender_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IOfficeExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IOfficeExtender_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IOfficeExtender_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(14) _IOfficeExtenderProxyVtbl = 
{
    &IOfficeExtender_ProxyInfo,
    &IID_IOfficeExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTExtender::Close */ ,
    (void *) (INT_PTR) -1 /* IWebRTExtender::get_ActiveWorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::AddVBAFormsScript */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::InitVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetNucleusFromVBAForm */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetActiveTopXobj */ ,
    (void *) (INT_PTR) -1 /* IOfficeExtender::GetObjectFromWnd */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IOfficeExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IOfficeExtenderStubVtbl =
{
    &IID_IOfficeExtender,
    &IOfficeExtender_ServerInfo,
    14,
    &IOfficeExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTTreeNode, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0xC9,0x51}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTTreeNode_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    0
    };


static const MIDL_SYNTAX_INFO IWebRTTreeNode_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeNode_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTTreeNode_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTTreeNode_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeNode_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeNode_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTTreeNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTTreeNode_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeNode_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IWebRTTreeNodeProxyVtbl = 
{
    0,
    &IID_IWebRTTreeNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTTreeNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl _IWebRTTreeNodeStubVtbl =
{
    &IID_IWebRTTreeNode,
    &IWebRTTreeNode_ServerInfo,
    7,
    &IWebRTTreeNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTTreeViewCallBack, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA6}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTTreeViewCallBack_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag53,
    &__midl_frag57,
    &__midl_frag61,
    &__midl_frag67,
    &__midl_frag129,
    &__midl_frag121,
    &__midl_frag80
    };


static const MIDL_SYNTAX_INFO IWebRTTreeViewCallBack_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeViewCallBack_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTTreeViewCallBack_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTTreeViewCallBack_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeViewCallBack_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeViewCallBack_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTTreeViewCallBack_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTTreeViewCallBack_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeViewCallBack_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(14) _IWebRTTreeViewCallBackProxyVtbl = 
{
    &IWebRTTreeViewCallBack_ProxyInfo,
    &IID_IWebRTTreeViewCallBack,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::put_WndXobj */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::get_Pages */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::OnInitTreeView */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::OnClick */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::OnInit */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::OnNewPage */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeViewCallBack::CosmosAction */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTTreeViewCallBack_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTTreeViewCallBackStubVtbl =
{
    &IID_IWebRTTreeViewCallBack,
    &IWebRTTreeViewCallBack_ServerInfo,
    14,
    &IWebRTTreeViewCallBack_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTTreeView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x83,0xA5}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTTreeView_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag87,
    &__midl_frag117,
    &__midl_frag97,
    &__midl_frag102
    };


static const MIDL_SYNTAX_INFO IWebRTTreeView_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeView_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTTreeView_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTTreeView_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTTreeView_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeView_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTTreeView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTTreeView_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTTreeView_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) _IWebRTTreeViewProxyVtbl = 
{
    &IWebRTTreeView_ProxyInfo,
    &IID_IWebRTTreeView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeView::put_TangramTreeViewCallBack */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeView::get_FirstRoot */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeView::AddTreeNode */ ,
    (void *) (INT_PTR) -1 /* IWebRTTreeView::InsertNode */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTTreeView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTTreeViewStubVtbl =
{
    &IID_IWebRTTreeView,
    &IWebRTTreeView_ServerInfo,
    11,
    &IWebRTTreeView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTEventObj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x28}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTEventObj_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag108,
    &__midl_frag113,
    &__midl_frag117,
    &__midl_frag121,
    &__midl_frag124,
    &__midl_frag129,
    &__midl_frag133,
    &__midl_frag139,
    &__midl_frag144,
    &__midl_frag290
    };


static const MIDL_SYNTAX_INFO IWebRTEventObj_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTEventObj_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTEventObj_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTEventObj_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTEventObj_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTEventObj_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTEventObj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTEventObj_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTEventObj_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(17) _IWebRTEventObjProxyVtbl = 
{
    &IWebRTEventObj_ProxyInfo,
    &IID_IWebRTEventObj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::get_eventSource */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::put_eventSource */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::get_Index */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::put_Index */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::get_EventName */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::put_EventName */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::get_Object */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::put_Object */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::get_Value */ ,
    (void *) (INT_PTR) -1 /* IWebRTEventObj::put_Value */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTEventObj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTEventObjStubVtbl =
{
    &IID_IWebRTEventObj,
    &IWebRTEventObj_ServerInfo,
    17,
    &IWebRTEventObj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IXobj, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x04}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXobj_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1001,
    &__midl_frag1215,
    &__midl_frag1215,
    &__midl_frag1215,
    &__midl_frag1215,
    &__midl_frag1215,
    &__midl_frag1396,
    &__midl_frag1123,
    &__midl_frag1437,
    &__midl_frag1386,
    &__midl_frag1396,
    &__midl_frag1354,
    &__midl_frag1092,
    &__midl_frag1123,
    &__midl_frag1437,
    &__midl_frag1123,
    &__midl_frag1437,
    &__midl_frag375,
    &__midl_frag1372,
    &__midl_frag1036,
    &__midl_frag735,
    &__midl_frag1354,
    &__midl_frag1359,
    &__midl_frag1123,
    &__midl_frag1123,
    &__midl_frag987,
    &__midl_frag1123,
    &__midl_frag1215,
    &__midl_frag1215,
    &__midl_frag1391,
    &__midl_frag1123,
    &__midl_frag530,
    &__midl_frag929,
    &__midl_frag1123,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1396,
    &__midl_frag1276,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1391,
    &__midl_frag530,
    &__midl_frag1276,
    &__midl_frag539,
    &__midl_frag551,
    &__midl_frag558,
    &__midl_frag566,
    &__midl_frag1334,
    &__midl_frag588,
    &__midl_frag593,
    &__midl_frag604,
    &__midl_frag611,
    &__midl_frag619,
    &__midl_frag626,
    &__midl_frag1085,
    &__midl_frag1036
    };


static const MIDL_SYNTAX_INFO IXobj_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IXobj_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXobj_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXobj_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IXobj_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IXobj_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXobj_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXobj_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IXobj_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(75) _IXobjProxyVtbl = 
{
    &IXobj_ProxyInfo,
    &IID_IXobj,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_ChildNodes */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Rows */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Cols */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Row */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Col */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_XobjType */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_ParentXobj */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_URL */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_URL */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Nuclei */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_RootXobj */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_XObject */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_AxPlugIn */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Caption */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Caption */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Name */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Name */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Objects */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Attribute */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Attribute */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Tag */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Tag */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_OuterXml */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Key */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_WebView */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_NameAtWindowPage */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Width */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Height */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_WinNucleus */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_XML */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_DocXml */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_rgbMiddle */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_rgbRightBottom */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_rgbLeftTop */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Hmin */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Hmin */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Hmax */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Hmax */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Vmin */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Vmin */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_Vmax */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_Vmax */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_HostXobj */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_HostXobj */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IXobj::put_ActivePage */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_HostGalaxy */ ,
    (void *) (INT_PTR) -1 /* IXobj::get_OfficeObj */ ,
    (void *) (INT_PTR) -1 /* IXobj::ActiveTabPage */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetXobjs */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetXobj */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* IXobj::SendIPCMessage */ ,
    (void *) (INT_PTR) -1 /* IXobj::Observe */ ,
    (void *) (INT_PTR) -1 /* IXobj::LoadXML */ ,
    (void *) (INT_PTR) -1 /* IXobj::ObserveEx */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetXobjByName */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IXobj::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IXobj::NavigateURL */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetChildXobjByName */ ,
    (void *) (INT_PTR) -1 /* IXobj::GetUIScript */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IXobj_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IXobjStubVtbl =
{
    &IID_IXobj,
    &IXobj_ServerInfo,
    75,
    &IXobj_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAppExtender, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x20,0x07}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IAppExtender_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1437
    };


static const MIDL_SYNTAX_INFO IAppExtender_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IAppExtender_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IAppExtender_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IAppExtender_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IAppExtender_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IAppExtender_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IAppExtender_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IAppExtender_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(8) _IAppExtenderProxyVtbl = 
{
    &IAppExtender_ProxyInfo,
    &IID_IAppExtender,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IAppExtender::ProcessNotify */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IAppExtender_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3
};

CInterfaceStubVtbl _IAppExtenderStubVtbl =
{
    &IID_IAppExtender,
    &IAppExtender_ServerInfo,
    8,
    &IAppExtender_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRT, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x01}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRT_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1303,
    &__midl_frag1401,
    &__midl_frag1408,
    &__midl_frag1372,
    &__midl_frag1300,
    &__midl_frag1001,
    &__midl_frag681,
    &__midl_frag686,
    &__midl_frag1396,
    &__midl_frag1396,
    &__midl_frag700,
    &__midl_frag707,
    &__midl_frag718,
    &__midl_frag1437,
    &__midl_frag1092,
    &__midl_frag735,
    &__midl_frag741,
    &__midl_frag747,
    &__midl_frag756,
    &__midl_frag763,
    &__midl_frag767,
    &__midl_frag1300,
    &__midl_frag1343,
    &__midl_frag1276,
    &__midl_frag786,
    &__midl_frag1343,
    &__midl_frag793,
    &__midl_frag803,
    &__midl_frag813,
    &__midl_frag823,
    &__midl_frag829,
    &__midl_frag839,
    &__midl_frag848,
    &__midl_frag855,
    &__midl_frag861,
    &__midl_frag865,
    &__midl_frag877,
    &__midl_frag885,
    &__midl_frag892,
    &__midl_frag1300,
    &__midl_frag1099,
    &__midl_frag929,
    &__midl_frag915,
    &__midl_frag922,
    &__midl_frag929,
    &__midl_frag933,
    &__midl_frag947,
    &__midl_frag947
    };


static const MIDL_SYNTAX_INFO IWebRT_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRT_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRT_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRT_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRT_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRT_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRT_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRT_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRT_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(55) _IWebRTProxyVtbl = 
{
    &IWebRT_ProxyInfo,
    &IID_IWebRT,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_HostChromeBrowserWnd */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IWebRT::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* IWebRT::put_RemoteHelperHWND */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_RootNodes */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_Extender */ ,
    (void *) (INT_PTR) -1 /* IWebRT::put_Extender */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_CurrentActiveXobj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_CreatingXobj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::get_RemoteCosmos */ ,
    (void *) (INT_PTR) -1 /* IWebRT::NavigateNode */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateNucleusGroup */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateOfficeDocument */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateCLRObj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateApplication */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetNucleus */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetItemText */ ,
    (void *) (INT_PTR) -1 /* IWebRT::SetItemText */ ,
    (void *) (INT_PTR) -1 /* IWebRT::FireCosmosEventObj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::MessageBox */ ,
    (void *) (INT_PTR) -1 /* IWebRT::DeletePage */ ,
    (void *) (INT_PTR) -1 /* IWebRT::SetHostFocus */ ,
    (void *) (INT_PTR) -1 /* IWebRT::UpdateXobj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateCosmosEventObj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::InitEclipseApp */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateOutLookObj */ ,
    (void *) (INT_PTR) -1 /* IWebRT::ObserveNuclei */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetCtrlByName */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetXobjFromHandle */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWebRT::SetCtrlValueByName */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateCosmosCtrl */ ,
    (void *) (INT_PTR) -1 /* IWebRT::InitCLRApp */ ,
    (void *) (INT_PTR) -1 /* IWebRT::DeleteGalaxy */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetWindowClientDefaultNode */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateBrowser */ ,
    (void *) (INT_PTR) -1 /* IWebRT::NewWorkBench */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CreateCLRObjRemote */ ,
    (void *) (INT_PTR) -1 /* IWebRT::DestroyCtrl */ ,
    (void *) (INT_PTR) -1 /* IWebRT::GetRemoteHostViewRect */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosCommand */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosGetImage */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosGetVisible */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosOnLoad */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosGetItemCount */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosGetItemLabel */ ,
    (void *) (INT_PTR) -1 /* IWebRT::CosmosGetItemID */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRT_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTStubVtbl =
{
    &IID_IWebRT,
    &IWebRT_ServerInfo,
    55,
    &IWebRT_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INucleus, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x03}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INucleus_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag955,
    &__midl_frag1210,
    &__midl_frag1372,
    &__midl_frag1396,
    &__midl_frag1123,
    &__midl_frag1386,
    &__midl_frag987,
    &__midl_frag1303,
    &__midl_frag1215,
    &__midl_frag1001,
    &__midl_frag1123,
    &__midl_frag1215,
    &__midl_frag1123,
    &__midl_frag1343,
    &__midl_frag1343,
    &__midl_frag1300,
    &__midl_frag1334,
    &__midl_frag1036
    };


static const MIDL_SYNTAX_INFO INucleus_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &INucleus_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INucleus_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INucleus_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &INucleus_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)INucleus_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INucleus_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &INucleus_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)INucleus_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(25) _INucleusProxyVtbl = 
{
    &INucleus_ProxyInfo,
    &IID_INucleus,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_Xobj */ ,
    (void *) (INT_PTR) -1 /* INucleus::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_HWND */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_VisibleXobj */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_CurrentNavigateKey */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_Nuclei */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_HostWebPage */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_HostBrowser */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_Count */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_RootXobjs */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_GalaxyXML */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_GalaxyType */ ,
    (void *) (INT_PTR) -1 /* INucleus::get_Name */ ,
    (void *) (INT_PTR) -1 /* INucleus::Detach */ ,
    (void *) (INT_PTR) -1 /* INucleus::Attach */ ,
    (void *) (INT_PTR) -1 /* INucleus::ModifyHost */ ,
    (void *) (INT_PTR) -1 /* INucleus::Observe */ ,
    (void *) (INT_PTR) -1 /* INucleus::GetXml */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION INucleus_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INucleusStubVtbl =
{
    &IID_INucleus,
    &INucleus_ServerInfo,
    25,
    &INucleus_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IXobjCollection, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x17}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IXobjCollection_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1215,
    &__midl_frag1047,
    &__midl_frag1210
    };


static const MIDL_SYNTAX_INFO IXobjCollection_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IXobjCollection_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IXobjCollection_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IXobjCollection_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IXobjCollection_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IXobjCollection_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IXobjCollection_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IXobjCollection_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IXobjCollection_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) _IXobjCollectionProxyVtbl = 
{
    &IXobjCollection_ProxyInfo,
    &IID_IXobjCollection,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IXobjCollection::get_XobjCount */ ,
    (void *) (INT_PTR) -1 /* IXobjCollection::get_Item */ ,
    (void *) (INT_PTR) -1 /* IXobjCollection::get__NewEnum */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IXobjCollection_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IXobjCollectionStubVtbl =
{
    &IID_IXobjCollection,
    &IXobjCollection_ServerInfo,
    10,
    &IXobjCollection_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: INuclei, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x00,0x02}} */

#pragma code_seg(".orpc")
static const FormatInfoRef INuclei_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1058,
    &__midl_frag1210,
    &__midl_frag1215,
    &__midl_frag1123,
    &__midl_frag1386,
    &__midl_frag1085,
    &__midl_frag1092,
    &__midl_frag1099,
    &__midl_frag1372,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1215,
    &__midl_frag1120,
    &__midl_frag1123,
    &__midl_frag1128,
    &__midl_frag1141,
    &__midl_frag1156,
    &__midl_frag1334,
    &__midl_frag1177,
    &__midl_frag1186,
    &__midl_frag1193
    };


static const MIDL_SYNTAX_INFO INuclei_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &INuclei_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &INuclei_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO INuclei_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &INuclei_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)INuclei_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO INuclei_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &INuclei_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)INuclei_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(28) _INucleiProxyVtbl = 
{
    &INuclei_ProxyInfo,
    &IID_INuclei,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_WinNucleus */ ,
    (void *) (INT_PTR) -1 /* INuclei::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Count */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_NucleiXML */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Parent */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Xobj */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_XObject */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_NucleusName */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Handle */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Width */ ,
    (void *) (INT_PTR) -1 /* INuclei::put_Width */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_Height */ ,
    (void *) (INT_PTR) -1 /* INuclei::put_Height */ ,
    (void *) (INT_PTR) -1 /* INuclei::get_XobjNames */ ,
    (void *) (INT_PTR) -1 /* INuclei::CreateNucleus */ ,
    (void *) (INT_PTR) -1 /* INuclei::Observe */ ,
    (void *) (INT_PTR) -1 /* INuclei::ObserveCtrl */ ,
    (void *) (INT_PTR) -1 /* INuclei::GetXobj */ ,
    (void *) (INT_PTR) -1 /* INuclei::GetCtrlInXobj */ ,
    (void *) (INT_PTR) -1 /* INuclei::GetNucleusFromCtrl */ ,
    (void *) (INT_PTR) -1 /* INuclei::ObserveNuclei */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION INuclei_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _INucleiStubVtbl =
{
    &IID_INuclei,
    &INuclei_ServerInfo,
    28,
    &INuclei_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWorkBenchWindow, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x5D,0x34}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWorkBenchWindow_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1202,
    &__midl_frag1210,
    &__midl_frag1215,
    &__midl_frag1372,
    &__midl_frag1223,
    &__midl_frag1386,
    &__midl_frag1391,
    &__midl_frag1343,
    &__midl_frag1343,
    &__midl_frag1334,
    &__midl_frag1334,
    &__midl_frag1261
    };


static const MIDL_SYNTAX_INFO IWorkBenchWindow_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWorkBenchWindow_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWorkBenchWindow_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWorkBenchWindow_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWorkBenchWindow_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWorkBenchWindow_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWorkBenchWindow_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWorkBenchWindow_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(19) _IWorkBenchWindowProxyVtbl = 
{
    &IWorkBenchWindow_ProxyInfo,
    &IID_IWorkBenchWindow,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Ctrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get__NewEnum */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Count */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Handle */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_CosmosCtrl */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_Nuclei */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::get_WinNucleus */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Active */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::CloseTangramUI */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::Observe */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ObserveEx */ ,
    (void *) (INT_PTR) -1 /* IWorkBenchWindow::ObserveinView */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWorkBenchWindow_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWorkBenchWindowStubVtbl =
{
    &IID_IWorkBenchWindow,
    &IWorkBenchWindow_ServerInfo,
    19,
    &IWorkBenchWindow_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IBrowser, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x08,0x28}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IBrowser_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1396,
    &__midl_frag1276,
    &__midl_frag1300,
    &__midl_frag1283,
    &__midl_frag1437
    };


static const MIDL_SYNTAX_INFO IBrowser_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IBrowser_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IBrowser_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IBrowser_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IBrowser_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IBrowser_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IBrowser_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IBrowser_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IBrowser_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(12) _IBrowserProxyVtbl = 
{
    &IBrowser_ProxyInfo,
    &IID_IBrowser,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IBrowser::get_RemoteXobj */ ,
    (void *) (INT_PTR) -1 /* IBrowser::put_RemoteXobj */ ,
    (void *) (INT_PTR) -1 /* IBrowser::put_DrawHandle */ ,
    (void *) (INT_PTR) -1 /* IBrowser::OpenURL */ ,
    (void *) (INT_PTR) -1 /* IBrowser::AddURLs */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IBrowser_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IBrowserStubVtbl =
{
    &IID_IBrowser,
    &IBrowser_ServerInfo,
    12,
    &IBrowser_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebView, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x18,0x09,0x03}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebView_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1372,
    &__midl_frag1300,
    &__midl_frag1303,
    &__midl_frag1308,
    &__midl_frag1334,
    &__midl_frag1325
    };


static const MIDL_SYNTAX_INFO IWebView_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebView_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebView_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebView_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebView_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebView_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebView_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebView_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebView_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(13) _IWebViewProxyVtbl = 
{
    &IWebView_ProxyInfo,
    &IID_IWebView,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebView::get_HostWnd */ ,
    (void *) (INT_PTR) -1 /* IWebView::put_HostWnd */ ,
    (void *) (INT_PTR) -1 /* IWebView::get_WebBrowser */ ,
    (void *) (INT_PTR) -1 /* IWebView::CreateForm */ ,
    (void *) (INT_PTR) -1 /* IWebView::Observe */ ,
    (void *) (INT_PTR) -1 /* IWebView::SendXmlMessage */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebView_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebViewStubVtbl =
{
    &IID_IWebView,
    &IWebView_ServerInfo,
    13,
    &IWebView_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IOfficeObject, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x65,0x06,0x06}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IOfficeObject_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1364,
    &__midl_frag1334,
    &__midl_frag1343
    };


static const MIDL_SYNTAX_INFO IOfficeObject_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IOfficeObject_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IOfficeObject_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IOfficeObject_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IOfficeObject_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IOfficeObject_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IOfficeObject_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IOfficeObject_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(10) _IOfficeObjectProxyVtbl = 
{
    &IOfficeObject_ProxyInfo,
    &IID_IOfficeObject,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Show */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::Observe */ ,
    (void *) (INT_PTR) -1 /* IOfficeObject::UnloadCosmos */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IOfficeObject_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IOfficeObjectStubVtbl =
{
    &IID_IOfficeObject,
    &IOfficeObject_ServerInfo,
    10,
    &IOfficeObject_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x19,0x82,0x31,0xDC}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTCtrl_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1372,
    &__midl_frag1349,
    &__midl_frag1354,
    &__midl_frag1359
    };


static const MIDL_SYNTAX_INFO IWebRTCtrl_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTCtrl_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTCtrl_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTCtrl_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTCtrl_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTCtrl_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTCtrl_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(11) _IWebRTCtrlProxyVtbl = 
{
    &IWebRTCtrl_ProxyInfo,
    &IID_IWebRTCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_Cosmos */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::put_tag */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTCtrlStubVtbl =
{
    &IID_IWebRTCtrl,
    &IWebRTCtrl_ServerInfo,
    11,
    &IWebRTCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IWebRTAppCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x10,0x01}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IWebRTAppCtrl_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1372,
    &__midl_frag1349,
    &__midl_frag1354,
    &__midl_frag1359,
    &__midl_frag1364
    };


static const MIDL_SYNTAX_INFO IWebRTAppCtrl_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTAppCtrl_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IWebRTAppCtrl_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWebRTAppCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IWebRTAppCtrl_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTAppCtrl_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IWebRTAppCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IWebRTAppCtrl_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IWebRTAppCtrl_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(12) _IWebRTAppCtrlProxyVtbl = 
{
    &IWebRTAppCtrl_ProxyInfo,
    &IID_IWebRTAppCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_Cosmos */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* IWebRTAppCtrl::put_AppCtrl */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IWebRTAppCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IWebRTAppCtrlStubVtbl =
{
    &IID_IWebRTAppCtrl,
    &IWebRTAppCtrl_ServerInfo,
    12,
    &IWebRTAppCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IEclipseCtrl, ver. 0.0,
   GUID={0x19631222,0x1992,0x0612,{0x19,0x65,0x06,0x01,0x20,0x16,0x09,0x12}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IEclipseCtrl_Ndr64ProcTable[] =
    {
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    (FormatInfoRef)(LONG_PTR) -1,
    &__midl_frag1372,
    &__midl_frag1349,
    &__midl_frag1354,
    &__midl_frag1359,
    &__midl_frag1367,
    &__midl_frag1372,
    &__midl_frag1386,
    &__midl_frag1381,
    &__midl_frag1386,
    &__midl_frag1391,
    &__midl_frag1396,
    &__midl_frag1401,
    &__midl_frag1408,
    &__midl_frag1426,
    &__midl_frag1426,
    &__midl_frag1437
    };


static const MIDL_SYNTAX_INFO IEclipseCtrl_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    Universe__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    Universe__MIDL_TypeFormatString.Format,
    UserMarshalRoutines,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IEclipseCtrl_Ndr64ProcTable[-3],
    0,
    NDR64_UserMarshalRoutines,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IEclipseCtrl_ProxyInfo =
    {
    &Object_StubDesc,
    Universe__MIDL_ProcFormatString.Format,
    &IEclipseCtrl_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IEclipseCtrl_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IEclipseCtrl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    Universe__MIDL_ProcFormatString.Format,
    (unsigned short *) &IEclipseCtrl_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IEclipseCtrl_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(23) _IEclipseCtrlProxyVtbl = 
{
    &IEclipseCtrl_ProxyInfo,
    &IID_IEclipseCtrl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_HWND */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_Cosmos */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::get_tag */ ,
    (void *) (INT_PTR) -1 /* IWebRTCtrl::put_tag */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_Handle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_EclipseViewHandle */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_Nuclei */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_WorkBenchWindow */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopNuclei */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_TopGalaxy */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_ActiveTopXobj */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::get_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::put_AppKeyValue */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::Observe */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::ObserveEx */ ,
    (void *) (INT_PTR) -1 /* IEclipseCtrl::InitCtrl */
};


EXTERN_C DECLSPEC_SELECTANY const PRPC_STUB_FUNCTION IEclipseCtrl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3,
    NdrStubCall3
};

CInterfaceStubVtbl _IEclipseCtrlStubVtbl =
{
    &IID_IEclipseCtrl,
    &IEclipseCtrl_ServerInfo,
    23,
    &IEclipseCtrl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    Universe__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _Universe_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IOfficeExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IOfficeObjectProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INucleiProxyVtbl,
    ( CInterfaceProxyVtbl *) &_INucleusProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXobjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IXobjCollectionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAppExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWorkBenchWindowProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTTreeViewProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTTreeViewCallBackProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTTreeNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEclipseExtenderProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTEventObjProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebRTAppCtrlProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IBrowserProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IWebViewProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _Universe_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IOfficeExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IOfficeObjectStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTStubVtbl,
    ( CInterfaceStubVtbl *) &_INucleiStubVtbl,
    ( CInterfaceStubVtbl *) &_INucleusStubVtbl,
    ( CInterfaceStubVtbl *) &_IXobjStubVtbl,
    ( CInterfaceStubVtbl *) &_IXobjCollectionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAppExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IWorkBenchWindowStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTTreeViewStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTTreeViewCallBackStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTTreeNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IEclipseExtenderStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTEventObjStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebRTAppCtrlStubVtbl,
    ( CInterfaceStubVtbl *) &_IBrowserStubVtbl,
    ( CInterfaceStubVtbl *) &_IWebViewStubVtbl,
    0
};

PCInterfaceName const _Universe_InterfaceNamesList[] = 
{
    "IOfficeExtender",
    "IOfficeObject",
    "IWebRT",
    "INuclei",
    "INucleus",
    "IXobj",
    "IXobjCollection",
    "IAppExtender",
    "IWebRTCtrl",
    "IWorkBenchWindow",
    "IWebRTTreeView",
    "IWebRTTreeViewCallBack",
    "IWebRTTreeNode",
    "IWebRTExtender",
    "IEclipseCtrl",
    "IEclipseExtender",
    "IWebRTEventObj",
    "IWebRTAppCtrl",
    "IBrowser",
    "IWebView",
    0
};

const IID *  const _Universe_BaseIIDList[] = 
{
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    &IID_IDispatch,
    0
};


#define _Universe_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _Universe, pIID, n)

int __stdcall _Universe_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _Universe, 20, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _Universe, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _Universe, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _Universe, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _Universe, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _Universe, 20, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo Universe_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _Universe_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _Universe_StubVtblList,
    (const PCInterfaceName * ) & _Universe_InterfaceNamesList,
    (const IID ** ) & _Universe_BaseIIDList,
    & _Universe_IID_Lookup, 
    20,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/


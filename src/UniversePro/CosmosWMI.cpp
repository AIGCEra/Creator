#pragma once
#include <ntddk.h>
#ifdef _DEBUG
#ifndef _AFXDLL
#pragma comment(lib, "libucrtd.lib")
#endif // !_AFXDLL
#else
#ifndef _AFXDLL
#pragma comment(lib, "libucrt.lib")
#endif // !_AFXDLL
#endif
#pragma comment(lib, "NtosKrnl.lib")

///** 向前声明 */
////NTKERNELAPI UCHAR* PsGetProcessImageFileName(__in PEPROCESS Process);
////NTKERNELAPI PCHAR PsGetProcessImageFileName(PEPROCESS Process);
////NTKERNELAPI NTSTATUS PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS* Process);
//
//UCHAR* GetProcessNameByProcessId(HANDLE ProcessId)
//{
//	NTSTATUS st = STATUS_UNSUCCESSFUL;
//	PEPROCESS ProcessObj = NULL;
//	UCHAR* string = NULL;
//	//st = PsLookupProcessByProcessId(ProcessId, &ProcessObj);
//	if (NT_SUCCESS(st))
//	{
//		//string = PsGetProcessImageFileName(ProcessObj);
//		//ObfDereferenceObject(ProcessObj);
//	}
//	return string;
//}
//
//VOID MyCreateProcessNotifyEx(PEPROCESS Process, HANDLE ProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
//{
//	//char ProcName[16] = { 0 };
//	//if (CreateInfo != NULL)
//	//{
//	//	strcpy(ProcName, PsGetProcessImageFileName(Process));
//	//	DbgPrint("父进程ID: %ld  --->父进程名: %s --->进程名: %s---->进程路径：%wZ", CreateInfo->ParentProcessId,
//	//		GetProcessNameByProcessId(CreateInfo->ParentProcessId),
//	//		PsGetProcessImageFileName(Process), CreateInfo->ImageFileName);
//	//}
//	//else
//	//{
//	//	strcpy(ProcName, PsGetProcessImageFileName(Process));
//	//	DbgPrint("进程[ %s ] 离开了，程序被关闭了", ProcName);
//	//}
//}
//
//VOID UnDriver(PDRIVER_OBJECT driver)
//{
//	PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)MyCreateProcessNotifyEx, TRUE);
//}
//NTSTATUS DriverEntry(IN PDRIVER_OBJECT Driver, PUNICODE_STRING RegistryPath)
//{
//	NTSTATUS status;
//	status = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)MyCreateProcessNotifyEx, FALSE);
//	Driver->DriverUnload = UnDriver;
//	return STATUS_SUCCESS;
//}

#include<wdm.h>
extern "C" {
	UCHAR* PsGetProcessImageFileName(PEPROCESS Process);
}


// 注意32位与64位的对齐大小
#ifndef _WIN64
#pragma pack(1)                               
#endif
typedef struct _LDR_DATA_TABLE_ENTRY
{
	LIST_ENTRY InLoadOrderLinks;
	LIST_ENTRY InMemoryOrderLinks;
	LIST_ENTRY InInitializationOrderLinks;
	PVOID DllBase;
	PVOID EntryPoint;
	ULONG SizeOfImage;
	UNICODE_STRING FullDllName;
	UNICODE_STRING BaseDllName;
	ULONG Flags;
	USHORT LoadCount;
	USHORT TlsIndex;
	union
	{
		LIST_ENTRY HashLinks;
		struct
		{
			PVOID SectionPointer;
			ULONG CheckSum;
		};
	};
	union
	{
		ULONG TimeDateStamp;
		PVOID LoadedImports;
	};
	PVOID EntryPointActivationContext;
	PVOID PatchInformation;
	LIST_ENTRY ForwarderLinks;
	LIST_ENTRY ServiceTagLinks;
	LIST_ENTRY StaticLinks;
} LDR_DATA_TABLE_ENTRY, * PLDR_DATA_TABLE_ENTRY;
#ifndef _WIN64
#pragma pack()
#endif

// 编程方式绕过签名检查
BOOLEAN BypassCheckSign(PDRIVER_OBJECT pDriverObject)
{
#ifdef _WIN64
	typedef struct _KLDR_DATA_TABLE_ENTRY
	{
		LIST_ENTRY listEntry;
		ULONG64 __Undefined1;
		ULONG64 __Undefined2;
		ULONG64 __Undefined3;
		ULONG64 NonPagedDebugInfo;
		ULONG64 DllBase;
		ULONG64 EntryPoint;
		ULONG SizeOfImage;
		UNICODE_STRING path;
		UNICODE_STRING name;
		ULONG   Flags;
		USHORT  LoadCount;
		USHORT  __Undefined5;
		ULONG64 __Undefined6;
		ULONG   CheckSum;
		ULONG   __padding1;
		ULONG   TimeDateStamp;
		ULONG   __padding2;
	} KLDR_DATA_TABLE_ENTRY, * PKLDR_DATA_TABLE_ENTRY;
#else
	typedef struct _KLDR_DATA_TABLE_ENTRY
	{
		LIST_ENTRY listEntry;
		ULONG unknown1;
		ULONG unknown2;
		ULONG unknown3;
		ULONG unknown4;
		ULONG unknown5;
		ULONG unknown6;
		ULONG unknown7;
		UNICODE_STRING path;
		UNICODE_STRING name;
		ULONG   Flags;
	} KLDR_DATA_TABLE_ENTRY, * PKLDR_DATA_TABLE_ENTRY;
#endif
	PKLDR_DATA_TABLE_ENTRY pLdrData = (PKLDR_DATA_TABLE_ENTRY)pDriverObject->DriverSection;
	pLdrData->Flags = pLdrData->Flags | 0x20;
	return TRUE;
}

// 回调函数
VOID ProcessNotifyExRoutine(PEPROCESS pEProcess, HANDLE hProcessId, PPS_CREATE_NOTIFY_INFO CreateInfo)
{
	// CreateInfo 为 NULL 时，表示进程退出；不为 NULL 时，表示进程创建
	if (NULL == CreateInfo)
	{
		return;
	}
	// 获取进程名称
	PUCHAR pszImageFileName = PsGetProcessImageFileName(pEProcess);
	// 显示创建进程信息
	DbgPrint("[%s][%d][%wZ]\n", pszImageFileName, hProcessId, CreateInfo->ImageFileName);
	// 禁止指定进程(520.exe)创建 
	//if (0 == _stricmp(pszImageFileName, "520.exe"))
	//{
	//	// 禁止创建
	//	CreateInfo->CreationStatus = STATUS_UNSUCCESSFUL;
	//	DbgPrint("[禁止创建]\n");
	//}
}
// 设置回调函数
NTSTATUS SetProcessNotifyRoutine()
{
	NTSTATUS status = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)ProcessNotifyExRoutine, FALSE);
	if (!NT_SUCCESS(status))
	{
		//ShowError("PsSetCreateProcessNotifyRoutineEx", status);
	}
	return status;
}

// 删除回调函数
NTSTATUS RemoveProcessNotifyRoutine()
{
	NTSTATUS status = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)ProcessNotifyExRoutine, TRUE);
	if (!NT_SUCCESS(status))
	{
		//ShowError("PsSetCreateProcessNotifyRoutineEx", status);
	}
	return status;
}


VOID DriverUnload(PDRIVER_OBJECT DriverObject)
{
	DbgPrint("DriverUnload()\r\n");
}
ULONG   GetProcessNameOffset(void)
{
	PEPROCESS curproc;
	int i = 0;

	curproc = PsGetCurrentProcess();
	for (i = 0; i < 3 * PAGE_SIZE; i++) {
		if (!strncmp("System", (PCHAR)curproc + i, strlen("System"))) {
			DbgPrint("offset:%d", i);
			return i;
		}
	}

	return 0;
}

void GetProcessName(ULONG dwPid)
{
	HANDLE ProcessHandle;
	NTSTATUS status;
	OBJECT_ATTRIBUTES  ObjectAttributes;
	CLIENT_ID myCid;
	PEPROCESS EProcess;
	int a = GetProcessNameOffset();
	InitializeObjectAttributes(&ObjectAttributes, 0, 0, 0, 0);

	myCid.UniqueProcess = (HANDLE)dwPid;
	myCid.UniqueThread = 0;

	//打开进程，获取句柄
	status = ZwOpenProcess(&ProcessHandle, PROCESS_ALL_ACCESS, &ObjectAttributes, &myCid);
	if (!NT_SUCCESS(status))
	{
		DbgPrint("error/n");
		return;
	}

	//得到EPROCESS，结构中取进程名
	status = ObReferenceObjectByHandle(ProcessHandle, FILE_READ_DATA, 0, KernelMode, (PVOID*)&EProcess, 0);
	if (status == STATUS_SUCCESS)
	{
		char* ProcessName = (char*)EProcess + a;
		char* PsName = (char*)PsGetProcessImageFileName(EProcess);

		DbgPrint("ProcessName is %s", ProcessName);
		DbgPrint("PsName is %s/n", PsName);
		ObDereferenceObject(EProcess);
		ZwClose(ProcessHandle);
	}
	else
	{
		DbgPrint("Get ProcessName error");
		ObDereferenceObject(EProcess);
		ZwClose(ProcessHandle);
	}
}

NTSTATUS
DriverEntry(
	IN PDRIVER_OBJECT  DriverObject,
	IN PUNICODE_STRING  RegistryPath
)
{
	BypassCheckSign(DriverObject);
	DbgPrint("sucess load/n");
	GetProcessName(2900);
	DriverObject->DriverUnload = DriverUnload;
	return STATUS_SUCCESS;
}
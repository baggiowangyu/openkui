// KUILib.cpp : ���� DLL Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "KUILib.h"

CAppModule * _ModulePtr;
HINSTANCE g_hInstance;

BOOL APIENTRY DllMain( HANDLE hModule, 
                       DWORD  ul_reason_for_call, 
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}

// ���ǵ���������һ��ʾ��
KUILIB_API int nKUILib=0;

// ���ǵ���������һ��ʾ����
KUILIB_API int fnKUILib(void)
{
	return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� KUILib.h
CKUILib::CKUILib()
{ 
	return; 
}

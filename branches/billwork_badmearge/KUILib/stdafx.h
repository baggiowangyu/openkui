// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���ǳ��õ��������ĵ���Ŀ�ض��İ����ļ�
//

#pragma once


//#define WIN32_LEAN_AND_MEAN		// �� Windows ͷ���ų�����ʹ�õ�����
// Windows ͷ�ļ�:
//#include <windows.h>

#pragma warning(disable: 4995)
#pragma warning(disable: 4996)
#pragma warning(disable: 4819)

#define WINVER          0x0500
#define _WIN32_WINNT    0x0501
#define _WIN32_IE       0x0601

#include "Include/KuiHead.h"

#ifndef ASSERT
#ifdef _DEBUG
#define ASSERT assert
#else
#define ASSERT
#endif
#endif
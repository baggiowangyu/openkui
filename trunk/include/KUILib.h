// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
//��ı�׼�������� DLL �е������ļ��������������϶���� KUILIB_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
//�κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ 
// KUILIB_API ������Ϊ�ǴӴ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifndef _KUILIB_H
#define _KUILIB_H
#define KUILIB_API

#include "../KUILib/include/kuihead.h"
#include "../KUILib/include/kuiwin/kuiwnd.h"
#include "../KUILib/Include/KuiApp.h"
#include "../KuiLib/Include/wtlhelper/whwindow.h"

#include "../KuiLib/Include/wtlhelper/billext/extentwindow.h"

#define LIBPATH(p,f) p##f 

#ifdef _DEBUG
#pragma comment(lib,LIBPATH(__FILE__, ".dir/../../KUILib/lib/kscbaseD.lib") )
#else
#pragma comment(lib,LIBPATH(__FILE__, ".dir/../../KUILib/lib/kscbase.lib") )
#endif
#pragma comment(lib,"gdiplus.lib")

#endif
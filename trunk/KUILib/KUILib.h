// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
//��ı�׼�������� DLL �е������ļ��������������϶���� KUILIB_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
//�κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ 
// KUILIB_API ������Ϊ�ǴӴ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifndef _KUILIB_H
#define _KUILIB_H

#ifdef KUILIB_EXPORTS
#define KUILIB_API __declspec(dllexport)
#else
#define KUILIB_API __declspec(dllimport)
#endif

// �����Ǵ� KUILib.dll ������
class KUILIB_API CKUILib {
public:
	CKUILib(void);
	// TODO: �ڴ�������ķ�����
};

extern KUILIB_API int nKUILib;

KUILIB_API int fnKUILib(void);

#endif
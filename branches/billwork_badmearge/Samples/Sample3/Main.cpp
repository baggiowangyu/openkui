/*
���ߣ� b2b160
���ڣ� 2011-03-07
���ܣ� IM��½���ڽ�������
*/

#include "stdafx.h"
#include ".\mainwnd.h"

HINSTANCE g_hInstance; 
CKuiApp<CMainWnd> _Module;
CAppModule* _ModulePtr = &_Module;

int WINAPI _tWinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPTSTR lpCmdLine, int nCmdShow)
{
	g_hInstance = hInstance;

	_Module.Init( hInstance );
	_Module.Main();
	_Module.UnInit();

	return 0;
}

/*
���ߣ� BILL
���ڣ� 2011-03-10
���ܣ� 
EMAIL��bill1263g@gmail.com
*/
#ifndef _H_CSNAKEDLG_H
#define _H_CSNAKEDLG_H

#include "stdafx.h"

#define DELETE_OBJECT(x) {if(x!=NULL){ DeleteObject(x);x=NULL;}}


class CSnakeWnd : public CWindowImpl<CSnakeWnd>
{
public:
	CSnakeWnd(){};
	~CSnakeWnd(){};
	LRESULT OnInitDialog( HWND hDlg, LPARAM lParam );
	void OnDestroy();
    
	void OnTimer(UINT_PTR nIDEvent);   // ��ʱ��
	
	int GetGameState();

	BEGIN_MSG_MAP_EX(CSnakeWnd)
		MSG_WM_TIMER(OnTimer)

		MSG_WM_INITDIALOG(OnInitDialog)
		MSG_WM_DESTROY(OnDestroy)
		REFLECT_NOTIFICATIONS_EX()
	END_MSG_MAP()

protected:
};

enum ENUM_MAPUNIT
{
	enumLAND = 0,
	enumWALL,
	enumSNAKE,
	enumREWARD
};

enum ENUM_GAMESTATE
{
	enumStart = 0,
	enumGame,
	enumEnd
};

enum ENUM_DIRCTION
{
	enumLEFT,
	enumUP,
	enumRIGHT,
	enumDOWN
};

struct tagSnakeNode
{
	tagSnakeNode()
		:nX(0)
		,nY(0)
	{};

	int nX;
	int nY;
};

const int GAMEFRAME_WIDTH	= 300;
const int GAMEFRAME_HEIGHT	= 300;
const int BLOCK_WIDTH		= 10;
const int BLOCK_HEIGHT		= 10;
const int SNAKE_MAXLONG		= 100;
const int g_MapWidth = GAMEFRAME_WIDTH/BLOCK_WIDTH;
const int g_MapHeight = GAMEFRAME_HEIGHT/BLOCK_HEIGHT;
// ��Ϸ����
void DrawGame( HDC hDC );
void DrawStart( HDC hDC );
void DrawEnd( HDC hDC );
void DrawBack( HDC hDC );
void DrawSnake( HDC hDC );

// ��ʼ����Ϸ
bool InitGame( HWND hDlg );
// �ͷ���Ϸ��Դ
void Release();
// ������Ϸ
bool ResetGame();
// ���ÿ��
void SetGameFrame( HWND hDlg );
// �����ʼ������ť
void OnStartGame( HWND hDlg );
// ��Ϸѭ��
void OnGameLooping( HWND hDlg );
// ��Ϸ����
void OnKeyDown( WPARAM wParam, LPARAM lParam );
// ��Ϸ����
bool UpdateGame( DWORD dwTimeTick );
// ����С����
void DrawBlock( HDC hDC, int nX, int nY, ENUM_MAPUNIT nType );
// С���ƶ�
bool MoveSnake( DWORD dwTimeTick );
// �����Ʒ
ENUM_MAPUNIT GetLandType( int nX, int nY );
// �Ƿ�ײ���Լ�
bool IsHitSelf( int nX, int nY );
// �Խ�Ʒ
bool EatReward( int nX, int nY, ENUM_MAPUNIT );
// ��Ϸ����
void GameOver();
// ������Ʒ
bool GenerateReward();

#endif

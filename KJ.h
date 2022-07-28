#pragma once
#include <windows.h>
#include <map>
#include <string>
#include"SenceManager.h"
#include"AnimationManager.h"
using namespace std;
class COBJM;
class CScene;
class CGO;
class CGI;

class CKJ
{
	int m_cw;
	int m_ch;
	unsigned long b;
	HWND m_hWnd;
	CScene* m_curScene;
	CScene* m_NextScene;
	map< string, CScene*> m_Scenes;

	static CKJ* p;
	COBJM* m_zam;		

	CGO* go;
	CGI* gi;
	CAnimationManager* m_AnimationManager;			
	SceneManager* m_SceneManager; 
	CKJ();
	CKJ(const CKJ& that);
public:
	static CKJ* GetKJ();

	BOOL AddScene(string id, CScene* p);
	void SetInitScene(string id);
	void SetNextScene(string id);
	HWND GetHWND();
	int GetCW();
	int GetCH();
	
	CGO* GetGO();
	COBJM* GetOBJM();
	CAnimationManager* GetAnimationManager();

	void Init(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPWSTR lpCmdLine,
		int nCmdShow);
	void Run();
	void End();
	int GetRunCost();
	void SetStartScene(string id);
	CScene* GetcurScene();
};
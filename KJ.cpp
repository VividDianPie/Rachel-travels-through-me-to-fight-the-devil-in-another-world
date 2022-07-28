#include <time.h>
#include "KJ.h"
#include "framework.h"
#include "ProjectX.h"
#include "scene.h"
#include "GameOutput.h"
#include "GameInput.h"
#include "OBJManager.h"
#include "AnimationManager.h"
#include"ReturnError.h"
CKJ* CKJ::p = 0;
BOOL g_Act = 0;
_w64 long __stdcall WndProc(HWND hWnd,	unsigned int uMsg,_w64 unsigned int wParam,	_w64 long lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
	{
		PostQuitMessage(0);
		return 0;
	}
	case WM_ACTIVATEAPP:
	{
		g_Act = (BOOL)wParam;
		return 0;
	}
	}
	return DefWindowProc(hWnd, uMsg, wParam, lParam);
}

CKJ::CKJ()
{
	srand((unsigned int)time(0));
	rand();
	m_hWnd = 0;
	m_curScene = 0;
}

CKJ::CKJ(const CKJ& that)
{

}

CKJ* CKJ::GetKJ()
{
	if (p == nullptr)
		p = new CKJ();
	return p;
}

BOOL CKJ::AddScene(string id, CScene* p)
{
	//if (id.empty()|| p == 0)
	//	return SCENE_NULL;

	//string s = id;

	//map< string, CScene* >::iterator it;
	//it = m_Scenes.find(s);
	//if (it != m_Scenes.end())
	//	return SCENE_REPEAR;

	//m_Scenes.insert(pair< string, CScene*>(s, p));
	//if (m_curScene == 0)
	//	m_curScene = p;
	//m_SceneManager->AddScene(id, p);

	if (m_SceneManager == nullptr)
	{
		return false;
	}
	return m_SceneManager->AddScene(id, p);

	//return SCENE_OK;
}

void CKJ::SetInitScene(string id)
{
	if (id.empty())
		return;
	string s = id;
	map< string, CScene* >::iterator it;
	it = m_Scenes.find(s);
	if (it == m_Scenes.end())
		return;
	m_curScene = it->second;
}

void CKJ::SetNextScene(string id)
{
	m_NextScene = m_SceneManager->GetScene(id);
}

void CKJ::Init(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	m_cw = 1500;
	m_ch = 768;
	g_Act = TRUE;
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// TODO: 在此处放置代码。


	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_PROJECT1));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = 0;
	wcex.lpszClassName = L"666";
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	RegisterClassExW(&wcex);//函数注册一个拓展的窗口类

	int sw = GetSystemMetrics(SM_CXSCREEN);//获取屏幕尺寸
	int sh = GetSystemMetrics(SM_CYSCREEN);

	RECT rect
		=
	{
		(sw - m_cw) / 2,
		(sh - m_ch) / 2,
		m_cw + (sw - m_cw) / 2,
		m_ch + (sh - m_ch) / 2
	};
	//根据所需的矩形大小，计算所需的矩形大小，然后窗口矩形传递给CreateWindow（）函数创建一个窗口
	AdjustWindowRect(&rect, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX, FALSE);

	m_hWnd = CreateWindowW(wcex.lpszClassName, L"蕾琪儿", WS_OVERLAPPEDWINDOW,
		rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top,
		nullptr, nullptr, hInstance, nullptr);

	if (!m_hWnd)
	{
		return;
	}

	ShowWindow(m_hWnd, nCmdShow);//设置指定窗口的显示状态
	UpdateWindow(m_hWnd);//绕过应用程序消息队列直接发送WM_PAINT消息给指定窗口

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_PROJECT1));

	go = CGO::GetGO();
	go->Init();
	gi = CGI::GetGI();
	gi->SetHWND(m_hWnd);
	b = 1;
	m_zam = new COBJM();
	m_NextScene = nullptr;
	m_AnimationManager = new CAnimationManager;
	m_SceneManager = new SceneManager;
}

void CKJ::Run()
{
	if (m_curScene)
	{
		m_curScene->Init();
	}

	MSG msg = {};
	while (msg.message != WM_QUIT)
	{
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		else if (g_Act)
		{
			unsigned long b = GetTickCount();
			go->Begin();
			gi->UpData();
			if (m_curScene)
			{
				m_curScene->Run();
			}
			go->End();
			if (m_NextScene)
			{
				m_curScene->End();
				m_curScene = m_NextScene;
				m_NextScene = nullptr;
				m_curScene->Init();
			}
			b = GetTickCount() - b;
			if (b < 3)
				Sleep(3 - b);
			else
				Sleep(1);
		}
		else
		{
			WaitMessage();
		}
	}
}

void CKJ::End()
{
}

HWND CKJ::GetHWND()
{
	return m_hWnd;
}

int CKJ::GetCW()
{
	return m_cw;
}
int CKJ::GetCH()
{
	return m_ch;
}

CGO* CKJ::GetGO()
{
	return go;
}

COBJM* CKJ::GetOBJM()
{
	return m_zam;
}

CAnimationManager* CKJ::GetAnimationManager()
{
	return m_AnimationManager;
}

int CKJ::GetRunCost()
{
	CGO* go = CGO::GetGO();
	char buf[128];
	sprintf_s(buf, 128, "窗口运行程序开销 = %d", b);
	go->DrawTxt(10, 20, buf, RGB(0, 0, 255));
	return b;
}

void CKJ::SetStartScene(string id)
{
	m_curScene = m_SceneManager->GetScene(id);
}

CScene* CKJ::GetcurScene()
{
	return m_curScene; 
}

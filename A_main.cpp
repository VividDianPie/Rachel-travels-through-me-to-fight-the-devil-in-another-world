#include "framework.h"
#include "ProjectX.h"
#include "KJ.h"
#include "OneScene.h"
#include"BossSence.h"
#include"Test.h"
#include"ZeroScene.h"
#include"TwoSence.h"
int APIENTRY wWinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance,_In_ LPWSTR    lpCmdLine,_In_ int       nCmdShow)
{
    CKJ* p = CKJ::GetKJ();
    p->Init(hInstance, hPrevInstance, lpCmdLine, nCmdShow);
    p->AddScene("���Թ���", new CTest);
    p->AddScene("������", new CTwoSence);
    p->AddScene("�㳡��", new CZeroScene);
    p->AddScene("�ú�ɭ��", new COneScene);
    p->AddScene("BOSS����", new BossSence);
    p->SetStartScene("�㳡��");
    CKJ::GetKJ()->Run();
    return 0;
}

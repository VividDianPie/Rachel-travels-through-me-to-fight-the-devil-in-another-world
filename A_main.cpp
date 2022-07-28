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
    p->AddScene("测试工具", new CTest);
    p->AddScene("二场景", new CTwoSence);
    p->AddScene("零场景", new CZeroScene);
    p->AddScene("幻海森林", new COneScene);
    p->AddScene("BOSS场景", new BossSence);
    p->SetStartScene("零场景");
    CKJ::GetKJ()->Run();
    return 0;
}

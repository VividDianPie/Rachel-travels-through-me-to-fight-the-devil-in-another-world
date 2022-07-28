#include "TwoSence.h"
#include "GameOutput.h"
#include "GameInput.h"
#include "kj.h"
#include"SceneSide.h"
#include"HpWisp.h"
#include"AudioManager.h"
#include"TXManager.h"
void CTwoSence::Init()
{
	CGO* go = CGO::GetGO();
	go->SetWorldWH(2048, 768);
	go->AddImage("½£", "bmp\\³¡¾°\\½£.bmp");
	go->AddBmp("½£", "½£", 0, 0, 2048, 768, 0xffffff);
	go->AddImage("ÇßÐÇ±³¾°", "bmp\\³¡¾°\\ÇßÐÇ±³¾°.bmp");
	go->AddBmp("ÇßÐÇ±³¾°", "ÇßÐÇ±³¾°", 0, 0, 2880, 1620);
	Audio = new CAudioManager;
	Audio->PushOnceAudio("²»Òª´òÎÒ", "music\\²»Òª´òÎÒ.mp3");
	Audio->PushOnceAudio("Í¦ÌÛµÄ", "music\\Í¦ÌÛµÄ.mp3");
	Audio->PushOnceAudio("¿­¶ûÏ£½úÉý", "music\\¿­¶ûÏ£½úÉý.mp3");
	Audio->PushLoopAudio("÷ëÔ¾ÓÄÑÒ", "music\\÷ëÔ¾ÓÄÑÒ.mp3");
	Audio->PushLoopAudio("ÑÒÛÖÖ®±À", "music\\ÑÒÛÖÖ®±À.mp3");
	Audio->PushLoopAudio("Õ¶ÆÆ·ç±©µÄÄ§¾¨", "music\\Õ¶ÆÆ·ç±©µÄÄ§¾¨.mp3");
	m_heroManager = new COBJM;
	m_enemyManager = new COBJM;
	ObstacleManager = new COBJM;
	TXManager = new CTXManager;
	hero = new CHero;
	hakumen[0] = new CHakumen;
	hakumen[0]->Init();
	hakumen[1] = new CHakumen;
	hakumen[1]->Init();
	hero->Init();
	hero->SetJudgePos(90, 600);
	hero->SetPos(90, 600);
	UiManager = new CUIManager;
	CHP* hp = new CHP;
	hp->Init();
	UiManager->Push_back(hp);

	CSceneSide*
	SceneSide = new CSceneSide;
	SceneSide->SetJudgePos(1025, 275);
	SceneSide->GetMyRect()->SetWH(5000, 400);
	SceneSide->Init();
	SceneSide->Setlevel(5);
	SceneSide->SetActive(true);
	ObstacleManager->Push_back(SceneSide);
	SceneSide = new CSceneSide;
	SceneSide->SetJudgePos(1025, 968);
	SceneSide->GetMyRect()->SetWH(5000, 400);
	SceneSide->Init();
	SceneSide->Setlevel(5);
	SceneSide->SetActive(true);
	ObstacleManager->Push_back(SceneSide);
	SceneSide = new CSceneSide;
	SceneSide->SetJudgePos(-200, 384);
	SceneSide->GetMyRect()->SetWH(400, 3000);
	SceneSide->Init();
	SceneSide->Setlevel(5);
	SceneSide->SetActive(true);
	ObstacleManager->Push_back(SceneSide);
	SceneSide = new CSceneSide;
	SceneSide->SetJudgePos(2248, 384);
	SceneSide->GetMyRect()->SetWH(400, 2000);
	SceneSide->Init();
	SceneSide->Setlevel(5);
	SceneSide->SetActive(true);
	ObstacleManager->Push_back(SceneSide);
}
static int i = 100;
static int j = 0;
void CTwoSence::Run()
{
	CGO* go = CGO::GetGO();
	CGI* gi = CGI::GetGI();
	CKJ* kj = CKJ::GetKJ();
	go->SetCXY(hero->GetJudgePos().x, hero->GetJudgePos().y);
	go->DrawBmp("½£", 1024, 383 - go->GetCY() * 0.5, _Far_2);
	go->DrawBmp("ÇßÐÇ±³¾°", 1024 + go->GetCX() - go->GetCX() * 0.5, 160 - go->GetCY() * 0.0005, _Far_1);
	switch (j)
	{
	case 1:    Audio->StopLoopAudio("÷ëÔ¾ÓÄÑÒ"); Audio->PlayLoopAudio("Õ¶ÆÆ·ç±©µÄÄ§¾¨"); ; break;
	case 2:Audio->StopLoopAudio("Õ¶ÆÆ·ç±©µÄÄ§¾¨"); Audio->PlayLoopAudio("ÑÒÛÖÖ®±À"); break;
	case 3:Audio->StopLoopAudio("ÑÒÛÖÖ®±À"); Audio->PlayLoopAudio("÷ëÔ¾ÓÄÑÒ"); break;
	}
	if (gi->Get(_GI_K_LEFT) == KS_DC)
		Audio->PlayLoopAudio("÷ëÔ¾ÓÄÑÒ");
	if (gi->Get(_GI_K_RIGHT) == KS_DC)
	{
		j += 1;
		if (j == 4)j = 1;
	}
	if (gi->Get(_GI_K_UP) == KS_DH || gi->Get(_GI_K_UP) == KS_DC)
		i += 1;
	if (gi->Get(_GI_K_DOWN) == KS_DH || gi->Get(_GI_K_DOWN) == KS_DC)
		i -= 1;
	Audio->SetLoopVolume(i);
	m_heroManager->Run();
	m_enemyManager->Run();

	ObstacleManager->Run();
	UiManager->Run();
	TXManager->Run();
	if (gi->Get(_GI_K_L_CTRL) == KS_DC)
		go->SetRectDrawOffOrOn();
	if (hero->GetPos().x >= 2030 || gi->Get(_GI_K_Y) == KS_DC)
	{
		kj->SetNextScene("BOSS³¡¾°");
		return;
	}
}
void CTwoSence::End()
{
	//m_heroManager->End();
	//m_enemyManager->End();
}
COBJM* CTwoSence::GetHeroManager()
{
	return m_heroManager;
}
COBJM* CTwoSence::GetEnemyManager()
{
	return m_enemyManager;
}
COBJM* CTwoSence::GetObstacleManager()
{
	return ObstacleManager;
}
CAudioManager* CTwoSence::GetAudio()
{
	return Audio;
}
CTXManager* CTwoSence::GetTX()
{
	return TXManager;
}

int  CTwoSence::TrueOrFalse()
{
	return 2;
}





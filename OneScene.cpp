#include "OneScene.h"
#include "GameOutput.h"
#include "GameInput.h"
#include "kj.h"
#include "vector.h"	
#include"OBJManager.h"
#include"SceneSide.h"
#include"AudioManager.h"
#include"Platinum.h"
void COneScene::Init()
{
	CGO* go = CGO::GetGO();
	go->SetWorldWH(2048, 768);
	go->AddImage("³¡¾°»ÃÉ­", "bmp\\³¡¾°\\³¡¾°»ÃÉ­.bmp");
	go->AddBmp("³¡¾°»ÃÉ­", "³¡¾°»ÃÉ­", 0, 0, 2048, 768,0xffffff);
	go->AddImage("±³¾°ÐÇ¿ÕÓëË®", "bmp\\³¡¾°\\±³¾°ÐÇ¿ÕÓëË®.bmp");
	go->AddBmp("±³¾°ÐÇ¿ÕÓëË®", "±³¾°ÐÇ¿ÕÓëË®", 0, 0, 2102, 1298);
	Audio = new CAudioManager;
	Audio->PushLoopAudio("Moonrise", "music\\Moonrise.mp3");
	Audio->PushLoopAudio("»ªÉ¢Ö®Ôµ", "music\\»ªÉ¢Ö®Ôµ.mp3");
	Audio->PushOnceAudio("²»Òª´òÎÒ", "music\\²»Òª´òÎÒ.mp3");
	Audio->PushOnceAudio("Í¦ÌÛµÄ", "music\\Í¦ÌÛµÄ.mp3");
	Audio->PushOnceAudio("¿­¶ûÏ£½úÉý", "music\\¿­¶ûÏ£½úÉý.mp3");
	m_heroManager = new COBJM;
	ObstacleManager = new COBJM;
	m_EnemyManager = new COBJM;
	hero = new CHero;
	hero->Init();		
	m_Platinum = new CPlatinum;
	m_Platinum->Init();
	CSceneSide*SceneSide = new CSceneSide;
	SceneSide->SetJudgePos(1042, 208);
	SceneSide->GetMyRect()->SetWH(900, 370);
	SceneSide->Init();
	SceneSide->Setlevel(5);
	SceneSide->SetActive(true);
	ObstacleManager->Push_back(SceneSide);
}
static int i = 100;
void COneScene::Run()
{
	CGO* go = CGO::GetGO();
	CGI* gi = CGI::GetGI();
	CKJ* kj = CKJ::GetKJ();
	if (gi->Get(_GI_K_LEFT) == KS_DC)
	{
		Audio->StopLoopAudio("»ªÉ¢Ö®Ôµ");
		Audio->PlayLoopAudio("Moonrise");
	}
	if (gi->Get(_GI_K_RIGHT) == KS_DC)
	{
		Audio->StopLoopAudio("Moonrise");
		Audio->PlayLoopAudio("»ªÉ¢Ö®Ôµ");
	}
	if (gi->Get(_GI_K_UP) == KS_DH || gi->Get(_GI_K_UP) == KS_DC)
		i+=1;
	if (gi->Get(_GI_K_DOWN) == KS_DH|| gi->Get(_GI_K_DOWN) == KS_DC)
		i-=1;
	Audio->SetLoopVolume(i);
	go->SetCXY(hero->GetPos().x, hero->GetPos().y);
	go->DrawBmp("³¡¾°»ÃÉ­", 1024 , 384 - go->GetCY() * 0.5, _Far_2);
	go->DrawBmp("±³¾°ÐÇ¿ÕÓëË®", 1225 + go->GetCX() - go->GetCX() * 0.5, 160 - go->GetCY() * 0.0005, _Far_1);
	m_heroManager->Run();
	m_EnemyManager->Run();
	ObstacleManager->Run();
	if (gi->Get(_GI_K_L_CTRL) == KS_UC)
		go->SetRectDrawOffOrOn();
	if (hero->GetPos().x>=2080|| gi->Get(_GI_K_Y) == KS_DC)
	{
		kj->SetNextScene("¶þ³¡¾°");
		return;
	}
}
void COneScene::End()
{
}
COBJM* COneScene::GetHeroManager()
{
	return m_heroManager;
}
COBJM* COneScene::GetEnemyManager()
{
	return m_EnemyManager;
}
COBJM* COneScene::GetObstacleManager()
{
	return ObstacleManager;
}
CAudioManager* COneScene::GetAudio()
{
	return Audio;
}
CTXManager* COneScene::GetTX()
{
	return nullptr;
}

int  COneScene::TrueOrFalse()
{
	return false;
}


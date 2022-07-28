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
	go->AddImage("������ɭ", "bmp\\����\\������ɭ.bmp");
	go->AddBmp("������ɭ", "������ɭ", 0, 0, 2048, 768,0xffffff);
	go->AddImage("�����ǿ���ˮ", "bmp\\����\\�����ǿ���ˮ.bmp");
	go->AddBmp("�����ǿ���ˮ", "�����ǿ���ˮ", 0, 0, 2102, 1298);
	Audio = new CAudioManager;
	Audio->PushLoopAudio("Moonrise", "music\\Moonrise.mp3");
	Audio->PushLoopAudio("��ɢ֮Ե", "music\\��ɢ֮Ե.mp3");
	Audio->PushOnceAudio("��Ҫ����", "music\\��Ҫ����.mp3");
	Audio->PushOnceAudio("ͦ�۵�", "music\\ͦ�۵�.mp3");
	Audio->PushOnceAudio("����ϣ����", "music\\����ϣ����.mp3");
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
		Audio->StopLoopAudio("��ɢ֮Ե");
		Audio->PlayLoopAudio("Moonrise");
	}
	if (gi->Get(_GI_K_RIGHT) == KS_DC)
	{
		Audio->StopLoopAudio("Moonrise");
		Audio->PlayLoopAudio("��ɢ֮Ե");
	}
	if (gi->Get(_GI_K_UP) == KS_DH || gi->Get(_GI_K_UP) == KS_DC)
		i+=1;
	if (gi->Get(_GI_K_DOWN) == KS_DH|| gi->Get(_GI_K_DOWN) == KS_DC)
		i-=1;
	Audio->SetLoopVolume(i);
	go->SetCXY(hero->GetPos().x, hero->GetPos().y);
	go->DrawBmp("������ɭ", 1024 , 384 - go->GetCY() * 0.5, _Far_2);
	go->DrawBmp("�����ǿ���ˮ", 1225 + go->GetCX() - go->GetCX() * 0.5, 160 - go->GetCY() * 0.0005, _Far_1);
	m_heroManager->Run();
	m_EnemyManager->Run();
	ObstacleManager->Run();
	if (gi->Get(_GI_K_L_CTRL) == KS_UC)
		go->SetRectDrawOffOrOn();
	if (hero->GetPos().x>=2080|| gi->Get(_GI_K_Y) == KS_DC)
	{
		kj->SetNextScene("������");
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


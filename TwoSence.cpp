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
	go->AddImage("��", "bmp\\����\\��.bmp");
	go->AddBmp("��", "��", 0, 0, 2048, 768, 0xffffff);
	go->AddImage("���Ǳ���", "bmp\\����\\���Ǳ���.bmp");
	go->AddBmp("���Ǳ���", "���Ǳ���", 0, 0, 2880, 1620);
	Audio = new CAudioManager;
	Audio->PushOnceAudio("��Ҫ����", "music\\��Ҫ����.mp3");
	Audio->PushOnceAudio("ͦ�۵�", "music\\ͦ�۵�.mp3");
	Audio->PushOnceAudio("����ϣ����", "music\\����ϣ����.mp3");
	Audio->PushLoopAudio("��Ծ����", "music\\��Ծ����.mp3");
	Audio->PushLoopAudio("����֮��", "music\\����֮��.mp3");
	Audio->PushLoopAudio("ն�Ʒ籩��ħ��", "music\\ն�Ʒ籩��ħ��.mp3");
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
	go->DrawBmp("��", 1024, 383 - go->GetCY() * 0.5, _Far_2);
	go->DrawBmp("���Ǳ���", 1024 + go->GetCX() - go->GetCX() * 0.5, 160 - go->GetCY() * 0.0005, _Far_1);
	switch (j)
	{
	case 1:    Audio->StopLoopAudio("��Ծ����"); Audio->PlayLoopAudio("ն�Ʒ籩��ħ��"); ; break;
	case 2:Audio->StopLoopAudio("ն�Ʒ籩��ħ��"); Audio->PlayLoopAudio("����֮��"); break;
	case 3:Audio->StopLoopAudio("����֮��"); Audio->PlayLoopAudio("��Ծ����"); break;
	}
	if (gi->Get(_GI_K_LEFT) == KS_DC)
		Audio->PlayLoopAudio("��Ծ����");
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
		kj->SetNextScene("BOSS����");
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





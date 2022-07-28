#include "BossDie.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CBossDie::~CBossDie()
{
	delete m_Animation;
}

void CBossDie::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar620_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\ar620_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��0", "BOSS��0", 0, 0, 284, 397, 0xffffff);
	go->AddBmp("BOSS��1", "BOSS��1", 0, 0, 204, 416, 0xffffff);
	go->AddBmp("BOSS��2", "BOSS��2", 0, 0, 189, 456, 0xffffff);
	go->AddBmp("BOSS��3", "BOSS��3", 0, 0, 182, 459, 0xffffff);
	go->AddBmp("BOSS��4", "BOSS��4", 0, 0, 182, 460, 0xffffff);
	go->AddBmp("BOSS��5", "BOSS��5", 0, 0, 223, 455, 0xffffff);
	go->AddBmp("BOSS��6", "BOSS��6", 0, 0, 249, 454, 0xffffff);
	go->AddBmp("BOSS��7", "BOSS��7", 0, 0, 444, 395, 0xffffff);
	go->AddBmp("BOSS��8", "BOSS��8", 0, 0, 497, 154, 0xffffff);
	go->AddBmp("BOSS��9", "BOSS��9", 0, 0, 496, 174, 0xffffff);
	m_Animation = new CAnimation(10);
	m_Animation->SetBmp("BOSS��0", 12, -178,		  30);
	m_Animation->SetBmp("BOSS��1", 11, -190,		  30);
	m_Animation->SetBmp("BOSS��2", 15, -214,		  30);
	m_Animation->SetBmp("BOSS��3", 10, -221,		  30);
	m_Animation->SetBmp("BOSS��4", 8, -222,			  30);
	m_Animation->SetBmp("BOSS��5", 29, -222,		  30);
	m_Animation->SetBmp("BOSS��6", -25, -222,		  30);
	m_Animation->SetBmp("BOSS��7", -122, -193,		  30);
	m_Animation->SetBmp("BOSS��8", -149, -69,		  30);
	m_Animation->SetBmp("BOSS��9", -147,	 -83	 ,    1000);
	m_NextAct = BOSS��;
}

void CBossDie::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m1, m2;
	if (m_enemy->GetProperty()->FaceDir != m_enemy->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-bmp->offx, bmp->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(bmp->offx, bmp->offy);
	}
	m = m1 * m2;
	POS JudgePos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
	}
}

void CBossDie::End()
{
}

CAnimation* CBossDie::GetAnimation()
{
	return m_Animation;
}

void CBossDie::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CBossDie::Peng()
{
	return false;
}
#include "BossBigSkillEnd.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
CBossBigSkillEnd::~CBossBigSkillEnd()
{
	delete m_Animation;
}

void CBossBigSkillEnd::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS����һ��\\ar611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS����һ��\\ar611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS����һ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS����һ��0", "BOSS����һ��0", 0, 0, 453, 396, 0xffffff);
	go->AddBmp("BOSS����һ��1", "BOSS����һ��1", 0, 0, 548, 433, 0xffffff);
	go->AddBmp("BOSS����һ��2", "BOSS����һ��2", 0, 0, 657, 461, 0xffffff);
	go->AddBmp("BOSS����һ��3", "BOSS����һ��3", 0, 0, 775, 595, 0xffffff);
	go->AddBmp("BOSS����һ��4", "BOSS����һ��4", 0, 0, 868, 578, 0xffffff);
	go->AddBmp("BOSS����һ��5", "BOSS����һ��5", 0, 0, 602, 535, 0xffffff);
	go->AddBmp("BOSS����һ��6", "BOSS����һ��6", 0, 0, 552, 505, 0xffffff);
	go->AddBmp("BOSS����һ��7", "BOSS����һ��7", 0, 0, 512, 465, 0xffffff);
	go->AddBmp("BOSS����һ��8", "BOSS����һ��8", 0, 0, 557, 468, 0xffffff);
	go->AddBmp("BOSS����һ��9", "BOSS����һ��9", 0, 0, 622, 423, 0xffffff);
	go->AddBmp("BOSS����һ��10", "BOSS����һ��10", 0, 0, 759, 444, 0xffffff);
	go->AddBmp("BOSS����һ��11", "BOSS����һ��11", 0, 0, 843, 544, 0xffffff);
	go->AddBmp("BOSS����һ��12", "BOSS����һ��12", 0, 0, 700, 592, 0xffffff);
	go->AddBmp("BOSS����һ��13", "BOSS����һ��13", 0, 0, 659, 540, 0xffffff);
	go->AddBmp("BOSS����һ��14", "BOSS����һ��14", 0, 0, 659, 446, 0xffffff);
	go->AddBmp("BOSS����һ��15", "BOSS����һ��15", 0, 0, 704, 312, 0xffffff);
	go->AddBmp("BOSS����һ��16", "BOSS����һ��16", 0, 0, 667, 261, 0xffffff);
	go->AddBmp("BOSS����һ��17", "BOSS����һ��17", 0, 0, 754, 88, 0xffffff);
	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("BOSS����һ��17", 7, -44, 2);
	m_Animation->SetBmp("BOSS����һ��16", 8, -131, 2);
	m_Animation->SetBmp("BOSS����һ��15", 25, -150, 2);
	m_Animation->SetBmp("BOSS����һ��14", -6, -216, 2);
	m_Animation->SetBmp("BOSS����һ��13", 13, -261, 2);
	m_Animation->SetBmp("BOSS����һ��12", 20, -278, 2);
	m_Animation->SetBmp("BOSS����һ��11", 16, -247, 2);
	m_Animation->SetBmp("BOSS����һ��10", 16, -214, 2);
	m_Animation->SetBmp("BOSS����һ��9", 17, -202, 2);
	m_Animation->SetBmp("BOSS����һ��8", 17, -222, 2);
	m_Animation->SetBmp("BOSS����һ��7", 18, -216, 2);
	m_Animation->SetBmp("BOSS����һ��6", 8, -238, 2);
	m_Animation->SetBmp("BOSS����һ��5", 2, -245, 2);
	m_Animation->SetBmp("BOSS����һ��4", 2, -262, 2);
	m_Animation->SetBmp("BOSS����һ��3", -14, -270, 2);
	m_Animation->SetBmp("BOSS����һ��2", 9, -203, 2);
	m_Animation->SetBmp("BOSS����һ��1", 10, -189, 2);
	m_Animation->SetBmp("BOSS����һ��0", 4, -166, 2);
	m_NextAct = BOSSվ;
}

void CBossBigSkillEnd::Run()
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
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CBossBigSkillEnd::End()
{
}

CAnimation* CBossBigSkillEnd::GetAnimation()
{
	return m_Animation;
}

void CBossBigSkillEnd::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CBossBigSkillEnd::Peng()
{
	return false;
}
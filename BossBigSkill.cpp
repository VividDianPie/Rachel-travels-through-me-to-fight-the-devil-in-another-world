#include "BossBigSkill.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
CBossBigSkill::~CBossBigSkill()
{
	delete m_Animation;
}

void CBossBigSkill::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS大招一段\\ar611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS大招一段\\ar611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS大招一段%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS大招一段0", "BOSS大招一段0", 0, 0, 453, 396, 0xffffff);
	go->AddBmp("BOSS大招一段1", "BOSS大招一段1", 0, 0, 548, 433, 0xffffff);
	go->AddBmp("BOSS大招一段2", "BOSS大招一段2", 0, 0, 657, 461, 0xffffff);
	go->AddBmp("BOSS大招一段3", "BOSS大招一段3", 0, 0, 775, 595, 0xffffff);
	go->AddBmp("BOSS大招一段4", "BOSS大招一段4", 0, 0, 868, 578, 0xffffff);
	go->AddBmp("BOSS大招一段5", "BOSS大招一段5", 0, 0, 602, 535, 0xffffff);
	go->AddBmp("BOSS大招一段6", "BOSS大招一段6", 0, 0, 552, 505, 0xffffff);
	go->AddBmp("BOSS大招一段7", "BOSS大招一段7", 0, 0, 512, 465, 0xffffff);
	go->AddBmp("BOSS大招一段8", "BOSS大招一段8", 0, 0, 557, 468, 0xffffff);
	go->AddBmp("BOSS大招一段9", "BOSS大招一段9", 0, 0, 622, 423, 0xffffff);
	go->AddBmp("BOSS大招一段10", "BOSS大招一段10", 0, 0, 759, 444, 0xffffff);
	go->AddBmp("BOSS大招一段11", "BOSS大招一段11", 0, 0, 843, 544, 0xffffff);
	go->AddBmp("BOSS大招一段12", "BOSS大招一段12", 0, 0, 700, 592, 0xffffff);
	go->AddBmp("BOSS大招一段13", "BOSS大招一段13", 0, 0, 659, 540, 0xffffff);
	go->AddBmp("BOSS大招一段14", "BOSS大招一段14", 0, 0, 659, 446, 0xffffff);
	go->AddBmp("BOSS大招一段15", "BOSS大招一段15", 0, 0, 704, 312, 0xffffff);
	go->AddBmp("BOSS大招一段16", "BOSS大招一段16", 0, 0, 667, 261, 0xffffff);
	go->AddBmp("BOSS大招一段17", "BOSS大招一段17", 0, 0, 754, 88, 0xffffff);
	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("BOSS大招一段0", 4, -166, 3);
	m_Animation->SetBmp("BOSS大招一段1", 10, -189, 3);
	m_Animation->SetBmp("BOSS大招一段2", 9, -203, 3);
	m_Animation->SetBmp("BOSS大招一段3", -14, -270, 3);
	m_Animation->SetBmp("BOSS大招一段4", 2, -262, 3);
	m_Animation->SetBmp("BOSS大招一段5", 2, -245, 6);
	m_Animation->SetBmp("BOSS大招一段6", 8, -238, 6);
	m_Animation->SetBmp("BOSS大招一段7", 18, -216, 6);
	m_Animation->SetBmp("BOSS大招一段8", 17, -222, 10);
	m_Animation->SetBmp("BOSS大招一段9", 17, -202, 6);
	m_Animation->SetBmp("BOSS大招一段10", 16, -214, 6);
	m_Animation->SetBmp("BOSS大招一段11", 16, -247, 3);
	m_Animation->SetBmp("BOSS大招一段12", 20, -278, 3);
	m_Animation->SetBmp("BOSS大招一段13", 13, -261, 3);
	m_Animation->SetBmp("BOSS大招一段14", -6, -216, 3);
	m_Animation->SetBmp("BOSS大招一段15", 25, -150, 3);
	m_Animation->SetBmp("BOSS大招一段16", 8, -131, 3);
	m_Animation->SetBmp("BOSS大招一段17", 7, -44, 3);
	m_NextAct = BOSS大招二段;
}

void CBossBigSkill::Run()
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

void CBossBigSkill::End()
{
}

CAnimation* CBossBigSkill::GetAnimation()
{
	return m_Animation;
}

void CBossBigSkill::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CBossBigSkill::Peng()
{
	return false;
}
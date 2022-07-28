#include "Character.h"
#include "Animation.h"
#include "Shou.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
CShou::~CShou()
{
}

void CShou::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 3; ++i)
	{
		if (i < 3)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS受\\ar900_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS受\\ar900_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS受%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS受0", "BOSS受0", 0, 0, 215, 259, 0xffffff);
	go->AddBmp("BOSS受1", "BOSS受1", 0, 0, 215, 243, 0xffffff);
	go->AddBmp("BOSS受2", "BOSS受2", 0, 0, 215, 250, 0xffffff);
	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_Animation->SetBmp("BOSS受0", 4, -219, 4);
	m_Animation->SetBmp("BOSS受1", 5, -211, 4);
	m_Animation->SetBmp("BOSS受2", 4, -215, 4);
	m_NextAct = BOSS站;
}

void CShou::Run()
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
	POS pos = m_enemy->GetPos();
	POS Hpos = m_enemy->GetJudgePos();
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

void CShou::End()
{
}

CAnimation* CShou::GetAnimation()
{
	return m_Animation;
}

void CShou::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

#include "RcDie.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CRcDie::~CRcDie()
{
	delete m_Animation;
}

void CRcDie::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 1; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùËÀ\\rc900_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥Ë®\\ar620_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùËÀ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùËÀ0", "ÀÙç÷¶ùËÀ0", 0, 0, 284, 546, 0xffffff);
	

	m_Animation = new CAnimation(1);
	m_Animation->SetBmp("ÀÙç÷¶ùËÀ0", 12, -178, 1000);
	

	m_NextAct = ÀÙç÷¶ùËÀ;
}

void CRcDie::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m1, m2;
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
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
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
	}
}

void CRcDie::End()
{
}

CAnimation* CRcDie::GetAnimation()
{
	return m_Animation;
}

void CRcDie::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CRcDie::Peng()
{
	return false;
}
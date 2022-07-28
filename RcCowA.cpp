#include"Animation.h"
#include "BOSS.h"
#include "GameOutput.h"
#include "Character.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"RcCowA.h"
#include"Hero.h"

CRcCowA::~CRcCowA()
{
	delete m_Animation;
}

void CRcCowA::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\rc432_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\rc432_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÅ£°¡%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("ÀÙç÷¶ùÅ£°¡0", "ÀÙç÷¶ùÅ£°¡0", 0, 0, 319, 400, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡1", "ÀÙç÷¶ùÅ£°¡1", 0, 0, 333, 365, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡2", "ÀÙç÷¶ùÅ£°¡2", 0, 0, 328, 333, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡3", "ÀÙç÷¶ùÅ£°¡3", 0, 0, 311, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡4", "ÀÙç÷¶ùÅ£°¡4", 0, 0, 262, 354, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡5", "ÀÙç÷¶ùÅ£°¡5", 0, 0, 243, 337, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡6", "ÀÙç÷¶ùÅ£°¡6", 0, 0, 221, 330, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡7", "ÀÙç÷¶ùÅ£°¡7", 0, 0, 189, 322, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡8", "ÀÙç÷¶ùÅ£°¡8", 0, 0, 286, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡9", "ÀÙç÷¶ùÅ£°¡9", 0, 0, 319, 346, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡10", "ÀÙç÷¶ùÅ£°¡10", 0, 0, 332, 327, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡11", "ÀÙç÷¶ùÅ£°¡11", 0, 0, 301, 347, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡12", "ÀÙç÷¶ùÅ£°¡12", 0, 0, 361, 337, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡13", "ÀÙç÷¶ùÅ£°¡13", 0, 0, 297, 405, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡14", "ÀÙç÷¶ùÅ£°¡14", 0, 0, 331, 409, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£°¡15", "ÀÙç÷¶ùÅ£°¡15", 0, 0, 296, 410, 0xffffff);

	m_Animation = new CAnimation(13);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡0", 13, -191, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡1", 1, -173, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡2", 3, -156, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡3", -56, -161, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡4", -13, -166, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡5", 7, -159, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡6", -30, -155, 3);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡7", -12, -151, 3);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡8", -32, -159, 10);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡9", -57, -165, 10);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡10", -63, -156, 10);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡11", -48, -166, 10);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡12", -24, -162, 10);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡13", 14, -195, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡14", -9, -196, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÅ£°¡15", -2, -197, 5);

	for (int i = 0; i < 4; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\vrrcef_stmB0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùÅ£°¡\\vrrcef_stmB%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùÅ£%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùÅ£0", "ÀÙç÷¶ùÅ£0", 0, 0, 386, 257, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£1", "ÀÙç÷¶ùÅ£1", 0, 0, 415, 262, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£2", "ÀÙç÷¶ùÅ£2", 0, 0, 440, 250, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùÅ£3", "ÀÙç÷¶ùÅ£3", 0, 0, 421, 259, 0xffffff);

	m_AnimationCow = new CAnimation(4);
	m_AnimationCow->SetBmp("ÀÙç÷¶ùÅ£0", 73, -123, 1);
	m_AnimationCow->SetBmp("ÀÙç÷¶ùÅ£1", 75, -120, 1);
	m_AnimationCow->SetBmp("ÀÙç÷¶ùÅ£2", 83, -126, 1);
	m_AnimationCow->SetBmp("ÀÙç÷¶ùÅ£3", 77, -122, 1);
	m_AnimationCow->Play();
	CowStarFrame = 8;
	m_Next = ÀÙç÷¶ùÕ¾;
}

void CRcCowA::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();
	BMP* bmpCow = m_AnimationCow->GetBmp();
	Matrix3 m, m1, m2, m3, m4, m5, m6, m7, m8;
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-bmp->offx, bmp->offy);
		m3.Translation(-bmpCow->offx, bmpCow->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(bmp->offx, bmp->offy);
		m3.Translation(-bmpCow->offx, bmpCow->offy);
	}
	m = m1 * m2;
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m4 = m1 * m3 * m2;
	m5 = m3 * m2;
	if (m_Animation->GetCurF() >= 3) 
	{
		if (m_character->GetSX()->FaceDir == 4)
			m_CowRunX -= 15;
		else
			m_CowRunX += 15;
	}
	m6.Translation(m_CowRunX, 0);
	m7 = m4 * m6;
	COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
	int EnemyLen = EnemyManager->GetSize();
	CEnemy* enemy = 0;
	POS EnemyJudgePos;
	for (int i = 0; i < EnemyLen; i++)
	{
		enemy = (CEnemy*)EnemyManager->GetOBJ(i);
		EnemyJudgePos = enemy->GetJudgePos();
		if (
			EnemyJudgePos.y >= m7.eDy - 120 && EnemyJudgePos.y <= m7.eDy + 120 &&
			EnemyJudgePos.x >= m7.eDx - 100 && EnemyJudgePos.x <= m7.eDx + 100)
		{
			if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			{
				enemy->SetJudgePos(m7.eDx + 196, m7.eDy + 107);
				enemy->SetPos(m7.eDx + 196, m7.eDy + 107);
			}
			else
			{
				enemy->SetJudgePos(m7.eDx - 196, m7.eDy + 107);
				enemy->SetPos(m7.eDx - 196, m7.eDy + 107);
			}
		}
	}
	m_AnimationCow->SetMatrix(&m7);
	m8 = m5 * m6;
	m_AnimationCow->SetMatrix2(&m8);
	m_AnimationCow->SetLevel(_Level_3);
	if (m_Animation->GetCurF() >= CowStarFrame) 
	{
		m_AnimationCow->Run();
		if (m_AnimationCow->IsPlaying() == false)
			m_AnimationCow->Reset();
	}
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_Next);
		m_CowRunX = 0;
	}
}

void CRcCowA::End()
{
}

CAnimation* CRcCowA::GetAnimation()
{
	return m_Animation;
}

void CRcCowA::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcCowA::Peng()
{
	return false;
}

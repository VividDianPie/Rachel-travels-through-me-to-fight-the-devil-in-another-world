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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\rc432_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\rc432_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ţ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("������ţ��0", "������ţ��0", 0, 0, 319, 400, 0xffffff);
	go->AddBmp("������ţ��1", "������ţ��1", 0, 0, 333, 365, 0xffffff);
	go->AddBmp("������ţ��2", "������ţ��2", 0, 0, 328, 333, 0xffffff);
	go->AddBmp("������ţ��3", "������ţ��3", 0, 0, 311, 341, 0xffffff);
	go->AddBmp("������ţ��4", "������ţ��4", 0, 0, 262, 354, 0xffffff);
	go->AddBmp("������ţ��5", "������ţ��5", 0, 0, 243, 337, 0xffffff);
	go->AddBmp("������ţ��6", "������ţ��6", 0, 0, 221, 330, 0xffffff);
	go->AddBmp("������ţ��7", "������ţ��7", 0, 0, 189, 322, 0xffffff);
	go->AddBmp("������ţ��8", "������ţ��8", 0, 0, 286, 335, 0xffffff);
	go->AddBmp("������ţ��9", "������ţ��9", 0, 0, 319, 346, 0xffffff);
	go->AddBmp("������ţ��10", "������ţ��10", 0, 0, 332, 327, 0xffffff);
	go->AddBmp("������ţ��11", "������ţ��11", 0, 0, 301, 347, 0xffffff);
	go->AddBmp("������ţ��12", "������ţ��12", 0, 0, 361, 337, 0xffffff);
	go->AddBmp("������ţ��13", "������ţ��13", 0, 0, 297, 405, 0xffffff);
	go->AddBmp("������ţ��14", "������ţ��14", 0, 0, 331, 409, 0xffffff);
	go->AddBmp("������ţ��15", "������ţ��15", 0, 0, 296, 410, 0xffffff);

	m_Animation = new CAnimation(13);
	m_Animation->SetBmp("������ţ��0", 13, -191, 2);
	m_Animation->SetBmp("������ţ��1", 1, -173, 5);
	m_Animation->SetBmp("������ţ��2", 3, -156, 5);
	m_Animation->SetBmp("������ţ��3", -56, -161, 5);
	m_Animation->SetBmp("������ţ��4", -13, -166, 5);
	m_Animation->SetBmp("������ţ��5", 7, -159, 5);
	m_Animation->SetBmp("������ţ��6", -30, -155, 3);
	m_Animation->SetBmp("������ţ��7", -12, -151, 3);
	m_Animation->SetBmp("������ţ��8", -32, -159, 10);
	m_Animation->SetBmp("������ţ��9", -57, -165, 10);
	m_Animation->SetBmp("������ţ��10", -63, -156, 10);
	m_Animation->SetBmp("������ţ��11", -48, -166, 10);
	m_Animation->SetBmp("������ţ��12", -24, -162, 10);
	m_Animation->SetBmp("������ţ��13", 14, -195, 5);
	m_Animation->SetBmp("������ţ��14", -9, -196, 5);
	m_Animation->SetBmp("������ţ��15", -2, -197, 5);

	for (int i = 0; i < 4; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\vrrcef_stmB0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ţ��\\vrrcef_stmB%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ţ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������ţ0", "������ţ0", 0, 0, 386, 257, 0xffffff);
	go->AddBmp("������ţ1", "������ţ1", 0, 0, 415, 262, 0xffffff);
	go->AddBmp("������ţ2", "������ţ2", 0, 0, 440, 250, 0xffffff);
	go->AddBmp("������ţ3", "������ţ3", 0, 0, 421, 259, 0xffffff);

	m_AnimationCow = new CAnimation(4);
	m_AnimationCow->SetBmp("������ţ0", 73, -123, 1);
	m_AnimationCow->SetBmp("������ţ1", 75, -120, 1);
	m_AnimationCow->SetBmp("������ţ2", 83, -126, 1);
	m_AnimationCow->SetBmp("������ţ3", 77, -122, 1);
	m_AnimationCow->Play();
	CowStarFrame = 8;
	m_Next = ������վ;
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

#include "RcAtk2.h"
#include"Animation.h"
#include "BOSS.h"
#include "matrix3.h"
#include "GameInput.h"
#include "GameOutput.h"
#include "Character.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"


CRcAtk2::~CRcAtk2()
{
	delete m_Animation;
}


void CRcAtk2::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 15; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥ÍÁ\\rc212_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹¥ÍÁ\\rc212_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ù¹¥ÍÁ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ0", "ÀÙç÷¶ù¹¥ÍÁ0", 0, 0, 321, 400, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ1", "ÀÙç÷¶ù¹¥ÍÁ1", 0, 0, 352, 377, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ2", "ÀÙç÷¶ù¹¥ÍÁ2", 0, 0, 407, 437, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ3", "ÀÙç÷¶ù¹¥ÍÁ3", 0, 0, 465, 391, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ4", "ÀÙç÷¶ù¹¥ÍÁ4", 0, 0, 389, 417, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ5", "ÀÙç÷¶ù¹¥ÍÁ5", 0, 0, 370, 413, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ6", "ÀÙç÷¶ù¹¥ÍÁ6", 0, 0, 355, 393, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ7", "ÀÙç÷¶ù¹¥ÍÁ7", 0, 0, 370, 395, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ8", "ÀÙç÷¶ù¹¥ÍÁ8", 0, 0, 418, 432, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ9", "ÀÙç÷¶ù¹¥ÍÁ9", 0, 0, 439, 380, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ10", "ÀÙç÷¶ù¹¥ÍÁ10", 0, 0, 457, 378, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ11", "ÀÙç÷¶ù¹¥ÍÁ11", 0, 0, 466, 374, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ12", "ÀÙç÷¶ù¹¥ÍÁ12", 0, 0, 395, 375, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ13", "ÀÙç÷¶ù¹¥ÍÁ13", 0, 0, 349, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹¥ÍÁ14", "ÀÙç÷¶ù¹¥ÍÁ14", 0, 0, 335, 403, 0xffffff);

	CMyRect Dr, Ar;
	m_Animation = new CAnimation(13);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ0", 19, -187,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ1", 16, -175,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ2", 29, -205,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ3", -7, -181,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ4", 27, -195,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ5", 21, -194,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ6", 8, -186,			 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ7", -1, -187,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ8", -7, -206,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ9", 1, -181,			 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ10", 16, -180,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ11", 25, -178,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ12", 20, -180,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ13", 19, -183,		 5);
	m_Animation->SetBmp("ÀÙç÷¶ù¹¥ÍÁ14",  28	,-193,    5);
	m_Atk2XMove = 0;
	m_NextAction = ÀÙç÷¶ùÕ¾;
}

void CRcAtk2::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
	POS pos = m_character->GetPos();
	Matrix3 m, m1, m2,				m3;
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
	if (m_character->Peng(m_character->GetSX()->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m = m1 * m2;
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	if (sx->FaceDir == 4)
	{
		JudgePos.x -= 2;
		sx->MoveDir = 4;
	}
	else
	{
		JudgePos.x += 2;
		sx->MoveDir = 6;
	}
	pos = JudgePos;
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->GetCurF() >= 11 && m_Animation->IsPlaying() == 0)
	{
		if (gi->Get(_GI_K_J) == KS_DC)
		{
			m_character->SetNextAct(ÀÙç÷¶ù¹¥Ë®);
			m_Atk2XMove = 0;
		}

	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_NextAction);
		if (gi->Get(_GI_K_J) == KS_DH)
		{
			m_character->SetNextAct(ÀÙç÷¶ù¹¥Ë®);
			m_Atk2XMove = 0;
		}
	}
}

void CRcAtk2::End()
{
}

CAnimation* CRcAtk2::GetAnimation()
{
	return m_Animation;
}

void CRcAtk2::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcAtk2::Peng()
{
	return false;
}

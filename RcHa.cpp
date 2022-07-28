#include "RcHa.h"
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

CRcHa::~CRcHa()
{
	delete m_Animation;
}


void CRcHa::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 13; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹þ\\rc001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ù¹þ\\rc001_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ù¹þ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ù¹þ0", "ÀÙç÷¶ù¹þ0", 0, 0, 233, 413, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ1", "ÀÙç÷¶ù¹þ1", 0, 0, 242, 442, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ2", "ÀÙç÷¶ù¹þ2", 0, 0, 257, 472, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ3", "ÀÙç÷¶ù¹þ3", 0, 0, 310, 481, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ4", "ÀÙç÷¶ù¹þ4", 0, 0, 381, 490, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ5", "ÀÙç÷¶ù¹þ5", 0, 0, 409, 435, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ6", "ÀÙç÷¶ù¹þ6", 0, 0, 495, 430, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ7", "ÀÙç÷¶ù¹þ7", 0, 0, 353, 414, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ8", "ÀÙç÷¶ù¹þ8", 0, 0, 342, 406, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ9", "ÀÙç÷¶ù¹þ9", 0, 0, 280, 404, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ10", "ÀÙç÷¶ù¹þ10", 0, 0, 266, 402, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ11", "ÀÙç÷¶ù¹þ11", 0, 0, 251, 402, 0xffffff);
	go->AddBmp("ÀÙç÷¶ù¹þ12", "ÀÙç÷¶ù¹þ12", 0, 0, 245, 403, 0xffffff);



	m_Animation = new CAnimation(13);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ0",   -11+18, -192		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ1",   -11+7, -206			+2,			8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ2",   -11+3, -221			+2,			8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ3",   -11+24, -227		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ4",   -11+56, -232		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ5",   -11+69, -206		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ6",   -11+8, -202			+2,			8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ7",   -11+62, -195		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ8",   -11+61, -190		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ9",   -11+32, -189		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ10", -11+26, -188		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ11", -11+17, -187		+2,				8);
	m_Animation->SetBmp("ÀÙç÷¶ù¹þ12", -11+14, -188		+2,				8);
	
	m_NextAction = ÀÙç÷¶ùÕ¾;
	m_NowTime = 0;
	m_KeyDelayTime = 333;
}

void CRcHa::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();
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
	if (m_character->Peng(m_character->GetSX()->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m = m1 * m2;
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (gi->Get(_GI_K_J) == KS_DC)
		m_character->SetNextAct(ÀÙç÷¶ù¹¥);
	else if (gi->Get(_GI_K_O) == KS_DC)
		m_character->SetNextAct(ÀÙç÷¶ù»¨);
	else if (gi->Get(_GI_K_I) == KS_DC)
		m_character->SetNextAct(ÀÙç÷¶ùÅ£°¡);
	else if (gi->Get(_GI_K_U) == KS_DC)
		m_character->SetNextAct(ÀÙç÷¶ùµç);
	else if (gi->Get(_GI_K_Q) == KS_DC)
		m_character->SetNextAct(ÀÙç÷¶ùË¯);
	if (gi->Get(_GI_K_SPACE) == KS_DC)
	{
		m_character->SetNextAct(ÀÙç÷¶ùÌø);
		m_character->GetSX()->m_curjumpPower = m_character->GetSX()->m_jump;
		int i = 0;
	}											
	if (gi->Get(_GI_K_A) == KS_DC)
	{
		if (GetTickCount64() - m_NowTime < m_KeyDelayTime)		
		{
			m_character->SetNextAct(ÀÙç÷¶ùÅÜ);
			m_character->GetSX()->FaceDir = 4;
			m_character->GetSX()->MoveDir = 4;
		}
		else
		{
			m_character->SetNextAct(ÀÙç÷¶ù×ß);
			m_character->GetSX()->FaceDir = 4;
			m_character->GetSX()->MoveDir = 4;
			m_NowTime = GetTickCount64();
		}
	}
	else if (gi->Get(_GI_K_D) == KS_DC)
	{
		if (GetTickCount64() - m_NowTime < m_KeyDelayTime)	
		{
			m_character->SetNextAct(ÀÙç÷¶ùÅÜ);
			m_character->GetSX()->FaceDir = 6;
			m_character->GetSX()->MoveDir = 6;
		}
		else
		{
			m_character->SetNextAct(ÀÙç÷¶ù×ß);
			m_character->GetSX()->FaceDir = 6;
			m_character->GetSX()->MoveDir = 6;
			m_NowTime = GetTickCount64();		
		}
	}
	if (gi->Get(_GI_K_A) == KS_DH)
	{
		m_character->SetNextAct(ÀÙç÷¶ù×ß);
		m_character->GetSX()->FaceDir = 4;
		m_character->GetSX()->MoveDir = 4;
	}
	else if (gi->Get(_GI_K_D) == KS_DH)
	{
		m_character->SetNextAct(ÀÙç÷¶ù×ß);
		m_character->GetSX()->FaceDir = 6;
		m_character->GetSX()->MoveDir = 6;
	}
	if (gi->Get(_GI_K_W) == KS_DC || gi->Get(_GI_K_W) == KS_DH)
		m_character->SetNextAct(ÀÙç÷¶ù×ß);
	else  if (gi->Get(_GI_K_S) == KS_DC || gi->Get(_GI_K_S) == KS_DH)
		m_character->SetNextAct(ÀÙç÷¶ù×ß);
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAction);
}

void CRcHa::End()
{
}

CAnimation* CRcHa::GetAnimation()
{
	return m_Animation;
}

void CRcHa::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcHa::Peng()
{
	return false;
}

#include<time.h>
#include "Character.h"
#include "Animation.h"
#include "Idle.h"
#include "matrix3.h"
#include"GameOutput.h"
#include "GameInput.h"
#include"HpWisp.h"
CIdle::~CIdle()
{
	delete m_Animation;
}

void CIdle::Init()
{
	CGO* go = CGO::GetGO();
	char str[64];
	char str2[64];
	for (int i = 0; i < 9; ++i)
	{
		sprintf_s(str, 64, "bmp\\վ\\rc000_0%d.bmp", i);
		sprintf_s(str2, 64, "վ%d", i);
		go->AddImage(str2, str);
	}
	go->AddBmp("վ0", "վ0", 0, 0, 284, 454, 0xffffff);
	go->AddBmp("վ1", "վ1", 0, 0, 293, 454, 0xffffff);
	go->AddBmp("վ2", "վ2", 0, 0, 268, 454, 0xffffff);
	go->AddBmp("վ3", "վ3", 0, 0, 250, 454, 0xffffff);
	go->AddBmp("վ4", "վ4", 0, 0, 271, 454, 0xffffff);
	go->AddBmp("վ5", "վ5", 0, 0, 286, 454, 0xffffff);
	go->AddBmp("վ6", "վ6", 0, 0, 307, 454, 0xffffff);
	go->AddBmp("վ7", "վ7", 0, 0, 331, 454, 0xffffff);
	go->AddBmp("վ8", "վ8", 0, 0, 297, 454, 0xffffff);
	m_Animation = new CAnimation(9);
	m_Animation->SetBmp("վ0", 24, -210, 4);
	m_Animation->SetBmp("վ1", 17, -210, 4);
	m_Animation->SetBmp("վ2", 16, -210, 4);
	m_Animation->SetBmp("վ3", 6, -210, 4);
	m_Animation->SetBmp("վ4", 4, -210, 4);
	m_Animation->SetBmp("վ5", 7, -210, 4);
	m_Animation->SetBmp("վ6", 11, -210, 4);
	m_Animation->SetBmp("վ7", 12, -210, 4);
	m_Animation->SetBmp("վ8", 23, -210, 4);

	CMyRect r;
	r.SetWH(80, 300);
	r.Setoff(1, -150); m_Animation->SetDefR(0, r);
	r.Setoff(1, -150); m_Animation->SetDefR(1, r);
	r.Setoff(1, -150); m_Animation->SetDefR(2, r);
	r.Setoff(1, -150); m_Animation->SetDefR(3, r);
	r.Setoff(1, -150); m_Animation->SetDefR(4, r);
	r.Setoff(1, -150); m_Animation->SetDefR(5, r);
	r.Setoff(1, -150); m_Animation->SetDefR(6, r);
	r.Setoff(1, -150); m_Animation->SetDefR(7, r);
	r.Setoff(1, -150); m_Animation->SetDefR(8, r);
	m_NextAct = ������վ;
	m_NowTime = 0;
	m_KeyDelayTime = 333;
}

void CIdle::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	SHUX* sx = m_character->GetSX();
	Matrix3 m, m1, m2;
	CGI* gi = CGI::GetGI();
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
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	m2.Translation(JudgePos.x, JudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (gi->Get(_GI_K_J) == KS_DC)
		m_character->SetNextAct(��������);
	else if (gi->Get(_GI_K_O) == KS_DC)
		m_character->SetNextAct(��������);
	else if (gi->Get(_GI_K_L) == KS_DC)
		m_character->SetNextAct(������POS);
	else if (gi->Get(_GI_K_I) == KS_DC)
		m_character->SetNextAct(������ţ��);
	else if (gi->Get(_GI_K_U) == KS_DC)
		m_character->SetNextAct(��������);
	else if (gi->Get(_GI_K_Q) == KS_DC)
		m_character->SetNextAct(������˯);
	if (gi->Get(_GI_K_SPACE) == KS_DC)
	{
		m_character->SetNextAct(��������);
		m_character->GetSX()->m_curjumpPower = m_character->GetSX()->m_jump;
		int i = 0;
	}										
	if (gi->Get(_GI_K_A) == KS_DC)
	{
		if (GetTickCount64() - m_NowTime < m_KeyDelayTime)		
		{
			m_character->SetNextAct(��������);	
			m_character->GetSX()->FaceDir = 4;
			m_character->GetSX()->MoveDir = 4;
		}
		else
		{
			m_character->SetNextAct(��������);
			m_character->GetSX()->FaceDir = 4;
			m_character->GetSX()->MoveDir = 4;
			m_NowTime = GetTickCount64();
		}
	}
	else if (gi->Get(_GI_K_D) == KS_DC)
	{
		if (GetTickCount64() - m_NowTime < m_KeyDelayTime)		
		{
			m_character->SetNextAct(��������);
			m_character->GetSX()->FaceDir = 6;
			m_character->GetSX()->MoveDir = 6;
		}
		else
		{
			m_character->SetNextAct(��������);
			m_character->GetSX()->FaceDir = 6;
			m_character->GetSX()->MoveDir = 6;
			m_NowTime = GetTickCount64();		
		}
	}
	if (gi->Get(_GI_K_A) == KS_DH)
	{
		m_character->SetNextAct(��������);
		m_character->GetSX()->FaceDir = 4;
		m_character->GetSX()->MoveDir = 4;
	}
	else if (gi->Get(_GI_K_D) == KS_DH)
	{
		m_character->SetNextAct(��������);
		m_character->GetSX()->FaceDir = 6;
		m_character->GetSX()->MoveDir = 6;
	}
	if (gi->Get(_GI_K_W) == KS_DC || gi->Get(_GI_K_W) == KS_DH)
		m_character->SetNextAct(��������);
	else  if (gi->Get(_GI_K_S) == KS_DC || gi->Get(_GI_K_S) == KS_DH)
		m_character->SetNextAct(��������);
	if (rand() % 300 == 1)
		m_character->SetNextAct(��������); 
	else
		m_NextAct = ������վ;
	if (this->m_character->GetSX()->hp <= 0)
	{
		this->m_character->GetSX()->hp = 0;
		m_character->SetState(��������, 0);
	}
	else if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void CIdle::End()
{
}

CAnimation* CIdle::GetAnimation()
{
	return m_Animation;
}

void CIdle::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

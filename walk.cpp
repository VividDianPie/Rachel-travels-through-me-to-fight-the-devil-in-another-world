#include "Character.h"
#include "Animation.h"
#include "walk.h"
#include "matrix3.h"
#include"GameOutput.h"
#include "GameInput.h"
#include"vector.h"

Cwalk::~Cwalk()
{
}

void Cwalk::Init()
{
	CGO* go = CGO::GetGO();
	char str[64];
	char str2[64];
	for (int i = 0; i < 11; ++i)
	{
		if (i < 10)
			sprintf_s(str, 64, "bmp\\��\\rc030_0%d.bmp", i);
		else
			sprintf_s(str, 64, "bmp\\��\\rc030_%d.bmp", i);
		sprintf_s(str2, 64, "��%d", i);
		go->AddImage(str2, str);
	}
	go->AddBmp("��0", "��0", 0, 0, 256, 397, 0xffffff);
	go->AddBmp("��1", "��1", 0, 0, 330, 391, 0xffffff);
	go->AddBmp("��2", "��2", 0, 0, 311, 393, 0xffffff);
	go->AddBmp("��3", "��3", 0, 0, 323, 393, 0xffffff);
	go->AddBmp("��4", "��4", 0, 0, 350, 391, 0xffffff);
	go->AddBmp("��5", "��5", 0, 0, 382, 392, 0xffffff);
	go->AddBmp("��6", "��6", 0, 0, 366, 393, 0xffffff);
	go->AddBmp("��7", "��7", 0, 0, 365, 392, 0xffffff);
	go->AddBmp("��8", "��8", 0, 0, 366, 391, 0xffffff);
	go->AddBmp("��9", "��9", 0, 0, 350, 394, 0xffffff);
	go->AddBmp("��10", "��10", 0, 0, 320, 392, 0xffffff);
	m_Animation = new CAnimation(10);
	m_Animation->SetBmp("��1", 57, -193, 4);
	m_Animation->SetBmp("��2", 45, -190, 4);
	m_Animation->SetBmp("��3", 52, -191, 4);
	m_Animation->SetBmp("��4", 67, -190, 4);
	m_Animation->SetBmp("��5", 85, -190, 4);
	m_Animation->SetBmp("��6", 80, -189, 4);
	m_Animation->SetBmp("��7", 75, -191, 4);
	m_Animation->SetBmp("��8", 77, -189, 4);
	m_Animation->SetBmp("��9", 72, -189, 4);
	m_Animation->SetBmp("��10", 59, -191, 4);
	CMyRect r;
	r.SetWH(100, 300);
	r.Setoff(5, -150); m_Animation->SetDefR(0, r);
	r.Setoff(5, -150); m_Animation->SetDefR(1, r);
	r.Setoff(5, -150); m_Animation->SetDefR(2, r);
	r.Setoff(5, -150); m_Animation->SetDefR(3, r);
	r.Setoff(5, -150); m_Animation->SetDefR(4, r);
	r.Setoff(5, -150); m_Animation->SetDefR(5, r);
	r.Setoff(5, -150); m_Animation->SetDefR(6, r);
	r.Setoff(5, -150); m_Animation->SetDefR(7, r);
	r.Setoff(5, -150); m_Animation->SetDefR(8, r);
	r.Setoff(5, -150); m_Animation->SetDefR(9, r);
	r.Setoff(5, -150); m_Animation->SetDefR(10, r);
	m_Next = ��������;

}

void Cwalk::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
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
	if (gi->Get(_GI_K_J) == KS_DC)
	{
		m_character->SetNextAct(��������);
	}
	if (gi->Get(_GI_K_D) == KS_DH)	
	{
		JudgePos.x += sx->speed;
		pos.x = JudgePos.x;
		sx->FaceDir = 6;
		sx->MoveDir = 6;
	}
	else if (gi->Get(_GI_K_A) == KS_DH)
	{
		JudgePos.x -= sx->speed;
		pos.x = JudgePos.x;
		sx->FaceDir = 4;
		sx->MoveDir = 4;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	if (gi->Get(_GI_K_W) == KS_DH || gi->Get(_GI_K_W) == KS_DC)
	{
		JudgePos.y -= sx->speed - 2;
		pos.y -= sx->speed - 2;
		sx->MoveDir = 8;
	}
	else if (gi->Get(_GI_K_S) == KS_DH || gi->Get(_GI_K_S) == KS_DC)
	{
		JudgePos.y += sx->speed - 2;
		pos.y += sx->speed - 2;
		sx->MoveDir = 2;
	}
	if (gi->Get(_GI_K_SPACE) == KS_DC)
	{
		m_character->SetNextAct(��������);
		m_character->GetSX()->m_curjumpPower = m_character->GetSX()->m_jump;
	}
	if (gi->Get(_GI_K_W) != KS_DH && gi->Get(_GI_K_S) != KS_DH &&
		gi->Get(_GI_K_A) != KS_DH && gi->Get(_GI_K_D) != KS_DH)
	{
		m_character->SetNextAct(������վ);
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m_character->Peng(sx->MoveDir);
	JudgePos = m_character->GetJudgePos();
	pos = JudgePos;
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(JudgePos.x, JudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_Next);
}

void Cwalk::End()
{
}

CAnimation* Cwalk::GetAnimation()
{
	return m_Animation;
}

void Cwalk::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

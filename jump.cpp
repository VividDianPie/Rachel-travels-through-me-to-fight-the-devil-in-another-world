#include "jump.h"
#include"GameInput.h"
#include"Animation.h"
#include "Character.h"
#include"GameOutput.h"

Cjump::~Cjump()
{
}

void Cjump::Init()
{
	CGO* go = CGO::GetGO();
	char str[64];
	char str2[64];
	for (int i = 0; i < 15; i++)
	{
		sprintf_s(str, 64, "bmp\\ÀÙç÷¶ùÉÏÌø\\%d.bmp", i);
		sprintf_s(str2, 64, "ÀÙç÷¶ùÉÏÌø%d", i);
		go->AddImage(str2, str);
	}
	go->AddBmp("ÀÙç÷¶ùÉÏÌø0", "ÀÙç÷¶ùÉÏÌø0", 0, 0, 335, 538, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø1", "ÀÙç÷¶ùÉÏÌø1", 0, 0, 314, 441, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø2", "ÀÙç÷¶ùÉÏÌø2", 0, 0, 412, 664, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø3", "ÀÙç÷¶ùÉÏÌø3", 0, 0, 405, 664, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø4", "ÀÙç÷¶ùÉÏÌø4", 0, 0, 404, 606, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø5", "ÀÙç÷¶ùÉÏÌø5", 0, 0, 364, 389, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø6", "ÀÙç÷¶ùÉÏÌø6", 0, 0, 357, 438, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø7", "ÀÙç÷¶ùÉÏÌø7", 0, 0, 342, 535, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø8", "ÀÙç÷¶ùÉÏÌø8", 0, 0, 330, 533, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø9", "ÀÙç÷¶ùÉÏÌø9", 0, 0, 289, 438, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø10", "ÀÙç÷¶ùÉÏÌø10", 0, 0, 330, 486, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø11", "ÀÙç÷¶ùÉÏÌø11", 0, 0, 293, 523, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø12", "ÀÙç÷¶ùÉÏÌø12", 0, 0, 368, 504, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø13", "ÀÙç÷¶ùÉÏÌø13", 0, 0, 393, 491, RGB(0, 255, 0));
	go->AddBmp("ÀÙç÷¶ùÉÏÌø14", "ÀÙç÷¶ùÉÏÌø14", 0, 0, 434, 470, RGB(0, 255, 0));

	m_Animation = new CAnimation(9);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø9", 32, -204, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø10", 32, -228, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø2", 74, -410, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø3", 76, -468, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø4", 54, -473, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø5", 21, -406, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø6", 14, -375, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø0", 21, -354, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø7", 41, -300, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø8", 25, -272, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø11", 20, -262, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø12", 24, -245, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø13", 16, -232, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø14", 21, -221, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùÉÏÌø1", 1, -207, 5);
	m_NextAct = ÀÙç÷¶ùÕ¾;
}

void Cjump::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	CGI* gi = CGI::GetGI();
	SHUX* sx = m_character->GetSX();
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
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
	if (sx->m_curjumpPower > 0)
	{
	}
	sx->m_curjumpPower -= 1;
	if (gi->Get(_GI_K_D) == KS_DH)
	{
		JudgePos.x += sx->RunSpeed;
		pos.x = JudgePos.x;
		sx->MoveDir = 6;
		sx->FaceDir = 6;
	}
	else if (gi->Get(_GI_K_A) == KS_DH)
	{
		JudgePos.x -= sx->RunSpeed;
		pos.x = JudgePos.x;
		sx->MoveDir = 4;
		sx->FaceDir = 4;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		if (sx->MoveDir == 4)
			pos.x += sx->RunSpeed;
		else
			pos.x -= sx->RunSpeed;
		m_character->SetPos(pos);
	}
	if (gi->Get(_GI_K_W) == KS_DH)	
	{
		JudgePos.y -= sx->speed;
		pos.y -= sx->speed;
		sx->MoveDir = 8;
	}
	else if (gi->Get(_GI_K_S) == KS_DH)
	{
		JudgePos.y += sx->speed;
		pos.y += sx->speed;
		sx->MoveDir = 2;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))	
	{
		if (sx->MoveDir == 8)
			pos.y += sx->speed;
		else
			pos.y -= sx->speed;
		m_character->SetPos(pos);
	}
	JudgePos = m_character->GetJudgePos();
	pos = m_character->GetPos();
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m2.Translation(JudgePos.x, JudgePos.y);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void Cjump::End()
{
}

CAnimation* Cjump::GetAnimation()
{
	return m_Animation;
}

void Cjump::Reset()
{
	if (nullptr == m_Animation)
	{
		return;
	}
	m_Animation->Reset();
}

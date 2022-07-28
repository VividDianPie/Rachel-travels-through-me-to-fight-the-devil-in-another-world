#include "RachelSleep.h"
#include"GameOutput.h"
#include"Character.h"
#include"GameInput.h"
CRachelSleep::~CRachelSleep()
{
	delete m_Animation;
}

void CRachelSleep::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������˯\\rc011_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������˯\\rc011_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������˯%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������˯0",   "������˯0", 0, 0, 320, 255, 0xffffff);
	go->AddBmp("������˯1",   "������˯1", 0, 0, 331, 250, 0xffffff);
	go->AddBmp("������˯2",   "������˯2", 0, 0, 333, 248, 0xffffff);
	go->AddBmp("������˯3",   "������˯3", 0, 0, 330, 254, 0xffffff);
	go->AddBmp("������˯4",   "������˯4", 0, 0, 330, 258, 0xffffff);
	go->AddBmp("������˯5",   "������˯5", 0, 0, 333, 248, 0xffffff);
	go->AddBmp("������˯6",   "������˯6", 0, 0, 326, 256, 0xffffff);
	go->AddBmp("������˯7",   "������˯7", 0, 0, 322, 262, 0xffffff);
	go->AddBmp("������˯8",   "������˯8", 0, 0, 333, 249, 0xffffff);
	go->AddBmp("������˯9",   "������˯9", 0, 0, 335, 255, 0xffffff);
	go->AddBmp("������˯10", "������˯10", 0, 0, 329, 257, 0xffffff);
	go->AddBmp("������˯11", "������˯11", 0, 0, 331, 257, 0xffffff);
	go->AddBmp("������˯12", "������˯12", 0, 0, 336, 257, 0xffffff);
	go->AddBmp("������˯13", "������˯13", 0, 0, 338, 256, 0xffffff);
	go->AddBmp("������˯14", "������˯14", 0, 0, 342, 255, 0xffffff);
	go->AddBmp("������˯15", "������˯15", 0, 0, 343, 254, 0xffffff);
	go->AddBmp("������˯16", "������˯16", 0, 0, 316, 268, 0xffffff);
	go->AddBmp("������˯17", "������˯17", 0, 0, 302, 258, 0xffffff);
	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("������˯0", 14, -119, 3);
	m_Animation->SetBmp("������˯1", 7, -116, 3);
	m_Animation->SetBmp("������˯2", 5, -115, 3);
	m_Animation->SetBmp("������˯3", 7, -118, 3);
	m_Animation->SetBmp("������˯4", 6, -120, 3);
	m_Animation->SetBmp("������˯5", 5, -116, 3);
	m_Animation->SetBmp("������˯6", 9, -121, 3);
	m_Animation->SetBmp("������˯7", 14, -124, 3);
	m_Animation->SetBmp("������˯8", 9, -118, 3);
	m_Animation->SetBmp("������˯9", 8, -120, 3);
	m_Animation->SetBmp("������˯10", -2, -120, 3);
	m_Animation->SetBmp("������˯11", 1, -120, 3);
	m_Animation->SetBmp("������˯12", 3, -120, 3);
	m_Animation->SetBmp("������˯13", 3, -119, 3);
	m_Animation->SetBmp("������˯14", 5, -119, 3);
	m_Animation->SetBmp("������˯15", 5, -118, 3);
	m_Animation->SetBmp("������˯16", 4, -125, 3);
	m_Animation->SetBmp("������˯17", 13, -120, 3);
	m_NextAct = ������˯;
}

void CRachelSleep::Run()
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
	if (gi->Get(_GI_K_K) == KS_DC)
	{
		m_character->SetNextAct(������˯��);
	}
	if (gi->Get(_GI_K_D) == KS_DH)	
	{
		JudgePos.x += sx->SleepMoveSpeed;
		pos.x = JudgePos.x;
		sx->FaceDir = 6;
		sx->MoveDir = 6;
	}
	else if (gi->Get(_GI_K_A) == KS_DH)
	{
		JudgePos.x -= sx->SleepMoveSpeed;
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
		JudgePos.y -= sx->SleepMoveSpeed;
		pos.y = JudgePos.y;
		sx->MoveDir = 8;
	}
	else if (gi->Get(_GI_K_S) == KS_DH || gi->Get(_GI_K_S) == KS_DC)
	{
		JudgePos.y += sx->SleepMoveSpeed;
		pos.y = JudgePos.y;
		sx->MoveDir = 2;
	}
	else if (gi->Get(_GI_K_Q) == KS_DC)
		m_character->SetNextAct(������վ);
	else
		m_NextAct = ������˯;
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
		m_character->SetNextAct(m_NextAct);
}

void CRachelSleep::End()
{
}

CAnimation* CRachelSleep::GetAnimation()
{
	return m_Animation;
}

void CRachelSleep::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

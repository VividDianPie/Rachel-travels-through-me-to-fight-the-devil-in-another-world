#include "RachelShou.h"
#include"GameOutput.h"
#include"Character.h"
#include"GameInput.h"
#include"KJ.h"
#include"scene.h"
#include"AudioManager.h"
CRachelShou::~CRachelShou()
{
	delete m_Animation;
}

void CRachelShou::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc052_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������0", "��������0", 0, 0, 302, 352, 0xffffff);
	go->AddBmp("��������1", "��������1", 0, 0, 312, 341, 0xffffff);
	go->AddBmp("��������2", "��������2", 0, 0, 275, 340, 0xffffff);
	go->AddBmp("��������3", "��������3", 0, 0, 367, 339, 0xffffff);
	go->AddBmp("��������4", "��������4", 0, 0, 466, 338, 0xffffff);

	m_Animation = new CAnimation(9);
	m_Animation->SetBmp("��������0", 25, -161, 2);
	m_Animation->SetBmp("��������1", 23, -157, 3);
	m_Animation->SetBmp("��������2", 12, -154, 4);
	m_Animation->SetBmp("��������3", 59, -154, 5);
	m_Animation->SetBmp("��������4", 98, -153, 6);
	m_Animation->SetBmp("��������3", 59, -154, 5);
	m_Animation->SetBmp("��������2", 12, -154, 4);
	m_Animation->SetBmp("��������1", 23, -157, 3);
	m_Animation->SetBmp("��������0", 25, -161, 2);
	m_NextAct = ������վ;
	m_AudioOffOrOn = true;
}

void CRachelShou::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
	if (m_Animation->GetCurContinueF()==0&&m_Animation->GetCurF()==0)
	{
		int i = rand() % 2;
		if (i == 0)
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("ͦ�۵�");
		else
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("��Ҫ����");
		m_AudioOffOrOn = false;
	}
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
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(JudgePos.x, JudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_NextAct);
		m_AudioOffOrOn = true;
	}
}

void CRachelShou::End()
{
}

CAnimation* CRachelShou::GetAnimation()
{
	return m_Animation;
}

void CRachelShou::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

#include "Animation.h"
#include "Hakumenshou.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CHakumenShou::~CHakumenShou()
{
}

void CHakumenShou::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha050_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha050_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0", "������0", 0, 0, 538, 432, RGB(0,255,0));
	go->AddBmp("������1", "������1", 0, 0, 561, 439, RGB(0, 255, 0));
	go->AddBmp("������2", "������2", 0, 0, 576, 406, RGB(0, 255, 0));
	go->AddBmp("������3", "������3", 0, 0, 602, 339, RGB(0, 255, 0));
	go->AddBmp("������4", "������4", 0, 0, 635, 312, RGB(0, 255, 0));

	m_Animation = new CAnimation(5);
	m_Animation->SetBmp("������0", 126, -203, 10);
	m_Animation->SetBmp("������1", 130, -206, 10);
	m_Animation->SetBmp("������2", 132, -189, 10);
	m_Animation->SetBmp("������3", 130, -156, 10);
	m_Animation->SetBmp("������4", 120, -143, 10);

	m_NextAct = ������;
}
void CHakumenShou::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m1, m2;
	if (m_enemy->GetProperty()->FaceDir != m_enemy->GetNDir())
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
	POS Hpos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	m_Animation->Run();
	if (m_enemy->GetProperty()->Hp <= 0)
	{
		m_enemy->GetProperty()->Hp = 0;
		m_enemy->SetNextAct(������);

		m_enemy->SetState(-1, m_character);
		return;
	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CHakumenShou::End()
{

}

CAnimation* CHakumenShou::GetAnimation()
{
	return m_Animation;
}

void CHakumenShou::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


#include "Animation.h"
#include "HakumenDie.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CHakumenDie::~CHakumenDie()
{
}

void CHakumenDie::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha060_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha060_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0", "������0", 0, 0, 567, 457, RGB(0,255,0));
	go->AddBmp("������1", "������1", 0, 0, 376, 398, RGB(0,255,0));
	go->AddBmp("������2", "������2", 0, 0, 374, 352, RGB(0,255,0));
	go->AddBmp("������3", "������3", 0, 0, 421, 345, RGB(0,255,0));
	go->AddBmp("������4", "������4", 0, 0, 423, 207, RGB(0,255,0));
	go->AddBmp("������5", "������5", 0, 0, 398, 467, RGB(0,255,0));
	go->AddBmp("������6", "������6", 0, 0, 398, 467, RGB(0,255,0));
	go->AddBmp("������7", "������7", 0, 0, 484, 376, RGB(0,255,0));
	go->AddBmp("������8", "������8", 0, 0, 507, 262, RGB(0,255,0));
	go->AddBmp("������9", "������9", 0, 0, 470, 208, RGB(0,255,0));
	go->AddBmp("������10", "������10", 0, 0, 504, 167, RGB(0,255,0));
	go->AddBmp("������11", "������11", 0, 0, 494, 133, RGB(0,255,0));
	go->AddBmp("������12", "������12", 0, 0, 496, 141, RGB(0,255,0));
	go->AddBmp("������13", "������13", 0, 0, 501, 117, RGB(0,255,0));
	go->AddBmp("������14", "������14", 0, 0, 505, 106, RGB(0,255,0));

	m_Animation = new CAnimation(15);
	m_Animation->SetBmp("������0", 158, -226, 10);
	m_Animation->SetBmp("������1", 114, -185, 10);
	m_Animation->SetBmp("������2", 175, -270, 10);
	m_Animation->SetBmp("������3", 312, -273, 10);
	m_Animation->SetBmp("������4", 396, -356, 10);
	m_Animation->SetBmp("������5", 433, -357, 10);
	m_Animation->SetBmp("������6", 456, -282, 10);
	m_Animation->SetBmp("������7", 477, -190, 10);
	m_Animation->SetBmp("������8", 474, -124, 10);
	m_Animation->SetBmp("������9", 523, -80, 10);
	m_Animation->SetBmp("������10", 519, -34, 10);
	m_Animation->SetBmp("������11", 528, -60, 10);
	m_Animation->SetBmp("������12", 534, -57, 10);
	m_Animation->SetBmp("������13", 536, -31, 10);
	m_Animation->SetBmp("������14", 541,-25, 1000);
	m_NextAct = ������;
}
void CHakumenDie::Run()
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
	if (m_Animation->IsPlaying() == 0)
	{
		//m_enemy->SetNextAct(m_NextAct);
	}
}

void CHakumenDie::End()
{

}

CAnimation* CHakumenDie::GetAnimation()
{
	return m_Animation;
}

void CHakumenDie::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


#include "Character.h"
#include "Animation.h"
#include "BOSSIdle.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
CBOSSIdle::~CBOSSIdle()
{
}

void CBOSSIdle::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 10; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS站\\ar001_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS站\\ar000_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS站%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS站0", "BOSS站0", 0, 0, 384, 380, 0xffffff);
	go->AddBmp("BOSS站1", "BOSS站1", 0, 0, 366, 388, 0xffffff);
	go->AddBmp("BOSS站2", "BOSS站2", 0, 0, 351, 389, 0xffffff);
	go->AddBmp("BOSS站3", "BOSS站3", 0, 0, 355, 375, 0xffffff);
	go->AddBmp("BOSS站4", "BOSS站4", 0, 0, 355, 338, 0xffffff);
	go->AddBmp("BOSS站5", "BOSS站5", 0, 0, 366, 333, 0xffffff);
	go->AddBmp("BOSS站6", "BOSS站6", 0, 0, 370, 326, 0xffffff);
	go->AddBmp("BOSS站7", "BOSS站7", 0, 0, 386, 346, 0xffffff);
	go->AddBmp("BOSS站8", "BOSS站8", 0, 0, 385, 349, 0xffffff);
	go->AddBmp("BOSS站9", "BOSS站9", 0, 0, 374, 351, 0xffffff);
	m_Animation = new CAnimation(10);
	m_Animation->SetBmp("BOSS站0",   60, -189, 3);
	m_Animation->SetBmp("BOSS站1",   52, -192, 3);
	m_Animation->SetBmp("BOSS站2",   44, -191, 3);
	m_Animation->SetBmp("BOSS站3",   35, -184, 3);
	m_Animation->SetBmp("BOSS站4",   31, -164, 3);
	m_Animation->SetBmp("BOSS站5",   38, -162, 3);
	m_Animation->SetBmp("BOSS站6",   34, -159, 3);
	m_Animation->SetBmp("BOSS站7",   44, -170, 3);
	m_Animation->SetBmp("BOSS站8",   58, -172, 3);
	m_Animation->SetBmp("BOSS站9",   53, -173, 3);

	CMyRect Dr;
	Dr.SetWH(200, 350);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(0, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(1, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(2, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(3, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(4, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(5, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(6, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(7, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(8, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(9, Dr);
	time = 1;
	m_NextAct = BOSS走;
}

void CBOSSIdle::Run()
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
	m_Animation->SetMatrix2(&m2);//偏移平移
	m_Animation->SetLevel(m_enemy->Getlevel());
	m_Animation->Run();
	if (time <= 0)
		m_enemy->SetNextAct(BOSS站);
	else if (m_Animation->IsPlaying() == 0)
	{
		time -= 1;
		if (time == 0)
		{
			m_enemy->SetNextAct(m_NextAct);
			time = 5;
		}
		else
			m_Animation->Reset();
	}
}

void CBOSSIdle::End()
{

}

CAnimation* CBOSSIdle::GetAnimation()
{
	return m_Animation;
}

void CBOSSIdle::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

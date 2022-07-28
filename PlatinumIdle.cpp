#include "PlatinumIdle.h"
#include"GameOutput.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"PlatinumIdle.h"
#include"Character.h"
CPlatinumIdle::~CPlatinumIdle()
{
	delete m_Animation;
}

void CPlatinumIdle::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 2; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\魔法少女白金站\\pt010_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\魔法少女白金站\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "魔法少女白金站%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("魔法少女白金站2", "魔法少女白金站2", 0, 0, 287, 343, 0xffffff);
	go->AddBmp("魔法少女白金站3", "魔法少女白金站3", 0, 0, 287, 344, 0xffffff);
	go->AddBmp("魔法少女白金站4", "魔法少女白金站4", 0, 0, 287, 344, 0xffffff);
	go->AddBmp("魔法少女白金站5", "魔法少女白金站5", 0, 0, 287, 345, 0xffffff);
	go->AddBmp("魔法少女白金站6", "魔法少女白金站6", 0, 0, 287, 344, 0xffffff);
	go->AddBmp("魔法少女白金站7", "魔法少女白金站7", 0, 0, 287, 344, 0xffffff);
	go->AddBmp("魔法少女白金站8", "魔法少女白金站8", 0, 0, 287, 343, 0xffffff);
	go->AddBmp("魔法少女白金站9", "魔法少女白金站9", 0, 0, 287, 343, 0xffffff);
	go->AddBmp("魔法少女白金站10", "魔法少女白金站10", 0, 0, 287, 342, 0xffffff);
	go->AddBmp("魔法少女白金站11", "魔法少女白金站11", 0, 0, 287, 342, 0xffffff);
	go->AddBmp("魔法少女白金站12", "魔法少女白金站12", 0, 0, 287, 343, 0xffffff);
	go->AddBmp("魔法少女白金站13", "魔法少女白金站13", 0, 0, 287, 343, 0xffffff);
	m_Animation = new CAnimation(12);
	m_Animation->SetBmp("魔法少女白金站2", 29,		 -114, 3);
	m_Animation->SetBmp("魔法少女白金站3", 29,		 -114, 3);
	m_Animation->SetBmp("魔法少女白金站4", 29,		 -114, 3);
	m_Animation->SetBmp("魔法少女白金站5", 29,		 -115, 3);
	m_Animation->SetBmp("魔法少女白金站6", 29,		 -114, 3);
	m_Animation->SetBmp("魔法少女白金站7", 29,		 -114, 6);
	m_Animation->SetBmp("魔法少女白金站8", 29,		 -114, 6);
	m_Animation->SetBmp("魔法少女白金站9", 29,		 -114, 6);
	m_Animation->SetBmp("魔法少女白金站10", 29,     -113, 10);
	m_Animation->SetBmp("魔法少女白金站11", 29,     -113, 6);
	m_Animation->SetBmp("魔法少女白金站12", 29,     -114, 6);
	m_Animation->SetBmp("魔法少女白金站13", 29,     -114, 3);
	m_Animation->Play();
	CMyRect Dr;
	Dr.SetWH(60, 200);
	Dr.Setoff(0, -150); m_Animation->SetDefR(0,  Dr);    
	Dr.Setoff(0, -150); m_Animation->SetDefR(1,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(2,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(3,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(4,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(5,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(6,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(7,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(8,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(9,  Dr);
	Dr.Setoff(0, -150); m_Animation->SetDefR(10,Dr);
	m_NextAct = 白金站;
}

void CPlatinumIdle::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m1, m2;

	m1.Translation(bmp->offx, bmp->offy);
	m2.Translation(1177, 391);
	m = m1 * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m);
	m_Animation->SetLevel(_Level_3);
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void CPlatinumIdle::End()
{
}

CAnimation* CPlatinumIdle::GetAnimation()
{
	return m_Animation;
}

void CPlatinumIdle::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}




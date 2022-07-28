#include "PlatinumShou.h"
#include"GameOutput.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"PlatinumIdle.h"
#include"Character.h"
#include"AudioManager.h"
CPlatinumShou::~CPlatinumShou()
{
	delete m_Animation;
}

void CPlatinumShou::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 5; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\魔法少女白金受\\pt054_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\魔法少女白金站\\pt010_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "魔法少女白金受%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("魔法少女白金受0", "魔法少女白金受0", 0, 0, 277, 350, 0xffffff);
	go->AddBmp("魔法少女白金受1", "魔法少女白金受1", 0, 0, 281, 362, 0xffffff);
	go->AddBmp("魔法少女白金受2", "魔法少女白金受2", 0, 0, 267, 360, 0xffffff);
	go->AddBmp("魔法少女白金受3", "魔法少女白金受3", 0, 0, 268, 356, 0xffffff);
	go->AddBmp("魔法少女白金受4", "魔法少女白金受4", 0, 0, 278, 353, 0xffffff);

	m_Animation = new CAnimation(8);
	m_Animation->SetBmp("魔法少女白金受0", 39, -116, 3);
	m_Animation->SetBmp("魔法少女白金受1", 40, -115, 3);
	m_Animation->SetBmp("魔法少女白金受2", 45, -117, 3);
	m_Animation->SetBmp("魔法少女白金受3", 51, -117, 5);
	m_Animation->SetBmp("魔法少女白金受4", 53, -116, 5);
	m_Animation->SetBmp("魔法少女白金受3", 51, -117, 5);
	m_Animation->SetBmp("魔法少女白金受2", 45, -117, 3);
	m_Animation->SetBmp("魔法少女白金受1", 40, -115, 3);
	m_AudioOffOrOn = true;
	m_Animation->Play();
	m_NextAct = 白金站;
}

void CPlatinumShou::Run()
{
	if (m_AudioOffOrOn)
	{
		int i = rand() %2;
		if (i == 0)
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("挺疼的");
		else
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("不要打我");
		m_AudioOffOrOn =false;
	}
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
	{
		m_character->SetNextAct(m_NextAct);
		m_AudioOffOrOn = true;
	}
}

void CPlatinumShou::End()
{
}

CAnimation* CPlatinumShou::GetAnimation()
{
	return m_Animation;
}

void CPlatinumShou::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}




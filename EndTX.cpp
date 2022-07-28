#include"EndTX.h"
#include"Animation.h"
#include"Matrix3.h"
#include"Character.h"
#include"Enemy.h"
#include"KJ.h"
#include"GameOutPut.h"
CEndTX::~CEndTX()
{
}
void CEndTX::Init(CEnemy* p)
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 3; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\心\\vr_pt450cutinbg0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\心\\ar620_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "心%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("心0", "心0", 0, 0, 512, 512, 0xffffff);
	go->AddBmp("心1", "心1", 0, 0, 512, 512, 0xffffff);
	go->AddBmp("心2", "心2", 0, 0, 512, 512, 0xffffff);
	m_Animation = new CAnimation(3);
	m_Animation->SetBmp("心0", 0, -126, 3);
	m_Animation->SetBmp("心1", 0, -126, 3);
	m_Animation->SetBmp("心2", 0, -126, 3);
	y = p->GetJudgePos().y;
	x = p->GetJudgePos().x;
	playing = true;
	m_Animation->Reset();
}
void CEndTX::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m0, m1, m2;
	m1.Scoling(0.2, 0.2);
	m2.Translation(bmp->offx, bmp->offy);
	m = m1 * m2;
	m0 = m;
	m2.Translation(x, y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	if (m_Animation == 0)
		return;
	m_Animation->SetLevel(6);
	m_Animation->Run();
	CGO* go = CGO::GetGO();
	go->DrawRect(x, y, 2, 2, 3, RGB(254, 0, 0));
	if (m_Animation->IsPlaying() == 0)
	{
		playing = false;
	}
}
void CEndTX::End()
{
	delete m_Animation;
}
CAnimation* CEndTX::GetAnimation()
{
	return m_Animation;
}

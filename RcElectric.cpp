#include "RcElectric.h"
#include"Animation.h"
#include "BOSS.h"
#include "matrix3.h"
#include "GameInput.h"
#include "GameOutput.h"
#include "Character.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"


CRcElectric::~CRcElectric()
{
	delete m_Animation;
}


void CRcElectric::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùµç\\rc406_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùµç\\rc406_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùµç%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùµç0", "ÀÙç÷¶ùµç0", 0, 0, 269, 364, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç1", "ÀÙç÷¶ùµç1", 0, 0, 238, 360, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç2", "ÀÙç÷¶ùµç2", 0, 0, 250, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç3", "ÀÙç÷¶ùµç3", 0, 0, 328, 381, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç4", "ÀÙç÷¶ùµç4", 0, 0, 308, 375, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç5", "ÀÙç÷¶ùµç5", 0, 0, 249, 346, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç6", "ÀÙç÷¶ùµç6", 0, 0, 216, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç7", "ÀÙç÷¶ùµç7", 0, 0, 260, 358, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç8", "ÀÙç÷¶ùµç8", 0, 0, 298, 376, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç9", "ÀÙç÷¶ùµç9", 0, 0, 327, 392, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç10", "ÀÙç÷¶ùµç10", 0, 0, 380, 382, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç11", "ÀÙç÷¶ùµç11", 0, 0, 428, 383, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç12", "ÀÙç÷¶ùµç12", 0, 0, 423, 387, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç13", "ÀÙç÷¶ùµç13", 0, 0, 343, 393, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç14", "ÀÙç÷¶ùµç14", 0, 0, 285, 383, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç15", "ÀÙç÷¶ùµç15", 0, 0, 280, 373, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç16", "ÀÙç÷¶ùµç16", 0, 0, 263, 378, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç17", "ÀÙç÷¶ùµç17", 0, 0, 288, 372, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùµç18", "ÀÙç÷¶ùµç18", 0, 0, 316, 373, 0xffffff);
	m_Animation = new CAnimation(19);
	m_Animation->SetBmp("ÀÙç÷¶ùµç0", 18, -169, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç1", 0, -167, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç2", -7, -169, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç3", 49, -169, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç4", 33, -168, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç5", -4, -154, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùµç6", -4, -152, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùµç7", -4, -160, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùµç8", 4, -169, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç9", -15, -177, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç10", -39, -172, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç11", -69, -176, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç12", -80, -178, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç13", -23, -182, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç14", -11, -181, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç15", -12, -178, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç16", 3, -176, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç17", 19, -173, 2);
	m_Animation->SetBmp("ÀÙç÷¶ùµç18", 7, -174, 2);
	go->AddImage("Çòµç0", "bmp\\ÀÙç÷¶ùµç\\vrrcef_lightning02.bmp");
	go->AddImage("Çòµç1", "bmp\\ÀÙç÷¶ùµç\\vrrcef_lightning03.bmp");
	go->AddImage("ÉÁµç2", "bmp\\ÀÙç÷¶ùµç\\vrrcef_lightning00.bmp");
	go->AddImage("ÉÁµç3", "bmp\\ÀÙç÷¶ùµç\\vrrcef_lightning01.bmp");
	go->AddBmp("Çòµç0", "Çòµç0", 0, 0, 237, 237, 0xffffff);
	go->AddBmp("Çòµç1", "Çòµç1", 0, 0, 237, 237, 0xffffff);
	go->AddBmp("ÉÁµç3", "ÉÁµç3", 0, 0, 222, 512, 0xffffff);
	go->AddBmp("ÉÁµç2", "ÉÁµç2", 0, 0, 457, 512, 0xffffff);
	m_AnimationBall = new CAnimation(2);
	m_AnimationBall->SetBmp("Çòµç0",0,-600,10);
	m_AnimationBall->SetBmp("Çòµç1", 0, -600, 10);
	m_AnimationElectricity = new CAnimation(2);
	m_AnimationElectricity->SetBmp("ÉÁµç3", 0, 0, 10);
	m_AnimationElectricity->SetBmp("ÉÁµç2", 0, 0, 10);
	m_AnimationElectricity->Play();
	 ElectricityX = 0;
	m_NextAction = ÀÙç÷¶ùÕ¾;
}



void CRcElectric::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();
	CGI* gi = CGI::GetGI();
	Matrix3 m, m1, m2,					m4,m5;
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
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (gi->Get(_GI_K_U) == KS_DH && m_Animation->GetCurF() == 13)
	{
		m_Animation->SetCurF(12);
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			ElectricityX += 20;
		else
			ElectricityX -=20;
		m4.Translation(ElectricityX, 0);
		m5 = m * m4;
		m_AnimationBall->Play();
		m_AnimationBall->SetMatrix(&m5);
		m_AnimationBall->SetMatrix2(&m5);
		m_AnimationBall->SetLevel(m_character->GetOutPutLevel());
			m_AnimationBall->Run();
	}
	if (gi->Get(_GI_K_U) == KS_UC )
	{
		m4.Translation(ElectricityX, 0);
		m5 = m * m4;
		m_AnimationElectricity->Play();
		m_AnimationElectricity->SetMatrix(&m5);
		m_AnimationElectricity->SetMatrix2(&m5);
		m_AnimationElectricity->SetLevel(m_character->GetOutPutLevel());
	}
	if (m_Animation->GetCurF() >= 13)
	{
		COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
		int EnemyLen = EnemyManager->GetSize();
		CEnemy* enemy = 0;
		POS EnemyJudgePos;
		for (int i = 0; i < EnemyLen; i++)
		{
			enemy = (CEnemy*)EnemyManager->GetOBJ(i);
			EnemyJudgePos = enemy->GetJudgePos();
			m4.Translation(ElectricityX, 0);
			m5 = m * m4;
			if (EnemyJudgePos.y >= m5.eDy - 300 && EnemyJudgePos.y <= m5.eDy + 300 &&
				EnemyJudgePos.x >= m5.eDx - 300 && EnemyJudgePos.x <= m5.eDx + 300)
			{
				if (m_character->GetSX()->FaceDir != m_character->GetNDir())
				{
					enemy->SetJudgePos(EnemyJudgePos.x+=10,EnemyJudgePos.y);
					enemy->SetPos(EnemyJudgePos.x+=10,EnemyJudgePos.y);
				}
				else
				{
					enemy->SetJudgePos(EnemyJudgePos.x -= 10, EnemyJudgePos.y);
					enemy->SetPos(EnemyJudgePos.x -= 10, EnemyJudgePos.y);
				}
				enemy->SetState(BOSSÊÜ, m_character);
				enemy->GetProperty()->Hp -= 0.1;
			}
		}
		m_AnimationElectricity->Run();
	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_NextAction);
		ElectricityX = 0;
	}
}

void CRcElectric::End()
{
}

CAnimation* CRcElectric::GetAnimation()
{
	return m_Animation;
}

void CRcElectric::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcElectric::Peng()
{
	return false;
}

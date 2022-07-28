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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc406_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������\\rc406_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������0", "��������0", 0, 0, 269, 364, 0xffffff);
	go->AddBmp("��������1", "��������1", 0, 0, 238, 360, 0xffffff);
	go->AddBmp("��������2", "��������2", 0, 0, 250, 382, 0xffffff);
	go->AddBmp("��������3", "��������3", 0, 0, 328, 381, 0xffffff);
	go->AddBmp("��������4", "��������4", 0, 0, 308, 375, 0xffffff);
	go->AddBmp("��������5", "��������5", 0, 0, 249, 346, 0xffffff);
	go->AddBmp("��������6", "��������6", 0, 0, 216, 341, 0xffffff);
	go->AddBmp("��������7", "��������7", 0, 0, 260, 358, 0xffffff);
	go->AddBmp("��������8", "��������8", 0, 0, 298, 376, 0xffffff);
	go->AddBmp("��������9", "��������9", 0, 0, 327, 392, 0xffffff);
	go->AddBmp("��������10", "��������10", 0, 0, 380, 382, 0xffffff);
	go->AddBmp("��������11", "��������11", 0, 0, 428, 383, 0xffffff);
	go->AddBmp("��������12", "��������12", 0, 0, 423, 387, 0xffffff);
	go->AddBmp("��������13", "��������13", 0, 0, 343, 393, 0xffffff);
	go->AddBmp("��������14", "��������14", 0, 0, 285, 383, 0xffffff);
	go->AddBmp("��������15", "��������15", 0, 0, 280, 373, 0xffffff);
	go->AddBmp("��������16", "��������16", 0, 0, 263, 378, 0xffffff);
	go->AddBmp("��������17", "��������17", 0, 0, 288, 372, 0xffffff);
	go->AddBmp("��������18", "��������18", 0, 0, 316, 373, 0xffffff);
	m_Animation = new CAnimation(19);
	m_Animation->SetBmp("��������0", 18, -169, 2);
	m_Animation->SetBmp("��������1", 0, -167, 2);
	m_Animation->SetBmp("��������2", -7, -169, 2);
	m_Animation->SetBmp("��������3", 49, -169, 2);
	m_Animation->SetBmp("��������4", 33, -168, 2);
	m_Animation->SetBmp("��������5", -4, -154, 5);
	m_Animation->SetBmp("��������6", -4, -152, 5);
	m_Animation->SetBmp("��������7", -4, -160, 5);
	m_Animation->SetBmp("��������8", 4, -169, 2);
	m_Animation->SetBmp("��������9", -15, -177, 2);
	m_Animation->SetBmp("��������10", -39, -172, 2);
	m_Animation->SetBmp("��������11", -69, -176, 2);
	m_Animation->SetBmp("��������12", -80, -178, 2);
	m_Animation->SetBmp("��������13", -23, -182, 2);
	m_Animation->SetBmp("��������14", -11, -181, 2);
	m_Animation->SetBmp("��������15", -12, -178, 2);
	m_Animation->SetBmp("��������16", 3, -176, 2);
	m_Animation->SetBmp("��������17", 19, -173, 2);
	m_Animation->SetBmp("��������18", 7, -174, 2);
	go->AddImage("���0", "bmp\\��������\\vrrcef_lightning02.bmp");
	go->AddImage("���1", "bmp\\��������\\vrrcef_lightning03.bmp");
	go->AddImage("����2", "bmp\\��������\\vrrcef_lightning00.bmp");
	go->AddImage("����3", "bmp\\��������\\vrrcef_lightning01.bmp");
	go->AddBmp("���0", "���0", 0, 0, 237, 237, 0xffffff);
	go->AddBmp("���1", "���1", 0, 0, 237, 237, 0xffffff);
	go->AddBmp("����3", "����3", 0, 0, 222, 512, 0xffffff);
	go->AddBmp("����2", "����2", 0, 0, 457, 512, 0xffffff);
	m_AnimationBall = new CAnimation(2);
	m_AnimationBall->SetBmp("���0",0,-600,10);
	m_AnimationBall->SetBmp("���1", 0, -600, 10);
	m_AnimationElectricity = new CAnimation(2);
	m_AnimationElectricity->SetBmp("����3", 0, 0, 10);
	m_AnimationElectricity->SetBmp("����2", 0, 0, 10);
	m_AnimationElectricity->Play();
	 ElectricityX = 0;
	m_NextAction = ������վ;
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
				enemy->SetState(BOSS��, m_character);
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

#include "RcAtk3.h"
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


CRcAtk3::~CRcAtk3()
{
	delete m_Animation;
}


void CRcAtk3::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 17; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\rc213_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\��������ˮ\\rc213_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "��������ˮ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("��������ˮ0", "��������ˮ0", 0, 0, 305, 405, 0xffffff);
	go->AddBmp("��������ˮ1", "��������ˮ1", 0, 0, 365, 396, 0xffffff);
	go->AddBmp("��������ˮ2", "��������ˮ2", 0, 0, 413, 383, 0xffffff);
	go->AddBmp("��������ˮ3", "��������ˮ3", 0, 0, 393, 364, 0xffffff);
	go->AddBmp("��������ˮ4", "��������ˮ4", 0, 0, 355, 365, 0xffffff);
	go->AddBmp("��������ˮ5", "��������ˮ5", 0, 0, 318, 348, 0xffffff);
	go->AddBmp("��������ˮ6", "��������ˮ6", 0, 0, 255, 348, 0xffffff);
	go->AddBmp("��������ˮ7", "��������ˮ7", 0, 0, 256, 354, 0xffffff);
	go->AddBmp("��������ˮ8", "��������ˮ8", 0, 0, 250, 365, 0xffffff);
	go->AddBmp("��������ˮ9", "��������ˮ9", 0, 0, 330, 365, 0xffffff);
	go->AddBmp("��������ˮ10", "��������ˮ10", 0, 0, 428, 404, 0xffffff);
	go->AddBmp("��������ˮ11", "��������ˮ11", 0, 0, 471, 379, 0xffffff);
	go->AddBmp("��������ˮ12", "��������ˮ12", 0, 0, 453, 382, 0xffffff);
	go->AddBmp("��������ˮ13", "��������ˮ13", 0, 0, 444, 374, 0xffffff);
	go->AddBmp("��������ˮ14", "��������ˮ14", 0, 0, 361, 396, 0xffffff);
	go->AddBmp("��������ˮ15", "��������ˮ15", 0, 0, 328, 406, 0xffffff);
	go->AddBmp("��������ˮ16", "��������ˮ16", 0, 0, 289, 407, 0xffffff);

	CMyRect Dr, Ar;
	m_Animation = new CAnimation(17);
	m_Animation->SetBmp("��������ˮ0", 22, -192,		 3);
	m_Animation->SetBmp("��������ˮ1", 25, -185,		 3);
	m_Animation->SetBmp("��������ˮ2", 31, -179,		 3);
	m_Animation->SetBmp("��������ˮ3", 16, -169,		 3);
	m_Animation->SetBmp("��������ˮ4", 44, -170,		 3);
	m_Animation->SetBmp("��������ˮ5", 40, -161,		 3);
	m_Animation->SetBmp("��������ˮ6", 32, -163,		 3);
	m_Animation->SetBmp("��������ˮ7", 41, -165,		 6);
	m_Animation->SetBmp("��������ˮ8", 50, -173,		 6);
	m_Animation->SetBmp("��������ˮ9", 79, -173,		 6);
	m_Animation->SetBmp("��������ˮ10", 27, -190,		 6);
	m_Animation->SetBmp("��������ˮ11", 11, -178,		 6);
	m_Animation->SetBmp("��������ˮ12", -11, -180,	 6);
	m_Animation->SetBmp("��������ˮ13", -60, -178,	 6);
	m_Animation->SetBmp("��������ˮ14", -24, -189,	 5);
	m_Animation->SetBmp("��������ˮ15", -2, -194,		 5);
	m_Animation->SetBmp("��������ˮ16", 4, -196,		 5);

	Dr.SetWH(100, 300);
	Ar.SetWH(230, 161);
	Dr.Setoff(0, -175); m_Animation->SetDefR(0, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(1, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(2, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(3, Dr);
	Ar.Setoff(-149, -163); m_Animation->SetActR(11, Ar);
	m_Animation->SetBmpAttackOff_Y(11, 50, 50);
	Ar.Setoff(-149, -163); m_Animation->SetActR(12, Ar);
	m_Animation->SetBmpAttackOff_Y(12, 50, 50);
	Ar.Setoff(-149, -163); m_Animation->SetActR(13, Ar);
	m_Animation->SetBmpAttackOff_Y(13, 50, 50);
	Dr.Setoff(0, -175); m_Animation->SetDefR(10, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(11, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(12, Dr);
	m_NextAction = ������վ;
}

void CRcAtk3::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();
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
	if (m_character->Peng(m_character->GetSX()->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m = m1 * m2;
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	Peng();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAction);
}

void CRcAtk3::End()
{
}

CAnimation* CRcAtk3::GetAnimation()
{
	return m_Animation;
}

void CRcAtk3::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcAtk3::Peng()
{
	COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
	int EnemyLen = EnemyManager->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect HeroARect = bmp->aRect[j];
		POS HeroJudgePos = m_character->GetJudgePos();
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			HeroARect.Setoff(m_character->GetJudgePos().x + -HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		else
			HeroARect.Setoff(m_character->GetJudgePos().x + HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		for (int i = 0; i < EnemyLen; ++i)
		{
			CEnemy* enemy = (CEnemy*)EnemyManager->GetOBJ(i);
			POS EnemyJudgePos = enemy->GetJudgePos();
			BMP* EnemyBmp = enemy->GetCurPic();
			int dlen = EnemyBmp->dlen;
			for (int x = 0; x < dlen; ++x)
			{
				CMyRect EnemyDr = EnemyBmp->dRect[x];
				EnemyDr.Setoff(EnemyDr.GetOffx() + EnemyJudgePos.x, EnemyDr.GetOffy() + EnemyJudgePos.y);
				if (HeroARect.Peng(&EnemyDr) &&
					EnemyJudgePos.y <= HeroJudgePos.y + bmp->AttackOffDown &&
					EnemyJudgePos.y >= HeroJudgePos.y - bmp->AttackOffUp){
					enemy->GetProperty()->Hp -= m_character->GetSX()->ad;
					EnemyJudgePos = enemy->GetJudgePos();
					if (EnemyJudgePos.x <= 0)
						EnemyJudgePos.x = 100;
					else if (EnemyJudgePos.x >= 2048)
						EnemyJudgePos.x = 1948;
					enemy->SetJudgePos(EnemyJudgePos);
					enemy->SetPos(EnemyJudgePos);
					enemy->SetState(BOSS��, m_character);
				}
			}
		}

  }
	return false;
}

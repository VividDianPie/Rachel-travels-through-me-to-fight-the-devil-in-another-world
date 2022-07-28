#include "CBossEat.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CBossEat::~CBossEat()
{
	delete m_Animation;
}

void CBossEat::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 16; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSҧ\\ar202_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSҧ\\ar202_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSҧ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSҧ0", "BOSSҧ0", 0, 0, 373, 390, 0xffffff);
	go->AddBmp("BOSSҧ1", "BOSSҧ1", 0, 0, 407, 387, 0xffffff);
	go->AddBmp("BOSSҧ2", "BOSSҧ2", 0, 0, 406, 399, 0xffffff);
	go->AddBmp("BOSSҧ3", "BOSSҧ3", 0, 0, 427, 347, 0xffffff);
	go->AddBmp("BOSSҧ4", "BOSSҧ4", 0, 0, 428, 324, 0xffffff);
	go->AddBmp("BOSSҧ5", "BOSSҧ5", 0, 0, 447, 396, 0xffffff);
	go->AddBmp("BOSSҧ6", "BOSSҧ6", 0, 0, 562, 409, 0xffffff);
	go->AddBmp("BOSSҧ7", "BOSSҧ7", 0, 0, 602, 415, 0xffffff);
	go->AddBmp("BOSSҧ8", "BOSSҧ8", 0, 0, 602, 420, 0xffffff);
	go->AddBmp("BOSSҧ9", "BOSSҧ9", 0, 0, 487, 475, 0xffffff);
	go->AddBmp("BOSSҧ10", "BOSSҧ10", 0, 0, 488, 485, 0xffffff);
	go->AddBmp("BOSSҧ11", "BOSSҧ11", 0, 0, 414, 485, 0xffffff);
	go->AddBmp("BOSSҧ12", "BOSSҧ12", 0, 0, 377, 459, 0xffffff);
	go->AddBmp("BOSSҧ13", "BOSSҧ13", 0, 0, 378, 416, 0xffffff);
	go->AddBmp("BOSSҧ14", "BOSSҧ14", 0, 0, 404, 379, 0xffffff);
	go->AddBmp("BOSSҧ15", "BOSSҧ15", 0, 0, 399, 375, 0xffffff);
	m_Animation = new CAnimation(16);
	m_Animation->SetBmp("BOSSҧ0", 33, -184, 3);
	m_Animation->SetBmp("BOSSҧ1", 14, -179, 3);
	m_Animation->SetBmp("BOSSҧ2", 11, -184, 3);
	m_Animation->SetBmp("BOSSҧ3", -45, -155, 3);
	m_Animation->SetBmp("BOSSҧ4", -46, -143, 3);
	m_Animation->SetBmp("BOSSҧ5", -66, -179, 6);
	m_Animation->SetBmp("BOSSҧ6", -38, -187, 6);
	m_Animation->SetBmp("BOSSҧ7", -37, -187,6);
	m_Animation->SetBmp("BOSSҧ8", -50, -188,10);
	m_Animation->SetBmp("BOSSҧ9", -1, -214,  6);
	m_Animation->SetBmp("BOSSҧ10", 1, -223,   6);
	m_Animation->SetBmp("BOSSҧ11", -1, -227, 3);
	m_Animation->SetBmp("BOSSҧ12", -3, -214, 3);
	m_Animation->SetBmp("BOSSҧ13", 11, -191, 3);
	m_Animation->SetBmp("BOSSҧ14", 22, -176, 3);
	m_Animation->SetBmp("BOSSҧ15", 29, -175, 3);
	CMyRect Dr, Ar;
	Ar.SetWH(250, 450);
	Ar.Setoff(-225, -200);   m_Animation->SetActR(5, Ar); m_Animation->SetBmpAttackOff_Y(  5, 90, 90);
	Ar.Setoff(-225, -200);   m_Animation->SetActR(6, Ar); m_Animation->SetBmpAttackOff_Y(  6, 90, 90);
	Ar.Setoff(-225, -200);   m_Animation->SetActR(7, Ar); m_Animation->SetBmpAttackOff_Y(  7, 90, 90);
	Ar.Setoff(-225, -200);   m_Animation->SetActR(8, Ar); m_Animation->SetBmpAttackOff_Y(  8, 90, 90);
	Ar.Setoff(-225, -200);   m_Animation->SetActR(9, Ar); m_Animation->SetBmpAttackOff_Y(  9, 90, 90);
	m_NextAct = BOSS��;
}

void CBossEat::Run()
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
	POS JudgePos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	Peng();
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_enemy->SetNextAct(m_NextAct);
}

void CBossEat::End()
{
}

CAnimation* CBossEat::GetAnimation()
{
	return m_Animation;
}

void CBossEat::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CBossEat::Peng()
{
	COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
	int len = hero->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect EnemyAr = bmp->aRect[j];
		POS EnemyJudgePos = m_enemy->GetJudgePos();
		if (m_enemy->GetProperty()->FaceDir == BOSS��)
			EnemyAr.Setoff(EnemyJudgePos.x + EnemyAr.GetOffx(), EnemyJudgePos.y + EnemyAr.GetOffy());
		else
			EnemyAr.Setoff(EnemyJudgePos.x - EnemyAr.GetOffx(), EnemyJudgePos.y + EnemyAr.GetOffy());
		for (int i = 0; i < len; ++i)
		{
			CHero* pHero = (CHero*)hero->GetOBJ(i);
			POS HeroJudgePos = pHero->GetJudgePos();
			BMP* HeroCurPic = pHero->GetCurBmp();
			int HeroDlen = HeroCurPic->dlen;
			for (int x = 0; x < HeroDlen; x++)
			{
				CMyRect HeroDr = HeroCurPic->dRect[x];
				HeroDr.Setoff(HeroDr.GetOffx() + HeroJudgePos.x, HeroDr.GetOffy() + HeroJudgePos.y);
				if (EnemyAr.Peng(&HeroDr) && HeroJudgePos.y <= EnemyJudgePos.y + bmp->AttackOffDown
					&& HeroJudgePos.y >= EnemyJudgePos.y - bmp->AttackOffUp)
				{
					pHero->GetSX()->hp -= 10;
					pHero->SetJudgePos(HeroJudgePos);
					pHero->SetPos(HeroJudgePos);
					pHero->SetState(��������, m_enemy);
					break;
				}
			}
		}
	}
	return false;
}
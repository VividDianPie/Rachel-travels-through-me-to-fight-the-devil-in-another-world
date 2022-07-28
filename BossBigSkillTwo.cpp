#include "BossBigSkillTwo.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CBossBigSkillTwo::~CBossBigSkillTwo()
{
	delete m_Animation;
}

void CBossBigSkillTwo::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS大招二段\\vraref253_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS大招二段\\vraref253_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS大招二段%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS大招二段0", "BOSS大招二段0", 0, 0, 210, 55, 0xffffff);
	go->AddBmp("BOSS大招二段1", "BOSS大招二段1", 0, 0, 198, 58, 0xffffff);
	go->AddBmp("BOSS大招二段2", "BOSS大招二段2", 0, 0, 200, 46, 0xffffff);
	go->AddBmp("BOSS大招二段3", "BOSS大招二段3", 0, 0, 189, 176, 0xffffff);
	go->AddBmp("BOSS大招二段4", "BOSS大招二段4", 0, 0, 188, 215, 0xffffff);
	go->AddBmp("BOSS大招二段5", "BOSS大招二段5", 0, 0, 240, 239, 0xffffff);
	go->AddBmp("BOSS大招二段6", "BOSS大招二段6", 0, 0, 262, 254, 0xffffff);
	go->AddBmp("BOSS大招二段7", "BOSS大招二段7", 0, 0, 245, 260, 0xffffff);
	go->AddBmp("BOSS大招二段8", "BOSS大招二段8", 0, 0, 224, 201, 0xffffff);
	go->AddBmp("BOSS大招二段9", "BOSS大招二段9", 0, 0, 253, 158, 0xffffff);
	go->AddBmp("BOSS大招二段10", "BOSS大招二段10", 0, 0, 246, 156, 0xffffff);
	go->AddBmp("BOSS大招二段11", "BOSS大招二段11", 0, 0, 229, 180, 0xffffff);
	go->AddBmp("BOSS大招二段12", "BOSS大招二段12", 0, 0, 217, 124, 0xffffff);
	go->AddBmp("BOSS大招二段13", "BOSS大招二段13", 0, 0, 197, 122, 0xffffff);
	m_Animation = new CAnimation(22);
	m_Animation->SetBmp("BOSS大招二段0", 5, -22, 3);
	m_Animation->SetBmp("BOSS大招二段1", 6, -25, 3);
	m_Animation->SetBmp("BOSS大招二段2", 6, -18, 3);
	m_Animation->SetBmp("BOSS大招二段1", 6, -25, 3);
	m_Animation->SetBmp("BOSS大招二段0", 5, -22, 3);
	m_Animation->SetBmp("BOSS大招二段1", 6, -25, 3);
	m_Animation->SetBmp("BOSS大招二段2", 6, -18, 3);
	m_Animation->SetBmp("BOSS大招二段1", 6, -25, 3);
	m_Animation->SetBmp("BOSS大招二段0", 5, -22, 3);
	m_Animation->SetBmp("BOSS大招二段1", 6, -25, 3);
	m_Animation->SetBmp("BOSS大招二段2", 6, -18, 3);
	m_Animation->SetBmp("BOSS大招二段3", 3, -83, 3);
	m_Animation->SetBmp("BOSS大招二段4", -7, -103, 3);
	m_Animation->SetBmp("BOSS大招二段5", -8, -114, 6);
	m_Animation->SetBmp("BOSS大招二段6", -9, -120, 6);
	m_Animation->SetBmp("BOSS大招二段7", -2, -123, 11);
	m_Animation->SetBmp("BOSS大招二段8", -5, -95, 12);
	m_Animation->SetBmp("BOSS大招二段9", -2, -74, 6);
	m_Animation->SetBmp("BOSS大招二段10", 2, -73, 6);
	m_Animation->SetBmp("BOSS大招二段11", 1, -84, 3);
	m_Animation->SetBmp("BOSS大招二段12", 4, -56, 3);
	m_Animation->SetBmp("BOSS大招二段13", 5,   -56, 3);
	CMyRect Dr, Ar;
	Ar.SetWH(196, 249);
	Ar.Setoff(-0, -130);   m_Animation->SetActR(14, Ar); m_Animation->SetBmpAttackOff_Y(5, 100, 100);
	Ar.Setoff(-0, -130);   m_Animation->SetActR(15, Ar); m_Animation->SetBmpAttackOff_Y(6, 100, 100);
	Ar.Setoff(-0, -130);   m_Animation->SetActR(16, Ar); m_Animation->SetBmpAttackOff_Y(7, 100, 100);
	Ar.Setoff(-0, -130);   m_Animation->SetActR(17, Ar); m_Animation->SetBmpAttackOff_Y(8, 100, 100);
	m_NextAct = BOSS大招三段;
	time = 10;
}
void CBossBigSkillTwo::Run()
{
	POS JudgePos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	if (m_Animation->GetCurF() == 0|| m_Animation->GetCurF() == 1|| m_Animation->GetCurF() == 2|| m_Animation->GetCurF() == 3)
	{
		COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
		CHero* pHero = (CHero*)hero->GetOBJ(0);
		POS HeroJudgePos = pHero->GetJudgePos();
		m_enemy->SetJudgePos(HeroJudgePos.x-1, HeroJudgePos.y);
		m_enemy->SetPos(HeroJudgePos.x-1, HeroJudgePos.y);
	}
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
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	Peng();
	m_Animation->Run();
	if (time <= 0)
		m_enemy->SetNextAct(BOSS大招二段);
	else if (m_Animation->IsPlaying() == 0)
	{
		time -= 1;
		if (time == 0)
		{
			m_enemy->SetNextAct(m_NextAct);
			time =10;
		}
		else
			m_Animation->Reset();
	}
}

void CBossBigSkillTwo::End()
{
}

CAnimation* CBossBigSkillTwo::GetAnimation()
{
	return m_Animation;
}

void CBossBigSkillTwo::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


bool CBossBigSkillTwo::Peng()
{
	COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
	int len = hero->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect EnemyAr = bmp->aRect[j];
		POS EnemyJudgePos = m_enemy->GetJudgePos();
		if (m_enemy->GetProperty()->FaceDir == BOSS左)
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
					pHero->SetState(蕾琪儿受, m_enemy);
					break;
				}
			}
		}
	}
	return false;
}
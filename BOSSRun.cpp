#include"BOSSRun.h"
#include"GameOutput.h"
#include "Character.h"
#include "Animation.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CBOSSRun::~CBOSSRun()
{
	delete[] m_Animation;
}
void CBOSSRun::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 11; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS變\\ar030_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS變\\ar030_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSS變%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS變0", "BOSS變0", 0, 0, 470, 295, 0xffffff);
	go->AddBmp("BOSS變1", "BOSS變1", 0, 0, 449, 270, 0xffffff);
	go->AddBmp("BOSS變2", "BOSS變2", 0, 0, 410, 300, 0xffffff);
	go->AddBmp("BOSS變3", "BOSS變3", 0, 0, 409, 301, 0xffffff);
	go->AddBmp("BOSS變4", "BOSS變4", 0, 0, 427, 293, 0xffffff);
	go->AddBmp("BOSS變5", "BOSS變5", 0, 0, 421, 302, 0xffffff);
	go->AddBmp("BOSS變6", "BOSS變6", 0, 0, 407, 300, 0xffffff);
	go->AddBmp("BOSS變7", "BOSS變7", 0, 0, 357, 300, 0xffffff);
	go->AddBmp("BOSS變8", "BOSS變8", 0, 0, 394, 274, 0xffffff);
	go->AddBmp("BOSS變9", "BOSS變9", 0, 0, 405, 283, 0xffffff);
	go->AddBmp("BOSS變10", "BOSS變10", 0, 0, 376, 359, 0xffffff);
	m_Animation = new CAnimation(11);
	m_Animation->SetBmp("BOSS變0", 0, -151, 3);
	m_Animation->SetBmp("BOSS變1", -25, -137, 3);
	m_Animation->SetBmp("BOSS變2", -38, -142, 3);
	m_Animation->SetBmp("BOSS變3", -25, -140, 3);
	m_Animation->SetBmp("BOSS變4", -17, -130, 3);
	m_Animation->SetBmp("BOSS變5", -19, -133, 3);
	m_Animation->SetBmp("BOSS變6", -5, -133, 3);
	m_Animation->SetBmp("BOSS變7", 13, -142, 3);
	m_Animation->SetBmp("BOSS變8", -15, -131, 3);
	m_Animation->SetBmp("BOSS變9", -17, -135, 3);
	m_Animation->SetBmp("BOSS變10", -16, -165, 3);
	CMyRect Dr, Ar;
	Ar.SetWH(230, 180);
	Ar.Setoff(1, -125); m_Animation->SetActR(0, Ar); m_Animation->SetBmpAttackOff_Y(0, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(1, Ar); m_Animation->SetBmpAttackOff_Y(1, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(2, Ar); m_Animation->SetBmpAttackOff_Y(2, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(3, Ar); m_Animation->SetBmpAttackOff_Y(3, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(4, Ar); m_Animation->SetBmpAttackOff_Y(4, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(5, Ar); m_Animation->SetBmpAttackOff_Y(5, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(6, Ar); m_Animation->SetBmpAttackOff_Y(6, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(7, Ar); m_Animation->SetBmpAttackOff_Y(7, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(8, Ar); m_Animation->SetBmpAttackOff_Y(8, 80, 80);
	Ar.Setoff(1, -125); m_Animation->SetActR(9, Ar); m_Animation->SetBmpAttackOff_Y(9, 80, 80);
	m_NextAct = BOSS狶;
}

void CBOSSRun::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	ENEMYPROPERTY *EnemyProperty = m_enemy->GetProperty();
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
	if (EnemyProperty->m_RunOFFindex > 0)
	{
		if (m_enemy->GetProperty()->FaceDir == 4)
		{
			JudgePos.x -= EnemyProperty->m_RunSpeed;
			EnemyProperty->m_dir = 4;
		}
		else
		{
			JudgePos.x += EnemyProperty->m_RunSpeed;
			EnemyProperty->m_dir = 6;
		}
	}
	EnemyProperty->m_RunOFFindex -= 1;
	pos = JudgePos;
	m_enemy->SetJudgePos(JudgePos);
	m_enemy->SetPos(pos);
	m_enemy->Peng(EnemyProperty->m_dir);
	JudgePos = m_enemy->GetJudgePos();
	pos = JudgePos;
	m_enemy->SetJudgePos(JudgePos);
	m_enemy->SetPos(pos);
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	m_Animation->Run();
	Peng();
	if (m_Animation->IsPlaying() == 0)	
	{
		int i = rand() % 2;
		if (i==0)
			m_NextAct = BOSS苂;
		else if(i==1)
			m_NextAct = BOSS狶;
		m_enemy->SetNextAct(m_NextAct);
		EnemyProperty->m_RunOFFindex = 0;
	}
}

void CBOSSRun::End()
{
}

CAnimation* CBOSSRun::GetAnimation()
{
	return m_Animation;
}

void CBOSSRun::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


bool CBOSSRun::Peng()
{
	COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
	int len = hero->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect EnemyAr = bmp->aRect[j];
		POS EnemyJudgePos = m_enemy->GetJudgePos();
		EnemyAr.Setoff(EnemyJudgePos.x + EnemyAr.GetOffx(), EnemyJudgePos.y + EnemyAr.GetOffy());
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
					pHero->SetState(濟踮嫁忳, m_enemy);
					break;
				}
			}
		}
	}
	return false;
}

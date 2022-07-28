#include "BossSpit.h"
#include"GameOutput.h"
#include"enemy.h"
#include"Hero.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
CBossSpit::~CBossSpit()
{
	delete m_Animation;
}

void CBossSpit::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 20; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÍÂ\\ar203_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÍÂ\\ar203_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÍÂ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÍÂ0", "BOSSÍÂ0", 0, 0, 386, 310, 0xffffff);
	go->AddBmp("BOSSÍÂ1", "BOSSÍÂ1", 0, 0, 401, 328, 0xffffff);
	go->AddBmp("BOSSÍÂ2", "BOSSÍÂ2", 0, 0, 351, 369, 0xffffff);
	go->AddBmp("BOSSÍÂ3", "BOSSÍÂ3", 0, 0, 330, 368, 0xffffff);
	go->AddBmp("BOSSÍÂ4", "BOSSÍÂ4", 0, 0, 336, 343, 0xffffff);
	go->AddBmp("BOSSÍÂ5", "BOSSÍÂ5", 0, 0, 320, 320, 0xffffff);
	go->AddBmp("BOSSÍÂ6", "BOSSÍÂ6", 0, 0, 348, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ7", "BOSSÍÂ7", 0, 0, 353, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ8", "BOSSÍÂ8", 0, 0, 363, 315, 0xffffff);
	go->AddBmp("BOSSÍÂ9", "BOSSÍÂ9", 0, 0, 392, 317, 0xffffff);
	go->AddBmp("BOSSÍÂ10", "BOSSÍÂ10", 0, 0, 406, 378, 0xffffff);
	go->AddBmp("BOSSÍÂ11", "BOSSÍÂ11", 0, 0, 402, 391, 0xffffff);
	go->AddBmp("BOSSÍÂ12", "BOSSÍÂ12", 0, 0, 392, 400, 0xffffff);
	go->AddBmp("BOSSÍÂ13", "BOSSÍÂ13", 0, 0, 378, 368, 0xffffff);
	go->AddBmp("BOSSÍÂ14", "BOSSÍÂ14", 0, 0, 361, 273, 0xffffff);
	go->AddBmp("BOSSÍÂ15", "BOSSÍÂ15", 0, 0, 352, 284, 0xffffff);
	go->AddBmp("BOSSÍÂ16", "BOSSÍÂ16", 0, 0, 354, 334, 0xffffff);
	go->AddBmp("BOSSÍÂ17", "BOSSÍÂ17", 0, 0, 367, 407, 0xffffff);
	go->AddBmp("BOSSÍÂ18", "BOSSÍÂ18", 0, 0, 374, 424, 0xffffff);
	go->AddBmp("BOSSÍÂ19", "BOSSÍÂ19", 0, 0, 390, 377, 0xffffff);
	m_Animation = new CAnimation(20);
	m_Animation->SetBmp("BOSSÍÂ0", 45, -139, 3);
	m_Animation->SetBmp("BOSSÍÂ1", 32, -145, 3);
	m_Animation->SetBmp("BOSSÍÂ2", 29, -166, 3);
	m_Animation->SetBmp("BOSSÍÂ3", 4, -165, 3);
	m_Animation->SetBmp("BOSSÍÂ4", 11, -153, 3);
	m_Animation->SetBmp("BOSSÍÂ5", 11, -142, 6);
	m_Animation->SetBmp("BOSSÍÂ6", -9, -142, 20);
	m_Animation->SetBmp("BOSSÍÂ7", -8, -143, 20);
	m_Animation->SetBmp("BOSSÍÂ8", -17, -143, 20);
	m_Animation->SetBmp("BOSSÍÂ9", -23, -148, 6);
	m_Animation->SetBmp("BOSSÍÂ10", -9, -178, 6);
	m_Animation->SetBmp("BOSSÍÂ11", -1, -185, 3);
	m_Animation->SetBmp("BOSSÍÂ12", -5, -186, 3);
	m_Animation->SetBmp("BOSSÍÂ13", 0, -172, 3);
	m_Animation->SetBmp("BOSSÍÂ14", 29, -126, 3);
	m_Animation->SetBmp("BOSSÍÂ15", 27, -133, 3);
	m_Animation->SetBmp("BOSSÍÂ16", 28, -154, 3);
	m_Animation->SetBmp("BOSSÍÂ17", 19, -187, 3);
	m_Animation->SetBmp("BOSSÍÂ18", 6, -194, 3);
	m_Animation->SetBmp("BOSSÍÂ19", 17, -172, 3);
	CMyRect Dr, Ar;
	Ar.SetWH(210, 320);
	Ar.Setoff(-380, -189);   m_Animation->SetActR(6, Ar); m_Animation->SetBmpAttackOff_Y(6, 50, 50);
	Ar.Setoff(-380, -189);   m_Animation->SetActR(7, Ar); m_Animation->SetBmpAttackOff_Y(7, 50, 50);
	Ar.Setoff(-380, -189);   m_Animation->SetActR(8, Ar); m_Animation->SetBmpAttackOff_Y(8, 50, 50);
	for (int i = 1; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÀ¶É«³æ\\vraref233_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSSÀ¶É«³æ\\vraref233_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "BOSSÀ¶É«³æ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSSÀ¶É«³æ1", "BOSSÀ¶É«³æ1", 0, 0, 136, 157, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ2", "BOSSÀ¶É«³æ2", 0, 0, 95, 206, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ3", "BOSSÀ¶É«³æ3", 0, 0, 83, 240, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ4", "BOSSÀ¶É«³æ4", 0, 0, 129, 228, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ5", "BOSSÀ¶É«³æ5", 0, 0, 154, 278, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ6", "BOSSÀ¶É«³æ6", 0, 0, 263, 305, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ7", "BOSSÀ¶É«³æ7", 0, 0, 266, 328, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ8", "BOSSÀ¶É«³æ8", 0, 0, 231, 373, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ9", "BOSSÀ¶É«³æ9", 0, 0, 244, 310, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ10", "BOSSÀ¶É«³æ10", 0, 0, 158, 273, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ11", "BOSSÀ¶É«³æ11", 0, 0, 88, 281, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ12", "BOSSÀ¶É«³æ12", 0, 0, 77, 275, 0xffffff);
	go->AddBmp("BOSSÀ¶É«³æ13", "BOSSÀ¶É«³æ13", 0, 0, 76, 261, 0xffffff);
	m_AnimationWorm = new CAnimation(13);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ1",   -330, -172, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ2",   -307, -172, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ3",   -302, -174, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ4",   -326, -174, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ5",   -338, -184, 6);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ6",   -395, -173, 6);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ7",   -398, -162, 6);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ8",   -381, -190, 10);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ9",   -390, -184, 6);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ10", -348, -189, 6);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ11", -317, -187, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ12", -313, -189, 3);
	m_AnimationWorm->SetBmp("BOSSÀ¶É«³æ13", -315, -189, 3);
	m_AnimationWorm->Reset();
	WormStarFrame = 6;
	WormEndFrame = 8;
	m_NextAct = BOSS×ß;
}

void CBossSpit::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	BMP* WormBmp = m_AnimationWorm->GetBmp();
	Matrix3 m, m1, m2, m3,          m4, m5;
	if (m_enemy->GetProperty()->FaceDir != m_enemy->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-bmp->offx, bmp->offy);
		m3.Translation(-WormBmp->offx, WormBmp->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(bmp->offx, bmp->offy);
		m3.Translation(WormBmp->offx, WormBmp->offy);
	}
	m = m1 * m2;
	m4 = m1 * m3;
	POS JudgePos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m3.Translation(pos.x, pos.y);
	m = m * m2;
	m4 = m4 * m3;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	Peng();
	m_Animation->Run();
	if (m_Animation->GetCurF() >= WormStarFrame && m_Animation->GetCurF() <= WormEndFrame)
	{
		m_AnimationWorm->SetMatrix(&m4);
		m_AnimationWorm->SetMatrix2(&m3);
		m_AnimationWorm->SetLevel(5);
		m_AnimationWorm->Run();
		if (m_AnimationWorm->IsPlaying() == false)
			m_AnimationWorm->Reset();
	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
		m_AnimationWorm->Reset();
	}
}

void CBossSpit::End()
{
}

CAnimation* CBossSpit::GetAnimation()
{
	return m_Animation;
}

void CBossSpit::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CBossSpit::Peng()
{
	COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
	int len = hero->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect EnemyAr = bmp->aRect[j];
		POS EnemyJudgePos = m_enemy->GetJudgePos();
		if (m_enemy->GetProperty()->FaceDir == BOSS×ó)
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
					pHero->SetState(ÀÙç÷¶ùÊÜ, m_enemy);
					break;
				}
			}
		}
	}
	return false;
}

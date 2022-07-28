#include "Animation.h"
#include "HakumenBig.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CHakumenBig::~CHakumenBig()
{
}

void CHakumenBig::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 43; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\白面大\\ha451_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\白面大\\ha451_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "白面大%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("白面大0", "白面大0", 0, 0, 528, 530, RGB(0,255,0));
	go->AddBmp("白面大1", "白面大1", 0, 0, 422, 556, RGB(0,255,0));
	go->AddBmp("白面大2", "白面大2", 0, 0, 457, 474, RGB(0,255,0));
	go->AddBmp("白面大3", "白面大3", 0, 0, 483, 484, RGB(0,255,0));
	go->AddBmp("白面大4", "白面大4", 0, 0, 510, 464, RGB(0,255,0));
	go->AddBmp("白面大5", "白面大5", 0, 0, 496, 469, RGB(0,255,0));
	go->AddBmp("白面大6", "白面大6", 0, 0, 490, 479, RGB(0,255,0));
	go->AddBmp("白面大7", "白面大7", 0, 0, 485, 495, RGB(0,255,0));
	go->AddBmp("白面大8", "白面大8", 0, 0, 452, 507, RGB(0,255,0));
	go->AddBmp("白面大9", "白面大9", 0, 0, 415, 531, RGB(0,255,0));
	go->AddBmp("白面大10", "白面大10", 0, 0, 712, 563, RGB(0,255,0));
	go->AddBmp("白面大11", "白面大11", 0, 0, 719, 562, RGB(0,255,0));
	go->AddBmp("白面大12", "白面大12", 0, 0, 738, 546, RGB(0,255,0));
	go->AddBmp("白面大13", "白面大13", 0, 0, 759, 529, RGB(0,255,0));
	go->AddBmp("白面大14", "白面大14", 0, 0, 709, 505, RGB(0,255,0));
	go->AddBmp("白面大15", "白面大15", 0, 0, 477, 553, RGB(0,255,0));
	go->AddBmp("白面大16", "白面大16", 0, 0, 501, 527, RGB(0,255,0));
	go->AddBmp("白面大17", "白面大17", 0, 0, 431, 436, RGB(0,255,0));
	go->AddBmp("白面大18", "白面大18", 0, 0, 409, 406, RGB(0,255,0));
	go->AddBmp("白面大19", "白面大19", 0, 0, 460, 376, RGB(0,255,0));
	go->AddBmp("白面大20", "白面大20", 0, 0, 491, 392, RGB(0,255,0));
	go->AddBmp("白面大21", "白面大21", 0, 0, 573, 476, RGB(0,255,0));
	go->AddBmp("白面大22", "白面大22", 0, 0, 268, 486, RGB(0,255,0));
	go->AddBmp("白面大23", "白面大23", 0, 0, 253, 477, RGB(0,255,0));
	go->AddBmp("白面大24", "白面大24", 0, 0, 278, 475, RGB(0,255,0));
	go->AddBmp("白面大25", "白面大25", 0, 0, 299, 473, RGB(0,255,0));
	go->AddBmp("白面大26", "白面大26", 0, 0, 386, 478, RGB(0,255,0));
	go->AddBmp("白面大27", "白面大27", 0, 0, 598, 630, RGB(0,255,0));
	go->AddBmp("白面大28", "白面大28", 0, 0, 315, 615, RGB(0,255,0));
	go->AddBmp("白面大29", "白面大29", 0, 0, 429, 599, RGB(0,255,0));
	go->AddBmp("白面大30", "白面大30", 0, 0, 447, 579, RGB(0,255,0));
	go->AddBmp("白面大31", "白面大31", 0, 0, 234, 620, RGB(0,255,0));
	go->AddBmp("白面大32", "白面大32", 0, 0, 235, 623, RGB(0,255,0));
	go->AddBmp("白面大33", "白面大33", 0, 0, 239, 607, RGB(0,255,0));
	go->AddBmp("白面大34", "白面大34", 0, 0, 231, 541, RGB(0,255,0));
	go->AddBmp("白面大35", "白面大35", 0, 0, 231, 540, RGB(0,255,0));
	go->AddBmp("白面大36", "白面大36", 0, 0, 212, 539, RGB(0,255,0));
	go->AddBmp("白面大37", "白面大37", 0, 0, 231, 539, RGB(0,255,0));
	go->AddBmp("白面大38", "白面大38", 0, 0, 225, 539, RGB(0,255,0));
	go->AddBmp("白面大39", "白面大39", 0, 0, 349, 538, RGB(0,255,0));
	go->AddBmp("白面大40", "白面大40", 0, 0, 337, 538, RGB(0,255,0));
	go->AddBmp("白面大41", "白面大41", 0, 0, 411, 538, RGB(0,255,0));
	go->AddBmp("白面大42", "白面大42", 0, 0, 398, 538, RGB(0,255,0));

	m_Animation = new CAnimation(43);
	m_Animation->SetBmp("白面大0", 102, -252, 10);
	m_Animation->SetBmp("白面大1", 26, -265, 10);
	m_Animation->SetBmp("白面大2", 5, -226, 10);
	m_Animation->SetBmp("白面大3", -18, -230, 10);
	m_Animation->SetBmp("白面大4", -4, -219, 10);
	m_Animation->SetBmp("白面大5", -12, -223, 10);
	m_Animation->SetBmp("白面大6", -27, -227, 10);
	m_Animation->SetBmp("白面大7", -39, -237, 10);
	m_Animation->SetBmp("白面大8", -37, -245, 10);
	m_Animation->SetBmp("白面大9", -37, -259, 10);
	m_Animation->SetBmp("白面大10", 112, -272, 10);
	m_Animation->SetBmp("白面大11", 106, -271, 10);
	m_Animation->SetBmp("白面大12", 74, -265, 10);
	m_Animation->SetBmp("白面大13", 73, -259, 10);
	m_Animation->SetBmp("白面大14", 93, -249, 10);
	m_Animation->SetBmp("白面大15", -52, -273, 10);
	m_Animation->SetBmp("白面大16", -5, -260, 10);
	m_Animation->SetBmp("白面大17", 7, -214, 10);
	m_Animation->SetBmp("白面大18", 32, -200, 10);
	m_Animation->SetBmp("白面大19", 43, -187, 10);
	m_Animation->SetBmp("白面大20", 74, -195, 10);
	m_Animation->SetBmp("白面大21", -13, -228, 1000);
	m_Animation->SetBmp("白面大22", -15, -240, 10);
	m_Animation->SetBmp("白面大23", -17, -237, 10);
	m_Animation->SetBmp("白面大24", -28, -235, 10);
	m_Animation->SetBmp("白面大25", -34, -235, 10);
	m_Animation->SetBmp("白面大26", -69, -237, 10);
	m_Animation->SetBmp("白面大27", 155, -312, 10);
	m_Animation->SetBmp("白面大28", -30, -306, 10);
	m_Animation->SetBmp("白面大29", -86, -298, 10);
	m_Animation->SetBmp("白面大30", 121, -288, 10);
	m_Animation->SetBmp("白面大31", 14, -306, 10);
	m_Animation->SetBmp("白面大32", 15, -309, 10);
	m_Animation->SetBmp("白面大33", 17, -301, 10);
	m_Animation->SetBmp("白面大34", 14, -269, 10);
	m_Animation->SetBmp("白面大35", 15, -268, 10);
	m_Animation->SetBmp("白面大36", 7, -269, 10);
	m_Animation->SetBmp("白面大37", -4, -269, 10);
	m_Animation->SetBmp("白面大38", 4, -270, 10);
	m_Animation->SetBmp("白面大39", -64, -269, 10);
	m_Animation->SetBmp("白面大40", -58, -269, 10);
	m_Animation->SetBmp("白面大41", -94, -270, 10);
	m_Animation->SetBmp("白面大42", -87,-269, 10);
	CMyRect Dr, Ar;
	Ar.SetWH(570, 135);
	Ar.Setoff(-0, -250);   m_Animation->SetActR(21, Ar);   m_Animation->SetBmpAttackOff_Y(21, 100, 100);
	Dr.SetWH(109, 465);
	Dr.Setoff(-0, -255);m_Animation->SetDefR(22, Dr);
	Dr.Setoff(-0, -255);m_Animation->SetDefR(23, Dr);
	Dr.Setoff(-0, -255);m_Animation->SetDefR(24, Dr);
	Dr.Setoff(-0, -255);m_Animation->SetDefR(25, Dr);
	Dr.Setoff(-0, -255);m_Animation->SetDefR(26, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(27, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(28, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(29, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(30, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(31, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(32, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(33, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(34, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(35, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(36, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(37, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(38, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(39, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(40, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(41, Dr);
	Dr.Setoff(-0, -255); m_Animation->SetDefR(42, Dr);
	m_NextAct = 白面走;
}

void CHakumenBig::Run()
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
	ENEMYPROPERTY* EnemyProperty = m_enemy->GetProperty();
	if (m_Animation->GetCurF() == 21)
	{
		int x = m_enemy->GetJudgePos().x; int y = m_enemy->GetJudgePos().y;
		if (m_enemy->GetProperty()->FaceDir == 6)
		{
			x += 15;
			EnemyProperty->m_dir = 6;
		}
		else if (m_enemy->GetProperty()->FaceDir == 4)
		{
			x -= 15;
			EnemyProperty->m_dir = 4;
		}
		m_enemy->SetJudgePos(x, y);
		m_enemy->SetPos(x, y);
		if (m_enemy->GetJudgePos().x <= 10)
		{
			m_enemy->GetProperty()->FaceDir = 6;
			m_enemy->GetProperty()->m_dir = 6;
			COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
			CHero* pHero = (CHero*)hero->GetOBJ(0);
			POS HeroJudgePos = pHero->GetJudgePos();
			m_enemy->SetJudgePos(x, HeroJudgePos.y);
			m_enemy->SetPos(x, HeroJudgePos.y);
		}
		if (m_enemy->GetJudgePos().x >= 2048)
		{
			m_enemy->GetProperty()->FaceDir = 4;
			m_enemy->GetProperty()->m_dir = 4;
			COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
			CHero* pHero = (CHero*)hero->GetOBJ(0);
			POS HeroJudgePos = pHero->GetJudgePos();
			m_enemy->SetJudgePos(x, HeroJudgePos.y);
			m_enemy->SetPos(x, HeroJudgePos.y);
		}
	}
	if (m_Animation->GetCurF() == 22)
	{
		COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
		CHero* pHero = (CHero*)hero->GetOBJ(0);
		POS HeroJudgePos = pHero->GetJudgePos();
		m_enemy->SetJudgePos(HeroJudgePos.x, HeroJudgePos.y);
		m_enemy->SetPos(HeroJudgePos.x, HeroJudgePos.y);
	}
	POS Hpos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);//偏移平移
	m_Animation->SetLevel(m_enemy->Getlevel());
	Peng();
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CHakumenBig::End()
{

}

CAnimation* CHakumenBig::GetAnimation()
{
	return m_Animation;
}

void CHakumenBig::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


bool CHakumenBig::Peng()
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

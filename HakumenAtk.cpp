#include "Animation.h"
#include "HakumenAtk.h"
#include "matrix3.h"
#include "GameInput.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
CHakumenAtk::~CHakumenAtk()
{
}

void CHakumenAtk::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 26; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\���濳\\ha431_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\���濳\\ha431_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "���濳%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("���濳0", "���濳0", 0, 0, 459, 408, RGB(0, 255, 0));
	go->AddBmp("���濳1", "���濳1", 0, 0, 343, 441, RGB(0,255,0));
	go->AddBmp("���濳2", "���濳2", 0, 0, 330, 454, RGB(0,255,0));
	go->AddBmp("���濳3", "���濳3", 0, 0, 361, 435, RGB(0,255,0));
	go->AddBmp("���濳4", "���濳4", 0, 0, 402, 419, RGB(0,255,0));
	go->AddBmp("���濳5", "���濳5", 0, 0, 413, 414, RGB(0,255,0));
	go->AddBmp("���濳6", "���濳6", 0, 0, 410, 413, RGB(0,255,0));
	go->AddBmp("���濳7", "���濳7", 0, 0, 406, 408, RGB(0,255,0));
	go->AddBmp("���濳8", "���濳8", 0, 0, 392, 409, RGB(0,255,0));
	go->AddBmp("���濳9", "���濳9", 0, 0, 378, 411, RGB(0,255,0));
	go->AddBmp("���濳10", "���濳10", 0, 0, 370, 415, RGB(0, 255, 0));
	go->AddBmp("���濳11", "���濳11", 0, 0, 350, 416, RGB(0,255,0));
	go->AddBmp("���濳12", "���濳12", 0, 0, 299, 412, RGB(0,255,0));
	go->AddBmp("���濳13", "���濳13", 0, 0, 293, 411, RGB(0,255,0));
	go->AddBmp("���濳14", "���濳14", 0, 0, 289, 409, RGB(0,255,0));
	go->AddBmp("���濳15", "���濳15", 0, 0, 286, 416, RGB(0,255,0));
	go->AddBmp("���濳16", "���濳16", 0, 0, 465, 422, RGB(0,255,0));
	go->AddBmp("���濳17", "���濳17", 0, 0, 465, 442, RGB(0,255,0));
	go->AddBmp("���濳18", "���濳18", 0, 0, 465, 450, RGB(0,255,0));
	go->AddBmp("���濳19", "���濳19", 0, 0, 465, 484, RGB(0,255,0));
	go->AddBmp("���濳20", "���濳20", 0, 0, 465, 476, RGB(0,255,0));
	go->AddBmp("���濳21", "���濳21", 0, 0, 483, 357, RGB(0,255,0));
	go->AddBmp("���濳22", "���濳22", 0, 0, 492, 349, RGB(0,255,0));
	go->AddBmp("���濳23", "���濳23", 0, 0, 505, 396, RGB(0,255,0));
	go->AddBmp("���濳24", "���濳24", 0, 0, 412, 456, RGB(0,255,0));
	go->AddBmp("���濳25", "���濳25", 0, 0, 296, 488, RGB(0,255,0));

	m_Animation = new CAnimation(26);
	m_Animation->SetBmp("���濳0", 80, -188,						 10);
	m_Animation->SetBmp("���濳1", 19, -200,						 10);
	m_Animation->SetBmp("���濳2", 10, -204,						 10);
	m_Animation->SetBmp("���濳3", -6, -194,						 10);
	m_Animation->SetBmp("���濳4", -24, -187,						 10);
	m_Animation->SetBmp("���濳5", -29, -183,						 10);
	m_Animation->SetBmp("���濳6", -27, -182,						 10);
	m_Animation->SetBmp("���濳7", -25, -179,						 10);
	m_Animation->SetBmp("���濳8", -18, -181,						 10);
	m_Animation->SetBmp("���濳9", -13, -182,						 10);
	m_Animation->SetBmp("���濳10", -11, -187,					 10);
	m_Animation->SetBmp("���濳11", -5, -187,						 10);
	m_Animation->SetBmp("���濳12", -6, -186,						 10);
	m_Animation->SetBmp("���濳13", -23, -187,					 10);
	m_Animation->SetBmp("���濳14", -55, -186,					 10);
	m_Animation->SetBmp("���濳15", -68, -190,					 10);
	m_Animation->SetBmp("���濳16", -34, -199,					 1);
	m_Animation->SetBmp("���濳17", -36, -211,					 10);
	m_Animation->SetBmp("���濳18", -37, -217,					 10);
	m_Animation->SetBmp("���濳19", -38, -234,					 10);
	m_Animation->SetBmp("���濳20", -38, -231,					 10);
	m_Animation->SetBmp("���濳21", -28, -172,					 10);
	m_Animation->SetBmp("���濳22", -22, -169,					 10);
	m_Animation->SetBmp("���濳23", 50, -187,						 10);
	m_Animation->SetBmp("���濳24", 79, -212,						 10);
	m_Animation->SetBmp("���濳25", 35, -234,						 10);
	CMyRect Dr, Ar;
	Dr.SetWH(200, 350);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(0, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(1, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(2, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(3, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(4, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(5, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(6, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(7, Dr);
	Dr.Setoff(-80, -150); m_Animation->SetDefR(8, Dr);
	Ar.SetWH(356, 105);
	Ar.Setoff(-323, -180);   m_Animation->SetActR(17, Ar);   m_Animation->SetBmpAttackOff_Y(17, 200, 200);
	m_NextAct = ������;
}

void CHakumenAtk::Run()
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
	POS Hpos = m_enemy->GetJudgePos();
	POS pos = m_enemy->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_enemy->Getlevel());
	Peng();
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CHakumenAtk::End()
{

}

CAnimation* CHakumenAtk::GetAnimation()
{
	return m_Animation;
}

void CHakumenAtk::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


bool CHakumenAtk::Peng()
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

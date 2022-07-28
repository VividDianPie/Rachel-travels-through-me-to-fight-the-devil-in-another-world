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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ¿³\\ha431_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\°×Ãæ¿³\\ha431_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "°×Ãæ¿³%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("°×Ãæ¿³0", "°×Ãæ¿³0", 0, 0, 459, 408, RGB(0, 255, 0));
	go->AddBmp("°×Ãæ¿³1", "°×Ãæ¿³1", 0, 0, 343, 441, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³2", "°×Ãæ¿³2", 0, 0, 330, 454, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³3", "°×Ãæ¿³3", 0, 0, 361, 435, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³4", "°×Ãæ¿³4", 0, 0, 402, 419, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³5", "°×Ãæ¿³5", 0, 0, 413, 414, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³6", "°×Ãæ¿³6", 0, 0, 410, 413, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³7", "°×Ãæ¿³7", 0, 0, 406, 408, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³8", "°×Ãæ¿³8", 0, 0, 392, 409, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³9", "°×Ãæ¿³9", 0, 0, 378, 411, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³10", "°×Ãæ¿³10", 0, 0, 370, 415, RGB(0, 255, 0));
	go->AddBmp("°×Ãæ¿³11", "°×Ãæ¿³11", 0, 0, 350, 416, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³12", "°×Ãæ¿³12", 0, 0, 299, 412, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³13", "°×Ãæ¿³13", 0, 0, 293, 411, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³14", "°×Ãæ¿³14", 0, 0, 289, 409, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³15", "°×Ãæ¿³15", 0, 0, 286, 416, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³16", "°×Ãæ¿³16", 0, 0, 465, 422, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³17", "°×Ãæ¿³17", 0, 0, 465, 442, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³18", "°×Ãæ¿³18", 0, 0, 465, 450, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³19", "°×Ãæ¿³19", 0, 0, 465, 484, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³20", "°×Ãæ¿³20", 0, 0, 465, 476, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³21", "°×Ãæ¿³21", 0, 0, 483, 357, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³22", "°×Ãæ¿³22", 0, 0, 492, 349, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³23", "°×Ãæ¿³23", 0, 0, 505, 396, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³24", "°×Ãæ¿³24", 0, 0, 412, 456, RGB(0,255,0));
	go->AddBmp("°×Ãæ¿³25", "°×Ãæ¿³25", 0, 0, 296, 488, RGB(0,255,0));

	m_Animation = new CAnimation(26);
	m_Animation->SetBmp("°×Ãæ¿³0", 80, -188,						 10);
	m_Animation->SetBmp("°×Ãæ¿³1", 19, -200,						 10);
	m_Animation->SetBmp("°×Ãæ¿³2", 10, -204,						 10);
	m_Animation->SetBmp("°×Ãæ¿³3", -6, -194,						 10);
	m_Animation->SetBmp("°×Ãæ¿³4", -24, -187,						 10);
	m_Animation->SetBmp("°×Ãæ¿³5", -29, -183,						 10);
	m_Animation->SetBmp("°×Ãæ¿³6", -27, -182,						 10);
	m_Animation->SetBmp("°×Ãæ¿³7", -25, -179,						 10);
	m_Animation->SetBmp("°×Ãæ¿³8", -18, -181,						 10);
	m_Animation->SetBmp("°×Ãæ¿³9", -13, -182,						 10);
	m_Animation->SetBmp("°×Ãæ¿³10", -11, -187,					 10);
	m_Animation->SetBmp("°×Ãæ¿³11", -5, -187,						 10);
	m_Animation->SetBmp("°×Ãæ¿³12", -6, -186,						 10);
	m_Animation->SetBmp("°×Ãæ¿³13", -23, -187,					 10);
	m_Animation->SetBmp("°×Ãæ¿³14", -55, -186,					 10);
	m_Animation->SetBmp("°×Ãæ¿³15", -68, -190,					 10);
	m_Animation->SetBmp("°×Ãæ¿³16", -34, -199,					 1);
	m_Animation->SetBmp("°×Ãæ¿³17", -36, -211,					 10);
	m_Animation->SetBmp("°×Ãæ¿³18", -37, -217,					 10);
	m_Animation->SetBmp("°×Ãæ¿³19", -38, -234,					 10);
	m_Animation->SetBmp("°×Ãæ¿³20", -38, -231,					 10);
	m_Animation->SetBmp("°×Ãæ¿³21", -28, -172,					 10);
	m_Animation->SetBmp("°×Ãæ¿³22", -22, -169,					 10);
	m_Animation->SetBmp("°×Ãæ¿³23", 50, -187,						 10);
	m_Animation->SetBmp("°×Ãæ¿³24", 79, -212,						 10);
	m_Animation->SetBmp("°×Ãæ¿³25", 35, -234,						 10);
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
	m_NextAct = °×Ãæ×ß;
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

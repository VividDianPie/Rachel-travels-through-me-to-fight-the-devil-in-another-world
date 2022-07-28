#include "BossWalk.h"
#include"MyRect.h"
#include"enemy.h"
#include"GameOutput.h"
#include"KJ.h"
#include"hero.h"
#include"OBJManager.h"
#include"scene.h"
CBossWalk::~CBossWalk()
{
	delete m_Animation;
}
void CBossWalk::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[32] = {};
	for (int i = 0; i < 14; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS走\\ar000_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS走\\ar000_%d.bmp", i);
		sprintf_s(ArrBmpName, 32, "BOSS走%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS走0", "BOSS走0", 0, 0, 394, 368, 0xffffff);
	go->AddBmp("BOSS走1", "BOSS走1", 0, 0, 393, 363, 0xffffff);
	go->AddBmp("BOSS走2", "BOSS走2", 0, 0, 398, 361, 0xffffff);
	go->AddBmp("BOSS走3", "BOSS走3", 0, 0, 407, 359, 0xffffff);
	go->AddBmp("BOSS走4", "BOSS走4", 0, 0, 437, 361, 0xffffff);
	go->AddBmp("BOSS走5", "BOSS走5", 0, 0, 425, 363, 0xffffff);
	go->AddBmp("BOSS走6", "BOSS走6", 0, 0, 410, 364, 0xffffff);
	go->AddBmp("BOSS走7", "BOSS走7", 0, 0, 398, 363, 0xffffff);
	go->AddBmp("BOSS走8", "BOSS走8", 0, 0, 398, 365, 0xffffff);
	go->AddBmp("BOSS走9", "BOSS走9", 0, 0, 424, 366, 0xffffff);
	go->AddBmp("BOSS走10", "BOSS走10", 0, 0, 445, 368, 0xffffff);
	go->AddBmp("BOSS走11", "BOSS走11", 0, 0, 441, 369, 0xffffff);
	go->AddBmp("BOSS走12", "BOSS走12", 0, 0, 423, 370, 0xffffff);
	go->AddBmp("BOSS走13", "BOSS走13", 0, 0, 403, 368, 0xffffff);
	m_Animation = new CAnimation(14);
	m_Animation->SetBmp("BOSS走0", 41, -173, 3);
	m_Animation->SetBmp("BOSS走1", 38, -170, 3);
	m_Animation->SetBmp("BOSS走2", 37, -168, 3);
	m_Animation->SetBmp("BOSS走3", 41, -168, 3);
	m_Animation->SetBmp("BOSS走4", 56, -168, 3);
	m_Animation->SetBmp("BOSS走5", 49, -170, 3);
	m_Animation->SetBmp("BOSS走6", 43, -170, 3);
	m_Animation->SetBmp("BOSS走7", 38, -169, 3);
	m_Animation->SetBmp("BOSS走8", 39, -170, 3);
	m_Animation->SetBmp("BOSS走9", 54, -169, 3);
	m_Animation->SetBmp("BOSS走10", 67, -169, 3);
	m_Animation->SetBmp("BOSS走11", 62, -167, 3);
	m_Animation->SetBmp("BOSS走12", 51, -168, 3);
	m_Animation->SetBmp("BOSS走13", 40, -171, 3);
	CMyRect Dr;
	Dr.SetWH(200, 350);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(0, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(1, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(2, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(3, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(4, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(5, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(6, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(7, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(8, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(9, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(10, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(11, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(12, Dr);
	Dr.Setoff(-80, -150);
	m_Animation->SetDefR(13, Dr);
	m_EnemyMoveX = BOSS左;
	m_EnemyMoveY = BOSS下;
	m_NextAct = BOSS走;
}

void CBossWalk::Run()
{
	BMP* pic = m_Animation->GetBmp();
	Matrix3 m, m0, m1, m2;
	if (m_enemy->GetProperty()->FaceDir != m_enemy->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-pic->offx, pic->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(pic->offx, pic->offy);
	}
	m = m1 * m2;
	m0 = m;
	POS EnemyJudgePos = m_enemy->GetJudgePos();
	POS EnemyPos = m_enemy->GetPos();
	ENEMYPROPERTY* proprety = m_enemy->GetProperty();
	m_enemy->SetJudgePos(EnemyJudgePos);
	m_enemy->SetPos(EnemyPos);
	COBJM* hero = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
	int HeroLen = hero->GetSize();
	for (int i = 0; i < HeroLen;i++)
	{
		CHero* pHero = (CHero*)hero->GetOBJ(i);
		POS heroJudgePos = pHero->GetJudgePos();
		POS heropos = pHero->GetPos();
		if (EnemyJudgePos.x < heropos.x)
			proprety->FaceDir = 6;
		else if (EnemyJudgePos.x > heropos.x)
			proprety->FaceDir = 4;
		if (heropos.x >= EnemyJudgePos.x - 2000 && heropos.x <= EnemyJudgePos.x + 2000&&
			heropos.y >= EnemyJudgePos.y - 2000 && heropos.y <= EnemyJudgePos.y + 2000)
		{
			int i = rand() % 100;
			if (i <= 1)
			{
				m_enemy->SetNextAct(BOSS跑);
				m_enemy->GetProperty()->m_RunOFFindex = 33;
			}
			if (heropos.x >= EnemyJudgePos.x - 280 && heropos.x <= EnemyJudgePos.x + 280 &&
				heropos.y >= EnemyJudgePos.y - 70  &&  heropos.y <= EnemyJudgePos.y +   70)
			{
				int i = rand() % 15;
				if (i <=1)
				{
					m_enemy->SetNextAct(BOSS跑);
					m_enemy->GetProperty()->m_RunOFFindex = 33;
				}
				else if (i == 2||i==5)
					m_enemy->SetNextAct(BOSS咬);
				else if (i == 3)
					m_enemy->SetNextAct(BOSS吐);
				else if (i == 4)
					m_enemy->SetNextAct(BOSS吐);
				else if (i>5||i<=9)
					m_enemy->SetNextAct(BOSS大招一段);
				else if (i == 10)
					m_enemy->SetNextAct(BOSS站);
				else
					m_NextAct = BOSS走;
			}
			else
			{
				int i = rand() % 50;
				if (i == 0)
					m_EnemyMoveX = BOSS右;
				i = rand() % 100;
				if (i == 1)
					m_EnemyMoveY = BOSS上;
				if (m_EnemyMoveX == BOSS左)
				{
					EnemyJudgePos.x -= proprety->Speed;
					if (EnemyJudgePos.x <= heropos.x - 200) 
						m_EnemyMoveX = BOSS右;
				}
				else if (m_EnemyMoveX == BOSS右)
				{
					EnemyJudgePos.x += proprety->Speed;
					if (EnemyJudgePos.x >= heropos.x + 200)
						m_EnemyMoveX = BOSS左;
				}
				EnemyPos = EnemyJudgePos;
				m_enemy->SetJudgePos(EnemyJudgePos);
				m_enemy->SetPos(EnemyPos);
				if (m_EnemyMoveX == BOSS左)
				{
					if (m_enemy->Peng(BOSS左))
						m_EnemyMoveX = BOSS右;
				}
				else
				{
					if (m_enemy->Peng(BOSS右))
						m_EnemyMoveX = BOSS左;
				}
				if (m_EnemyMoveY == BOSS下)
				{
					EnemyJudgePos.y += proprety->Speed;
					if (EnemyJudgePos.y >= heropos.y + 150)
						m_EnemyMoveY = BOSS上;
				}
				else if (m_EnemyMoveY == BOSS上)
				{
					EnemyJudgePos.y -= proprety->Speed;
					if (EnemyJudgePos.y <= heropos.y - 150)
						m_EnemyMoveY = BOSS下;
				}
				EnemyPos = EnemyJudgePos;
				m_enemy->SetJudgePos(EnemyJudgePos);
				m_enemy->SetPos(EnemyPos);
				if (m_EnemyMoveY == BOSS上)
				{
					if (m_enemy->Peng(BOSS上))
						m_EnemyMoveY = BOSS下;
				}
				else
				{
					if (m_enemy->Peng(BOSS下))
						m_EnemyMoveY = BOSS上;
				}
			}
		}
		else
		{
			if (EnemyPos.x + 500 <= heroJudgePos.x || EnemyPos.x - 500 >= heroJudgePos.x)
			{
				if (proprety->FaceDir == 4)
					EnemyPos.x -= proprety->Speed;
				else if (proprety->FaceDir == 6)
					EnemyPos.x += proprety->Speed;
			}
			if (EnemyPos.y + 200 <= heroJudgePos.y)
				EnemyPos.y += proprety->Speed;
			else if (EnemyPos.y - 200 >= heroJudgePos.y)
				EnemyPos.y -= proprety->Speed;
			EnemyPos = EnemyJudgePos;
			m_enemy->SetJudgePos(EnemyJudgePos);
			m_enemy->SetPos(EnemyPos);
		}
		EnemyPos = EnemyJudgePos;
		m_enemy->SetJudgePos(EnemyJudgePos);
		m_enemy->SetPos(EnemyPos);
	}
	if (EnemyJudgePos.x < 100)
		EnemyJudgePos.x = 100;
	else if (EnemyJudgePos.x > 1948)
		EnemyJudgePos.x = 1948;
	if (EnemyJudgePos.y < 500)
		EnemyJudgePos.y = 500;
	else if (EnemyJudgePos.y > 750)
		EnemyJudgePos.y = 750;
	EnemyPos = EnemyJudgePos;
	m_enemy->SetJudgePos(EnemyJudgePos);
	m_enemy->SetPos(EnemyPos);
	m2.Translation(EnemyJudgePos.x, EnemyJudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	if (m_Animation == 0)
		return;
	m_Animation->SetLevel(m_enemy->Getlevel());
	m_Animation->Run();
	if (m_enemy->GetProperty()->Hp <= 0)
	{
		m_enemy->GetProperty()->Hp = 0;
		m_enemy->SetNextAct(BOSS死);
	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CBossWalk::End()
{
}

CAnimation* CBossWalk::GetAnimation()
{
	return m_Animation;
}

void CBossWalk::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CBossWalk::Peng()//碰撞判断
{
	return false;
}

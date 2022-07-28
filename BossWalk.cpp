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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar000_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\BOSS\\BOSS��\\ar000_%d.bmp", i);
		sprintf_s(ArrBmpName, 32, "BOSS��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("BOSS��0", "BOSS��0", 0, 0, 394, 368, 0xffffff);
	go->AddBmp("BOSS��1", "BOSS��1", 0, 0, 393, 363, 0xffffff);
	go->AddBmp("BOSS��2", "BOSS��2", 0, 0, 398, 361, 0xffffff);
	go->AddBmp("BOSS��3", "BOSS��3", 0, 0, 407, 359, 0xffffff);
	go->AddBmp("BOSS��4", "BOSS��4", 0, 0, 437, 361, 0xffffff);
	go->AddBmp("BOSS��5", "BOSS��5", 0, 0, 425, 363, 0xffffff);
	go->AddBmp("BOSS��6", "BOSS��6", 0, 0, 410, 364, 0xffffff);
	go->AddBmp("BOSS��7", "BOSS��7", 0, 0, 398, 363, 0xffffff);
	go->AddBmp("BOSS��8", "BOSS��8", 0, 0, 398, 365, 0xffffff);
	go->AddBmp("BOSS��9", "BOSS��9", 0, 0, 424, 366, 0xffffff);
	go->AddBmp("BOSS��10", "BOSS��10", 0, 0, 445, 368, 0xffffff);
	go->AddBmp("BOSS��11", "BOSS��11", 0, 0, 441, 369, 0xffffff);
	go->AddBmp("BOSS��12", "BOSS��12", 0, 0, 423, 370, 0xffffff);
	go->AddBmp("BOSS��13", "BOSS��13", 0, 0, 403, 368, 0xffffff);
	m_Animation = new CAnimation(14);
	m_Animation->SetBmp("BOSS��0", 41, -173, 3);
	m_Animation->SetBmp("BOSS��1", 38, -170, 3);
	m_Animation->SetBmp("BOSS��2", 37, -168, 3);
	m_Animation->SetBmp("BOSS��3", 41, -168, 3);
	m_Animation->SetBmp("BOSS��4", 56, -168, 3);
	m_Animation->SetBmp("BOSS��5", 49, -170, 3);
	m_Animation->SetBmp("BOSS��6", 43, -170, 3);
	m_Animation->SetBmp("BOSS��7", 38, -169, 3);
	m_Animation->SetBmp("BOSS��8", 39, -170, 3);
	m_Animation->SetBmp("BOSS��9", 54, -169, 3);
	m_Animation->SetBmp("BOSS��10", 67, -169, 3);
	m_Animation->SetBmp("BOSS��11", 62, -167, 3);
	m_Animation->SetBmp("BOSS��12", 51, -168, 3);
	m_Animation->SetBmp("BOSS��13", 40, -171, 3);
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
	m_EnemyMoveX = BOSS��;
	m_EnemyMoveY = BOSS��;
	m_NextAct = BOSS��;
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
				m_enemy->SetNextAct(BOSS��);
				m_enemy->GetProperty()->m_RunOFFindex = 33;
			}
			if (heropos.x >= EnemyJudgePos.x - 280 && heropos.x <= EnemyJudgePos.x + 280 &&
				heropos.y >= EnemyJudgePos.y - 70  &&  heropos.y <= EnemyJudgePos.y +   70)
			{
				int i = rand() % 15;
				if (i <=1)
				{
					m_enemy->SetNextAct(BOSS��);
					m_enemy->GetProperty()->m_RunOFFindex = 33;
				}
				else if (i == 2||i==5)
					m_enemy->SetNextAct(BOSSҧ);
				else if (i == 3)
					m_enemy->SetNextAct(BOSS��);
				else if (i == 4)
					m_enemy->SetNextAct(BOSS��);
				else if (i>5||i<=9)
					m_enemy->SetNextAct(BOSS����һ��);
				else if (i == 10)
					m_enemy->SetNextAct(BOSSվ);
				else
					m_NextAct = BOSS��;
			}
			else
			{
				int i = rand() % 50;
				if (i == 0)
					m_EnemyMoveX = BOSS��;
				i = rand() % 100;
				if (i == 1)
					m_EnemyMoveY = BOSS��;
				if (m_EnemyMoveX == BOSS��)
				{
					EnemyJudgePos.x -= proprety->Speed;
					if (EnemyJudgePos.x <= heropos.x - 200) 
						m_EnemyMoveX = BOSS��;
				}
				else if (m_EnemyMoveX == BOSS��)
				{
					EnemyJudgePos.x += proprety->Speed;
					if (EnemyJudgePos.x >= heropos.x + 200)
						m_EnemyMoveX = BOSS��;
				}
				EnemyPos = EnemyJudgePos;
				m_enemy->SetJudgePos(EnemyJudgePos);
				m_enemy->SetPos(EnemyPos);
				if (m_EnemyMoveX == BOSS��)
				{
					if (m_enemy->Peng(BOSS��))
						m_EnemyMoveX = BOSS��;
				}
				else
				{
					if (m_enemy->Peng(BOSS��))
						m_EnemyMoveX = BOSS��;
				}
				if (m_EnemyMoveY == BOSS��)
				{
					EnemyJudgePos.y += proprety->Speed;
					if (EnemyJudgePos.y >= heropos.y + 150)
						m_EnemyMoveY = BOSS��;
				}
				else if (m_EnemyMoveY == BOSS��)
				{
					EnemyJudgePos.y -= proprety->Speed;
					if (EnemyJudgePos.y <= heropos.y - 150)
						m_EnemyMoveY = BOSS��;
				}
				EnemyPos = EnemyJudgePos;
				m_enemy->SetJudgePos(EnemyJudgePos);
				m_enemy->SetPos(EnemyPos);
				if (m_EnemyMoveY == BOSS��)
				{
					if (m_enemy->Peng(BOSS��))
						m_EnemyMoveY = BOSS��;
				}
				else
				{
					if (m_enemy->Peng(BOSS��))
						m_EnemyMoveY = BOSS��;
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
		m_enemy->SetNextAct(BOSS��);
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

bool CBossWalk::Peng()//��ײ�ж�
{
	return false;
}

#include "HakumenWalk.h"
#include"MyRect.h"
#include"enemy.h"
#include"GameOutput.h"
#include"KJ.h"
#include"hero.h"
#include"OBJManager.h"
#include"scene.h"
CHakumenWalk::~CHakumenWalk()
{
	delete m_Animation;
}
void CHakumenWalk::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 9; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\ha030_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������0", "������0", 0, 0, 592, 435, RGB(0,255,0));
	go->AddBmp("������1", "������1", 0, 0, 563, 439, RGB(0,255,0));
	go->AddBmp("������2", "������2", 0, 0, 542, 439, RGB(0,255,0));
	go->AddBmp("������3", "������3", 0, 0, 535, 437, RGB(0,255,0));
	go->AddBmp("������4", "������4", 0, 0, 529, 442, RGB(0,255,0));
	go->AddBmp("������5", "������5", 0, 0, 533, 440, RGB(0,255,0));
	go->AddBmp("������6", "������6", 0, 0, 530, 438, RGB(0,255,0));
	go->AddBmp("������7", "������7", 0, 0, 537, 442, RGB(0,255,0));
	go->AddBmp("������8", "������8", 0, 0, 580, 444, RGB(0,255,0));

	m_Animation = new CAnimation(9);
	m_Animation->SetBmp("������0", 155, -211, 3);
	m_Animation->SetBmp("������1", 165, -214, 3);
	m_Animation->SetBmp("������2", 174, -210, 3);
	m_Animation->SetBmp("������3", 175, -206, 3);
	m_Animation->SetBmp("������4", 174, -202, 3);
	m_Animation->SetBmp("������5", 173, -204, 3);
	m_Animation->SetBmp("������6", 176, -204, 3);
	m_Animation->SetBmp("������7", 175, -204, 3);
	m_Animation->SetBmp("������8", 155, -209, 3);



	CMyRect Dr;
	Dr.SetWH(200, 350);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(0, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(1, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(2, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(3, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(4, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(5, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(6, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(7, Dr);
	Dr.Setoff(-80, -150);m_Animation->SetDefR(8, Dr);
	m_Animation->IsPlaying();
	m_EnemyMoveX = BOSS��;
	m_EnemyMoveY = BOSS��;
	m_NextAct = ������;
}

void CHakumenWalk::Run()
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
	for (int i = 0; i < HeroLen; i++)
	{
		CHero* pHero = (CHero*)hero->GetOBJ(i);
		POS heroJudgePos = pHero->GetJudgePos();
		POS heropos = pHero->GetPos();
		if (EnemyJudgePos.x < heropos.x)
			proprety->FaceDir = 6;
		else if (EnemyJudgePos.x > heropos.x)
			proprety->FaceDir = 4;
		if (heropos.x >= EnemyJudgePos.x - 2000 && heropos.x <= EnemyJudgePos.x + 2000 &&
			heropos.y >= EnemyJudgePos.y - 2000 && heropos.y <= EnemyJudgePos.y + 2000)
		{
			int i = rand() % 100;
			if (i <= 1)
			{
				m_enemy->SetNextAct(BOSS��);
				m_enemy->GetProperty()->m_RunOFFindex = 33;
			}
			if (heropos.x >= EnemyJudgePos.x - 280 && heropos.x <= EnemyJudgePos.x + 280 &&
				heropos.y >= EnemyJudgePos.y - 70 && heropos.y <= EnemyJudgePos.y + 70)
			{
				int i = rand() % 15;
				if (i <= 1)
				{
					m_enemy->SetNextAct(BOSS��);
					m_enemy->GetProperty()->m_RunOFFindex = 33;
				}
				else if (i == 2)
					m_enemy->SetNextAct(�����);
				else if (i == 3)
					m_enemy->SetNextAct(�����);
				else if (i == 4)
					m_enemy->SetNextAct(�����);
				else if (i >= 5 || i <= 9)
					m_enemy->SetNextAct(���濳);
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
		m_enemy->SetNextAct(������);

		m_enemy->SetState(-1, m_character);
		return;
	}
	if (m_Animation->IsPlaying() == 0)
	{
		m_enemy->SetNextAct(m_NextAct);
	}
}

void CHakumenWalk::End()
{
}

CAnimation* CHakumenWalk::GetAnimation()
{
	return m_Animation;
}

void CHakumenWalk::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CHakumenWalk::Peng()//��ײ�ж�
{
	return false;
}

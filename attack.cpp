#include "attack.h"
#include"Animation.h"
#include "BOSS.h"
#include "matrix3.h"
#include "GameInput.h"
#include "GameOutput.h"
#include "Character.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
#include"GameInput.h"
 Cattack::~Cattack()
{
	delete m_Animation;
}

void Cattack::Init()
{
	CGO* go = CGO::GetGO();
	char str[64];
	char str2[64];
	for (int i = 0; i < 13; ++i)
	{
		if (i < 10)
			sprintf_s(str, 64, "bmp\\好\\rc211_0%d.bmp", i);
		else
			sprintf_s(str, 64, "bmp\\好\\rc211_%d.bmp", i);
		sprintf_s(str2, 64, "好%d", i);
		go->AddImage(str2, str);
	}
	go->AddBmp("好0", "好0", 0, 0, 263, 440, 0xffffff);
	go->AddBmp("好1", "好1", 0, 0, 351, 478, 0xffffff);
	go->AddBmp("好2", "好2", 0, 0, 378, 486, 0xffffff);
	go->AddBmp("好3", "好3", 0, 0, 359, 487, 0xffffff);
	go->AddBmp("好4", "好4", 0, 0, 353, 476, 0xffffff);
	go->AddBmp("好5", "好5", 0, 0, 375, 473, 0xffffff);
	go->AddBmp("好6", "好6", 0, 0, 489, 472, 0xffffff);
	go->AddBmp("好7", "好7", 0, 0, 499, 472, 0xffffff);
	go->AddBmp("好8", "好8", 0, 0, 470, 475, 0xffffff);
	go->AddBmp("好9", "好9", 0, 0, 356, 485, 0xffffff);
	go->AddBmp("好10", "好10", 0, 0, 309, 488, 0xffffff);
	go->AddBmp("好11", "好11", 0, 0, 354, 456, 0xffffff);
	go->AddBmp("好12", "好12", 0, 0, 288, 415, 0xffffff);

	CMyRect Dr, Ar;
	m_Animation = new CAnimation(13);
	m_Animation->SetBmp("好0", 23, -205, 2);
	m_Animation->SetBmp("好1", 33, -224, 2);
	m_Animation->SetBmp("好2", 46, -228, 2);
	m_Animation->SetBmp("好3", 39, -229, 2);
	m_Animation->SetBmp("好4", 56, -223, 2);
	m_Animation->SetBmp("好5", -8, -222, 5);
	m_Animation->SetBmp("好6", -102, -221, 5);
	m_Animation->SetBmp("好7", -107, -221, 5);
	m_Animation->SetBmp("好8", -94, -223, 2);
	m_Animation->SetBmp("好9", -33, -229, 2);
	m_Animation->SetBmp("好10", 28, -230, 5);
	m_Animation->SetBmp("好11", 49, -214, 5);
	m_Animation->SetBmp("好12", 40, -194, 5);
	Dr.SetWH(100, 300);
	Ar.SetWH(390, 170);
	Dr.Setoff(0, -175); m_Animation->SetDefR(0, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(1, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(2, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(3, Dr);
	Ar.Setoff(-170, -170); m_Animation->SetActR(6, Ar);
	m_Animation->SetBmpAttackOff_Y(6, 50, 50);
	Ar.Setoff(-170, -170); m_Animation->SetActR(7, Ar);
	m_Animation->SetBmpAttackOff_Y(7, 50, 50);
	Ar.Setoff(-170, -170); m_Animation->SetActR(8, Ar);
	m_Animation->SetBmpAttackOff_Y(8, 50, 50);
	Dr.Setoff(0, -175); m_Animation->SetDefR(10, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(11, Dr);
	Dr.Setoff(0, -175); m_Animation->SetDefR(12, Dr);

	m_Next = 碩范隅嫋;
}

void Cattack::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();

	for (int i = 0; i < bmp->alen; i++)
	{
		CMyRect ar = bmp->aRect[i];
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			ar.Setoff(pos.x + -ar.GetOffx(), pos.y + ar.GetOffy());
		else if(0){}
	}
	Matrix3 m, m1, m2;
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-bmp->offx, bmp->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(bmp->offx, bmp->offy);
	}
	if (m_character->Peng(m_character->GetSX()->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m = m1 * m2;
	pos = m_character->GetPos();
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();


	if (m_Animation->GetCurF() >= 10 && m_Animation->IsPlaying() == 0)
	{
		if (gi->Get(_GI_K_J) == KS_DC)
			m_character->SetNextAct(碩范隅好輿);

	}


	Peng();
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_Next);
		if (gi->Get(_GI_K_J) == KS_DH)
			m_character->SetNextAct(碩范隅好輿);
	}
}

void Cattack::End()
{
}

CAnimation* Cattack::GetAnimation()
{
	return m_Animation;
}

void Cattack::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool Cattack::Peng()
{
	COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
	int EnemyLen = EnemyManager->GetSize();
	BMP* bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect HeroARect = bmp->aRect[j];
		POS HeroJudgePos = m_character->GetJudgePos();
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			HeroARect.Setoff(m_character->GetJudgePos().x + -HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		else
			HeroARect.Setoff(m_character->GetJudgePos().x + HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		for (int i = 0; i < EnemyLen; ++i)
		{
			CEnemy* enemy = (CEnemy*)EnemyManager->GetOBJ(i);
			POS EnemyJudgePos = enemy->GetJudgePos();
			BMP* EnemyBmp = enemy->GetCurPic();
			int dlen = EnemyBmp->dlen;
			for (int x = 0; x < dlen; ++x)
			{
				CMyRect EnemyDr = EnemyBmp->dRect[x];
				EnemyDr.Setoff(EnemyDr.GetOffx() + EnemyJudgePos.x, EnemyDr.GetOffy() + EnemyJudgePos.y);
				if (HeroARect.Peng(&EnemyDr) &&
					EnemyJudgePos.y <= HeroJudgePos.y + bmp->AttackOffDown&& 
					EnemyJudgePos.y >= HeroJudgePos.y - bmp->AttackOffUp)
				{
					enemy->GetProperty()->Hp -= m_character->GetSX()->ad;
					EnemyJudgePos = enemy->GetJudgePos();
					if (EnemyJudgePos.x <= 0)
						EnemyJudgePos.x = 100;
					else if (EnemyJudgePos.x >= 2048)
						EnemyJudgePos.x = 1948;
					enemy->SetJudgePos(EnemyJudgePos);
					enemy->SetPos(EnemyJudgePos);
					enemy->SetState(BOSS鞭, m_character);
				}
			}
		}
	}
	return false;
}

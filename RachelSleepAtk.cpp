#include"RachelSleepAtk.h"
#include"GameOutput.h"
#include"Character.h"
#include"GameInput.h"
#include"KJ.h"
#include"scene.h"
#include"OBJManager.h"
#include"BOSS.h"
#include"Platinum.h"
#include"EndTX.h"
#include"TXManager.h"
CRachelSleepAtk::~CRachelSleepAtk()
{
	delete m_Animation;
}

void CRachelSleepAtk::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 6; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùË¯¹¥\\rc230_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùË¯¹¥%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùË¯¹¥0", "ÀÙç÷¶ùË¯¹¥0", 0, 0, 347, 275, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥1", "ÀÙç÷¶ùË¯¹¥1", 0, 0, 364, 273, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥2", "ÀÙç÷¶ùË¯¹¥2", 0, 0, 359, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥3", "ÀÙç÷¶ùË¯¹¥3", 0, 0, 506, 258, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥4", "ÀÙç÷¶ùË¯¹¥4", 0, 0, 497, 260, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùË¯¹¥5", "ÀÙç÷¶ùË¯¹¥5", 0, 0, 430, 258, 0xffffff);
	m_Animation = new CAnimation(6);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥0", 18, -122, 3);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥1", 25, -121, 3);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥2", 41, -113, 4);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥3", -15, -113, 6);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥4", -6, -114,  5);
	m_Animation->SetBmp("ÀÙç÷¶ùË¯¹¥5", 9, -112,    3);
	CMyRect Ar;
	Ar.SetWH(200, 60);
	Ar.Setoff(-175, -140); m_Animation->SetActR(3, Ar);
	m_Animation->SetBmpAttackOff_Y(3, 50, 50);
	m_NextAct = ÀÙç÷¶ùË¯;
}

void CRachelSleepAtk::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
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
	m = m1 * m2;
	if (gi->Get(_GI_K_D) == KS_DH)	
	{
		JudgePos.x += sx->SleepMoveSpeed;
		pos.x = JudgePos.x;
		sx->FaceDir = 6;
		sx->MoveDir = 6;
	}
	else if (gi->Get(_GI_K_A) == KS_DH)
	{
		JudgePos.x -= sx->SleepMoveSpeed;
		pos.x = JudgePos.x;
		sx->FaceDir = 4;
		sx->MoveDir = 4;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	if (gi->Get(_GI_K_W) == KS_DH || gi->Get(_GI_K_W) == KS_DC)
	{
		JudgePos.y -= sx->SleepMoveSpeed;
		pos.y = JudgePos.y;
		sx->MoveDir = 8;
	}
	else if (gi->Get(_GI_K_S) == KS_DH || gi->Get(_GI_K_S) == KS_DC)
	{
		JudgePos.y += sx->SleepMoveSpeed;
		pos.y = JudgePos.y;
		sx->MoveDir = 2;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m_character->Peng(sx->MoveDir);
	JudgePos = m_character->GetJudgePos();
	pos = JudgePos;
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(JudgePos.x, JudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	bmp = m_Animation->GetBmp();
	for (int j = 0; j < bmp->alen; ++j)
	{
		CMyRect HeroARect = bmp->aRect[j];
		POS HeroJudgePos = m_character->GetJudgePos();
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			HeroARect.Setoff(m_character->GetJudgePos().x + -HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		else
			HeroARect.Setoff(m_character->GetJudgePos().x + HeroARect.GetOffx(), m_character->GetJudgePos().y + HeroARect.GetOffy());
		COBJM* HeroManager = CKJ::GetKJ()->GetcurScene()->GetHeroManager();
		CPlatinum* p = (CPlatinum*)HeroManager->GetOBJ(1);
		CEnemy* p1 = 0;
		CMyRect myDr;
		myDr.Setoff(1182, 316);
		myDr.SetWH(100, 180);
		if (HeroARect.Peng(&myDr) &&
			391 <= HeroJudgePos.y + bmp->AttackOffDown &&
			391 >= HeroJudgePos.y - bmp->AttackOffUp)
		{
			p->SetState(°×½ðÊÜ, p1);
		}
	}
	Peng();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void CRachelSleepAtk::End()
{
}

CAnimation* CRachelSleepAtk::GetAnimation()
{
	return m_Animation;
}

void CRachelSleepAtk::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}


bool CRachelSleepAtk::Peng()
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
					CEndTX* EndTx = new CEndTX;
					EndTx->Init(enemy);
					CKJ::GetKJ()->GetcurScene()->GetTX()->Push_back(EndTx);
					enemy->GetProperty()->Hp -= m_character->GetSX()->ad;
					EnemyJudgePos = enemy->GetJudgePos();
					if (EnemyJudgePos.x <= 0)
						EnemyJudgePos.x = 100;
					else if (EnemyJudgePos.x >= 2048)
						EnemyJudgePos.x = 1948;
					enemy->SetJudgePos(EnemyJudgePos);
					enemy->SetPos(EnemyJudgePos);
					enemy->SetState(BOSSÊÜ, m_character);
				}
			}
		}
	}
	return false;
}
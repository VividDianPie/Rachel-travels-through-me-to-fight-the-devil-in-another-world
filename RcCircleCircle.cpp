#include "RcCircleCircle.h"
#include"GameOutput.h"
#include"Character.h"
#include"GameInput.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"enemy.h"
CRcCircleCircle::~CRcCircleCircle()
{
	delete m_Animation;
}

void CRcCircleCircle::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 19; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿ŸÁ˜∂˘»¶»¶\\rc234_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿ŸÁ˜∂˘»¶»¶\\rc234_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "¿ŸÁ˜∂˘»¶»¶%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("¿ŸÁ˜∂˘»¶»¶0", "¿ŸÁ˜∂˘»¶»¶0", 0, 0, 320, 247, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶1", "¿ŸÁ˜∂˘»¶»¶1", 0, 0, 391, 259, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶2", "¿ŸÁ˜∂˘»¶»¶2", 0, 0, 386, 250, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶3", "¿ŸÁ˜∂˘»¶»¶3", 0, 0, 327, 254, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶4", "¿ŸÁ˜∂˘»¶»¶4", 0, 0, 378, 256, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶5", "¿ŸÁ˜∂˘»¶»¶5", 0, 0, 438, 255, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶6", "¿ŸÁ˜∂˘»¶»¶6", 0, 0, 499, 258, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶7", "¿ŸÁ˜∂˘»¶»¶7", 0, 0, 456, 262, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶8", "¿ŸÁ˜∂˘»¶»¶8", 0, 0, 447, 267, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶9", "¿ŸÁ˜∂˘»¶»¶9", 0, 0, 472, 258, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶10", "¿ŸÁ˜∂˘»¶»¶10", 0, 0, 540, 258, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶11", "¿ŸÁ˜∂˘»¶»¶11", 0, 0, 461, 263, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶12", "¿ŸÁ˜∂˘»¶»¶12", 0, 0, 474, 269, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶13", "¿ŸÁ˜∂˘»¶»¶13", 0, 0, 457, 259, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶14", "¿ŸÁ˜∂˘»¶»¶14", 0, 0, 553, 258, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶15", "¿ŸÁ˜∂˘»¶»¶15", 0, 0, 501, 260, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶16", "¿ŸÁ˜∂˘»¶»¶16", 0, 0, 400, 261, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶17", "¿ŸÁ˜∂˘»¶»¶17", 0, 0, 372, 265, 0xffffff);
	go->AddBmp("¿ŸÁ˜∂˘»¶»¶18", "¿ŸÁ˜∂˘»¶»¶18", 0, 0, 369, 265, 0xffffff);

	m_Animation = new CAnimation(19);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶0", -5, -116, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶1", -31, -115, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶2", -23, -110, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶3", 34, -121, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶4", 37, -126, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶5", 34, -130, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶6", 20, -128, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶7", -23, -129, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶8", -49, -131, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶9", -12, -129, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶10", -6, -129, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶11", 4, -131, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶12", 31, -132, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶13", 5, -130, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶14", -2, -126, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶15", 6, -126, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶16", 17, -126, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶17", 19, -124, 2);
	m_Animation->SetBmp("¿ŸÁ˜∂˘»¶»¶18", -26, -124, 2);
	CMyRect Dr, Ar;
	Ar.SetWH(391, 107);
	Ar.Setoff(19, -113);   m_Animation->SetActR(3, Ar); m_Animation->SetBmpAttackOff_Y(3, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(4, Ar); m_Animation->SetBmpAttackOff_Y(4, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(5, Ar); m_Animation->SetBmpAttackOff_Y(5, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(6, Ar); m_Animation->SetBmpAttackOff_Y(6, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(7, Ar); m_Animation->SetBmpAttackOff_Y(7, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(8, Ar); m_Animation->SetBmpAttackOff_Y(8, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(9, Ar); m_Animation->SetBmpAttackOff_Y(9, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(10, Ar); m_Animation->SetBmpAttackOff_Y(10, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(11, Ar); m_Animation->SetBmpAttackOff_Y(11, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(12, Ar); m_Animation->SetBmpAttackOff_Y(12, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(13, Ar); m_Animation->SetBmpAttackOff_Y(13, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(14, Ar); m_Animation->SetBmpAttackOff_Y(14, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(15, Ar); m_Animation->SetBmpAttackOff_Y(15, 100, 100);
	Ar.Setoff(19, -113);   m_Animation->SetActR(16, Ar); m_Animation->SetBmpAttackOff_Y(16, 100, 100);
	m_NextAct = ¿ŸÁ˜∂˘≈‹;
}

void CRcCircleCircle::Run()
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
	if (sx->m_RunOFFindex > 0)
	{

		if (sx->FaceDir == 4)
		{
			JudgePos.x -= sx->RunSpeed + 2;
			sx->MoveDir = 4;
		}
		else
		{
			JudgePos.x += sx->RunSpeed + 2;
			sx->MoveDir = 6;
		}
	}
	sx->m_RunOFFindex -= 1;
	pos = JudgePos;
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(JudgePos.x, JudgePos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	Peng();
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void CRcCircleCircle::End()
{
}

CAnimation* CRcCircleCircle::GetAnimation()
{
	return m_Animation;
}

void CRcCircleCircle::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CRcCircleCircle::Peng()
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
					EnemyJudgePos.y <= HeroJudgePos.y + bmp->AttackOffDown &&
					EnemyJudgePos.y >= HeroJudgePos.y - bmp->AttackOffUp){
					enemy->GetProperty()->Hp -= m_character->GetSX()->ad;
					EnemyJudgePos = enemy->GetJudgePos();
					if (EnemyJudgePos.x <= 0)
						EnemyJudgePos.x = 100;
					else if (EnemyJudgePos.x >= 2048)
						EnemyJudgePos.x = 1948;
					enemy->SetJudgePos(EnemyJudgePos);
					enemy->SetPos(EnemyJudgePos);
					enemy->SetState(BOSS ‹, m_character);
				}
			}
		}
	}
	return false;
}


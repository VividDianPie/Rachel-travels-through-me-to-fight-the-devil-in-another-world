#include "Rcflower.h"
#include"GameOutput.h"
#include"GameInput.h"
#include"Character.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"enemy.h"
CRcflower::~CRcflower()
{
	delete m_Animation;
}

void CRcflower::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 21; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ӡ��\\rc430_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������ӡ��\\rc430_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������ӡ��%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}

	go->AddBmp("������ӡ��0", "������ӡ��0", 0, 0, 422, 419, 0xffffff);
	go->AddBmp("������ӡ��1", "������ӡ��1", 0, 0, 377, 386, 0xffffff);
	go->AddBmp("������ӡ��2", "������ӡ��2", 0, 0, 275, 334, 0xffffff);
	go->AddBmp("������ӡ��3", "������ӡ��3", 0, 0, 260, 330, 0xffffff);
	go->AddBmp("������ӡ��4", "������ӡ��4", 0, 0, 257, 332, 0xffffff);
	go->AddBmp("������ӡ��5", "������ӡ��5", 0, 0, 195, 333, 0xffffff);
	go->AddBmp("������ӡ��6", "������ӡ��6", 0, 0, 279, 335, 0xffffff);
	go->AddBmp("������ӡ��7", "������ӡ��7", 0, 0, 462, 337, 0xffffff);
	go->AddBmp("������ӡ��8", "������ӡ��8", 0, 0, 608, 347, 0xffffff);
	go->AddBmp("������ӡ��9", "������ӡ��9", 0, 0, 722, 442, 0xffffff);
	go->AddBmp("������ӡ��10", "������ӡ��10", 0, 0, 640, 397, 0xffffff);
	go->AddBmp("������ӡ��11", "������ӡ��11", 0, 0, 640, 411, 0xffffff);
	go->AddBmp("������ӡ��12", "������ӡ��12", 0, 0, 659, 392, 0xffffff);
	go->AddBmp("������ӡ��13", "������ӡ��13", 0, 0, 651, 572, 0xffffff);
	go->AddBmp("������ӡ��14", "������ӡ��14", 0, 0, 642, 581, 0xffffff);
	go->AddBmp("������ӡ��15", "������ӡ��15", 0, 0, 639, 588, 0xffffff);
	go->AddBmp("������ӡ��16", "������ӡ��16", 0, 0, 660, 583, 0xffffff);
	go->AddBmp("������ӡ��17", "������ӡ��17", 0, 0, 578, 528, 0xffffff);
	go->AddBmp("������ӡ��18", "������ӡ��18", 0, 0, 518, 411, 0xffffff);
	go->AddBmp("������ӡ��19", "������ӡ��19", 0, 0, 471, 403, 0xffffff);
	go->AddBmp("������ӡ��20", "������ӡ��20", 0, 0, 368, 414, 0xffffff);

	go->AddImage("���б���", "bmp\\������ӡ��\\RC_emblem.bmp");
	go->AddImage("��", "bmp\\������ӡ��\\rcef_mc01.bmp");
	go->AddImage("��Ȧ", "bmp\\������ӡ��\\rcef_mc2.bmp");
	go->AddBmp("���б���", "���б���", 0, 0, 512, 512, RGB(0,0,0));
	go->AddBmp("��", "��", 0, 0, 256, 256, RGB(0, 0, 0));
	go->AddBmp("��Ȧ", "��Ȧ", 0, 0, 256, 256, RGB(0, 0, 0));
	m_Animation = new CAnimation(21);
	m_Animation->SetBmp("������ӡ��0", 2, -200,			 2);
	m_Animation->SetBmp("������ӡ��1", 7, -188,			 2);
	m_Animation->SetBmp("������ӡ��2", -3, -204,		 2);
	m_Animation->SetBmp("������ӡ��3", 2, -203,		 	 2);
	m_Animation->SetBmp("������ӡ��4", -3, -206,	     2);
	m_Animation->SetBmp("������ӡ��5", -7, -210,		 2);
	m_Animation->SetBmp("������ӡ��6", 7, -215,			 2);
	m_Animation->SetBmp("������ӡ��7", 0, -219,			 5);
	m_Animation->SetBmp("������ӡ��8", 44, -227,		 5);
	m_Animation->SetBmp("������ӡ��9", 90, -213,		 5);
	m_Animation->SetBmp("������ӡ��10", 59, -253,		 5);
	m_Animation->SetBmp("������ӡ��11", 55, -262,		 5);
	m_Animation->SetBmp("������ӡ��12", 58, -254,		 5);
	m_Animation->SetBmp("������ӡ��13", 54, -345,		 6);
	m_Animation->SetBmp("������ӡ��14", 61, -353,		 6);
	m_Animation->SetBmp("������ӡ��15", 55, -355,		 6);
	m_Animation->SetBmp("������ӡ��16", 60, -350,		 6);
	m_Animation->SetBmp("������ӡ��17", 27, -294,		 6);
	m_Animation->SetBmp("������ӡ��18", 2, -203,		 6);
	m_Animation->SetBmp("������ӡ��19", 3, -190,		 2);
	m_Animation->SetBmp("������ӡ��20", 24, -192,		 2);
	CMyRect Dr, Ar;
	Ar.SetWH(1300, 446);
	Ar.Setoff(0, -230);   m_Animation->SetActR(3, Ar);   m_Animation->SetBmpAttackOff_Y(3, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(4, Ar);   m_Animation->SetBmpAttackOff_Y(4, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(5, Ar);   m_Animation->SetBmpAttackOff_Y(5, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(6, Ar);   m_Animation->SetBmpAttackOff_Y(6, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(7, Ar);   m_Animation->SetBmpAttackOff_Y(7, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(8, Ar);   m_Animation->SetBmpAttackOff_Y(8, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(9, Ar);   m_Animation->SetBmpAttackOff_Y(9, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(10, Ar); m_Animation->SetBmpAttackOff_Y(10, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(11, Ar); m_Animation->SetBmpAttackOff_Y(11, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(12, Ar); m_Animation->SetBmpAttackOff_Y(12, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(13, Ar); m_Animation->SetBmpAttackOff_Y(13, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(14, Ar); m_Animation->SetBmpAttackOff_Y(14, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(15, Ar); m_Animation->SetBmpAttackOff_Y(15, 150, 150);
	Ar.Setoff(0, -230);   m_Animation->SetActR(16, Ar); m_Animation->SetBmpAttackOff_Y(16, 150, 150);
	m_NextAct = ������վ;
}
static int flowerA = 0;
static int flowerCircleA = 0;
void CRcflower::Run()
{
	CGI* gi = CGI::GetGI();
	BMP* bmp = m_Animation->GetBmp();
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
	Matrix3 m, m1, m2,	m3,m4,m5,m6;
	Matrix3 m7, m8, m9;
	Matrix3 m10, m11, m12;
	Matrix3 m7_1, m8_1, m9_1;
	Matrix3 m10_1, m11_1, m12_1;
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
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m3.Translation(pos.x, pos.y-240);
	m4 = m4 * m3;
	m6.Translation(pos.x, pos.y+240);
	m5 = m5 * m6;
	CGO::GetGO()->DrawBmp("���б���", &m4, &m5, _Level_2, 1.0f, 1.0f);
	flowerA-=10;
	m7.RotationA(flowerA);
	m8.Translation(pos.x+445, pos.y-198);
	m9 = m9 * m7 * m8;
	CGO::GetGO()->DrawBmp("��", &m9, &m9, _Level_3, 1.0f, 1.0f);
	flowerCircleA+=10;
	m10.RotationA(flowerCircleA);
	m11.Translation(pos.x + 445, pos.y - 198);
	m12 = m12 * m10 * m11;
	CGO::GetGO()->DrawBmp("��Ȧ", &m12, &m12, _Level_3, 1.5f, 1.5f);
	flowerA -= 10;
	m7_1.RotationA(flowerA);
	m8_1.Translation(pos.x - 445, pos.y - 198);
	m9_1 = m9_1 * m7_1 * m8_1;
	CGO::GetGO()->DrawBmp("��", &m9_1, &m9_1, _Level_3, 1.0f, 1.0f);
	flowerCircleA += 10;
	m10_1.RotationA(flowerCircleA);
	m11_1.Translation(pos.x - 445, pos.y - 198);
	m12_1 = m12_1 * m10_1 * m11_1;
	CGO::GetGO()->DrawBmp("��Ȧ", &m12_1, &m12_1, _Level_3, 1.5f, 1.5f);
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
	{
		m_character->SetNextAct(m_NextAct);
	}
}
void CRcflower::End()
{
}

CAnimation* CRcflower::GetAnimation()
{
	return m_Animation;
}

void CRcflower::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}



bool CRcflower::Peng()
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
					enemy->SetState(BOSS��, m_character);
				}
			}
		}
	}
	return false;
}


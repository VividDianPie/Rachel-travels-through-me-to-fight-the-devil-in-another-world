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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\�����\\ha451_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\�����\\ha451_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "�����%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("�����0", "�����0", 0, 0, 528, 530, RGB(0,255,0));
	go->AddBmp("�����1", "�����1", 0, 0, 422, 556, RGB(0,255,0));
	go->AddBmp("�����2", "�����2", 0, 0, 457, 474, RGB(0,255,0));
	go->AddBmp("�����3", "�����3", 0, 0, 483, 484, RGB(0,255,0));
	go->AddBmp("�����4", "�����4", 0, 0, 510, 464, RGB(0,255,0));
	go->AddBmp("�����5", "�����5", 0, 0, 496, 469, RGB(0,255,0));
	go->AddBmp("�����6", "�����6", 0, 0, 490, 479, RGB(0,255,0));
	go->AddBmp("�����7", "�����7", 0, 0, 485, 495, RGB(0,255,0));
	go->AddBmp("�����8", "�����8", 0, 0, 452, 507, RGB(0,255,0));
	go->AddBmp("�����9", "�����9", 0, 0, 415, 531, RGB(0,255,0));
	go->AddBmp("�����10", "�����10", 0, 0, 712, 563, RGB(0,255,0));
	go->AddBmp("�����11", "�����11", 0, 0, 719, 562, RGB(0,255,0));
	go->AddBmp("�����12", "�����12", 0, 0, 738, 546, RGB(0,255,0));
	go->AddBmp("�����13", "�����13", 0, 0, 759, 529, RGB(0,255,0));
	go->AddBmp("�����14", "�����14", 0, 0, 709, 505, RGB(0,255,0));
	go->AddBmp("�����15", "�����15", 0, 0, 477, 553, RGB(0,255,0));
	go->AddBmp("�����16", "�����16", 0, 0, 501, 527, RGB(0,255,0));
	go->AddBmp("�����17", "�����17", 0, 0, 431, 436, RGB(0,255,0));
	go->AddBmp("�����18", "�����18", 0, 0, 409, 406, RGB(0,255,0));
	go->AddBmp("�����19", "�����19", 0, 0, 460, 376, RGB(0,255,0));
	go->AddBmp("�����20", "�����20", 0, 0, 491, 392, RGB(0,255,0));
	go->AddBmp("�����21", "�����21", 0, 0, 573, 476, RGB(0,255,0));
	go->AddBmp("�����22", "�����22", 0, 0, 268, 486, RGB(0,255,0));
	go->AddBmp("�����23", "�����23", 0, 0, 253, 477, RGB(0,255,0));
	go->AddBmp("�����24", "�����24", 0, 0, 278, 475, RGB(0,255,0));
	go->AddBmp("�����25", "�����25", 0, 0, 299, 473, RGB(0,255,0));
	go->AddBmp("�����26", "�����26", 0, 0, 386, 478, RGB(0,255,0));
	go->AddBmp("�����27", "�����27", 0, 0, 598, 630, RGB(0,255,0));
	go->AddBmp("�����28", "�����28", 0, 0, 315, 615, RGB(0,255,0));
	go->AddBmp("�����29", "�����29", 0, 0, 429, 599, RGB(0,255,0));
	go->AddBmp("�����30", "�����30", 0, 0, 447, 579, RGB(0,255,0));
	go->AddBmp("�����31", "�����31", 0, 0, 234, 620, RGB(0,255,0));
	go->AddBmp("�����32", "�����32", 0, 0, 235, 623, RGB(0,255,0));
	go->AddBmp("�����33", "�����33", 0, 0, 239, 607, RGB(0,255,0));
	go->AddBmp("�����34", "�����34", 0, 0, 231, 541, RGB(0,255,0));
	go->AddBmp("�����35", "�����35", 0, 0, 231, 540, RGB(0,255,0));
	go->AddBmp("�����36", "�����36", 0, 0, 212, 539, RGB(0,255,0));
	go->AddBmp("�����37", "�����37", 0, 0, 231, 539, RGB(0,255,0));
	go->AddBmp("�����38", "�����38", 0, 0, 225, 539, RGB(0,255,0));
	go->AddBmp("�����39", "�����39", 0, 0, 349, 538, RGB(0,255,0));
	go->AddBmp("�����40", "�����40", 0, 0, 337, 538, RGB(0,255,0));
	go->AddBmp("�����41", "�����41", 0, 0, 411, 538, RGB(0,255,0));
	go->AddBmp("�����42", "�����42", 0, 0, 398, 538, RGB(0,255,0));

	m_Animation = new CAnimation(43);
	m_Animation->SetBmp("�����0", 102, -252, 10);
	m_Animation->SetBmp("�����1", 26, -265, 10);
	m_Animation->SetBmp("�����2", 5, -226, 10);
	m_Animation->SetBmp("�����3", -18, -230, 10);
	m_Animation->SetBmp("�����4", -4, -219, 10);
	m_Animation->SetBmp("�����5", -12, -223, 10);
	m_Animation->SetBmp("�����6", -27, -227, 10);
	m_Animation->SetBmp("�����7", -39, -237, 10);
	m_Animation->SetBmp("�����8", -37, -245, 10);
	m_Animation->SetBmp("�����9", -37, -259, 10);
	m_Animation->SetBmp("�����10", 112, -272, 10);
	m_Animation->SetBmp("�����11", 106, -271, 10);
	m_Animation->SetBmp("�����12", 74, -265, 10);
	m_Animation->SetBmp("�����13", 73, -259, 10);
	m_Animation->SetBmp("�����14", 93, -249, 10);
	m_Animation->SetBmp("�����15", -52, -273, 10);
	m_Animation->SetBmp("�����16", -5, -260, 10);
	m_Animation->SetBmp("�����17", 7, -214, 10);
	m_Animation->SetBmp("�����18", 32, -200, 10);
	m_Animation->SetBmp("�����19", 43, -187, 10);
	m_Animation->SetBmp("�����20", 74, -195, 10);
	m_Animation->SetBmp("�����21", -13, -228, 1000);
	m_Animation->SetBmp("�����22", -15, -240, 10);
	m_Animation->SetBmp("�����23", -17, -237, 10);
	m_Animation->SetBmp("�����24", -28, -235, 10);
	m_Animation->SetBmp("�����25", -34, -235, 10);
	m_Animation->SetBmp("�����26", -69, -237, 10);
	m_Animation->SetBmp("�����27", 155, -312, 10);
	m_Animation->SetBmp("�����28", -30, -306, 10);
	m_Animation->SetBmp("�����29", -86, -298, 10);
	m_Animation->SetBmp("�����30", 121, -288, 10);
	m_Animation->SetBmp("�����31", 14, -306, 10);
	m_Animation->SetBmp("�����32", 15, -309, 10);
	m_Animation->SetBmp("�����33", 17, -301, 10);
	m_Animation->SetBmp("�����34", 14, -269, 10);
	m_Animation->SetBmp("�����35", 15, -268, 10);
	m_Animation->SetBmp("�����36", 7, -269, 10);
	m_Animation->SetBmp("�����37", -4, -269, 10);
	m_Animation->SetBmp("�����38", 4, -270, 10);
	m_Animation->SetBmp("�����39", -64, -269, 10);
	m_Animation->SetBmp("�����40", -58, -269, 10);
	m_Animation->SetBmp("�����41", -94, -270, 10);
	m_Animation->SetBmp("�����42", -87,-269, 10);
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
	m_NextAct = ������;
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
	m_Animation->SetMatrix2(&m2);//ƫ��ƽ��
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

#include"HpWisp.h"
#include"GameInput.h"
#include"Character.h"
#include"OBJManager.h"
#include"GameOutPut.h"
#include"Hero.h"
#include"KJ.h"
#include"matrix3.h"
#include"scene.h"
#include"enemy.h"
void CHP::Init()
{
	CGO* go = CGO::GetGO();
	go->AddImage("蕾琪儿血条", "bmp\\血条\\蕾琪儿血条.bmp");
	go->AddBmp("蕾琪儿血条", "蕾琪儿血条", 0, 0, 1000, 50, 0xffffff);
	go->AddImage("蕾琪儿头像", "bmp\\血条\\蕾琪儿头像.bmp");
	go->AddBmp("蕾琪儿头像", "蕾琪儿头像", 0, 0, 100, 100, 0xffffff);
	if (CKJ::GetKJ()->GetcurScene()->TrueOrFalse()==1)
	{
		go->AddImage("埃拉库尼血条", "bmp\\血条\\埃拉库尼血条.bmp");
		go->AddBmp("埃拉库尼血条", "埃拉库尼血条", 0, 0, 1000, 50, 0xffffff);
		go->AddImage("埃拉库尼头像", "bmp\\血条\\埃拉库尼头像.bmp");
		go->AddBmp("埃拉库尼头像", "埃拉库尼头像", 0, 0, 100, 100, 0xffffff);
	}
	if (CKJ::GetKJ()->GetcurScene()->TrueOrFalse() == 2)
	{
		go->AddImage("白面血条", "bmp\\血条\\无标题.bmp");
		go->AddBmp("白面血条", "白面血条", 0, 0, 500, 30, 0xffffff);
		go->AddImage("白面头像", "bmp\\血条\\白面头像.bmp");
		go->AddBmp("白面头像", "白面头像", 0, 0, 100, 100, 0xffffff);
	}
	playing = true;
	if (CKJ::GetKJ()->GetcurScene()->GetHeroManager()->GetSize() > 0)
	{
		CHero* hero = (CHero*)CKJ::GetKJ()->GetcurScene()->GetHeroManager()->GetOBJ(0);
		m_HeroJudgeHp = hero->GetSX()->hp; 
	}
	if (CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->GetSize() > 0)
	{
		CEnemy* enemy = (CEnemy*)CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->GetOBJ(0);
		CEnemy* enemy1 = (CEnemy*)CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->GetOBJ(1);
		m_EnemyJudgeHp = enemy->GetProperty()->Hp;
		if(CKJ::GetKJ()->GetcurScene()->TrueOrFalse() == 2)
		m_EnemyJudgeHp1 = enemy1->GetProperty()->Hp;
	}
}
void CHP::Run()
{
	CGI* gi = CGI::GetGI();
	CGO* go = CGO::GetGO();
	CEnemy* enemy = (CEnemy*)CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->GetOBJ(0);

	Matrix3 m_1, m0_1, m1_1, m2_1, m3_1, m4_1;
	if (!enemy)
		return;
	if (gi->Get(_GI_K_9) == KS_DC || gi->Get(_GI_K_9) == KS_DH)
		enemy->GetProperty()->Hp += 1;
	if (gi->Get(_GI_K_0) == KS_DC || gi->Get(_GI_K_0) == KS_DH)
		enemy->GetProperty()->Hp -= 1;
	m_EnemyJudgeHp = (long double)enemy->GetProperty()->Hp / 100;
	m0_1.Scoling(m_EnemyJudgeHp, 1);
	m2_1.Translation(1500, 75);
	m1_1 = m1_1 * m0_1 * m2_1;
	if (CKJ::GetKJ()->GetcurScene()->TrueOrFalse()==1)
	{
		if (enemy->GetProperty()->Hp > 0)
			CGO::GetGO()->DrawBmp("埃拉库尼血条", &m1_1, &m0_1, 9, 1.0f, 1.0f);
		m3_1.Translation(1450, 50);
		m4_1 = m4_1 * m3_1;
		CGO::GetGO()->DrawBmp("埃拉库尼头像", &m4_1, &m_1, 9, 1.0f, 1.0f);
	}
	CHero* hero = (CHero*)CKJ::GetKJ()->GetcurScene()->GetHeroManager()->GetOBJ(0);
	Matrix3 m, m0, m1, m2, m3, m4,m5;
	if (!hero)
		return;
	if (gi->Get(_GI_K_7) == KS_DC || gi->Get(_GI_K_7) == KS_DH)
		hero->GetSX()->hp += 1;
	if (gi->Get(_GI_K_8) == KS_DC || gi->Get(_GI_K_8) == KS_DH)
		hero->GetSX()->hp -= 1;
	m_HeroJudgeHp = (long double)hero->GetSX()->hp / 100;
	m0.Scoling(m_HeroJudgeHp, 1);
	m2.Translation(0, 75);
	m1 = m1 * m0 * m2;
	if (hero->GetSX()->hp > 0)
		CGO::GetGO()->DrawBmp("蕾琪儿血条", &m1, &m0, 9, 1.0f, 1.0f);
	m3.Translation(50, 50);
	m4 = m4 * m3;
	CGO::GetGO()->DrawBmp("蕾琪儿头像", &m4, &m, 9, 1.0f, 1.0f);
	if (CKJ::GetKJ()->GetcurScene()->TrueOrFalse() == 2)
	{
		CEnemy* enemy1 = (CEnemy*)CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->GetOBJ(1);
		m_EnemyJudgeHp = (long double)enemy->GetProperty()->Hp / 100;
		m0.Scoling(m_EnemyJudgeHp, 1);
		m2.Translation(1500, 100+-15);
		Matrix3 i;
		i = i * m0 * m2;
		if (enemy->GetProperty()->Hp > 0)
			CGO::GetGO()->DrawBmp("白面血条", &i, &i, 9, 1.0f, 1.0f);
		{
			m_EnemyJudgeHp1 = (long double)enemy1->GetProperty()->Hp / 100;
			m0.Scoling(m_EnemyJudgeHp1, 1);
			m2.Translation(1500, 150+50-15);
			m5 = m5 * m0 * m2;
			if (enemy1->GetProperty()->Hp > 0)
				CGO::GetGO()->DrawBmp("白面血条", &m5, &m0, 9, 1.0f, 1.0f);
			{
				Matrix3 _m0, _m1, _m2, _m3;
				_m0.Translation(1450, 50);
				_m1 = _m1 * _m0;
				CGO::GetGO()->DrawBmp("白面头像", &_m1, &_m1, 9, 1.0f, 1.0f);
				_m2.Translation(1450, 150);
				_m3 = _m3 * _m2;
				CGO::GetGO()->DrawBmp("白面头像", &_m3, &_m3, 9, 1.0f, 1.0f);
			}
		}
	}
}

void CHP::End()
{
}


bool CHP::Getplaying()
{
	return playing;
}

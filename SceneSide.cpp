#include "SceneSide.h"
#include"Hero.h"
#include"Enemy.h"
#include"GameOutPut.h"
void CSceneSide::Init()
{
	m_r.SetTag(&m_JudgePos.x, &m_JudgePos.y);
}

void CSceneSide::Run()
{
	CGO* go = CGO::GetGO();
	_RECT r;
	r = m_r.GetRect();
	go->DrawRect(m_JudgePos.x, m_JudgePos.y, m_r.GetW(), m_r.GetH(), 2, RGB(0, 255, 0));
	go->DrawRect(m_JudgePos.x, m_JudgePos.y, 2, 2, 3, RGB(255, 0, 0));
}

void CSceneSide::End()
{
}

void CSceneSide::Peng(int dir, COBJ* p, int type)
{
	if (type == HERO)
	{
		CHero* hero = (CHero*)p;
		if (dir == 4)
		{
			int x = m_r.GetRect().right;
			hero->SetJudgePos(x + hero->GetMyRect()->GetW() / 2 + 1, hero->GetJudgePos().y);
		}
		else if (dir == 6)
		{
			int x = m_r.GetRect().left;
			hero->SetJudgePos(x - hero->GetMyRect()->GetW() / 2 - 1, hero->GetJudgePos().y);
		}
		if (dir == 8)
		{
			int y = m_r.GetRect().bottom;
			hero->SetJudgePos(hero->GetJudgePos().x,
				m_r.GetRect().bottom - m_r.GetOffy() + hero->GetMyRect()->GetOffy() + hero->GetMyRect()->GetH() / 2 +1);
		}
		else if (dir == 2)
		{
			int y = m_r.GetOffy();	
			hero->SetJudgePos(hero->GetJudgePos().x,
				m_r.GetRect().top - m_r.GetOffy() + hero->GetMyRect()->GetOffy() - hero->GetMyRect()->GetH() / 2 - 1);
		}
	}
	else
	{
		CEnemy* enemy = (CEnemy*)p;

		if (dir == 4)
		{
			int x = m_r.GetRect().right;
			enemy->SetJudgePos(x + enemy->GetMyRect()->GetW() / 2 + 1, enemy->GetJudgePos().y);
		}
		else if (dir == 6)
		{
			int x = m_r.GetRect().left;
			enemy->SetJudgePos(x - enemy->GetMyRect()->GetW() / 2 - 1, enemy->GetJudgePos().y);
		}
		else if (dir == 8)
		{
			int y = m_r.GetRect().bottom;
			enemy->SetJudgePos(enemy->GetJudgePos().x,
				m_JudgePos.y + m_r.GetH() / 2 + enemy->GetMyRect()->GetH() / 2 + 1);
		}
		else if (dir == 2)
		{
			int y = m_r.GetOffy();
			enemy->SetJudgePos(enemy->GetJudgePos().x,
				m_r.GetRect().top - enemy->GetMyRect()->GetH() / 2 -1);
		}
	}
}

using namespace std;
#include "BOSS.h"
#include "Action.h"
#include "BOSSIdle.h"
#include "Animation.h"
#include "matrix3.h"
#include "walk.h"
#include "Shou.h"
#include"Idle.h"
#include"GameOutput.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"BossWalk.h"
#include"BOSSRun.h"
#include"Shou.h"
#include"Obstacle.h"
#include"CBossEat.h"
#include"BossSpit.h"
#include"BossBigSkill.h"
#include"BossBigSkillTwo.h"
#include"BossBigSkillEnd.h"
#include"BossDie.h"
void CBOSS::Init()
{
	CAction* act = nullptr;
	act = new CBOSSIdle;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS站, act);
	act = new CBossWalk;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS走, act);
	m_curAct = act;	
	act = new CBOSSRun;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS跑, act);
	act = new CShou;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS受, act);
	act = new CBossEat;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS咬, act);
	act = new CBossSpit;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS吐, act);
	act = new CBossBigSkill;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS大招一段, act);
	act = new CBossBigSkillTwo;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS大招二段, act);
	act = new CBossBigSkillEnd;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS大招三段, act);
	act = new CBossDie;
	act->Init();
	act->SetEnemy(this);
	SetAction(BOSS死, act);
	m_JudgePos.x = 500;
	m_JudgePos.y = 600;
	m_Property.Hp = 99;
	m_Property.MaxHp=100;
	m_Property.Speed = 5;
	m_Property.m_RunSpeed = 20;
	m_Property.m_RunOFFindex = 0;
	m_NextState = -1;
	m_NextAct = -1;
	m_pos.x = m_JudgePos.x;
	m_pos.y = m_JudgePos.y;
	m_Active = true;
	m_curAct->Reset();
	m_level = 5;
	m_NDir = 4;
	m_r.SetTag(&m_JudgePos.x, &m_JudgePos.y);
	m_r.SetWH(150, 30);
	m_Property.FaceDir = 4;
	m_State = BOSS走;
	 CKJ::GetKJ()->GetcurScene()->GetEnemyManager()->Push_back(this);
}
void CBOSS::Run()
{
	m_curAct->Run();

	CGO* go = CGO::GetGO();
	float JudgePosX = this->GetJudgePos().x;
	float JudgePosY = this->GetJudgePos().y;
	go->DrawRect(JudgePosX, JudgePosY, m_r.GetW(), m_r.GetH(), 2, RGB(0, 0, 0));
	go->DrawRect(m_pos.x, m_pos.y, 2, 2, 3, RGB(255, 0, 0));
	CMyRect ARect,DRect;
	BMP* bmp = this->GetCurPic();
	for (int i = 0; i < bmp->alen; ++i)
	{
		ARect = bmp->aRect[i];
		if (m_Property.FaceDir != m_NDir)
			ARect.Setoff(-ARect.GetOffx() + m_pos.x, ARect.GetOffy() + m_pos.y);
		else
			ARect.Setoff(ARect.GetOffx() + m_pos.x, ARect.GetOffy() + m_pos.y);
		go->DrawRect(ARect.GetOffx(), ARect.GetOffy(), ARect.GetW(), ARect.GetH(), 2, RGB(255, 0, 0));
	}
	for (int i = 0; i < bmp->dlen; ++i)
	{
		DRect = bmp->dRect[i];
		if (m_Property.FaceDir != m_NDir)
			DRect.Setoff(-DRect.GetOffx() + m_pos.x, DRect.GetOffy() + m_pos.y);
		else
			DRect.Setoff(DRect.GetOffx() + m_pos.x, DRect.GetOffy() + m_pos.y);
		go->DrawRect(DRect.GetOffx(), DRect.GetOffy(), DRect.GetW(), DRect.GetH(), 2, RGB(0, 0, 255));
	}
	if (m_NextState > -1)
	{
		map<int, CAction*>::iterator it;
		it = m_Acts.find(m_NextState);
		if (it == m_Acts.end())
			return;
		m_curAct = it->second;
		m_curAct->Reset();
		m_State = m_NextState;
		m_NextState = -1;
	}
	else if (m_NextAct > -1)
	{
		map<int, CAction*>::iterator it;
		it = m_Acts.find(m_NextAct);
		if (it == m_Acts.end())
			return;
		m_curAct = it->second;
		m_curAct->Reset();
		m_State = m_NextAct;
		m_NextAct = -1;
	}
}

void CBOSS::End()
{
}

void CBOSS::SetState(int st)
{
	m_NextState = st;
}

void CBOSS::SetCurAct(int index)
{
	if (index < 0 || index >= m_Acts.size())
		return;
	m_curAct = m_Acts.find(index)->second;
}

bool CBOSS::Peng(int dir)
{
	COBJM* wall = CKJ::GetKJ()->GetcurScene()->GetObstacleManager();
	int len = wall->GetSize();
	for (int i = 0; i < len; ++i)
	{
		CObstacle* w = (CObstacle*)wall->GetOBJ(i);
		if (this->GetMyRect()->Peng(w->GetMyRect()))
		{
			w->Peng(dir, this, 1);
			return true;
		}
	}
	return false;
}

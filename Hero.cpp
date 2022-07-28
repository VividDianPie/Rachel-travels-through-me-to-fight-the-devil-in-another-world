using namespace std;
#include "Hero.h"
#include "Action.h"
#include "IDLE.h"
#include "Animation.h"
#include "matrix3.h"
#include "walk.h"
#include "attack.h"
#include"jump.h"
#include"Run.h"
#include"KJ.h"
#include"scene.h"
#include"OBJManager.h"
#include "Obstacle.h"
#include"GameOutput.h"
#include"RachelSleep.h"
#include"RachelSleepAtk.h"
#include"RachelShou.h"
#include"HpWisp.h"
#include"RcCircleCircle.h"
#include"Rcflower.h"
#include"RcCowA.h"
#include"RcElectric.h"
#include"RcHa.h"
#include"RcAtk2.h"
#include"RcAtk3.h"
#include"RcDie.h"
#include"RcPos.h"

void CHero::Init()
{
	CAction* p;
	p = new Cwalk;	
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù×ß, p);
	p = new Cattack;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù¹¥, p);
	p = new CIdle;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÕ¾, p);
	m_curAct = p;
	p = new CRun;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÅÜ, p);
	p = new Cjump;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÌø, p);
	p = new CRachelSleep;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùË¯, p);
	p = new CRachelSleepAtk;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùË¯¹¥, p);
	p = new CRachelShou;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÊÜ, p);
	p = new CRcCircleCircle;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÈ¦, p);
	p = new CRcflower;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù»¨, p);
	p = new CRcCowA;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùÅ£°¡, p);
	p = new CRcElectric;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùµç, p);
	p = new CRcHa;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù¹þ, p);
	p = new CRcAtk2;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù¹¥ÍÁ, p);
	p = new CRcAtk3;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ù¹¥Ë®, p);
	p = new CRcDie;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùËÀ, p);
	p = new CRcPos;
	p->Init();
	p->SetCharacter(this);
	SetAct(ÀÙç÷¶ùPOS, p);

	m_pos.x = 500;
	m_pos.y = 600;
	m_JudgePos.x = m_pos.x;
	m_JudgePos.y = m_pos.y;
	m_sx.hp = 100;
	m_sx.MaxHp = 100;
	m_sx.m_jump = 15;
	m_sx.m_curjumpPower = 0;
	m_sx.JumpPower = 10;
	m_sx.speed = 5;
	m_sx.RunSpeed = 7;
	m_sx.SleepMoveSpeed = 2;
	m_sx.FaceDir = 4;
	m_sx.ad = 10;
	m_sx.m_RunOFFindex = 0;
	m_Active = true;
	m_curAct->Reset();
	m_NDir = 4;
	m_OutPutLevel = 5;
	m_r.SetTag(&m_JudgePos.x, &m_JudgePos.y);
	m_r.SetWH(30, 20);
	m_r.Setoff(0, 0);
	CKJ::GetKJ()->GetcurScene()->GetHeroManager()->Push_back(this);
}

void CHero::Run()
{
	m_curAct->Run();
	CGO* go = CGO::GetGO();
	float JudgePosX = this->GetJudgePos().x;
	float JudgePosY = this->GetJudgePos().y;
	go->DrawRect(JudgePosX, JudgePosY, m_r.GetW(), m_r.GetH(), 2, RGB(0, 0, 0));
	go->DrawRect(m_pos.x, m_pos.y, 2, 2, 3, RGB(255, 0, 0));
	BMP* bmp;
	bmp = this->GetCurBmp();
	for (int i = 0; i < bmp->JudgeRectLen; ++i)
	{
		CMyRect ar = bmp->JudgeRect[i];
		if (m_sx.FaceDir != m_NDir)
			ar.Setoff(m_pos.x + -ar.GetOffx(), m_pos.y + ar.GetOffy());
		else
			ar.Setoff(m_pos.x + ar.GetOffx(), m_pos.y + ar.GetOffy());
		go->DrawRect(ar.GetOffx(), ar.GetOffy(), ar.GetW(), ar.GetH(), 2, RGB(254, 254, 0));
	}
	for (int i = 0; i < bmp->alen; ++i)
	{
		CMyRect ar = bmp->aRect[i];
		if (m_sx.FaceDir != m_NDir)
			ar.Setoff(m_pos.x + -ar.GetOffx(), m_pos.y + ar.GetOffy());
		else
			ar.Setoff(m_pos.x + ar.GetOffx(), m_pos.y + ar.GetOffy());
		go->DrawRect(ar.GetOffx(), ar.GetOffy(), ar.GetW(), ar.GetH(), 2, RGB(255, 0, 0));
	}
	for (int i = 0; i < bmp->dlen; ++i)
	{
		CMyRect dr = bmp->dRect[i];
		if (m_sx.FaceDir!= m_NDir)
			dr.Setoff(m_pos.x + -dr.GetOffx(), m_pos.y + dr.GetOffy());
		else
			dr.Setoff(m_pos.x + dr.GetOffx(), m_pos.y + dr.GetOffy());
		go->DrawRect(dr.GetOffx(), dr.GetOffy(), dr.GetW(), dr.GetH(), 2, RGB(0, 0, 255));
	}

	if (m_NextState != -1)
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
	else if (m_NextAct != -1)
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

void CHero::End()
{
}

void CHero::SetState(int st, CEnemy* p)
{
	m_NextState = st;
}

void CHero::SetCurAct(int i)
{
	if (i < 0 || i >= m_Acts.size())
		return;
	m_curAct = m_Acts.find(i)->second;
}


bool CHero::Peng(int dir)
{
	COBJM* wall = CKJ::GetKJ()->GetcurScene()->GetObstacleManager();
	int len = wall->GetSize();
	for (int i = 0; i < len; ++i)
	{
		CObstacle* w = (CObstacle*)wall->GetOBJ(i);
		if (this->GetMyRect()->Peng(w->GetMyRect()))
		{
			w->Peng(dir, this, HERO);
			return true;
		}
	}
	return false;
}

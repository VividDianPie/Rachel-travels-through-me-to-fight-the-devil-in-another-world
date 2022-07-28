#include "Hero.h"
#include "Action.h"
#include "Animation.h"
#include"KJ.h"
#include"scene.h"
#include"Platinum.h"
#include"GameOutput.h"
#include"PlatinumIdle.h"
#include"OBJManager.h"
#include"PlatinumShou.h"
void CPlatinum::Init()
{
	CAction* p;
	p = new CPlatinumIdle;
	p->Init();
	p->SetCharacter(this);
	SetAct(°×½ðÕ¾, p);
	m_curAct = p;
	p = new CPlatinumShou;
	p->Init();
	p->SetCharacter(this);
	SetAct(°×½ðÊÜ, p);
	m_Active = true;
	m_NextState = -1;
	m_NextAct = -1;
	CKJ::GetKJ()->GetcurScene()->GetHeroManager()->Push_back(this);
}

void CPlatinum::Run()
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
		if (m_sx.FaceDir != m_NDir)
			dr.Setoff(m_pos.x + -dr.GetOffx(), m_pos.y + dr.GetOffy());
		else
			dr.Setoff(1177 + dr.GetOffx(), 391 + dr.GetOffy());
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

void CPlatinum::End()
{
}

void CPlatinum::SetState(int st, CEnemy* p)
{
	m_NextState = st;
}

void CPlatinum::SetCurAct(int i)
{
	if (i < 0 || i >= m_Acts.size())
		return;
	m_curAct = m_Acts.find(i)->second;
}


bool CPlatinum::Peng(int dir)
{
	return false;
}

#include "Object.h"

COBJ::COBJ()
{
	m_r.SetTag(&m_pos.x, &m_pos.y);
	m_Active = true;
}

COBJ::~COBJ()
{
}

POS COBJ::GetPos()const
{
	return m_pos;
}

POS COBJ::GetJudgePos() const
{
	return m_JudgePos;
}

void COBJ::SetPos(float x, float y)
{
	m_pos.x = x;
	m_pos.y = y;
}

void COBJ::SetJudgePos(float x, float y)
{
	m_JudgePos.x = x;
	m_JudgePos.y = y;
}

void COBJ::SetPos(POS pos)
{
	m_pos = pos;
}

void COBJ::SetJudgePos(POS pos)
{
	m_JudgePos = pos;
}

bool COBJ::GetActive()
{
	return m_Active;
}

void COBJ::SetActive(bool b)
{
	m_Active = b;
}

int COBJ::GetNDir()
{
	return m_NDir;
}

void COBJ::SetNDir(int ndir)
{
	m_NDir = ndir;
}

CMyRect* COBJ::GetMyRect()
{
	return &m_r;
}
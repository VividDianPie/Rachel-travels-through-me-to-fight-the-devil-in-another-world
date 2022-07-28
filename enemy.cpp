#include"Enemy.h"
#include"std.h"
#include"Action.h"
#include"Animation.h"
CEnemy::CEnemy()
{
	m_level = 0;
}

CEnemy::~CEnemy()
{
	map<int, CAction*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end(); ++it)
		delete it->second;
}

void CEnemy::SetState(int state, Character* p)
{
	m_p2 = p;
	m_NextState = state;
}

void CEnemy::SetNextAct(int next)
{
	//if (next < 0 || next >= m_Acts.size())
		//return;
	m_NextAct = next;
}

ENEMYPROPERTY* CEnemy::GetProperty()
{
	return &m_Property;
}

void CEnemy::SetAction(int key, CAction* p)
{
	if (key < 0 || key > MAX1)
		return;
	if (p == 0)
		return;
	m_Acts.insert(pair<int, CAction*>(key, p));
}

BMP* CEnemy::GetCurPic()
{
	return m_curAct->GetAnimation()->GetBmp();
}

int CEnemy::GetState()
{
	return m_State;
}

int CEnemy::Getlevel()
{
	return m_level;
}

void CEnemy::Setlevel(int level)
{
	m_level = level;
}

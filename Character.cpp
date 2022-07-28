#include "Character.h"
#include "Action.h"
#include"std.h"
#include "Animation.h"
Character::Character()
{
	m_OutPutLevel = 0;
}

Character::~Character()
{
	map<int, CAction*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end(); ++it)
		delete it->second;
}

void Character::SetState(int state, Character* p)
{
	m_p2 = p;
	m_NextState = state;
}

void Character::SetNextAct(int next)
{
	m_NextAct = next;
}

SHUX* Character::GetSX()
{
	return &m_sx;
}

void Character::SetAct(int key, CAction* p)
{
	if (key < 0 || key >= MAX)
		return;
	if (p == 0)
		return;
	m_Acts.insert(pair<int, CAction*>(key, p));
}

BMP* Character::GetCurBmp()
{
	return m_curAct->GetAnimation()->GetBmp();
}

int Character::GetState()
{
	return m_State;
}

int Character::GetOutPutLevel()
{
	return m_OutPutLevel;
}

void Character::SetOutPutLevel(int level)
{
	m_OutPutLevel = level;
}

#include "Obstacle.h"
#include"Animation.h"
#include"Action.h"
CObstacle::CObstacle()
{
}

CObstacle::~CObstacle()
{
	map<int, CAction*>::iterator it;
	for (it = m_ActionMap.begin(); it != m_ActionMap.end(); ++it)
	{
		delete it->second;
	}
}

void CObstacle::Init()
{
}

void CObstacle::Run()
{
}

void CObstacle::End()
{
}

void CObstacle::Peng(int dir, COBJ* obj, int type)
{
}

void CObstacle::SetAction(int key, CAction* action)
{
	if (0 == action)
	{
		return;
	}
	m_ActionMap.insert(pair<int, CAction*>(key, action));
}

BMP* CObstacle::GetCurBmp()
{
	return  m_curAct->GetAnimation()->GetBmp();
}

int CObstacle::GetState()
{
	return m_State;
}

int CObstacle::Getlevel()
{
	return m_level;
}

void CObstacle::Setlevel(int level)
{
	m_level = level;
}

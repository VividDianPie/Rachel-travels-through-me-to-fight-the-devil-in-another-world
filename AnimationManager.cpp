#include "AnimationManager.h"
#include"ReturnError.h"
CAnimation* CAnimationManager::GetAnimation(string key)
{
	string str = key;
	map< string, CAnimation*>::iterator it;
	it = m_Animations.find(str);
	if (it == m_Animations.end())
	{
		return 0;
	}
	return (it->second);
}

BOOL CAnimationManager::SetAnimation(string key, CAnimation* anima)
{
	string str = key;
	map< string, CAnimation*>::iterator it;
	it = m_Animations.find(str);
	if (it != m_Animations.end())
	{
		return ANIMATION_REPEAR;
	}
	m_Animations.insert(pair< string, CAnimation*>(str, anima));
	return SET_OK;
}

void CAnimationManager::Erase(string key)
{
	string str = key;
	map< string, CAnimation*>::iterator it;
	it = m_Animations.find(str);
	if (it != m_Animations.end())
	{
		m_Animations.erase(it);
	}
}

#include "ActionManager.h"
#include "Action.h"
CAction* CActionManager::GetAct(const char* key)
{
	std::string str = key;
	std::map<std::string, CAction*>::iterator it;
	it = m_mapActions.find(str);
	if (it == m_mapActions.end())
		return 0;
	return it->second;
}

void CActionManager::SetAct(const char* key, CAction* anima)
{
	std::string str = key;
	std::map<std::string, CAction*>::iterator it;
	it = m_mapActions.find(str);
	if (it != m_mapActions.end())
		return;
	m_mapActions.insert(std::pair<std::string, CAction*>(str, anima));
}

void CActionManager::Erase(const char* key)
{
	std::string str = key;
	std::map<std::string, CAction*>::iterator it;
	it = m_mapActions.find(str);
	if (it != m_mapActions.end())
		m_mapActions.erase(it);
}

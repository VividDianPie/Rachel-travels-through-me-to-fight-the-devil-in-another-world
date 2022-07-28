#include "SenceManager.h"
bool SceneManager::AddScene(string id, CScene* p)
{
	if ( id.empty() || p == nullptr)	
	{
		return false;
	}
	if (m_SceneManagerMap.find(id) != m_SceneManagerMap.end())
	{
		return false;
	}
	m_SceneManagerMap.insert(pair<string, CScene*>(id, p));
	return true;
}

void SceneManager::EraseScene(string id)
{
	if (id.empty())
	{
		return;
	}
	map<string, CScene*>::iterator it;
	it = m_SceneManagerMap.find(id);
	if (it == m_SceneManagerMap.end())
	{
		return;
	}
	delete it->second;
	m_SceneManagerMap.erase(it);
}

CScene* SceneManager::GetScene(string id)
{
	if (id.empty())
	{
		return nullptr;
	}
	map<string, CScene*>::iterator it;
	it = m_SceneManagerMap.find(id);
	if (it == m_SceneManagerMap.end())
	{
		return nullptr;
	}
	return it->second;
}

void SceneManager::Init()
{
}

void SceneManager::Run()
{
}

void SceneManager::End()
{
}

void SceneManager::Clear()
{
	map<string, CScene*>::iterator it;
	for (it = m_SceneManagerMap.begin(); it != m_SceneManagerMap.end(); ++it)
	{
		delete it->second;
	}
	m_SceneManagerMap.clear();
}

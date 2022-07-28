using  namespace std;
#include "BulletManager.h"
#include"Bullet.h"
CBulitManager::CBulitManager()
{
}

CBulitManager* CBulitManager::GetBulitManager()
{
	if (BulitManager == nullptr)
	{
		BulitManager = new CBulitManager;
	}
	return BulitManager;
}

void CBulitManager::Run()
{
	list<CBullet*>::iterator it;
	for (it = m_BulitManagerList.begin(); it != m_BulitManagerList.end();)
	{
		if ((*it)->GetActive() == false)
		{
			(*it)->End();
			delete* it;
			it = m_BulitManagerList.erase(it);
		}
		else
		{
			(*it)->Run();
			it++;
		}
	}
}

void CBulitManager::End()
{
}

void CBulitManager::Push_back(CBullet* p)
{
	if (p)
	{
		m_BulitManagerList.push_back(p);
	}

}

void CBulitManager::Clear()
{
	list<CBullet*>::iterator it;
	for (it = m_BulitManagerList.begin(); it != m_BulitManagerList.end(); it++)
		delete* (it);
	m_BulitManagerList.clear();
}



int CBulitManager::GetBulitManagerSize()
{
	return m_BulitManagerList.size();
}



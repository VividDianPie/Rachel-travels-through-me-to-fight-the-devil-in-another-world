#include"TXManager.h"
#include"Animation.h"
#include"TX.h"
#include"std.h"
void CTXManager::Run()
{
	list<CTX*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end();)
	{
		if ((*it)->Playing() == false)
		{
			(*it)->End();
			delete* it;
			it = m_Acts.erase(it);
		}
		else
		{
			(*it)->Run();
			it++;
		}
	}
}

void CTXManager::Push_back(CTX* p)
{
	if (p)
	{
		m_Acts.push_back(p);
	}
}

void CTXManager::Clear()
{
	list<CTX*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end();)
	{
		delete* it;
		it++;
	}
	m_Acts.clear();
}

void CTXManager::End()
{
	Clear();
}



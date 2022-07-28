#include"UIManager.h"
#include"UI.h"
void CUIManager::Run()
{
	list<CUI*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end();)
	{
		if ((*it)->Getplaying() == false)
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
void CUIManager::Push_back(CUI* p)
{
	if (p)
	{
		m_Acts.push_back(p);
	}
}
void CUIManager::Clear()
{
	list<CUI*>::iterator it;
	for (it = m_Acts.begin(); it != m_Acts.end();)
	{
		delete* it;
		it++;
	}
	m_Acts.clear();
}
void CUIManager::End()
{
	Clear();
}

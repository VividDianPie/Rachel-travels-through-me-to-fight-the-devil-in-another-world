#include "OBJManager.h"
COBJM::COBJM()
{
}
void COBJM::Run()
{
	vector<COBJ*>::iterator it;
	for (it = m_OBJList.begin(); it != m_OBJList.end();)
	{
		if ((*it)->GetActive() == false)
		{
			(*it)->End();
			delete* it;
			it = m_OBJList.erase(it);
		}
		else
		{
			(*it)->Run();
			it++;
		}
	}
}

void COBJM::End()
{
	Clear();
}

void COBJM::Push_back(COBJ* p)
{
	if (p)
	{
		m_OBJList.push_back(p);
	}
}

void COBJM::Clear()
{
	int len = m_OBJList.size();
	for (int i = 0; i < len; ++i)
		delete m_OBJList[i];
	m_OBJList.clear();
}

COBJ* COBJM::GetOBJ(int index)
{
	if (index < 0 || index >= m_OBJList.size())
		return 0;
	return m_OBJList[index];
}

int COBJM::GetSize()
{
	return m_OBJList.size();
}

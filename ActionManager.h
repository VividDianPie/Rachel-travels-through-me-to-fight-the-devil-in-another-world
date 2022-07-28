#pragma once
#include <map>
#include <string>
using namespace std;
class CAction;
class CActionManager
{
	map< string, CAction*> m_mapActions;
public:
	CAction* GetAct(const char* key);
	void SetAct(const char* key, CAction* act);
	void Erase(const char* key);
};
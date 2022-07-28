#pragma once
#include"std.h"
#include <list>
#include <string>
class CUI;
class CUIManager
{
	list<CUI*> m_Acts;
public:
	void Run();
	void Push_back(CUI* p);
	void Clear();
	void End();
};
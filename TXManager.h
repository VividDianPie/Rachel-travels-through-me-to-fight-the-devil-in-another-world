#pragma once
#include <list>
#include <string>
#include"std.h"
class CTX;
class CTXManager
{
	list<CTX*> m_Acts;
public:
	void Run();
	void Push_back(CTX* p);
	void Clear();
	void End();
};
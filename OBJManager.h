#pragma once
#include <vector>
#include "Object.h"
#include"std.h"
class COBJM
{
	vector<COBJ*> m_OBJList;
public:
	COBJM();
	void Run();
	void End();
	void Push_back(COBJ* p);
	void Clear();
	COBJ* GetOBJ(int index);
	int GetSize();
};
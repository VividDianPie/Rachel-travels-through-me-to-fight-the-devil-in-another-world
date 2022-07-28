#pragma once
#include "Action.h"
class Cwalk : public CAction
{
	CAnimation* m_Animation;
	int m_Next;

public:
	~Cwalk();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

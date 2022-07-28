#pragma once
#include "Action.h"
class CShou : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CShou();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

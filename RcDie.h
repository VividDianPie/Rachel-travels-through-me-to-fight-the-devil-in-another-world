#pragma once
#include "Action.h"
class CRcDie : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRcDie();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
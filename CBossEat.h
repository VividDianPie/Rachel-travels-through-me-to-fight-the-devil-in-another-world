#pragma once
#include "Action.h"
class CBossEat : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CBossEat();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
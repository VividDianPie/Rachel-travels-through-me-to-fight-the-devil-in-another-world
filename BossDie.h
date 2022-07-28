#pragma once
#include "Action.h"
class CBossDie : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CBossDie();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
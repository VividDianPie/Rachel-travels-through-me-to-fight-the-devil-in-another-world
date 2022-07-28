#pragma once
#include "Action.h"
class CBossBigSkill : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CBossBigSkill();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
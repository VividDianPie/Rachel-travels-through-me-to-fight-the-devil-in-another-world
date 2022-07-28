#pragma once
#include "Action.h"
class CBossBigSkillEnd : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CBossBigSkillEnd();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
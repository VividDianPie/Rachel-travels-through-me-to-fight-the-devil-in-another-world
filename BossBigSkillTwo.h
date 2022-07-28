#pragma once
#include "Action.h"
class CBossBigSkillTwo : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
public:
	~CBossBigSkillTwo();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
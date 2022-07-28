#pragma once

#include"Action.h"

class CBossWalk :public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int m_EnemyMoveX;
	int m_EnemyMoveY;
public:
	~CBossWalk();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

#pragma once
#include "Action.h"
class CHakumenDie : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
	int ElectricityX;

public:
	~CHakumenDie();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
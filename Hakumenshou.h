#pragma once
#include "Action.h"
class CHakumenShou : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
	int ElectricityX;

public:
	~CHakumenShou();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
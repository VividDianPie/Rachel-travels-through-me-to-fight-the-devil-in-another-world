#pragma once
#include "Action.h"
class CHakumenAtk : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
	int ElectricityX;

public:
	~CHakumenAtk();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
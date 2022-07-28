#pragma once
#include "Action.h"
class CHakumenBig : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
	int ElectricityX;

public:
	~CHakumenBig();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
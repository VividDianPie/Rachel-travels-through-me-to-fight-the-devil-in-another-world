#pragma once
#include "Action.h"
class CBOSSIdle : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	int time;
	 int ElectricityX ;

public:
	~CBOSSIdle();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
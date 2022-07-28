#pragma once
#include"Action.h"
class CAnimation;
class CRachelSleepAtk : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRachelSleepAtk();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

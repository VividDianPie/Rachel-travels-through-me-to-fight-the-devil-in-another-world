#pragma once
#include"Action.h"
class CAnimation;
class CRachelSleep : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRachelSleep();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

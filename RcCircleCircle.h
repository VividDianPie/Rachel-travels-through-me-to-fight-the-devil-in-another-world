#pragma once
#include"Action.h"
class CAnimation;
class CRcCircleCircle : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRcCircleCircle();
	void Init();
	void Run();
	void End();
	bool Peng();
	CAnimation* GetAnimation();
	void Reset();
};

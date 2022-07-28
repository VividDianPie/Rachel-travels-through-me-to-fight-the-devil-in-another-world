#pragma once
#include"Action.h"
class CAnimation;
class CRcflower : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRcflower();
	void Init();
	void Run();
	void End();
	bool Peng();
	CAnimation* GetAnimation();
	void Reset();
};

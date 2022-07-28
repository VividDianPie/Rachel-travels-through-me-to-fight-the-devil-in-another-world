#pragma once
#include"Action.h"
class CAnimation;
class CIdle : public CAction
{	
	CAnimation* m_Animation;
	int m_NextAct;
	int m_NowTime;			
	int m_KeyDelayTime;
public:
	~CIdle();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

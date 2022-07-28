#pragma once
#include"Action.h"
class CRcHa : public CAction
{
	CAnimation* m_Animation;
	int m_NextAction;
	int m_NowTime;			
	int m_KeyDelayTime;
public:
	~CRcHa();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

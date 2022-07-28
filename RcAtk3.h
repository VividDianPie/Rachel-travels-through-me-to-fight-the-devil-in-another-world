#pragma once
#include"Action.h"
class CRcAtk3 : public CAction
{
	CAnimation* m_Animation;
	int m_NextAction;
public:
	~CRcAtk3();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

#pragma once
#include"Action.h"
class CRcAtk2 : public CAction
{
	CAnimation* m_Animation;
	int m_NextAction;
	int m_Atk2XMove;
public:
	~CRcAtk2();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

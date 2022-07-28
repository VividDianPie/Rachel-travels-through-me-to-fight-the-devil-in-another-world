#pragma once
#pragma once
#include "Action.h"
class CRun : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CRun();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

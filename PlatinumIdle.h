#pragma once
#include "Action.h"
class CPlatinumIdle : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
public:
	~CPlatinumIdle();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
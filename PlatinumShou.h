#pragma once
#include "Action.h"
class CPlatinumShou : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	bool m_AudioOffOrOn;
public:
	~CPlatinumShou();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
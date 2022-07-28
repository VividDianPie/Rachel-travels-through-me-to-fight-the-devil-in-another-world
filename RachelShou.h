#pragma once
#include"Action.h"
class CAnimation;
class CRachelShou : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	bool m_AudioOffOrOn;
public:
	~CRachelShou();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};

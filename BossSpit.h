#pragma once
#include "Action.h"
class CBossSpit : public CAction
{
	CAnimation* m_Animation;
	CAnimation* m_AnimationWorm;
	int m_NextAct;
	int WormStarFrame;
	int WormEndFrame;
public:
	~CBossSpit();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
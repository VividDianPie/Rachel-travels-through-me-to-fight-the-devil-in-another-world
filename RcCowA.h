#pragma once
#include"Action.h"
class CRcCowA : public CAction
{
	CAnimation* m_Animation;
	CAnimation* m_AnimationCow;
	int m_Next;
	int CowStarFrame;
	int m_CowRunX;
public:
	~CRcCowA();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

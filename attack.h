#pragma once
#include"Action.h"
class Cattack : public CAction
{
	CAnimation* m_Animation;
	int m_Next;
public:
	~Cattack();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
	
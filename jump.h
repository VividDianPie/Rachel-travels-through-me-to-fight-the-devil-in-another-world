#pragma once
#pragma once
#include"matrix3.h"
#include"Action.h"
class Cjump : public CAction
{
	CAnimation* m_Animation;
	int m_NextAct;
	Matrix3 m, m1, m2;
public:
	~Cjump();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
};
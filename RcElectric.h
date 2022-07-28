#pragma once
#include"Action.h"
class CRcElectric : public CAction
{
	CAnimation* m_Animation;
	int m_NextAction;
	CAnimation* m_AnimationBall;
	CAnimation* m_AnimationElectricity;
	int ElectricityX;
public:
	~CRcElectric();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};

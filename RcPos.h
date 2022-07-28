#pragma once
#include "Action.h"
class CRcPos : public CAction
{
	CAnimation* m_Animation;
	CAnimation* m_AnimationKRX;
	int m_NextAct;
	int m_OldPosX;
	int m_OldPosY;
	int m_CurMousePosX;
	int m_CurMousePosY;
	bool m_AudioOffOrOn;
public:
	~CRcPos();
	void Init();
	void Run();
	void End();
	CAnimation* GetAnimation();
	void Reset();
	bool Peng();
};
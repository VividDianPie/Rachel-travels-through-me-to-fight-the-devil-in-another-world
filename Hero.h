#pragma once
#include "Character.h"
#include"Animation.h"
class CEnemy;
class CHero :public Character
{
	CAnimation* m_Animation;
public:
	void Init();
	void Run();
	void End();
	void SetState(int st, CEnemy* p);
	void SetCurAct(int i);
	bool Peng(int dir);
};
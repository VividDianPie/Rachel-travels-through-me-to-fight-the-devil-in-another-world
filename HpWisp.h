#pragma once

#include"UI.h"
class CAnima;
class CHP :public CUI
{
protected:
	CAnima* m_Anima;
	int HpX;
	int HpY;
	long double m_HeroJudgeHp;
	long double m_EnemyJudgeHp;
	long double m_EnemyJudgeHp1;
public:
	void Init();
	void Run();
	void End();
	bool Getplaying();
};
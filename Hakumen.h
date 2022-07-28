#pragma once
#include"enemy.h"

class CHakumen : public CEnemy
{
public:
	void Init();
	void Run();
	void End();
	void SetState(int st);
	void SetCurAct(int index);
	bool Peng(int dir);
};
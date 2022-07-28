#pragma once
#include"Obstacle.h"
class CSceneSide :public CObstacle
{

public:
	void Init();
	void Run();
	void End();
	void Peng(int dir, COBJ* obj, int type);
};
#pragma once

#include"TX.h"

class CGameOBJ;
class CAnimation;
class Character;
class CEnemy;
class CEndTX :public CTX
{
	CAnimation* m_Animation;
	CEnemy* dr;
public:
	~CEndTX();
	void Init(CEnemy* p);
	void Run();
	void End();
	CAnimation* GetAnimation();
};
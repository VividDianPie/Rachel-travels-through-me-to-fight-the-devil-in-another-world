#pragma once
#include"Animation.h"
class CEnemy;
class Character;
class CAction
{
protected:
	Character* m_character;
	CEnemy* m_enemy;

public:
	CAction();
	void SetCharacter(Character* p);
	void SetEnemy(CEnemy* p);
	virtual ~CAction();
	virtual void Init() = 0;
	virtual void Run() = 0;
	virtual void End() = 0;
	virtual CAnimation* GetAnimation() = 0;
	virtual void Reset() = 0;
};
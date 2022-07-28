#pragma once
#include"Object.h"
#include"std.h"
#include<map>
#define	BOSS��		8
#define	BOSS��		2
#define	BOSS��		4
#define	BOSS��		6
#define	BOSSվ		0
#define	BOSS��		1
#define	BOSS��		2
#define	BOSS��		3
#define	BOSSҧ		4
#define	BOSS��		5
#define	BOSS����һ�� 6
#define	BOSS���ж��� 7
#define	BOSS�������� 8
#define	BOSS��		9
#define	������			10
#define	���濳			11
#define	�����			12
#define	������			13
#define	������			14

#define	MAX1			15
struct ENEMYPROPERTY
{
	long double Hp;
	int MaxHp;
	int Mp;
	int AD;
	int DEF;
	float Gravity;	
	float m_SpUp;	
	int FaceDir;
	int m_dir;	
	int Speed;	
	int m_RunSpeed;	
	int m_JumpPower;	
	int m_RunOFFindex;
	int m_CurJumpPower;
	float m_JumpSpeed;
};
class CAction;
struct BMP;
class Character;
class CEnemy :public COBJ
{
protected:
	ENEMYPROPERTY m_Property;
	Character* m_p2;
	CAction* m_curAct;
	int m_State;
	int m_NextState;
	int m_NextAct;
	int m_level;	
	map<int, CAction*>m_Acts;
public:
	CEnemy();
	virtual ~CEnemy();
	virtual bool Peng(int dir) = 0;
	virtual void SetState(int state, Character* p);
	void SetNextAct(int next);
	ENEMYPROPERTY* GetProperty();	
	void SetAction(int key, CAction* p);
	BMP* GetCurPic();
	int GetState();
	int Getlevel();
	void Setlevel(int level);
};
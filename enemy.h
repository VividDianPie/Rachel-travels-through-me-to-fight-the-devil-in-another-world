#pragma once
#include"Object.h"
#include"std.h"
#include<map>
#define	BOSS上		8
#define	BOSS下		2
#define	BOSS左		4
#define	BOSS右		6
#define	BOSS站		0
#define	BOSS走		1
#define	BOSS跑		2
#define	BOSS受		3
#define	BOSS咬		4
#define	BOSS吐		5
#define	BOSS大招一段 6
#define	BOSS大招二段 7
#define	BOSS大招三段 8
#define	BOSS死		9
#define	白面走			10
#define	白面砍			11
#define	白面大			12
#define	白面死			13
#define	白面受			14

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
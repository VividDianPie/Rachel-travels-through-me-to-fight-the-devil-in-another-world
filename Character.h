#pragma once
using namespace std;
#include <string>
#include <map>
#include"Object.h"
#define		������վ           0
#define		��������           1
#define		��������           2
#define		��������           3
#define		��������           4
#define		��������           5
#define		������˯			 6
#define		������˯��		 7
#define		��������			 8
#define		��������		     9
#define		�׽�վ				10
#define		�׽���				11
#define		������Ȧ			12
#define		��������			13		
#define		������ţ��		14
#define		��������			15
#define		��������			16
#define		����������		17
#define		��������ˮ		18
#define		������POS	    19
#define	    MAX                20
	           
struct SHUX
{
	int hp;
	int MaxHp;
	int ad;
	int def;
	float zl;
	int FaceDir;
	int MoveDir;
	int speed;
	int SleepMoveSpeed;
	int RunSpeed;
	int m_jump;
	int m_curjumpPower;
	int JumpPower;
	int m_RunOFFindex;
};
class CAction;
struct BMP;
class Character : public COBJ
{
protected:
	SHUX m_sx;
	CAction* m_curAct;
	Character* m_p2;
	int m_State;
	int m_NextState;
	int m_NextAct;
	int m_OutPutLevel;	
	map<int, CAction*> m_Acts;
public:
	Character();
	virtual ~Character();
	virtual void SetState(int state, Character* p);
	void SetNextAct(int next);
	SHUX* GetSX();
	void SetAct(int key, CAction* p);
	BMP* GetCurBmp();
	int GetState();
	int GetOutPutLevel();
	void SetOutPutLevel(int level);
	virtual bool Peng(int dir) = 0;
};
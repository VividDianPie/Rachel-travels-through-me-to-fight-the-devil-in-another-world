#pragma once
using namespace std;
#include <string>
#include <map>
#include"Object.h"
#define		ÀÙç÷¶ùÕ¾           0
#define		ÀÙç÷¶ù×ß           1
#define		ÀÙç÷¶ù¹¥           2
#define		ÀÙç÷¶ùÊÜ           3
#define		ÀÙç÷¶ùÅÜ           4
#define		ÀÙç÷¶ùÌø           5
#define		ÀÙç÷¶ùË¯			 6
#define		ÀÙç÷¶ùË¯¹¥		 7
#define		ÀÙç÷¶ùÊÜ			 8
#define		ÀÙç÷¶ùËÀ		     9
#define		°×½ğÕ¾				10
#define		°×½ğÊÜ				11
#define		ÀÙç÷¶ùÈ¦			12
#define		ÀÙç÷¶ù»¨			13		
#define		ÀÙç÷¶ùÅ£°¡		14
#define		ÀÙç÷¶ùµç			15
#define		ÀÙç÷¶ù¹ş			16
#define		ÀÙç÷¶ù¹¥ÍÁ		17
#define		ÀÙç÷¶ù¹¥Ë®		18
#define		ÀÙç÷¶ùPOS	    19
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
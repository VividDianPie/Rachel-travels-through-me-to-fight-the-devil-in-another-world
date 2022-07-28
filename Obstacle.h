#pragma once
#pragma once
#include<map>
#include"Object.h"
#include"std.h"

class CAction;
struct BMP;
class CObstacle :public COBJ
{
protected:
	CAction* m_curAct;
	int m_State;
	int m_NextState;
	int m_NextAct;
	int m_level;
	map<int, CAction*>m_ActionMap;
public:
	CObstacle();
	virtual ~CObstacle();
	virtual void Init();
	virtual void Run();
	virtual void End();
	virtual void Peng(int dir, COBJ* obj, int type);
	void SetAction(int key, CAction* action);
	BMP* GetCurBmp();
	int GetState();
	int Getlevel();
	void Setlevel(int level);
};
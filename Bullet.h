#pragma once
#include<list>
#include<windows.h>
using namespace std;
#include"vector.h"
struct BulletPos
{
	int m_x;
	int m_y;
};
class CBullet
{
	float speed;
	vector2D m_VecterDir;
	BOOL m_active;
	BulletPos pos;
	list <CBullet*>m_BulitList;
public:
	CBullet();
	~CBullet();
	void Init();
	void Run();
	void End();
	void AddBulit(CBullet* bulit);
	int GetPosX();
	int GetPosY();
	void SetPosX(int x);
	void SetPosY(int y);
	BOOL GetActive();
	void SetDir(vector2D dir);
	void SetActive(BOOL active);
	BulletPos GetBulletPos();
};
#pragma once
#include<list>
#include"Bullet.h"
using namespace std;
class CBulitManager
{
	list<CBullet*> m_BulitManagerList;
	CBulitManager();
	static CBulitManager* BulitManager;
public:
	static CBulitManager* GetBulitManager();
	void Run();
	void End();
	void Push_back(CBullet* p);
	void Clear();
	int GetBulitManagerSize();

};
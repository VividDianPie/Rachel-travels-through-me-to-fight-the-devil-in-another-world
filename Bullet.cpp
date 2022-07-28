#include<windows.h>
#include "Bullet.h"
#include"vector.h"
#include"GameOutput.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"enemy.h"
CBullet::CBullet()
{
}
CBullet::~CBullet()
{
}
void CBullet::Init()
{
	pos.m_x = 0;
	pos.m_y = 0;
	speed = 10.0f;
}
void CBullet::Run()
{
	CGO* go = CGO::GetGO();
	m_VecterDir = m_VecterDir.Normalize();
	pos.m_x += m_VecterDir.x * speed;
	pos.m_y += m_VecterDir.y * speed;
	COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
	for (int i = 0; i < EnemyManager->GetSize(); i++)
	{
		CEnemy* enemy = (CEnemy*)EnemyManager->GetOBJ(i);
		if (enemy->GetPos().x - go->GetCX() >= pos.m_x - 100 && enemy->GetPos().x - go->GetCX() <= pos.m_x + 100 &&
			enemy->GetPos().y - go->GetCY() >= pos.m_y - 100 && enemy->GetPos().y - go->GetCY() <= pos.m_y + 100)
		{
			enemy->GetProperty()->Hp -= 0.001;
			m_active = false;
			return;
		}
	}
	go->DrawEllipse(pos.m_x, pos.m_y, 10, 10, 3, RGB(rand() % 255, rand() % 255, rand() % 255), RGB(rand() % 255, rand() % 255, rand() % 255));
}
void CBullet::End()
{
}

void CBullet::AddBulit(CBullet* bulit)
{
	if (bulit == nullptr)
	{
		return;
	}
	m_BulitList.push_back(bulit);
}

int CBullet::GetPosX()
{
	return pos.m_x;
}
int CBullet::GetPosY()
{
	return pos.m_y;
}
void CBullet::SetPosX(int x)
{
	pos.m_x = x;
}
void CBullet::SetPosY(int y)
{
	pos.m_y = y;
}

BOOL CBullet::GetActive()
{
	return m_active;
}

void CBullet::SetDir(vector2D dir)
{
	m_VecterDir = dir;
}

void CBullet::SetActive(BOOL active)
{
	m_active = active;
}

BulletPos CBullet::GetBulletPos()
{
	return pos;
}


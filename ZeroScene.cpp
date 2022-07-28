#include "ZeroScene.h"
#include "GameOutput.h"
#include "GameInput.h"
#include "kj.h"
#include "vector.h"	
#include"OBJManager.h"
#include"SceneSide.h"
#include"AudioManager.h"
#include"matrix3.h"
void CZeroScene::Init()
{
	CGO* go = CGO::GetGO();
	go->AddImage("�㳡��", "bmp\\����\\�ޱ���.bmp");
	go->AddBmp("�㳡��", "�㳡��", 0, 0, 1500, 768, 0xffffff);
	go->AddImage("������ӡ��", "bmp\\������ӡ��\\RC_emblem.bmp");
	go->AddBmp("������ӡ��", "������ӡ��", 0, 0, 512, 512, RGB(0, 0, 0));
	go->AddImage("BOSSӡ��", "bmp\\BOSS\\BOSS����һ��\\AR_emblem.bmp");
	go->AddBmp("BOSSӡ��", "BOSSӡ��", 0, 0, 512, 512, RGB(0, 0, 0));
	Audio = new CAudioManager;
	Audio->PushLoopAudio("��֮����", "music\\��֮����.mp3");
	RcA = false;
	ArC = 0;
}
static int i = 100;
static int Ax = 0;
void CZeroScene::Run()
{
	CGO* go = CGO::GetGO();
	CGI* gi = CGI::GetGI();
	CKJ* kj = CKJ::GetKJ();
	Matrix3 m1, m2, m3;
	Matrix3 m4, m5, m6;
	Matrix3 m7, m8;
	Audio->PlayLoopAudio("��֮����");
	if (gi->Get(_GI_K_UP) == KS_DH || gi->Get(_GI_K_UP) == KS_DC)
		i += 1;
	if (gi->Get(_GI_K_DOWN) == KS_DH || gi->Get(_GI_K_DOWN) == KS_DC)
		i -= 1;
	Audio->SetLoopVolume(i);
	go->DrawBmp("�㳡��", 750, 384, _Back);
	if (rand() % 50 == 1)
		RcA = false;
	else if (rand() % 50 == 0)
		RcA = true;
	if (RcA == false)
		m1.RotationA(Ax++);
	else 
		m1.RotationA(Ax--);
	m2.Translation(256, 584);
	m7.Scoling(0.5, 0.5);
	m3 = m7*m1 * m2;
	go->DrawBmp("������ӡ��", &m3, _Far_1);
	ArC += 0.01;
	if (1 <= ArC)
		ArC = -1;
	m4.Scoling(ArC*0.5, 1*0.5);
	m5.Translation(1244, 584);
	m6 = m4 * m5;
	go->DrawBmp("BOSSӡ��", &m6, _Far_1);
	if (gi->Get(_GI_M_L) == KS_DC|| gi->Get(_GI_K_SPACE) == KS_DC)
	{
		kj->SetNextScene("�ú�ɭ��");
		return;
	}
}
void CZeroScene::End()
{
}
COBJM* CZeroScene::GetHeroManager()
{
	return 0;
}
COBJM* CZeroScene::GetEnemyManager()
{
	return 0;
}
COBJM* CZeroScene::GetObstacleManager()
{
	return 0;
}
CAudioManager* CZeroScene::GetAudio()
{
	return Audio;
}
CTXManager* CZeroScene::GetTX()
{
	return nullptr;
}

int CZeroScene::TrueOrFalse()
{
	return false;
}


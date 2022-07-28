#include "RcPos.h"
#include"GameOutput.h"
#include"enemy.h"
#include"OBJManager.h"
#include"KJ.h"
#include"scene.h"
#include"Hero.h"
#include"vector.h"
#include"BulletManager.h"
#include"Bullet.h"
#include"GameInput.h"
#include"AudioManager.h"
CBulitManager* CBulitManager::BulitManager = nullptr;
CRcPos::~CRcPos()
{
	delete m_Animation;
}

void CRcPos::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 0; i < 18; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������POS\\rc611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\������POS\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "������POS%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("������POS0", "������POS0", 0, 0, 436, 423, 0xffffff);
	go->AddBmp("������POS1", "������POS1", 0, 0, 395, 384, 0xffffff);
	go->AddBmp("������POS2", "������POS2", 0, 0, 367, 354, 0xffffff);
	go->AddBmp("������POS3", "������POS3", 0, 0, 269, 341, 0xffffff);
	go->AddBmp("������POS4", "������POS4", 0, 0, 232, 342, 0xffffff);
	go->AddBmp("������POS5", "������POS5", 0, 0, 211, 342, 0xffffff);
	go->AddBmp("������POS6", "������POS6", 0, 0, 242, 341, 0xffffff);
	go->AddBmp("������POS7", "������POS7", 0, 0, 415, 338, 0xffffff);
	go->AddBmp("������POS8", "������POS8", 0, 0, 441, 335, 0xffffff);
	go->AddBmp("������POS9", "������POS9", 0, 0, 378, 340, 0xffffff);
	go->AddBmp("������POS10", "������POS10", 0, 0, 277, 325, 0xffffff);
	go->AddBmp("������POS11", "������POS11", 0, 0, 408, 333, 0xffffff);
	go->AddBmp("������POS12", "������POS12", 0, 0, 404, 340, 0xffffff);
	go->AddBmp("������POS13", "������POS13", 0, 0, 401, 344, 0xffffff);
	go->AddBmp("������POS14", "������POS14", 0, 0, 391, 338, 0xffffff);
	go->AddBmp("������POS15", "������POS15", 0, 0, 386, 335, 0xffffff);
	go->AddBmp("������POS16", "������POS16", 0, 0, 381, 330, 0xffffff);
	go->AddBmp("������POS17", "������POS17", 0, 0, 378, 329, 0xffffff);

	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("������POS0",    10	,    -199,   5);
	m_Animation->SetBmp("������POS1",    16	,    -179,   5);
	m_Animation->SetBmp("������POS2",    11	,    -164,   5);
	m_Animation->SetBmp("������POS3",    -9	,    -158,   5);
	m_Animation->SetBmp("������POS4",    -1	,    -158,   5);
	m_Animation->SetBmp("������POS5",    7		,    -157,   5);
	m_Animation->SetBmp("������POS6",    19	,    -160,   5);
	m_Animation->SetBmp("������POS7",    87	,    -157,   5);
	m_Animation->SetBmp("������POS8",    103	,     -156,   5);
	m_Animation->SetBmp("������POS9",    65	,     -157,   5);
	m_Animation->SetBmp("������POS10",  25	,   -151, 5);
	m_Animation->SetBmp("������POS11", -14	,  -154, 5);
	m_Animation->SetBmp("������POS12", -16	,  -158, 5);
	m_Animation->SetBmp("������POS13", -19	,  -159, 5);
	m_Animation->SetBmp("������POS14", -24	,  -157, 5);
	m_Animation->SetBmp("������POS15", -28	,  -155, 5);
	m_Animation->SetBmp("������POS16", -31	,  -153, 5);
	m_Animation->SetBmp("������POS17", -33	,  -155, 5000);

	for (int i = 0; i < 7; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����ϣ\\%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\����ϣ\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "����ϣ%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("����ϣ0", "����ϣ0", 0, 0, 804, 828, RGB(0,255,0));
	go->AddBmp("����ϣ1", "����ϣ1", 0, 0, 802, 800, RGB(0, 255, 0));
	go->AddBmp("����ϣ2", "����ϣ2", 0, 0, 800, 802, RGB(0, 255, 0));
	go->AddBmp("����ϣ3", "����ϣ3", 0, 0, 800, 802, RGB(0, 255, 0));
	go->AddBmp("����ϣ4", "����ϣ4", 0, 0, 800, 800, RGB(0, 255, 0));
	go->AddBmp("����ϣ5", "����ϣ5", 0, 0, 804, 804, RGB(0, 255, 0));
	go->AddBmp("����ϣ6", "����ϣ6", 0, 0, 800, 800, RGB(0, 255, 0));
	m_AnimationKRX = new CAnimation(7);
	m_AnimationKRX->SetBmp("����ϣ0",- 161	*0.2,		 -341*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ1",- 97		*0.2,		 -355*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ2",- 104	*0.2,		 -351*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ3",- 83		*0.2,		 -360*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ4",- 84		*0.2,		 -366*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ5",- 123  *0.2,		 -362*0.2		, 2);
	m_AnimationKRX->SetBmp("����ϣ6",- 72		*0.2,		 -358*0.2		, 2);
	m_AnimationKRX->Play();
	m_AudioOffOrOn = true;
	m_NextAct = ������վ;
}

void CRcPos::Run()
{
	CGI* gi = CGI::GetGI();
	CGO* go = CGO::GetGO();
	if (m_AudioOffOrOn)
	{
		int i = rand() % 2;
		if (i == 0)
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("����ϣ����");
		else
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("����ϣ����");
		m_AudioOffOrOn = false;
	}
	BMP* bmp = m_Animation->GetBmp();
	BMP* bmpKRX = m_AnimationKRX->GetBmp();
	CBulitManager* BulitManager = CBulitManager::GetBulitManager();
	CBullet* bulit = 0;
	vector2D HV, EV,HEV, DirHEV,TempV;
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
		HV.x = m_character->GetPos().x - go->GetCX() + 181;
	else
		HV.x = m_character->GetPos().x - go->GetCX() - 181;
	HV.y = m_character->GetPos().y - go->GetCY()-87;
	COBJM* EnemyManager = CKJ::GetKJ()->GetcurScene()->GetEnemyManager();
	for (int i = 0; i < EnemyManager->GetSize(); i++)
	{
		CEnemy* enemy = (CEnemy*)EnemyManager->GetOBJ(i);
		EV.x = enemy->GetPos().x - go->GetCX();
		EV.y = enemy->GetPos().y - go->GetCY();
	}
	if (gi->Get(_GI_M_L) == KS_DC)
	{
		gi->GetCursor(&m_CurMousePosX , &m_CurMousePosY);
		m_OldPosX = HV.x;
		m_OldPosY = HV.y;
	}
	else if (gi->Get(_GI_M_L) == KS_DH)	
	{
		int x, y;
		gi->GetCursor(&x, &y);
		HV.x = m_OldPosX + (x - m_CurMousePosX - go->GetCX());
		HV.y = m_OldPosY + (y - m_CurMousePosY - go->GetCY());
		if (m_character->GetSX()->FaceDir != m_character->GetNDir())
			HV.x +=60;
		else
			HV.x -=60;
	}
	HEV = EV - HV;
	DirHEV = HEV.Normalize();
		bulit = new CBullet;
		bulit->Init();
		bulit->SetPosX(HV.x);
		bulit->SetPosY(HV.y);
		bulit->SetDir(DirHEV);
		bulit->SetActive(true);
		BulitManager->Push_back(bulit);
		BulitManager->Run();
	Matrix3 m, m1, m2,												m_1,m1_1,m2_1,				m8;
	vector2D v1, v2;
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
	{
		m1.Scoling(-1, 1);
		m8.Scoling(-0.2, 0.2);
		m2.Translation(-bmp->offx, bmp->offy);
		m2_1.Translation(-bmpKRX->offx, bmpKRX->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m8.Scoling(0.2, 0.2);
		m2.Translation(bmp->offx, bmp->offy);
		m2_1.Translation(bmpKRX->offx, bmpKRX->offy);
	}
	m = m1 * m2;
	m8 = m8 * m2_1;
	POS JudgePos = m_character->GetJudgePos();
	POS pos = m_character->GetPos();

	m2.Translation(pos.x, pos.y);
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
		m2_1.Translation(pos.x + 100, pos.y);
	else
		m2_1.Translation(pos.x - 100, pos.y);
	m = m * m2;
	m8 = m8 * m2_1; 
	if (gi->Get(_GI_M_L) == KS_DC)
	{
		gi->GetCursor(&m_CurMousePosX, &m_CurMousePosY);
		m_OldPosX = m8.eDx;
		m_OldPosY = m8.eDy;
	}
	else if (gi->Get(_GI_M_L) == KS_DH)	
	{
		int x, y;
		gi->GetCursor(&x, &y);
		m8.eDx = m_OldPosX + (x - m_CurMousePosX);
		m8.eDy = m_OldPosY + (y - m_CurMousePosY);
	}
	if (gi->Get(_GI_K_L) == KS_DC)
	{
		m_character->SetNextAct(������վ);
		BulitManager->Clear();
		m_AudioOffOrOn = true;
	}
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_AnimationKRX->SetMatrix(&m8);
	m_AnimationKRX->SetMatrix2(&m8);
	m_AnimationKRX->SetLevel(m_character->GetOutPutLevel());
	m_AnimationKRX->Play();
	m_AnimationKRX->Run();
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
	{
		m_character->SetNextAct(m_NextAct);
		BulitManager->Clear();
		m_AudioOffOrOn = true;
	}
}

void CRcPos::End()
{
}

CAnimation* CRcPos::GetAnimation()
{
	return m_Animation;
}

void CRcPos::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

bool CRcPos::Peng()
{
	return false;
}
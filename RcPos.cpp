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
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùPOS\\rc611_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\ÀÙç÷¶ùPOS\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "ÀÙç÷¶ùPOS%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("ÀÙç÷¶ùPOS0", "ÀÙç÷¶ùPOS0", 0, 0, 436, 423, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS1", "ÀÙç÷¶ùPOS1", 0, 0, 395, 384, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS2", "ÀÙç÷¶ùPOS2", 0, 0, 367, 354, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS3", "ÀÙç÷¶ùPOS3", 0, 0, 269, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS4", "ÀÙç÷¶ùPOS4", 0, 0, 232, 342, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS5", "ÀÙç÷¶ùPOS5", 0, 0, 211, 342, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS6", "ÀÙç÷¶ùPOS6", 0, 0, 242, 341, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS7", "ÀÙç÷¶ùPOS7", 0, 0, 415, 338, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS8", "ÀÙç÷¶ùPOS8", 0, 0, 441, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS9", "ÀÙç÷¶ùPOS9", 0, 0, 378, 340, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS10", "ÀÙç÷¶ùPOS10", 0, 0, 277, 325, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS11", "ÀÙç÷¶ùPOS11", 0, 0, 408, 333, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS12", "ÀÙç÷¶ùPOS12", 0, 0, 404, 340, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS13", "ÀÙç÷¶ùPOS13", 0, 0, 401, 344, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS14", "ÀÙç÷¶ùPOS14", 0, 0, 391, 338, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS15", "ÀÙç÷¶ùPOS15", 0, 0, 386, 335, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS16", "ÀÙç÷¶ùPOS16", 0, 0, 381, 330, 0xffffff);
	go->AddBmp("ÀÙç÷¶ùPOS17", "ÀÙç÷¶ùPOS17", 0, 0, 378, 329, 0xffffff);

	m_Animation = new CAnimation(18);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS0",    10	,    -199,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS1",    16	,    -179,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS2",    11	,    -164,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS3",    -9	,    -158,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS4",    -1	,    -158,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS5",    7		,    -157,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS6",    19	,    -160,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS7",    87	,    -157,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS8",    103	,     -156,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS9",    65	,     -157,   5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS10",  25	,   -151, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS11", -14	,  -154, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS12", -16	,  -158, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS13", -19	,  -159, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS14", -24	,  -157, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS15", -28	,  -155, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS16", -31	,  -153, 5);
	m_Animation->SetBmp("ÀÙç÷¶ùPOS17", -33	,  -155, 5000);

	for (int i = 0; i < 7; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿­¶ûÏ£\\%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\¿­¶ûÏ£\\rc611_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "¿­¶ûÏ£%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("¿­¶ûÏ£0", "¿­¶ûÏ£0", 0, 0, 804, 828, RGB(0,255,0));
	go->AddBmp("¿­¶ûÏ£1", "¿­¶ûÏ£1", 0, 0, 802, 800, RGB(0, 255, 0));
	go->AddBmp("¿­¶ûÏ£2", "¿­¶ûÏ£2", 0, 0, 800, 802, RGB(0, 255, 0));
	go->AddBmp("¿­¶ûÏ£3", "¿­¶ûÏ£3", 0, 0, 800, 802, RGB(0, 255, 0));
	go->AddBmp("¿­¶ûÏ£4", "¿­¶ûÏ£4", 0, 0, 800, 800, RGB(0, 255, 0));
	go->AddBmp("¿­¶ûÏ£5", "¿­¶ûÏ£5", 0, 0, 804, 804, RGB(0, 255, 0));
	go->AddBmp("¿­¶ûÏ£6", "¿­¶ûÏ£6", 0, 0, 800, 800, RGB(0, 255, 0));
	m_AnimationKRX = new CAnimation(7);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£0",- 161	*0.2,		 -341*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£1",- 97		*0.2,		 -355*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£2",- 104	*0.2,		 -351*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£3",- 83		*0.2,		 -360*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£4",- 84		*0.2,		 -366*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£5",- 123  *0.2,		 -362*0.2		, 2);
	m_AnimationKRX->SetBmp("¿­¶ûÏ£6",- 72		*0.2,		 -358*0.2		, 2);
	m_AnimationKRX->Play();
	m_AudioOffOrOn = true;
	m_NextAct = ÀÙç÷¶ùÕ¾;
}

void CRcPos::Run()
{
	CGI* gi = CGI::GetGI();
	CGO* go = CGO::GetGO();
	if (m_AudioOffOrOn)
	{
		int i = rand() % 2;
		if (i == 0)
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("¿­¶ûÏ£½úÉý");
		else
			CKJ::GetKJ()->GetcurScene()->GetAudio()->PlayOnceAudio("¿­¶ûÏ£½úÉý");
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
		m_character->SetNextAct(ÀÙç÷¶ùÕ¾);
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
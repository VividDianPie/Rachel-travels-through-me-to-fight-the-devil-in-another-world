#include "Character.h"
#include "Animation.h"
#include "Run.h"
#include "matrix3.h"
#include"GameOutput.h"
#include "GameInput.h"

CRun::~CRun()
{
}

void CRun::Init()
{
	CGO* go = CGO::GetGO();
	char ArrFileName[MAX_PATH] = {};
	char ArrBmpName[MAX_PATH] = {};
	for (int i = 2; i < 12; ++i)
	{
		if (i < 10)
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\變\\rc111_0%d.bmp", i);
		else
			sprintf_s(ArrFileName, MAX_PATH, "bmp\\變\\rc111_%d.bmp", i);
		sprintf_s(ArrBmpName, MAX_PATH, "濟踮嫁變%d", i);
		go->AddImage(ArrBmpName, ArrFileName);
	}
	go->AddBmp("濟踮嫁變2", "濟踮嫁變2", 0, 0, 289, 287, 0xffffff);
	go->AddBmp("濟踮嫁變3", "濟踮嫁變3", 0, 0, 332, 285, 0xffffff);
	go->AddBmp("濟踮嫁變4", "濟踮嫁變4", 0, 0, 389, 278, 0xffffff);
	go->AddBmp("濟踮嫁變5", "濟踮嫁變5", 0, 0, 320, 284, 0xffffff);
	go->AddBmp("濟踮嫁變6", "濟踮嫁變6", 0, 0, 336, 259, 0xffffff);
	go->AddBmp("濟踮嫁變7", "濟踮嫁變7", 0, 0, 313, 292, 0xffffff);
	go->AddBmp("濟踮嫁變8", "濟踮嫁變8", 0, 0, 305, 284, 0xffffff);
	go->AddBmp("濟踮嫁變9", "濟踮嫁變9", 0, 0, 397, 297, 0xffffff);
	go->AddBmp("濟踮嫁變10", "濟踮嫁變10", 0, 0, 245, 277, 0xffffff);
	go->AddBmp("濟踮嫁變11", "濟踮嫁變11", 0, 0, 330, 277, 0xffffff);

	m_Animation = new CAnimation(10);
	m_Animation->SetBmp("濟踮嫁變2", 4, -142, 2);
	m_Animation->SetBmp("濟踮嫁變3", -11, -144, 2);
	m_Animation->SetBmp("濟踮嫁變4", 13, -138, 2);
	m_Animation->SetBmp("濟踮嫁變5", 25, -142, 2);
	m_Animation->SetBmp("濟踮嫁變6", 42, -128, 2);
	m_Animation->SetBmp("濟踮嫁變7", 66, -144, 5);
	m_Animation->SetBmp("濟踮嫁變8", 27, -139, 5);
	m_Animation->SetBmp("濟踮嫁變9", -48, -147, 5);
	m_Animation->SetBmp("濟踮嫁變10", 24, -136, 2);
	m_Animation->SetBmp("濟踮嫁變11", -2, -138, 2);

	CMyRect Dr;
	Dr.SetWH(50, 300);
	Dr.Setoff(50, -170); m_Animation->SetDefR(2, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(3, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(4, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(5, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(6, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(7, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(8, Dr); 
	Dr.Setoff(50, -170); m_Animation->SetDefR(9, Dr); 
	m_NextAct = 濟踮嫁變;
}

void CRun::Run()
{
	BMP* bmp = m_Animation->GetBmp();
	Matrix3 m, m1, m2;
	POS pos = m_character->GetPos();
	POS JudgePos = m_character->GetJudgePos();
	SHUX* sx = m_character->GetSX();
	CGI* gi = CGI::GetGI();
	if (m_character->GetSX()->FaceDir != m_character->GetNDir())
	{
		m1.Scoling(-1, 1);
		m2.Translation(-bmp->offx, bmp->offy);
	}
	else
	{
		m1.Scoling(1, 1);
		m2.Translation(bmp->offx, bmp->offy);
	}
	m = m1 * m2;
	if (gi->Get(_GI_K_J) == KS_DC)
		m_character->SetNextAct(濟踮嫁馴);
	else if (gi->Get(_GI_K_K) == KS_DC)
	{
		m_character->SetNextAct(濟踮嫁��);
		sx->m_RunOFFindex = 100;
	}
	else if (gi->Get(_GI_K_SPACE) == KS_DC)
		m_character->SetNextAct(濟踮嫁泐);
	if (gi->Get(_GI_K_D) == KS_DH)
	{
		JudgePos.x += sx->RunSpeed;
		pos.x = JudgePos.x;
		sx->FaceDir = 6;
		sx->MoveDir = 6;
	}
	else if (gi->Get(_GI_K_A) == KS_DH)
	{
		JudgePos.x -= sx->RunSpeed;
		pos.x = JudgePos.x;
		sx->FaceDir = 4;
		sx->MoveDir = 4;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	if (gi->Get(_GI_K_W) == KS_DH)	
	{
		JudgePos.y -= sx->speed;
		pos.y -= sx->speed;
		sx->MoveDir = 8;
	}
	else if (gi->Get(_GI_K_S) == KS_DH)
	{
		JudgePos.y += sx->speed;
		pos.y += sx->speed;
		sx->MoveDir = 2;
	}
	if (gi->Get(_GI_K_W) != KS_DH && gi->Get(_GI_K_S) != KS_DH &&
		gi->Get(_GI_K_A) != KS_DH && gi->Get(_GI_K_D) != KS_DH)
	{
		m_character->SetNextAct(濟踮嫁桴);
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	if (m_character->Peng(sx->MoveDir))	
	{
		JudgePos = m_character->GetJudgePos();
		pos = JudgePos;
	}
	m_character->SetJudgePos(JudgePos);
	m_character->SetPos(pos);
	m2.Translation(pos.x, pos.y);
	m = m * m2;
	m_Animation->SetMatrix(&m);
	m_Animation->SetMatrix2(&m2);
	m_Animation->SetLevel(m_character->GetOutPutLevel());
	m_Animation->Run();
	if (m_Animation->IsPlaying() == 0)
		m_character->SetNextAct(m_NextAct);
}

void CRun::End()
{
}

CAnimation* CRun::GetAnimation()
{
	return m_Animation;
}

void CRun::Reset()
{
	if (m_Animation == 0)
		return;
	m_Animation->Reset();
}

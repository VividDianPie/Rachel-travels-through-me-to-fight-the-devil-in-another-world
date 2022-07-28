#include "Animation.h"
#include "GameOutput.h"
#include "matrix3.h"
CAnimation::CAnimation(int size)
{
	m_CurrentFrame = 0;
	m_CurrentContinueFrame = 0;
	m_level = 0;
	m_AnimationMatrix = new Matrix3;
	m_AnimationMatrix2 = new Matrix3;
	m_IsPlaying = 0;
	m_Bmps = new BMP[size];
	m_BmpSize = size;//bmp 图片的最大容量
	m_BmpLen = 0;	  //bmp 图片的当前长度
}

CAnimation::~CAnimation()
{
	//delete m_Bmps;
	//delete m_AnimationMatrix;
}

void CAnimation::Run()
{
	if (m_IsPlaying == 0)
		return;
	BMP* bmp = &m_Bmps[m_CurrentFrame];
	CGO::GetGO()->DrawBmp(bmp->BmpId,m_AnimationMatrix ,m_AnimationMatrix2, m_level, 1.0f, 1.0f);
	m_CurrentContinueFrame += 1;
	if (m_CurrentContinueFrame >= bmp->ContinueFrame)
	{
		m_CurrentFrame += 1;
		m_CurrentContinueFrame = 0;
		if (m_CurrentFrame >= m_BmpSize)
		{
			m_CurrentFrame = 0;
			m_IsPlaying = 0;
		}
	}
}

BMP* CAnimation::GetBmp(int f)
{
	if (f == -1)
 		return &m_Bmps[m_CurrentFrame];
	if (f < 0 || f >= m_BmpSize)
		return 0;

	return &m_Bmps[f];
}

void CAnimation::SetLevel(int level)
{
	m_level = level;
}

void CAnimation::SetBmp(const BMP* bmp)
{
	if (m_BmpLen < m_BmpSize)
		m_Bmps[m_BmpLen++] = *bmp;
}

void CAnimation::SetBmp(const char* id, int offx, int offy, int continue_frame)
{
	if (m_BmpLen >= m_BmpSize)
		return;
	m_Bmps[m_BmpLen].BmpId = id;
	m_Bmps[m_BmpLen].offx = offx;
	m_Bmps[m_BmpLen].offy = offy;
	m_Bmps[m_BmpLen].ContinueFrame = continue_frame;
	m_Bmps[m_BmpLen].alen = 0;
	m_Bmps[m_BmpLen].dlen = 0;
	m_BmpLen += 1;
}

void CAnimation::SetActR(int f, CMyRect rect)
{
	if (f < 0 || f >= m_BmpSize)
		return;
	BMP* bmp = &m_Bmps[f];
	if (bmp->alen >= 8)
		return;
	bmp->aRect[bmp->alen++] = rect;
}

void CAnimation::SetDefR(int f, CMyRect rect)
{
	if (f < 0 || f >= m_BmpSize)
		return;
	BMP* bmp = &m_Bmps[f];
	if (bmp->dlen >= 8)
		return;
	bmp->dRect[bmp->dlen++] = rect;
}

void CAnimation::SetMatrix(const Matrix3* m)
{
	*m_AnimationMatrix = *m;
}

void CAnimation::SetMatrix2(const Matrix3* m)
{
	*m_AnimationMatrix2 = *m;
}

void CAnimation::SetCurF(int i)
{
	m_CurrentFrame = i;
}

int CAnimation::IsPlaying()
{
	return m_IsPlaying;
}

void CAnimation::SetJudgeRect(int index, CMyRect rect)
{
	if (index<0 || index>m_BmpSize)
	{
		return;
	}
	BMP* p = &m_Bmps[index];
	if (p->JudgeRectLen >= 8)
	{
		return;
	}
	p->JudgeRect[p->JudgeRectLen++] = rect;
}

void CAnimation::SetBmpAttackOff_Y(int index, int offup, int offdown)
{
	if (index < 0 || index >= m_BmpSize)
	{
		return;
	}
	m_Bmps[index].AttackOffUp      = offup;
	m_Bmps[index].AttackOffDown = offdown;
}


void CAnimation::Play()
{
	m_IsPlaying = true;
}

void CAnimation::Stop()
{
	m_IsPlaying = false;
}

void CAnimation::Reset()
{
	m_IsPlaying = true;
	m_CurrentFrame = 0;
	m_CurrentContinueFrame = 0;
}

int CAnimation::GetCurF()
{
	return m_CurrentFrame;
}

int CAnimation::GetSize()
{
	return m_BmpSize;
}

int CAnimation::GetCurContinueF()
{
	return m_CurrentContinueFrame;
}

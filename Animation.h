#pragma once
#include "MyRect.h"

class Matrix3;

struct BMP
{
	float* x;
	float* y;
	const char* BmpId;
	int offx;							
	int offy;
	int ContinueFrame;			
	CMyRect JudgeRect[8];   
	int JudgeRectLen;			
	CMyRect aRect[8];
	int alen;
	CMyRect dRect[8];
	int dlen;
	int AttackOffUp = 0;     
	int AttackOffDown = 0;
};
class CAnimation
{
	BMP* m_Bmps;
	int m_BmpSize;
	int m_BmpLen;
	int m_CurrentFrame;
	int m_CurrentContinueFrame;
	int m_level;
	Matrix3* m_AnimationMatrix;
	Matrix3* m_AnimationMatrix2;
	int m_IsPlaying;
public:
	CAnimation(int size = 1);
	~CAnimation();
	void Run();
	BMP* GetBmp(int f = -1);
	void SetLevel(int level);
	void SetBmp(const BMP* bmp);
	void SetBmp(const char* id, int offx, int offy, int cf);
	void SetActR(int f, CMyRect r);
	void SetDefR(int f, CMyRect r);
	void SetBmpAttackOff_Y(int index, int offup, int offdown); 
	void SetJudgeRect(int index, CMyRect rect);
	void SetMatrix(const Matrix3* m);
	void SetMatrix2(const Matrix3* m);
	void SetCurF(int i);
	int IsPlaying();
	void Play();
	void Stop();
	void Reset();
	int GetCurF();
	int GetSize();
	int GetCurContinueF();
};
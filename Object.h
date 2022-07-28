#pragma once
#include "MyRect.h"
#include"vector.h"
#define HERO 0
struct POS
{
	float x;
	float y;
};
class COBJ
{
protected:
	POS m_JudgePos;
	POS m_pos;
	CMyRect m_r;
	bool m_Active;
	int m_NDir;
public:
	COBJ();
	virtual ~COBJ();
	virtual void Init() = 0;
	virtual void Run() = 0;
	virtual void End() = 0;
	POS GetPos()const;
	POS GetJudgePos()const;
	void SetPos(float x, float y);
	void SetJudgePos(float x, float y);
	void SetPos(POS pos);
	void SetJudgePos(POS pos);
	bool GetActive(); 
	void SetActive(bool b);
	int GetNDir();
	void SetNDir(int ndir);
	CMyRect* GetMyRect();
};
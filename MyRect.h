#pragma once
struct _RECT
{
	int left;
	int top;
	int right;
	int bottom;
};
class CMyRect
{
	float* m_TagX;
	float* m_TagY;
	int m_offx;
	int m_offy;
	int m_w;
	int m_h;
public:
	CMyRect();
	void SetTag(float* x, float* y);
	void Setoff(int x, int y);
	float* GetTagX()const;
	float* GetTagY()const;
	int GetOffx()const;
	int GetOffy()const;
	void SetWH(int w, int h);
	int GetW()const;
	int GetH()const;
	_RECT GetRect()const;
	bool Peng(CMyRect* r)const;
};
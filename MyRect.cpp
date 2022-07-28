#include "MyRect.h"

CMyRect::CMyRect()
{
	m_TagX = 0;
	m_TagY = 0;

	m_offx = 0;
	m_offy = 0;
	m_w = 0;
	m_h = 0;
}

void CMyRect::SetTag(float* x, float* y)
{
	m_TagX = x;
	m_TagY = y;
}

void CMyRect::Setoff(int x, int y)
{
	m_offx = x;
	m_offy = y;
}

float* CMyRect::GetTagX()const
{
	return m_TagX;
}

float* CMyRect::GetTagY()const
{
	return m_TagY;
}

int CMyRect::GetOffx()const
{
	return m_offx;
}

int CMyRect::GetOffy()const
{
	return m_offy;
}

void CMyRect::SetWH(int w, int h)
{
	m_w = w;
	m_h = h;
}

int CMyRect::GetW()const
{
	return m_w;
}

int CMyRect::GetH()const
{
	return m_h;
}

_RECT CMyRect::GetRect()const
{
	_RECT r;
	r.left = m_offx - m_w / 2;
	r.top = m_offy - m_h / 2;
	if (m_TagX)
		r.left += *m_TagX;
	if (m_TagY)
		r.top += *m_TagY;
	r.right = r.left + m_w;
	r.bottom = r.top + m_h;
	return r;
}

bool CMyRect::Peng(CMyRect* r)const
{
	if (r == 0)
		return false;
	_RECT r1;
	r1.left = m_offx - m_w / 2;
	r1.top = m_offy - m_h / 2;
	if (m_TagX)
		r1.left += *m_TagX;
	if (m_TagY)
		r1.top += *m_TagY;
	r1.right = r1.left + m_w;
	r1.bottom = r1.top + m_h;
	_RECT r2 = r->GetRect();

	if (r1.left > r2.right || r1.right < r2.left ||
		r1.top > r2.bottom || r1.bottom < r2.top)
		return false;
	return true;
}

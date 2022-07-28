#pragma comment(lib, "msimg32.lib")
using namespace std;
#include "GameOutput.h"
#include"KJ.h"
#include"ReturnError.h"
CGO* CGO::p = nullptr;
CGO::CGO()
{
	m_MainDC = 0;
	m_BackDC = 0;
	m_CX = 0;
	m_CY = 0;
	m_CW = 0;
	m_CH = 0;
}
CGO::CGO(const CGO& that)
{
}
CGO* CGO::GetGO()
{
	if (p == 0)
	{
		p = new CGO;
	}
	return p;
}
BOOL CGO::DrawBmp(const char* id, const Matrix3* m, int level, float scx, float scy)//适用于 Draw Bmp
{
	if (id == nullptr)
	{
		return BMP_ID_NULL;
	}
	string s = id;
	map<string, _BMP>::iterator it = m_BmpMap.find(s);
	if (it == m_BmpMap.end())
	{
		return BMP_ID_NULL;
	}
	_BMP* bmp = &(it->second);
	map< string, HDC>::iterator it2 = m_ImgMap.find(bmp->id);
	if (it2 == m_ImgMap.end())
	{
		return BMP_ID_NULL;
	}
	_IMG img;
	img.c = bmp->c;
	img.sx = bmp->offx;
	img.sy = bmp->offy;
	img.dh = bmp->h;
	img.dw = bmp->w;
	Matrix3 mm;
	mm.eM11 = scx;
	mm.eM22 = scy;
	img.m = mm * *m;
	img.dc = it2->second;
	switch (level)
	{
	case _Back:m_BackVector.push_back(img); break;
	case _Far_1:m_Far_1Vector.push_back(img); break;
	case _Far_2:m_Far_2Vector.push_back(img); break;
	case _Level_1:m_Level_1Vector.push_back(img); break;
	case _Level_2:m_Level_2Vector.push_back(img); break;
	case _Level_3:m_Level_3Vector.push_back(img); break;
	case _Level_4:m_Level_4Vector.push_back(img); break;
	case _Near_1:m_Near_1Vector.push_back(img); break;
	case _Near_2:m_Near_2Vector.push_back(img); break;
	case _UI:m_UIVector.push_back(img); break;
	case _Lev_Test:m_Level_TestVector.push_back(img); break;
	}
	return true;
}

BOOL CGO::DrawBmp(const char* id, const Matrix3* m, const Matrix3* m2, int level, float scx, float scy)
{
	if (id == nullptr)
	{
		return BMP_ID_NULL;
	}
	string s = id;
	map<string, _BMP>::iterator it = m_BmpMap.find(s);
	if (it == m_BmpMap.end())
	{
		return BMP_ID_NULL;
	}
	_BMP* bmp = &(it->second);
	map< string, HDC>::iterator it2 = m_ImgMap.find(bmp->id);
	if (it2 == m_ImgMap.end())
	{
		return BMP_ID_NULL;
	}
	_IMG img;
	img.c = bmp->c;
	img.sx = bmp->offx;
	img.sy = bmp->offy;
	img.dh = bmp->h;
	img.dw = bmp->w;
	Matrix3 mm;
	mm.eM11 = scx;
	mm.eM22 = scy;
	img.m = mm * *m;
	img.m2 = mm * *m2;
	img.dc = it2->second;
	switch (level)
	{
	case _Back:m_BackVector.push_back(img); break;
	case _Far_1:m_Far_1Vector.push_back(img); break;
	case _Far_2:m_Far_2Vector.push_back(img); break;
	case _Level_1:m_Level_1Vector.push_back(img); break;
	case _Level_2:m_Level_2Vector.push_back(img); break;
	case _Level_3:m_Level_3Vector.push_back(img); break;
	case _Level_4:m_Level_4Vector.push_back(img); break;
	case _Near_1:m_Near_1Vector.push_back(img); break;
	case _Near_2:m_Near_2Vector.push_back(img); break;
	case _UI:m_UIVector.push_back(img); break;
	case _Lev_Test:m_Level_TestVector.push_back(img); break;
	}
	return true;
}

BOOL CGO::DrawBmp(const char* id, float x, float y, int level, float scx, float scy)
{
	if (id == nullptr)
	{
		return BMP_ID_NULL;
	}
	string s = id;
	map< string, _BMP>::iterator it = m_BmpMap.find(s);
	if (it == m_BmpMap.end())
	{
		return BMP_ID_NULL;
	}
	_BMP* bmp = &(it->second);
	map< string, HDC>::iterator it2 = m_ImgMap.find(bmp->id);
	if (it2 == m_ImgMap.end())
	{
		return BMP_ID_NULL;
	}
	_IMG img;
	img.c = bmp->c;
	img.sx = bmp->offx;
	img.sy = bmp->offy;
	img.dh = bmp->h;
	img.dw = bmp->w;
	Matrix3 mm;
	mm.eM11 = scx;
	mm.eM22 = scy;
	img.m.Translation(x, y);
	img.dc = it2->second;
	switch (level)
	{
	case _Back:m_BackVector.push_back(img); break;
	case _Far_1:m_Far_1Vector.push_back(img); break;
	case _Far_2:m_Far_2Vector.push_back(img); break;
	case _Level_1:m_Level_1Vector.push_back(img); break;
	case _Level_2:m_Level_2Vector.push_back(img); break;
	case _Level_3:m_Level_3Vector.push_back(img); break;
	case _Level_4:m_Level_4Vector.push_back(img); break;
	case _Near_1:m_Near_1Vector.push_back(img); break;
	case _Near_2:m_Near_2Vector.push_back(img); break;
	case _UI:m_UIVector.push_back(img); break;
	case _Lev_Test:m_Level_TestVector.push_back(img); break;
	}
	return true;
}

void CGO::DrawLine(int x, int y, int x2, int y2, int w, unsigned int c)
{
	_IMG img;
	img.c = c;
	img.dw = x2;
	img.dh = y2;
	img.sx = x;
	img.sy = y;
	img.penW = w;
	img.dc = 0;
	m_Level_TestVector.push_back(img);
}

void CGO::DrawString(int x, int y, int w, int h, const char* t, unsigned int c)
{
	TEXT tx;
	tx.x = x;
	tx.y = y;
	tx.w = w;
	tx.h = h;
	tx.c = c;
	tx.buf[64] = 0;
	tx.len = 0;
	while (1)
	{
		tx.buf[tx.len] = t[tx.len];
		if (tx.buf[tx.len] == 0)
		{
			break;
		}
		else if (tx.len >= 64)
		{
			break;
		}
		tx.len++;
	}
	m_textVector.push_back(tx);
}

void CGO::DrawRect(int x, int y, int w, int h, int pw, unsigned int pc)
{
	_IMG img;
	img.c = pc;
	img.m.Translation(x, y);
	img.dw = w;
	img.dh = h;
	img.penW = pw;
	m_Level_TestVector.push_back(img);
}

void CGO::DrawEllipse(int x, int y, int w, int h, int pw, unsigned int pc, unsigned int bc)
{
	_IMG img;
	img.sx = x;
	img.sy = y;
	img.dw = w;
	img.dh = h;
	img.penW = pw;
	img.pc = pc;
	img.bc = bc;
	m_DrawEllipseVector.push_back(img);

	//HPEN newpen = 0, oldpen = 0;
	////如果颜色有改动 那么 创建新的笔
	//if (0 != pc || 1 != pw)
	//{
	//	newpen = CreatePen(PS_SOLID, pw, pc);
	//	oldpen = (HPEN)SelectObject(m_BackDC, newpen);
	//}

	//HBRUSH newb;
	//HBRUSH oldb;
	////如果颜色有改动 那么 创建新的画刷
	//if (0xffffffff != bc)
	//	newb = CreateSolidBrush(bc);
	//else
	//	newb = (HBRUSH)GetStockObject(NULL_BRUSH);
	//oldb = (HBRUSH)SelectObject(m_BackDC, newb);
	//int left = x - w / 2;
	//int top = y - h / 2;
	//Ellipse(m_BackDC, left, top, left + w, top + h);

	//if (newpen)
	//{
	//	SelectObject(m_BackDC, oldpen);
	//	DeleteObject(newpen);
	//}
	//SelectObject(m_BackDC, oldb);
	//DeleteObject(newb);
}

void CGO::SetFont(int w, int h)
{
	if (w < 1 || h < 1)
		return;
	//创建字体
	HFONT font = CreateFontA(h, w, 0, 0, 400, false, false, false,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "宋体");
	DeleteObject(SelectObject(m_BackDC, font));
}


void CGO::Init()                                                                               
{
	RectDrawOffOrOn = false;
	if (m_MainDC != nullptr)
		return;
	m_Font = CreateFontA(15, 15, 0, 0, 400, false, false, false,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "宋体");
	CKJ* kj = CKJ::GetKJ();
	HWND h = kj->GetHWND();
	if (h == 0)
		return;
	m_MainDC = GetDC(h);
	m_CW = kj->GetCW();
	m_CH = kj->GetCH();
	m_BackDC = CreateCompatibleDC(m_MainDC);
	HBITMAP bmp = CreateCompatibleBitmap(m_MainDC, m_CW, m_CH);
	DeleteObject(SelectObject(m_BackDC, bmp));
	DeleteObject(bmp);
	SetGraphicsMode(m_BackDC, GM_ADVANCED);
}

void CGO::Run()
{
}

void CGO::Begin()
{
	m_BackVector.clear();
	m_Far_1Vector.clear();
	m_Far_2Vector.clear();
	m_Level_1Vector.clear();
	m_Level_2Vector.clear();
	m_Level_3Vector.clear();
	m_Level_4Vector.clear();
	m_Near_1Vector.clear();
	m_Near_2Vector.clear();
	m_UIVector.clear();
	m_Level_TestVector.clear();
	m_textVector.clear();
	m_DrawEllipseVector.clear();
	BitBlt(m_BackDC, 0, 0, m_CW, m_CH, 0, 0, 0, WHITENESS);
}

void CGO::End()
{
	int size;
	size = m_BackVector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_BackVector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Far_1Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Far_1Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Far_2Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Far_2Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Level_1Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Level_1Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Level_2Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Level_2Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}
	size = m_Level_3Vector.size();
	_IMG img1, img;
	for (int d = 0; d < size - 1; ++d)
	{
		for (int j = d + 1; j < size; ++j)
		{
			img1 = m_Level_3Vector[d];
			img = m_Level_3Vector[j];
			if (img1.m2.eDy > img.m2.eDy)
			{
				_IMG bigger = m_Level_3Vector[j];
				m_Level_3Vector[j] = m_Level_3Vector[d];
				m_Level_3Vector[d] = bigger;
			}
		}
	}
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Level_3Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Level_4Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Level_4Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Near_1Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Near_1Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_Near_2Vector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_Near_2Vector[i];
		Matrix3 m;
		m.Translation(-m_CX, -m_CY);
		m = img.m * m;
		SetWorldTransform(m_BackDC, &m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		m.Identity();
		SetWorldTransform(m_BackDC, &m);
	}

	size = m_UIVector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_UIVector[i];
		SetWorldTransform(m_BackDC, &img.m);
		TransparentBlt(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw, img.dh,
			img.dc, img.sx, img.sy, img.dw, img.dh, img.c);
		Matrix3 m;
		SetWorldTransform(m_BackDC, &m);
	}
	size = m_DrawEllipseVector.size();
	for (int i = 0; i < size; ++i)
	{
		_IMG img = m_DrawEllipseVector[i];
		HPEN newpen = 0, oldpen = 0;
		//如果颜色有改动 那么 创建新的笔
		if (0 != img.pc || 1 != img.penW)
		{
			newpen = CreatePen(PS_SOLID, img.penW, img.pc);
			oldpen = (HPEN)SelectObject(m_BackDC, newpen);
		}

		HBRUSH newb;
		HBRUSH oldb;
		//如果颜色有改动 那么 创建新的画刷
		if (0xffffffff != img.bc)
			newb = CreateSolidBrush(img.bc);
		else
			newb = (HBRUSH)GetStockObject(NULL_BRUSH);
		oldb = (HBRUSH)SelectObject(m_BackDC, newb);
		int left = img.sx - img.dw / 2;
		int top = img.sy - img.dh / 2;
		Ellipse(m_BackDC, left, top, left + img.dw, top + img.dh);

		if (newpen)
		{
			SelectObject(m_BackDC, oldpen);
			DeleteObject(newpen);
		}
		SelectObject(m_BackDC, oldb);
		DeleteObject(newb);
	}
	if (RectDrawOffOrOn == true)
	{
		size = m_Level_TestVector.size();
		for (int i = 0; i < size; ++i)
		{
			_IMG img = m_Level_TestVector[i];

			HPEN pen = CreatePen(PS_SOLID, img.penW, img.c);
			HPEN oldp = (HPEN)SelectObject(m_BackDC, pen);

			if (img.dc == 0)
			{
				MoveToEx(m_BackDC, img.sx - m_CX, img.sy - m_CY, 0);
				LineTo(m_BackDC, img.dw - m_CX, img.dh - m_CY);
			}
			else
			{
				Matrix3 m;
				m.Translation(-m_CX, -m_CY);
				m = img.m * m;
				HBRUSH b = (HBRUSH)GetStockObject(NULL_BRUSH);
				HBRUSH oldb = (HBRUSH)SelectObject(m_BackDC, b);
				SetWorldTransform(m_BackDC, &m);
				Rectangle(m_BackDC, -img.dw / 2, -img.dh / 2, img.dw / 2, img.dh / 2);
				m.Identity();
				SetWorldTransform(m_BackDC, &m);
				DeleteObject(SelectObject(m_BackDC, oldb));
			}
			DeleteObject(SelectObject(m_BackDC, oldp));
		}
	}
	size = m_textVector.size();
	for (int i = 0; i < size; ++i)
	{
		TEXT tx = m_textVector[i];
		RECT r = { tx.x, tx.y, tx.x + tx.w, tx.y + tx.h };
		unsigned int fc = SetTextColor(m_BackDC, tx.c);
		DrawTextA(m_BackDC, tx.buf, tx.len, &r, DT_WORDBREAK);
		SetTextColor(m_BackDC, fc);
	}

	BitBlt(m_MainDC, 0, 0, m_CW, m_CH, m_BackDC, 0, 0, SRCCOPY);
}

BOOL CGO::AddImage(const char* id, const char* filename)
{
	//判断是否有数据
	if (id == nullptr || filename == nullptr)
	{
		return IMG_ID_NULL;
	}
	string s = id;
	//检测 key 是否重复
	if (m_ImgMap.find(s) != m_ImgMap.end())
	{
		return IMG_ID_NULL;
	}
	//加载图片
	HBITMAP bmp = (HBITMAP)LoadImage(0, filename, IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
	//如果路径错误  加载失败
	if (bmp == nullptr)
	{
		return IMG_ID_NULL;
	}
	//创建兼容HDC  选入位图  位图选入后删除 bmp
	HDC dc = CreateCompatibleDC(m_MainDC);
	DeleteObject(SelectObject(dc, bmp));
	DeleteObject(bmp);
	m_ImgMap.insert(pair< string, HDC>(s, dc));
	return IMG_OK;
}

BOOL CGO::AddBmp(const char* bmpid, const char* ImageId, int offx, int offy, int w, int h, unsigned int c)
{
	if (ImageId == nullptr || bmpid == nullptr)
		return NULL;
	string s = bmpid;
	if (m_BmpMap.find(s) != m_BmpMap.end())
		return false;
	_BMP bmp;
	bmp.c = c;
	bmp.h = h;
	bmp.id = ImageId;
	bmp.offx = offx;
	bmp.offy = offy;
	bmp.w = w;
	m_BmpMap.insert(pair< string, _BMP>(s, bmp));
	return true;
}

BOOL CGO::EreasImage(const char* id)
{
	if (id == nullptr)
	{
		return IMG_ID_NULL;
	}
	string s = id;
	map< string, HDC>::iterator it;
	it = m_ImgMap.find(s);
	if (it == m_ImgMap.end())
	{
		return IMG_ID_NULL;
	}
	DeleteDC(it->second);
	m_ImgMap.erase(it);
	return true;
}

BOOL CGO::EraseBmp(const char* id)
{

	return 0;
}

void CGO::Clear()
{
	m_BmpMap.clear();
	std::map<std::string, HDC>::iterator it;
	for (it = m_ImgMap.begin(); it != m_ImgMap.end(); ++it)
	{
		DeleteDC(it->second);
	}
	m_ImgMap.clear();
}
void CGO::LoadFont(int w, int h,	//字体宽高
	const char* fn,	//字体外观
	int we,	//字体粗度
	bool i,	//斜体
	bool u,	//下划线
	bool s)	//穿越线
{
	m_Font = CreateFontA(h, w, 0, 0, we, i, u, s,
		DEFAULT_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, fn);
	DeleteObject(SelectObject(m_BackDC, m_Font));
}

void CGO::SetCXY(int x, int y)
{
	m_CX = x - m_CW / 2;
	if (m_CX < 0)
	{
		m_CX = 0;
	}
	else if (m_CX + m_CW > m_WW)
	{
		m_CX = m_WW - m_CW;
	}
	m_CY = y - m_CH / 2;
	if (m_CY < 0)
	{
		m_CY = 0;
	}
	else if (m_CY + m_CH > m_WH)
	{
		m_CY = m_WH - m_CH;
	}
}

int CGO::GetCX()
{
	return m_CX;
}

int CGO::GetCY()
{
	return m_CY;
}

void CGO::SetWorldWH(int w, int h)
{
	if (w < 1 || h < 1)
		return;
	m_WW = w;
	m_WH = h;
}

int CGO::GetWorldW()
{
	return m_WW;
}

int CGO::GetWorldH()
{
	return m_WH;
}

void CGO::SetRectDrawOffOrOn()
{
	RectDrawOffOrOn = !RectDrawOffOrOn;
}

void CGO::DrawTxt(int x, int y, const char* str, unsigned int c1)
{
	//设置文字颜色
	unsigned int fc = SetTextColor(m_BackDC, c1);
	TextOutA(m_BackDC, x, y, str, strlen(str));
	//绘制文字   HDC   输出的文字   文字长度  文字范围   文字形式
   // DrawTextA(m_BackDC, buf, len, &r, DT_WORDBREAK);
	SetTextColor(m_BackDC, fc);
}


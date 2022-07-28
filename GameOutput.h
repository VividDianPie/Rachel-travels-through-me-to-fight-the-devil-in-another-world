#pragma once
#include <windows.h>
#include <map>
#include <string>
#include<vector>
using namespace std;
#include"ReturnError.h"
#include "matrix3.h"
#define _Back				     0
#define _Far_1					 1
#define _Far_2					 2
#define _Level_1				 3
#define _Level_2				 4
#define _Level_3				 5
#define _Level_4				 6
#define _Near_1				 7
#define _Near_2				 8
#define _UI						 9
#define _Lev_Test			 10
struct _BMP
{
	string id;
	int offx;
	int offy;
	int w;	 
	int h;
	unsigned int c;
};
class CGO
{
	struct _IMG
	{
		HDC dc;
		Matrix3 m;
		Matrix3 m2;
		int sx;
		int sy;
		int dw;
		int dh;
		unsigned int c;
		unsigned int penW;
		unsigned int pc;
		unsigned int bc;
	};
	struct TEXT
	{
		char buf[65];
		int x;
		int y;	
		int w;
		int h;
		int len;
		unsigned int c;
	};
	HFONT m_Font;
	HDC m_MainDC;
	HDC m_BackDC;
	int m_CX;
	int m_CY;
	int m_CW;
	int m_CH;
	int m_WW;
	int m_WH;
	map<string, _BMP> m_BmpMap;	
	map<string, HDC> m_ImgMap;

	vector<_IMG> m_BackVector;
	vector<_IMG> m_Far_1Vector;
	vector<_IMG> m_Far_2Vector;
	vector<_IMG> m_Level_1Vector;	
	vector<_IMG> m_Level_2Vector;
	vector<_IMG> m_Level_3Vector;
	vector<_IMG> m_Level_4Vector;
	vector<_IMG> m_Near_1Vector;
	vector<_IMG> m_Near_2Vector;
	vector<_IMG> m_UIVector;
	vector<_IMG> m_Level_TestVector;
	vector<TEXT> m_textVector;
	vector<_IMG> m_DrawEllipseVector;
	static CGO* p;
	CGO();
	CGO(const CGO& that);
	bool RectDrawOffOrOn;
public:
	static CGO* GetGO();
	void Init();
	void Run();
	void Begin();
	void End();
	void LoadFont(int w = 15, int h = 15,	//字体宽高
		const char* fn = "宋体",	//字体外观
		int we = 400,	//字体粗度
		bool i = false,	//斜体
		bool u = false,	//下划线
		bool s = false);	//穿越线
	BOOL AddImage(const char* id, const char* filename);
	BOOL AddBmp(const char* bmpid, const char* ImageId, int offx, int offy, int w, int h, unsigned int c = RGB(0, 255, 0));
	BOOL EreasImage(const char* id);
	BOOL EraseBmp(const char* id);
	void Clear();
	BOOL DrawBmp(const char* id, const Matrix3* m, int level = _Level_3, float scx = 1.0f, float scy = 1.0f);
	BOOL DrawBmp(const char* id, const Matrix3* m, const Matrix3* m2, int level = _Level_3,float scx = 1.0f, float scy = 1.0f);
	BOOL DrawBmp(const char* id, float x, float y, int level, float scx=1.0f, float scy=1.0f);
	void DrawLine(int x, int y, int x2, int y2, int w, unsigned int c);
	void DrawString(int x, int y, int w, int h, const char* t, unsigned int c);
	void DrawRect(int x, int y, int w, int h, int pw, unsigned int pc);
	void DrawEllipse(int x, int y, int w, int h, int pw = 1, unsigned int pc = 0, unsigned int bc = -1);
	void SetFont(int w, int h);
	void SetCXY(int x, int y);
	int GetCX();
	int GetCY();
	void SetWorldWH(int w, int h);
	int  GetWorldW();
	int  GetWorldH();
	void SetRectDrawOffOrOn();
	void DrawTxt(int x, int y, const char* str, unsigned int c1 = 0);
};
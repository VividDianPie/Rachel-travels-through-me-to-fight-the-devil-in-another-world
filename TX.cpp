#include"TX.h"

CTX::~CTX()
{
}

void CTX::Init(CCter* p)
{


}

void CTX::Run()
{
}

void CTX::End()
{
}

void CTX::SetXY(int x1, int y1)
{
	x = x1;
	y = y1;
}

void CTX::Setfloat(const char* name)
{
	buf = name;
}

bool CTX::Playing()
{
	return playing;
}

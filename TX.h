#pragma once

class CCter;
class CTX
{
protected:
	bool playing;
	int x;
	int y;
	const char* buf;
public:
	virtual ~CTX();
	virtual void Init(CCter* p);
	virtual void Run();
	virtual void End();
	virtual void SetXY(int x1, int y1);
	virtual void Setfloat(const char* name);
	bool Playing();
};
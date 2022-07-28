#pragma once
class CUI
{
protected:
	bool playing;
public:
	virtual ~CUI();
	virtual void Init();
	virtual void Run();
	virtual void End();
	bool Getplaying();
};
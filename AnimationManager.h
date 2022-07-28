#pragma once
#include <map>
#include <string>
#include<windows.h>
using namespace std;
class CAnimation;
class CAnimationManager
{
	map< string, CAnimation*> m_Animations;
public:
	CAnimation* GetAnimation(string key);
	BOOL SetAnimation(string key, CAnimation* animation);
	void Erase(string key);
};

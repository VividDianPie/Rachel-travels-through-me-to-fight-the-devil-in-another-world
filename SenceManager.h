#pragma once
#include<map>
#include<string>
#include"std.h"
class CScene;
class SceneManager
{
	map<string, CScene*>m_SceneManagerMap; 
public:
	bool AddScene(string id, CScene* p);
	void EraseScene(string id);
	CScene* GetScene(string id);
	void Init();
	void Run();
	void End();
	void Clear();
};

#pragma once
#include"scene.h"
#include "Animation.h"
#include "Hero.h"
#include "BOSS.h"
#include"OBJManager.h"
#include"UiManager.h"
class BossSence:public CScene
{
	CHero *hero;
	CBOSS* boss;
	COBJM* m_heroManager;
	COBJM* m_enemyManager;
	COBJM* ObstacleManager;
	CUIManager* UiManager;
	CAudioManager* Audio;
	CTXManager* TXManager;
public:
	void Init();
	void Run();
	void End();
	COBJM* GetHeroManager();
	COBJM* GetEnemyManager();
	virtual COBJM* GetObstacleManager();
	CAudioManager* GetAudio();
	virtual CTXManager* GetTX();
	virtual int  TrueOrFalse() ;

};
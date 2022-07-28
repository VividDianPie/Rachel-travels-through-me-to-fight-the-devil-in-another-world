#pragma once
#include "scene.h"
#include "Animation.h"
#include "Hero.h"
#include "BOSS.h" 
class CAudioManager;
class COBJM;
class CPlatinum;
class COneScene : public CScene
{
	CPlatinum* m_Platinum;
	CHero *hero;	
	CAnimation* m_Animation;
	COBJM* m_heroManager;
	COBJM* ObstacleManager;
	COBJM* m_EnemyManager;
	CAudioManager* Audio;
public:
	void Init();
	void Run();
	void End();
	COBJM* GetHeroManager();
	COBJM* GetEnemyManager();
	virtual COBJM* GetObstacleManager();
	CAudioManager* GetAudio();
	virtual CTXManager* GetTX();
	virtual int  TrueOrFalse();

};
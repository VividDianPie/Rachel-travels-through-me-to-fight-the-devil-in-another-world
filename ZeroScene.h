#pragma once
#include "scene.h"
class CAudioManager;
class COBJM;
class CZeroScene : public CScene
{
	CAudioManager* Audio;
	bool RcA;
	long double ArC;
public:
	void Init();
	void Run();
	void End();
	COBJM* GetHeroManager();
	COBJM* GetEnemyManager();
	virtual COBJM* GetObstacleManager();
	CAudioManager* GetAudio();
	virtual CTXManager* GetTX();
	virtual int TrueOrFalse() ;

};
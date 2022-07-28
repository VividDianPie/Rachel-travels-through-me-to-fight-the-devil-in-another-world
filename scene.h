#pragma once
class COBJM;
class CAudioManager;
class CTXManager;
class CScene
{
public:
	virtual void Init() = 0;
	virtual void Run() = 0;
	virtual void End() = 0;
	virtual COBJM* GetHeroManager() = 0;
	virtual COBJM* GetEnemyManager() = 0; 
	virtual COBJM* GetObstacleManager() = 0;
	virtual CTXManager* GetTX() = 0;
	virtual CAudioManager* GetAudio() = 0;
	virtual int TrueOrFalse() = 0;
};

#pragma once
#include "stdafx.h"
#include "Define.h"
#include "Instance.h"
#include "Game.h"
#include <vector>
#define MAX_INSTANCE 100

typedef vector<Instance> vInstance;
typedef vector<Player> vPlayer;

class STRUCTURE_API InstanceManager{
	vInstance instance;
	Log logger;
	vPlayer loadList;
	int instanceCount;
	Game gameInstance;
public:
	Player* getPlayerByClientID(int id);
	InstanceManager(Log& l);
	bool pushNewPlayer(std::string uName,int clientID);
	bool playerDoneLoad(int clientID, int mapID);
};
#pragma once
#include "Player.h"
#include "AI.h"
#include <list>

class Game
{

private:
	Player* player;
	AI* ai;
public:

	Player* GetPlayer() { return player; };
	AI* GetAI() { return ai; };

	Game();
	void PlayGame();
};

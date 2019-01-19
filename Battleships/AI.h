#pragma once
#include "Player.h"

class AI : public Player
{
private:
public:
	void GetGo(BattleshipGrid& grid);
};

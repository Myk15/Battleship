#pragma once

#include "BattleshipGrid.h"

class BattleshipGrid;

class Battleship
{
private: 
	int Size;
	int HP;
public:
	Battleship(int Size,BattleshipGrid& Grid);
	void SetBattleship(int Size,BattleshipGrid& Grid);
	void ReduceHP(BattleshipGrid& Grid);

};

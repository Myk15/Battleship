#pragma once
#include "Battleship.h"

class Player
{
private:
	BattleshipGrid* MyGrid;
	BattleshipGrid* ShotGrid;
	Battleship* Ship1;
	Battleship* Ship2;
	Battleship* Ship3;
	Battleship* Ship4;
	Battleship* Ship5;

	bool Turn;
public:
	Player();
	virtual void GetGo(BattleshipGrid& Grid);
	BattleshipGrid* GetGrid() { return MyGrid; };
	bool GetTurn() { return Turn; };
	void SetTurn(bool T) { Turn = T; };
};
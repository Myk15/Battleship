#pragma once
#include "Battleship.h"
#include <string>

class Battleship;

struct BattleshipGridNode
{
	int id;
	Battleship* Ship;
	std::string hit = " ";
};

class BattleshipGrid
{
private:
	BattleshipGridNode* Grid[30][30];
	int RemaingShips = 3;
public:
	BattleshipGrid();
	BattleshipGridNode* GetBattleShipNode(int x, int y) { return Grid[x][y]; };
	void DidPlayerGetHit(int x, int y);
	void ShowMyBattleshipGrid();
	void ReduceRemainingShips() { RemaingShips--;};
	int GetRemaingShip() { return RemaingShips; };
};


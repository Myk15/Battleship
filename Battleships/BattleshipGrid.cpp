#include "BattleshipGrid.h"
#include "Player.h"
#include "AI.h"
#include <iostream>
#include <time.h>


using namespace std;

BattleshipGrid::BattleshipGrid()
{
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			Grid[i][j] = new BattleshipGridNode();
			Grid[i][j]->Ship = nullptr;
		}
	}
}

void BattleshipGrid::DidPlayerGetHit(int x, int y)
{
	this->GetBattleShipNode(x, y)->hit = "X";
	if (this->GetBattleShipNode(x,y)->Ship != nullptr)
	{
		this->GetBattleShipNode(x, y)->Ship != nullptr;
		this->GetBattleShipNode(x, y)->Ship->ReduceHP(*this);
		this->GetBattleShipNode(x, y)->hit = "0";
		cout << "HIT" << "\n";
		
	}
	else cout << "MISS" << "\n";

	
}

void BattleshipGrid::ShowMyBattleshipGrid()
{
	for (int i = 0; i < 30; i++)
	{
		cout << "\n";
		for (int j = 0; j < 30; j++)
		{
			cout << "||";
			cout << this->GetBattleShipNode(i, j)->hit;
		}
	}

	cout << "\n RemaingShips: " << this->GetRemaingShip() << "\n";
}



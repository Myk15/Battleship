#include "Battleship.h"
#include <cstdlib>


Battleship::Battleship(int Size,BattleshipGrid & Grid)
{
	
	SetBattleship(Size,Grid);
}

void Battleship::SetBattleship(int Size, BattleshipGrid & Grid)
{
	int x = 0;
	int RandomX = rand() % 25; //random number for gridplacement
	int RandomY = rand() % 25;

	int Vert = rand() % 2;

	if (Vert == 1)
	{
		if (Grid.GetBattleShipNode(RandomX + Size, RandomY) != NULL) //if the edge of the ship doesnt go out of bounds
		{
			for (int i = 0; i < Size; i++) // depending on size, set placement;
			{
				if (Grid.GetBattleShipNode(RandomX + x, RandomY)->Ship == nullptr)
				{
					Grid.GetBattleShipNode(RandomX + x, RandomY)->Ship = this;
					Grid.GetBattleShipNode(RandomX + x, RandomY)->hit = "-";
				}
				++x;
			}
		}
	}
	
	else 
	{
		if ((Grid.GetBattleShipNode(RandomX, RandomY + Size) != NULL))
		{
			for (int i = 0; i < Size; i++) // depending on size, set placement;
			{
				if (Grid.GetBattleShipNode(RandomX, RandomY + x)->Ship == nullptr)
				{
					Grid.GetBattleShipNode(RandomX, RandomY + x)->Ship = this;
					Grid.GetBattleShipNode(RandomX, RandomY + x)->hit = "-";
				}
				++x;

			}
		}
	}
	
	
}

void Battleship::ReduceHP(BattleshipGrid& Grid)
{
	this->HP--;
	if (this->HP == 0)
	{
		Grid.ReduceRemainingShips();
	}
}

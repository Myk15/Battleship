#include "AI.h"
#include <iostream>


using namespace std;

void AI::GetGo(BattleshipGrid & Grid) // players grid
{
	if (GetTurn())
	{
		int RX = rand() % 30;
		int RY = rand() % 30;

		cout << "AI Chose " << RX << " " << RY << "\n";
		Grid.DidPlayerGetHit(RX, RY);
		
	}
	
}

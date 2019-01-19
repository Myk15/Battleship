#include "Player.h"
#include <iostream>

using namespace std;

Player::Player()
{
	MyGrid = new BattleshipGrid();
	Ship1 = new Battleship(2,*MyGrid);
	Ship2 = new Battleship(3,*MyGrid);
	Ship3 = new Battleship(3,*MyGrid);
	Ship4 = new Battleship(4,*MyGrid);
	Ship5 = new Battleship(5, *MyGrid);
}

void Player::GetGo(BattleshipGrid& Grid)
{
	if (Turn)
	{
		cout << "\n Please give x axis \n";
		int a;
		cin >> a;
		int b;
		cout << "\n Please give y axis \n";
		cin >> b;
		Grid.DidPlayerGetHit(a, b);
		Grid.ShowMyBattleshipGrid();
	}		
}

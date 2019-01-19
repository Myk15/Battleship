#include "Game.h"
#include <time.h>
#include <iostream>

using namespace std;

Game::Game()
{
	int x = 10;
	int y = 10;
	player = new Player();
	ai = new AI();
}

int main()
{
	srand(time(NULL));
	Game *game = new Game();

	int ran;
	ran = rand() % 2;
	if (ran == 1)
	{
		game->GetPlayer()->SetTurn(true);
	}
	else game->GetAI()->SetTurn(true);

	game->PlayGame();
}

void Game::PlayGame()
{
	while (this->player->GetGrid()->GetRemaingShip() != 0 || this->ai->GetGrid()->GetRemaingShip() != 0)
	{

		if (this->player->GetTurn() == true)
		{
			this->player->GetGo(*this->ai->GetGrid());
			this->player->SetTurn(false);
			this->ai->SetTurn(true);
			cout << "Press Enter to Continue\n";
			cin.ignore();
		}
		else
		{
			this->ai->GetGo(*this->player->GetGrid());
			this->ai->SetTurn(false);
			this->player->SetTurn(true);
			cout << "Press Enter to Continue\n";
			cin.ignore();
		}
		
	}
}

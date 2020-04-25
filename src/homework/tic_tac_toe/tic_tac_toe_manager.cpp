#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"
#include<iostream>

//cpp
using std::cout;
//void TicTacToeManager::save_game(const TicTacToe b)why const removed?
//void TicTacToeManager::save_game(TicTacToe& b)
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	games.push_back(std::move(game));
	//std::move(game)
	update_winner_count(game->get_winner());

}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	cout << "\n";
	cout << "X has won   " << x_win<< " times"<<"\n";
	cout << "O has won   " << o_win<< " times" << "\n";
	cout << "no of Ties: " << tie << "\n";
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		tie++;

	}

}

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	//TicTacToeManager manager;
	out << "History of All Games Played: \n";
	
		for (auto &game : manager.games )//&game?
		{
			out << "\n";
			out << game;
			std::string w = game->get_winner();//what is get() why its used?
			out << "\nThe winner is:  " << w << "\n";

		}


	
	return out;
	// TODO: insert return statement here
}
/*for (auto game : manager.games)//&game?
		{
			out << "\n";
			out << game;
			std::string w = game.get().get_winner();//what is get() why its used?
			out << "\nThe winner is:  " << w << "\n";

		}
*/
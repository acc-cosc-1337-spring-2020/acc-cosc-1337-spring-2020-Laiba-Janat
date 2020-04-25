#include "tic_tac_toe_manager.h"
//#include "tic_tac_toe.h"
#include<iostream>

//cpp
using std::cout;

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	
	

}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
	x=x_win;
	o= o_win;
	t = tie;
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
			out << *game;
			std::string w = game->get_winner();//what is get() why its used?
			out << "\nThe winner is:  " << w << "\n";

		}
		out << "\n";
		out << "X has won   " <<manager.x_win << " times" << "\n";
		out << "O has won   " << manager.o_win << " times" << "\n";
		out << "no of Ties: " << manager.tie << "\n";


	
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
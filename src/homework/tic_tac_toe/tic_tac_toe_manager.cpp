#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include<iostream>

//cpp
using std::cout;

void TicTacToeManager::save_game(const TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());

}

void TicTacToeManager::get_winner_total(int & x, int & o, int & t)
{
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

	for(auto game : manager.games )
	{
		out << "History of All Games Played: \n";
		out << game;
		game.get_winner();
		//manager.update_winner_count;

		//out << " X wins: " << manager.x_win <<" \n";
		//out << " O wins: " << manager.o_win << " \n";
		//out << "Ties: " << manager.tie << " \n";
		
		return out;
	}
	// TODO: insert return statement here
}

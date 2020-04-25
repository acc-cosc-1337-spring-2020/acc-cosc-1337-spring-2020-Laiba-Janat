#include<vector>
#include<iostream>
#include "tic_tac_toe.h"
#include<memory>
//#include<functional>

using std::unique_ptr; using std::make_unique;

#ifndef TICTACTOEMANAGER_H //Header Guard
#define TICTACTOEMANAGER_H
class TicTacToeManager{//:public TicTacToe{
public:
	

	void save_game(unique_ptr<TicTacToe>& game);
	friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager& manager);
	void get_winner_total(int& x,int& o, int& t);
private:
	std::vector<std::unique_ptr<TicTacToe>>games;
	
	int x_win{0};
	int o_win{0};
	int tie{0};

	void update_winner_count(std::string winner);
};
#endif
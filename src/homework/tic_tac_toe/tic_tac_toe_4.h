#include "tic_tac_toe.h"

#ifndef TICTACTOE4_H //Header Guard
#define TICTACTOE4_H
class TicTacToe4 :public TicTacToe
{

public:
	TicTacToe4():TicTacToe(4) {}
	//TicTacToe4():TicTacToe(p, win) {}
	TicTacToe4(std::vector<std::string>p, std::string win) {};
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
};
#endif
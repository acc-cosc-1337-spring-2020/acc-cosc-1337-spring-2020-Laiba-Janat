//h
#include "tic_tac_toe.h"
#ifndef TICTACTOE3_H //Header Guard
#define TICTACTOE3_H
class TicTacToe3:public TicTacToe
{

public:
	TicTacToe3():TicTacToe(3){}
	TicTacToe3(std::vector<std::string>p, std::string win) {}
	
private:
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();

};
#endif
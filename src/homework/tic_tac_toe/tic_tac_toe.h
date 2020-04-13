//tic_tac_toe.h the header file for this program 
#include <string>
#include<iostream>
#include<vector>



#ifndef TICTACTOE_H //Header Guard
#define TICTACTOE_H
class TicTacToe
{

public:
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string const get_player() { return player; }
	std::string  get_winner()const { return winner; }
	//void display_board() const;
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& d);
	friend std::istream& operator>>(std::istream& in,  TicTacToe& p );
private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	std::string player;
	std::vector<std::string> pegs{9, " "};
	std::string winner;
};
#endif

/*bool_check_column_win();
	bool_check_row_win();
	bool_check_diagonal_win();
	void set_winner();*/



#ifndef ERROR_H //Header Guard
#define ERROR_H
class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }


private:
	std::string message;
};
#endif






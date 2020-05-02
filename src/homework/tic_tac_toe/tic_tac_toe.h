//tic_tac_toe.h the header file for this program 
#include <string>
#include<iostream>
#include<vector>



#ifndef TICTACTOE_H //Header Guard
#define TICTACTOE_H
class TicTacToe
{

public:
	TicTacToe()= default;
	TicTacToe(std::vector<std::string>p, std::string win) :pegs{ p }, winner{ win }{}
	TicTacToe(int s) : pegs(s*s," "){}
	
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string const get_player() { return player; }
	std::string  get_winner()const { return winner; }
	std::vector<std::string> get_pegs()const{ return pegs; }
	//void display_board() const;
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& d);
	friend std::istream& operator>>(std::istream& in,  TicTacToe& p );

protected:
	std::vector<std::string> pegs{};
	virtual bool check_column_win() = 0;
	virtual bool check_row_win() = 0;
	virtual bool check_diagonal_win() = 0;

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	
	void set_winner();

	std::string player;
	
	std::string winner;
};
#endif





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






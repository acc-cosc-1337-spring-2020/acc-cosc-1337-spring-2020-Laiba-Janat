//tic_tac_toe.h the header file for this program 
#include <string>
#include<iostream>

class Error
{
public:
	Error(std::string msg) : message{ msg } {}
	std::string get_message()const { return message; }


private:
	std::string message;
};

class TicTacToe
{

public:
	void start_game(std:: string first_player);
	std::string const get_player() ;//{ return player; }
	void mark_board(int position);
	
	
private:
	void set_next_player();
	std:: string player{ 0 };
	
};




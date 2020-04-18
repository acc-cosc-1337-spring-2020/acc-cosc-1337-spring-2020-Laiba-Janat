//tic_tac_toe.cpp
#include "tic_tac_toe.h"
#include<iostream>

using std::cout; using std::cin;

bool TicTacToe::game_over()
{
	if (check_column_win()==true|| check_row_win() == true || check_diagonal_win() == true)
	{
		set_winner();
		return true;

	}
	else if(check_board_full()==true)
	{
		winner='C';
		return true;
	}
	else
	{
		return false;
	}
		

	//return check_board_full();
}

void TicTacToe::start_game(std:: string first_player)
{
	
	if (!(first_player == "X" || first_player == "O")) 
	{
		throw Error("Player Must Be X or O. ");
		

	}
	
	player = first_player;
	clear_board();

}

void TicTacToe::mark_board(int position)
{
	
	
		if (position < 1 || position > pegs.size())
		{

			throw Error("Position must be 1 to 9.");

		}

		if (player == "")
		{
			throw Error("Must start game first.");
		}


		pegs[position - 1] = player;
		if (game_over() == false)
		{
			set_next_player();
		}
		//set_next_player();
	
	
	
	
}

/*void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "|" << "\n";
	}
}*/

void TicTacToe::set_next_player()
{
	if (player == "X") 
	{
		player = "O";
	}
	else
	{
		player = "X";

	}
		
}


bool TicTacToe::check_board_full()
{
	for (std::size_t i = 0; i < pegs.size(); ++i) 
	{

		if (pegs[i] == " ")
		{
			return  false;
		}
		
	}

	return true;

}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

bool TicTacToe::check_column_win()
{
	/*if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X") 
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}*/

	return false;
}

bool TicTacToe::check_row_win()
{
	/*if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}*/
	return false;
}

bool TicTacToe::check_diagonal_win()
{/*
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
	{
		return true;
	}
	*/
	return false;
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = 'X';
	}
	else
	{
		winner = 'O';
	}

}

std::ostream & operator<<(std::ostream & out, const TicTacToe & d)
{
	if (d.pegs.size() == 9)
	{
		for (int i = 0; i < 9; i += 3)
		{
			out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "|" << "\n";
		}
	}
	else if(d.pegs.size() == 16)
	{
		for (int i = 0; i < 16; i += 4)
		{
			out << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "|" << d.pegs[i + 3]<< "\n";
		}
	}

	return out;

	// TODO: insert return statement here
}

std::istream & operator>>(std::istream & in,  TicTacToe & p)
{
	//TicTacToe game;
	try
	{
		if (p.pegs.size() == 9)
		{
			int position;
			cout << "\n";
			cout << "Mark the position 1 to 9 that you would like to take: " << "\n";
			in >> position;
			cout << "\n";
			p.mark_board(position);
			cout << "\n";
		}
		else if (p.pegs.size() == 16)
		{
			int position;
			cout << "\n";
			cout << "Mark the position 1 to 16 that you would like to take: " << "\n";
			in >> position;
			cout << "\n";
			p.mark_board(position);
			cout << "\n";
		}
	}
	catch (Error e)
	{
		cout << e.get_message() << "\n";
	}
	return in;

	// TODO: insert return statement here
}



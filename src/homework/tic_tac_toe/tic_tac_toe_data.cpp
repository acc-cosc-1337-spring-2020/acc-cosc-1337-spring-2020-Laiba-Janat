#include "tic_tac_toe_data.h"
#include "tic_tac_toe.h"
#include<vector>
#include<string>
#include<fstream>
//#include<iterator>
//#include<stdio>

//cpp
//using std::cout;
using std::unique_ptr; using std::make_unique;


void TicTacToeData::save_pegs(const std::vector<std::unique_ptr <TicTacToe>>& games)
{

	//std::ofstream file_out("TicTacToe.dat", std::ios_base::trunc);
	std::ofstream file_out(file_name, std::ios_base::trunc);

	for (auto peg : games)
	{
		for (char p: &peg )
		{
			//file_out << p.get_pegs();
			file_out << " ";
		
		}
		
		file_out << peg.get_winner();
		file_out << "\n";


	}

	file_out.close();
}




std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	std::vector<std::unique_ptr<TicTacToe>> boards;
	//std::vector<TicTacToe> games;
	std::vector<std::string> pegs;
	std::ifstream read_file(file_name);

	if (read_file.is_open())
	{
		while (.getline(read_file,line))
		{
			TicTacToe game(pegs, winner);
			boards.push_back(game);
		}
	}



	std::vector<TicTacToe>pegs;
	std::string winner;

	
	read_file.close();

	//return games;
	//return std::vector<std::unique_ptr<TicTacToe>>(games);
}


/*
for (std::vector<std::string>::iterator p = peg.begin(); p != peg.end(); ++p) 
{

	file_out << *p.get_pegs;


}
if (read_file.is_open())
	{
		while (read_file >> pegs >> winner)
		{
			TicTacToe game(pegs, winner);
			games.push_back(game);
		}
	}

*/
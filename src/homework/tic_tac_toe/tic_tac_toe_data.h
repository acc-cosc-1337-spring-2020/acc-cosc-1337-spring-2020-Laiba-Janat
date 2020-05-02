//h
#include<fstream>
#include<string>
#include<vector>
#include "tic_tac_toe.h"

using std::unique_ptr; using std::make_unique;

#ifndef TicTacToe_DATA_H
#define TicTacToe_DATA_H

class TicTacToeData
{
public:
	void save_pegs(const std::vector<std::unique_ptr<TicTacToe>>& games);
	;
	std::vector<std::unique_ptr<TicTacToe>>get_games();
	//void save_temps(std::vector<Temperature>& ts);
	//std::vector<Temperature> get_temps()const;
private:
	const std::string file_name{ "TicTacToe.dat" };
};


#endif // !TicTacToeData_DATA_H

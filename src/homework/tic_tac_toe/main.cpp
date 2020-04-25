#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
//#include<functional>
#include<memory>
//#include <vector>

using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;

int main()
{
	unique_ptr<TicTacToeManager> manager= make_unique<TicTacToeManager>();
	unique_ptr<TicTacToe> TTT = make_unique<TicTacToe>();
	auto option = 'Y';
	int x;
	int o;
	int t;
	//string cont;
	std::vector<unique_ptr<TicTacToeManager>> games;

	//games.push_back(std::move(manager));
	//std::vector<std::reference_wrapper<TicTacToe>> games;

	do
	{
		int game_type;
		cout << "\tMenu\t\n";
		cout << "  1.Enter 3 to play 3x3 Tic Tac Toe\n  2.Enter 4 to play 4x4 Tic Tac Toe\n";
		cin >> game_type;
		unique_ptr<TicTacToeManager> game;
		//unique_ptr<TicTacToeManager> game;
		//TicTacToe3 game3;
		//TicTacToe4 game4;

		if (game_type == 3)
		{
			//TicTacToe3 game3; //games.push_back(game3);
			//game = make_unique<TicTacToe3>();
			unique_ptr<TicTacToe> three =  make_unique<TicTacToe3>();
			games.push_back(std::move(game));
			
		}
		else if (game_type == 4)
		{
			unique_ptr<TicTacToe> four = make_unique<TicTacToe4>();
			games.push_back(std::move(game));
			//game = make_unique<TicTacToe4>();
			//TicTacToe4 game4;//games.push_back(game4);
		}
		//games.push_back(std::move(game));

		//std::unique_ptr<TicTacToe> game ;
		//std::reference_wrapper<TicTacToe> game = games.back();
		string player = "Z";

		//while (!(player == "O" || player == "X"))
		while (!(player == "X" || player == "O" || player == "x" || player == "o"))
		{
			try
			{
				cout << "First Player enter X or O ";
				cin >> player;
				TTT -> start_game(player);
				//game.get().start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}
		//int choice = 1;
		do 
		{
			try
			{
				
				cin >> *game;
				cout << *game;

				//cin >> game.get();
				//cout << game.get();
				//game.get().game_over();
			}
			catch(Error e)
			{
				cout << e.get_message();
				
			}
			
		} while(!(TTT -> game_over()));



		//} while(!(game.get().game_over()));
		//manager->save_game(game);
		//manager->save_game(game.get());
		cout << "\n";
		//cout << *game;
		//cout << game.get();
		cout << "\n";
		manager->get_winner_total(x, o, t);

		cout << "\n";

		//cout << "The winner is player " << game.get().get_winner() << "\n";
		//cout << "\nWinner: " << game.get().get_winner() << "\n";

		//cout << "\nWinner: " << game->get_winner() << "\n";

		cout << "Press Y or y to continue to another game " << "\n";

		cin >> option;

		cout << "\n";

	} while(option == 'Y' || option == 'y');

	cout << *manager;

	return 0;
}
/*                                           Teacher Version Hw09
//###########################################################################################################
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<functional>

using std::cout; using std::cin; using std::string;

int main()
{
	TicTacToeManager manager;
	string cont;
	std::vector<std::reference_wrapper<TicTacToe>> games;

	do
	{
		int game_type;
		cout << "\nTictactoe 3 or 4?";
		cin >> game_type;
		TicTacToe3 game3;
		TicTacToe4 game4;

		if (game_type == 3)
		{
			games.push_back(game3);
		}
		else if (game_type == 4)
		{
			games.push_back(game4);
		}

		std::reference_wrapper<TicTacToe> game = games.back();

		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game.get().start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_message();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> game.get();
				cout << game.get();
			}
			catch (Error e)
			{
				cout << e.get_message();
			}

		} while (!game.get().game_over());

		manager.save_game(game.get());

		cout << "\nWinner: " << game.get().get_winner() << "\n";

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y");

	cout << manager;

	return 0;
}
*/

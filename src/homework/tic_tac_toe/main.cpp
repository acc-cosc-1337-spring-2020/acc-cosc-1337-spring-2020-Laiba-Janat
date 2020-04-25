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
	
	auto option = 'Y';
	int x;
	int o;
	int t;
	
	

	
	do
	{
		int game_type;
		cout << "\tMenu\t\n";
		cout << "  1.Enter 3 to play 3x3 Tic Tac Toe\n  2.Enter 4 to play 4x4 Tic Tac Toe\n";
		cin >> game_type;
		unique_ptr<TicTacToe> game;
		
		if (game_type == 3)
		{
			game =  make_unique<TicTacToe3>();
			
			
		}
		else if (game_type == 4)
		{
			game = make_unique<TicTacToe4>();
			
			
		}
		
		string player = "Z";

		//while (!(player == "O" || player == "X"))
		while (!(player == "X" || player == "O" || player == "x" || player == "o"))
		{
			try
			{
				cout << "First Player enter X or O ";
				cin >> player;
				game->start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
		}
		
		do 
		{
			try
			{
				
				cin >> *game;
				cout << *game;

				
			}
			catch(Error e)
			{
				cout << e.get_message();
				
			}
			
		} while(!(game-> game_over()));



		
		cout << "\n";
		
		cout << "\n";
		

		cout << "\n";

		manager->save_game(game);

		

		cout << "Press Y or y to continue to another game " << "\n";

		cin >> option;

		cout << "\n";

	} while(option == 'Y' || option == 'y');

	cout << *manager;

	return 0;
}


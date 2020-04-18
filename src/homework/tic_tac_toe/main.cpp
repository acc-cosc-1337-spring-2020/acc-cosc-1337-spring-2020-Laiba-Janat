#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<vector>

using std::cout; using std::cin;


int main()
{
	auto option = 'Y';
	TicTacToeManager manager;
	do {
		

		std::string first_player = "Z";
		
		//std::string choice = "p";
		bool winner = true;
		int x;
		int o;
		int t;
		int GT ;
		std::vector<std::reference_wrapper<TicTacToe>>games;

		cout << "\tMenu\t\n";
		cout << " 1. Enter 3 to play 3x3 Tic Tac Toe\n 2.Enter 4 to play 4x4 Tic Tac Toe\n";
		cin >> GT;
		if (GT == 3) 
		{
			TicTacToe3 game3;
			games.push_back(game3);
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O ";
					cin >> first_player;
					game3.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}
			}
			do 
			{
				cin >> game3;
				cout << game3;
					/*int position;
				cout << "Mark the position 1 to 9 that you would like to take: " << "\n";
					cin >> position;
					game.mark_board(position);
					//ostream;
					//game.display_board();*/
				winner = game3.game_over();
			
				
				//cout << "Press p or P to continue to another turn";
				//cin >> choice;
			} while (winner == false);


			manager.save_game(game3);
			cout << "\n";
			cout << game3;
			cout << "\n";
			manager.get_winner_total(x, o, t);
			cout << "\n";
			cout << "The winner is player " << game3.get_winner() << "\n";




		}
		else if (GT == 4)
		{
			TicTacToe4 game4;
			games.push_back(game4);
			while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
			{
				try
				{
					cout << "First Player enter X or O ";
					cin >> first_player;
					game4.start_game(first_player);
				}
				catch (Error e)
				{
					cout << e.get_message() << "\n";
				}

			}

			do {
				
				cin >> game4;
				cout << game4;
				winner = game4.game_over();

			} while (winner == false);


			manager.save_game(game4);
			cout << "\n";
			cout << game4;
			cout << "\n";
			manager.get_winner_total(x, o, t);
			cout << "\n";
			cout << "The winner is player " << game4.get_winner() << "\n";


		}
		
		
	//} while (choice == "P" || choice == "p");
		cout << "Press Y or y to continue to another game " << "\n";
		cin >> option;
		cout << "\n";
	}while (option == 'Y' || option == 'y');

	cout << manager;



	return 0;


}
	







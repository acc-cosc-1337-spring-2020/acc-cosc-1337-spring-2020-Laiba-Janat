#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"


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


		TicTacToe game;

		
		

		while (!(first_player == "X" || first_player == "O" || first_player == "x" || first_player == "o"))
		{
			try
			{
				cout << "First Player enter X or O ";
				cin >> first_player;
				game.start_game(first_player);
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}

		}
		
		do {
			cin >> game;
			cout << game;
			/*int position;
	cout << "Mark the position 1 to 9 that you would like to take: " << "\n";
					cin >> position;
					game.mark_board(position);
					//ostream;
					//game.display_board();*/
			winner = game.game_over();
			
				
				//cout << "Press p or P to continue to another turn";
				//cin >> choice;
		} while (winner == false);
		
		manager.save_game(game);
		cout << game;
		manager.get_winner_total(x, o, t);
		cout << "The winner is player " << game.get_winner() << "\n";
		
	//} while (choice == "P" || choice == "p");
		cout << "Press Y or y to continue to another game " << "\n";
		cin >> option;
		cout << "\n";
	}while (option == 'Y' || option == 'y');

	cout << manager;


	return 0;


}
	






/*
//{

			//cout << "Enter the position you want: " << "\n";
			//cin >> position;
	//}


	//auto menu = 'Y';






	while (first_player == "X", "O")
	{
		try
		{
			cout << "First Player enter X or O ";
			cin >> first_player;
			game.start_game(first_player);


		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";

		}

	}
	do
	{
		try {
			int position;
			cout << "Mark the position 1 to 9 that you would like to take: " << "\n";
			cin >> position;
			game.mark_board(position);
		}
		catch(Error e)
		{
			cout << e.get_message() << "\n";
		}
		cout << "to continue press Y to continue to another game: "<< "\n";
	} while (choice == "Y" || choice == "y");


	return 0;
}*/
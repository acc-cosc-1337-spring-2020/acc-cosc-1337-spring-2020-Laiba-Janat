#include "tic_tac_toe.h"


using std::cout; using std::cin;


int main() 
{
	std::string first_player; 
	//int position;
	std::string choice;


	
    TicTacToe game;

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
		cout << "to continue press Y: "<< "\n";
	} while (choice == "Y" || choice == "y");
	

	return 0;
}
/*do {
		cout << " First Player enter X or O of your choice:  " << "\n";
		cin >> first_player;
		game.start_game(first_player);

		do {

		}
		while
		{

		}
		cout << "Press Y or y to continue the game";
		cin >> choice;
	}

	while (choice == 'Y' || choice == 'y')
	{

			cout << "Enter the position you want: " << "\n";
			cin >> position;
	}


	//auto menu = 'Y';*/
#include "tic_tac_toe.h"


using std::cout; using std::cin;


int main() 
{
	std::string first_player; 
	auto option = 'Y';
	std::string choice = "p";

	TicTacToe game;
	
do {
	
	
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
	
	
	do {
		
		
		try 
		{
			int position;
			cout << "Mark the position 1 to 9 that you would like to take: " << "\n";
			cin >> position;
			game.mark_board(position);
		}
		catch(Error e)
		{
			cout << e.get_message() << "\n";
		}
		cout << "Press p or P to continue to another turn";
		cin >> choice;

	} while (choice == "P" || choice == "p");
	
	cout << "Press Y or y to continue to another round of the game";
	cin >> option;
}

while (option == 'Y' || option == 'y');
	






//{

			//cout << "Enter the position you want: " << "\n";
			//cin >> position;
	//}


	//auto menu = 'Y';*/






/*

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
}*/
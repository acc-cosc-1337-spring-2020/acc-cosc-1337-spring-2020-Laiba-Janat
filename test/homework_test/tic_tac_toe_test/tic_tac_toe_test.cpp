#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark.board before start game") 
{
	
	TicTacToe game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);


}
TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe game;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
	

}
TEST_CASE("Test set first player to X")
{
	TicTacToe game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test set first player to O")
{

	TicTacToe game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

}

TEST_CASE("Test start game with X flow")
{
	
	TicTacToe game;


	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");

}


TEST_CASE("Test start game with O flow")
{
	TicTacToe game;


	game.start_game("O");
	REQUIRE(game.get_player() == "O");

	game.mark_board(2);
	REQUIRE(game.get_player() == "X");

}

/*TEST_CASE("Test game ends when board is full")
{
	TicTacToe game;
	game.start_game("X");

	for (std::size_t i = 1; i < 9; ++i)
	{

		game.mark_board(i);
		REQUIRE(game.game_over() == false);

	}
	game.mark_board(1);
	game.mark_board(2);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(8);
	game.mark_board(9);
	REQUIRE(game.game_over() == true);

}*/
TEST_CASE("Test Mark Position ")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);

	//game.mark_board(5);how to show error not thrown
	game.mark_board(5);
	
}

TEST_CASE("Test win by first column")//, "[X wins column]"
{ 
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
		//X wins
	REQUIRE(game.game_over() == true);
	;
	

}
TEST_CASE("Test win by second column")// "[X wins first column]")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X
		//X wins
	REQUIRE(game.game_over() == true);
	


}
TEST_CASE("Test win by third column")// "[X wins  column]")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
		//X wins
	REQUIRE(game.game_over() == true);
}





TEST_CASE("Test win by first row")// "[X wins row]"
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
		//X wins
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by second row")// "[X wins row]"
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X
		//X wins
	REQUIRE(game.game_over() == true);
}
TEST_CASE("Test win by third row")// "[X wins row]"
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
		//X wins
	REQUIRE(game.game_over() == true);
}




TEST_CASE("Test win diagonally top left")// "[X wins row]"
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
		//X wins
	REQUIRE(game.game_over() == true);

	REQUIRE(game.get_winner() == "X");//Hw 08 change
	// I did not understand what professor expected for test cases so i did this
}


TEST_CASE("Test win diagonally bottom left")// "[X wins row]"
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
		//X wins
	REQUIRE(game.game_over() == true);
}



TEST_CASE("Test for no winner ")
{
	TicTacToe game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
	REQUIRE(game.game_over() == true);
}



	
}

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can't call mark.board before start game") 
{
	
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);


}

TEST_CASE("Test can't call mark.board before start game4")
{

	TicTacToe4 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);


}


TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);
	

}

TEST_CASE("Test start accepts only X or O for game4")
{
	TicTacToe4 game;
	REQUIRE_THROWS_AS(game.start_game("A"), Error);


}


TEST_CASE("Test set first player to X")
{
	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test set first player to X for game4")
{
	TicTacToe4 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

}

TEST_CASE("Test set first player to O")
{

	TicTacToe3 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

}


TEST_CASE("Test set first player to O for game 4")
{

	TicTacToe4 game;
	game.start_game("O");
	REQUIRE(game.get_player() == "O");

}


TEST_CASE("Test start game with X flow")
{
	
	TicTacToe3 game;


	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");

}

TEST_CASE("Test start game with X flow for game 4")
{

	TicTacToe4 game;


	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");

}




TEST_CASE("Test start game with O flow")
{
	TicTacToe3 game;


	game.start_game("O");
	REQUIRE(game.get_player() == "O");

	game.mark_board(2);
	REQUIRE(game.get_player() == "X");

}


TEST_CASE("Test start game with O flow for game4")
{
	TicTacToe4 game;


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
	TicTacToe3 game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);

	//game.mark_board(5);how to show error not thrown
	game.mark_board(5);
	
}
TEST_CASE("Test Mark Position for game4 ")
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(17), Error);

	//game.mark_board(5);how to show error not thrown
	game.mark_board(5);

}

TEST_CASE("Test win by first column")//, "[X wins column]"
{ 
	TicTacToe3 game;
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
	TicTacToe3 game;
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
	TicTacToe3 game;
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

TEST_CASE("Test win by first column for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test win by second column for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test win by third column for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}

TEST_CASE("Test win by fourth column for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}






TEST_CASE("Test win by first row")// "[X wins row]"
{
	TicTacToe3 game;
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
	TicTacToe3 game;
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
	TicTacToe3 game;
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


TEST_CASE("Test win by first row for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test win by second row for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(5);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test win by third row for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(9);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test win by fourth row for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}






TEST_CASE("Test win diagonally top left")// "[X wins row]"
{
	TicTacToe3 game;
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
	TicTacToe3 game;
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


TEST_CASE("Test win diagonally top left for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}

TEST_CASE("Test win diagonally bottom for game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(4);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(2);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//O
			//X wins
	REQUIRE(game.game_over() == true);
	;


}


TEST_CASE("Test for no winner ")
{
	TicTacToe3 game;
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

TEST_CASE("Test for no winner game4")//, "[X wins column]"
{
	TicTacToe4 game;
	game.start_game("X");

	REQUIRE(game.game_over() == false);
	game.mark_board(2);//X        
	REQUIRE(game.game_over() == false);
	game.mark_board(7);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(11);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(5);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(10);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(9);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(1);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(3);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(8);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(4);//O        
	REQUIRE(game.game_over() == false);
	game.mark_board(12);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(6);//O          
	REQUIRE(game.game_over() == false);
	game.mark_board(14);//X          
	REQUIRE(game.game_over() == false);
	game.mark_board(16);//O
	REQUIRE(game.game_over() == false);
	game.mark_board(13);//X
	REQUIRE(game.game_over() == false);
	game.mark_board(15);//O
	REQUIRE(game.game_over() == true);
	
}






	


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test Rectangle Area") {

	Rect rectangles1(4, 5);

	REQUIRE(rectangles1.get_Area() == 20);



	Rect rectangles2(10, 10);

	REQUIRE(rectangles2.get_Area() == 100);



	Rect rectangles3(100, 10);

	REQUIRE(rectangles3.get_Area() == 1000);
}

	

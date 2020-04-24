#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test class copy with stack variable") {

	Vector v1(3);
	Vector v2 = v1;


	REQUIRE(v1.Size() == v2.Size());
	//v1.set_size(5);
	//REQUIRE(v1.Size() == 5);
	//REQUIRE(v1.Size() == 3);
}


TEST_CASE("Test class copy with dynamic memory with heap variable ") 
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());

	v1[1] = 5;
}

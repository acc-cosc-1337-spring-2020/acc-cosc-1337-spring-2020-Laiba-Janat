#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"
#include "decision.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test for Gross Pay")
{
	REQUIRE(Gross_Pay(10, 15) == 150);
	REQUIRE(Gross_Pay(5, 20) == 100);
	REQUIRE(Gross_Pay(20, 10) == 200);
	REQUIRE(Gross_Pay(50, 10) == 550);



}



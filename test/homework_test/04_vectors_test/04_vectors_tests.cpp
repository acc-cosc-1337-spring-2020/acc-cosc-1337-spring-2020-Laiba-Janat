#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
#include <vector>


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test Get Max function") {
	std::vector<int> nums{ 3,8,1,99,1000 };
	REQUIRE(get_max_from_vector (nums)== 1000);
	nums = { 15, 12, 11, 99, 88 };
	REQUIRE(get_max_from_vector(nums) == 99);
	nums = { 150, 120, 11, 990, 88888 };
	REQUIRE(get_max_from_vector(nums) == 88888);
}
TEST_CASE("test is_prime function") {
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}

TEST_CASE("test vector_of_primes function") {
	std::vector<int> nums = { 2, 3, 5, 7 };
	REQUIRE(vector_of_primes(10) == nums);
	nums = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(50) == nums);
}

	







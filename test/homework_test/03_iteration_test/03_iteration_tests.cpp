#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"
#include <string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE(" Test of gc content function ") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375 );
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
	

}


TEST_CASE(" Test of reverse dna function ") {
	REQUIRE( get_reversedna("AGCTATAG") == "GATATCGA");
	REQUIRE( get_reversedna("CGCTATAG") == "GATATCGC");


}



TEST_CASE(" Test of reverse complement dna function ") {
	REQUIRE( get_reversecomp_of_dna("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE( get_reversecomp_of_dna("CCCGGAAAAT") == "ATTTTCCGGG");


}



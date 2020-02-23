#include "dna.h"
using std::string;
/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(const string & dna)
{
	int ct_count = 0;
	
	double total;
	double gc_cont;
	for (int i = 0;  i < dna.size(); i++) {

		if (dna[i] == 'C' || dna[i] == 'T') {

			ct_count++;

		}

	}
	total = ct_count;
	gc_cont = total / dna.size();


	return gc_cont;
}





/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reversedna(std::string dna)
{
	std::string rev_dna;

	for (int i = dna.size(); i >= 0; i--) {
		
		rev_dna += dna[i];
	}

	return rev_dna;
}






/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_reversecomp_of_dna(std::string dna)
{
	std::string dna_rev = get_reversedna(dna);
	
	for (int i = 0; i < dna_rev.size(); ++i) {
	
		if (dna_rev[i] == 'C') {

			dna_rev[i] = 'G';

		}
		else if (dna_rev[i] == 'G') {
			
			dna_rev[i] = 'C';

		}
		else if (dna_rev[i] == 'T') {

			dna_rev[i] = 'A';

		}
		else if (dna_rev[i] == 'A') {
			
			dna_rev[i] = 'T';

		}
	
	}


	

	return dna_rev;
}


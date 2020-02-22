//write include statements
#include <iostream>
#include <string>
#include"dna.h"
//write using statements
using std::cout; using std::cin;



/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto menu = 'Y';

	do {

		int choice;

		cout << "   MENU   ";
		cout << "1.Press 1 for GC content of DNA";
		cout << "2.Press 2 for Reverse of DNA";
		cout << "3.Press 3 for Reverse Complement of DNA";
		cin >> choice;
		if (choice == 1) {

			std::string gcdna_cont;

			std::string dna;

			cout << "Enter DNA String: ";

			cin >> dna;

			double gcdna_cont = get_gc_content(const std::string &dna);

			cout << "The GC content of the DNA string is: " << gcdna_cont;
		}
		else if (choice == 2) {

			std::string dna;

			std::string dna_rev;

			cout << "Enter DNA String: ";

			cin >> dna;

			std::string dna_rev = get_reversedna(std::string dna);

			cout << "The Reverse of the DNA string is: " << std::string dna_rev;

		}
		else if (choice == 3) {

			std::string dna;

			std::string dna_revcomp;

			cout << "Enter DNA String: ";

			cin >> dna;

			std::string dna_revcomp = get_reversecomp_of_dna(std::string dna);

			cout << "The Reverse Complement of the DNA string is: " << std::string dna_rev;

		}
		else {

			cout << " Incorrect Choice ";
			cout << " Please Choose one from the Menu"
		}
		cout << "Press Y or y to continue";
		cin >> menu;

	
	}
	
	while (menu == 'Y' || menu == 'y') {
		
		}

	return 0;
}
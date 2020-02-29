#include<iostream>
#include<vector>
#include<string>
#include"vectors.h"


using std::cout; using std::cin;


/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/

int main()
{
	auto menu = 'Y';

	do {

		int choice;

		cout << "   MENU   ";
		cout << "1.Press 1 to get Max number";
		cout << "2.Press 2 to get a Vector of Prime Numbers upto and Including your number";
		
		cin >> choice;
		if (choice == 1) {

			int nums;

			int max_number;
			
			std::vector<int>numbers;

			cout << "Enter Your Numbers: ";


			while (cin >> nums) 
			{
				numbers.push_back(nums);

			}

			max_number = get_max_from_vector(numbers);

			cout << "The Max number is: " << max_number;
		}
		else if (choice == 2) {


			int num;

			int onlyprimes;

			cout << "Enter Your Number: ";

			cin >> num;

			onlyprimes = vector_of_primes(num);



			 
			cout << " The  primes uptill and including your number are: " << onlyprimes ;

		}
		else {

			cout << " Incorrect Choice ";
			cout << " Please Choose one from the Menu";
		}
		cout << "Press Y or y to continue";
		cin >> menu;


	}

	while (menu == 'Y' || menu == 'y');

	return 0;
}
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

		cout << "   MENU   " << "\n";
		cout << "1.Press 1 to get Max number" << "\n";
		cout << "2.Press 2 to get a Vector of Prime Numbers upto and Including your number" << "\n";
		
		cin >> choice;
		if (choice == 1) {
			
			auto d = 'x';
			int nums;

			int max_number;
			
			std::vector<int>numbers = { 8, 4, 20, 88, 66, 99 };

			cout << "Enter Your Numbers: " << "\n";

			
			// i want to get user numbers saved to vector and keep 
			//getting no's till user de but cant accomplish this correctly :(
			auto add_more = 'n';
			do 
			{
				cout << "Enter number: " << "\n";
				cin >> nums;
				numbers.push_back(nums);
				cout << "Add another number y?";
				cin >> add_more;
			} 
			while (add_more == 'y' );
			
			

			max_number = get_max_from_vector(numbers);

			cout << "The Max number is: " << "\n" << max_number;
		}
		else if (choice == 2) {


			int num;

			std::vector<int> onlyprimes;

			cout << "Enter Your Number: " << "\n";

			cin >> num;

			onlyprimes = vector_of_primes(num);



			 
			cout << " The  primes uptill and including your number are: " << "\n";
				
			for (int i = 0; i < onlyprimes.size(); ++i)
			{
				std::cout << onlyprimes[i] << "\n";

			}

		}
		else {

			cout << " Incorrect Choice " << "\n";
			cout << " Please Choose one from the Menu" << "\n";
		}
		cout << "Press Y or y to continue" << "\n";

		cin >> menu;


	}

	while (menu == 'Y' || menu == 'y');

	return 0;
}
//write includes statements
#include <iostream>
#include <string>
#include "loops.h"



//write using statements for cin and cout
using std::cin; using std::cout;


/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int choice;
	do
	{
		int num;
		
		cout << "Enter a number : ";
		cin >> num;
		cout << factorial(num) << "\n\n";


		std::cout << "If you want to continue press 1 as your choice: ";
		std::cin >> choice;
	} while (choice == 1);
	
	
	return 0;
}
#include "bank_account.h"
#include<iostream>
#include<vector>



using std::cout;using std::cin;


int main()
{
	std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) };

	for (auto act : accounts)
	{
		cout << act.get_balance() << "\n";
	}
	
	
	BankAccount account(500);
	auto balance = account.get_balance();

    

	auto amount{ 0 };
	cout << "Enter Deposit Amount: ";
	cin >> amount;

	try {

		account.deposit(amount);
		cout << "Balance is : " << balance;

	}
	catch(Invalid e)
	{
		
		cout << e.get_error() << "\n";

	}

	return 0;
}
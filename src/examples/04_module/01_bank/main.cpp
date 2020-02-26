#include "bank_account.h"
#include<iostream>


using std::cout;using std::cin;


int main()
{
	BankAccount account(500);
    auto balance = account.get_balance();

	auto amount{ 0 };
	cout << "Enter Deposit Amount: ";
	cin >> amount;

	account.deposit(amount);
	cout << "Balance is : " << balance;

	return 0;
}
//checking_account.h
#include "bank_account.h"
class CheckingAccount : public BankAccount // inheritance syntax this inheriting baank account class
{
public:
	CheckingAccount() = default;
	explicit CheckingAccount(int b) : BankAccount(b) {}
	int get_balance()const { return balance * (1 + get _rate()); } //were going to overwrite the functionalty with another

};
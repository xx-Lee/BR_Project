#include <string>
#include <iostream>
#include "defineATM.h"

int balance = 10;
//account number is 123456789
bool BankCheckPinNum(int pin, int account) {
	if (pin == 1234 && account == 123456789)
		return true;
	else
		return false;
}

int BankGetBalance() {
	return balance;
}

void BankDeposit() {
	balance += 1;
}

void BankWithdraw() {
	balance -= 1;
}
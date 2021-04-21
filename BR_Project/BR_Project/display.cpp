#include <string>
#include <iostream>

#include "defineATM.h"

using namespace std;

extern string displayMsg;
extern int BankGetBalance();

void SetDisplayMsg(int no)
{
	switch (no)
	{
	case MSG_INIT:
		displayMsg = "Hello! ATM.\r\n";
		displayMsg += "If You Want Use ATM, Insert a Card\r\n";
		displayMsg += "(Enter the letter c)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_NO:
		displayMsg = "Enter Your PIn Number.\r\n";
		displayMsg += "(0 ~ 9999)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_ERR:
		displayMsg = " * Enter only 4 digits. * \r\n";
		displayMsg += "Enter Your PIn Number.\r\n";
		displayMsg += "(0 ~ 9999)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_DISCORRECT:
		displayMsg = " * Pin Number is Discorrect. * \r\n";
		displayMsg += "Enter Your PIn Number.\r\n";
		displayMsg += "(0 ~ 9999)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_MAIN:
		displayMsg = "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "Enter 1 or 2 or 3\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_MAIN_ERR:
		displayMsg = " * Enter only 1 or 2 or 3 * \r\n";
		displayMsg += "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "Enter 1 or 2 or 3\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_SHOW_BALANCE:
		displayMsg = "[Your Balance : ";
		displayMsg += to_string(BankGetBalance());
		displayMsg += "$]\r\n";
		displayMsg += "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "Enter 1 or 2 or 3\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_DEPOSIT:
		displayMsg = "How much will you deposit?\r\n";
		displayMsg += "(Only $1, enter 1)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_DEPOSIT_ERR:
		displayMsg = " * Enter only 1 * \r\n ";
		displayMsg += "How much will you deposit?\r\n";
		displayMsg += "(Only $1, enter 1)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_WITHDRAW:
		displayMsg = "How much will You Withdraw?\r\n";
		displayMsg += "(Only $1, enter 1)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_WITHDRAW_ERR:
		displayMsg = " * Enter only 1 * \r\n ";
		displayMsg += "How much will You Withdraw?\r\n";
		displayMsg += "(Only $1, enter 1)\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	default:
		break;
	}
}

void processDisplay()
{
	if (displayMsg != "") {
		cout << displayMsg << endl;
		displayMsg = "";
	}
}
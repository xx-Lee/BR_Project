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
		displayMsg = "**************************************************\r\n";
		displayMsg += "Hello! ATM.\r\n";
		displayMsg += "If you want use ATM, Insert a card\r\n";
		displayMsg += "Conditions of use - Enter lowercase 'c'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_NO:
		displayMsg = "**************************************************\r\n";
		displayMsg += "Enter Your PIn Number : 0000 ~ 9999\r\n";
		displayMsg += "Conditions of use - Enter digit '1234'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_ERR:
		displayMsg = "**************************************************\r\n";
		displayMsg += "ERROR - Enter only 4 digits.\r\n";
		displayMsg += "Enter Your PIn Number : 0000 ~ 9999\r\n";
		displayMsg += "Conditions of use - Enter digit '1234'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CHECK_PIN_DISCORRECT:
		displayMsg = "**************************************************\r\n";
		displayMsg += "ERROR - Pin Number is Discorrect.\r\n";
		displayMsg += "Enter Your PIn Number : 0000 ~ 9999\r\n";
		displayMsg += "Conditions of use - Enter digit '1234'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";;
		break;
	case MSG_CARD_MAIN:
		displayMsg = "**************************************************\r\n";
		displayMsg += "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "c - Remove a Card\r\n";
		displayMsg += "Conditions of use - Enter digit '1' or '2' or '3' or lowercase 'c' \r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_MAIN_ERR:
		displayMsg = "**************************************************\r\n";
		displayMsg += "ERROR - Enter only '1' or '2' or '3' or 'c'\r\n";
		displayMsg += "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "c - Remove a Card\r\n";
		displayMsg += "Conditions of use - Enter digit '1' or '2' or '3' or lowercase 'c' \r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_SHOW_BALANCE:
		displayMsg = "**************************************************\r\n";
		displayMsg += "[Your Balance : ";
		displayMsg += to_string(BankGetBalance());
		displayMsg += "$]\r\n";
		displayMsg += "1 - Show Your Balance\r\n";
		displayMsg += "2 - Deposit\r\n";
		displayMsg += "3 - Withdraw\r\n";
		displayMsg += "c - Remove a Card\r\n";
		displayMsg += "Conditions of use - Enter digit '1' or '2' or '3' or lowercase 'c' \r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_DEPOSIT:
		displayMsg = "**************************************************\r\n";
		displayMsg += "How much will you deposit?\r\n";
		displayMsg += "Conditions of use - Only $1, Enter digit '1'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_DEPOSIT_ERR:
		displayMsg = "**************************************************\r\n";
		displayMsg += "ERROR - Enter only digit 1\r\n ";
		displayMsg += "How much will you deposit?\r\n";
		displayMsg += "Conditions of use - Only $1, Enter digit '1'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_WITHDRAW:
		displayMsg = "**************************************************\r\n";
		displayMsg += "How much will you withdraw?\r\n";
		displayMsg += "Conditions of use - Only $1, Enter digit '1'\r\n";
		displayMsg += "**************************************************\r\n";
		displayMsg += "\r\n\r\n\r\n\r\n\r\n";
		break;
	case MSG_CARD_WITHDRAW_ERR:
		displayMsg = "**************************************************\r\n";
		displayMsg += "ERROR - Enter only digit 1\r\n ";
		displayMsg += "How much will you withdraw?\r\n";
		displayMsg += "Conditions of use - Only $1, Enter digit '1'\r\n";
		displayMsg += "**************************************************\r\n";
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
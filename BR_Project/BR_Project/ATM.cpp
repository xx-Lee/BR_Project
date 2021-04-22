#include <string>
#include <iostream>
#include "defineATM.h"

using namespace std;

extern _menu menu;
extern string operationInput;

extern void SetDisplayMsg(int no);
extern bool BankCheckPinNum(int pin, int account);
extern void BankDeposit();
extern void BankWithdraw();

void CheckInputCard()
{
	if (operationInput == "c")
	{
		menu = MENU_CHECK_PIN_NUM;
		SetDisplayMsg(MSG_CHECK_PIN_NO);
	}
	else
	{
		SetDisplayMsg(MSG_INIT);
	}
}

void CheckPinNum()
{
	int tmp;

	if (operationInput.length() != 4) {
		SetDisplayMsg(MSG_CHECK_PIN_ERR);
		return;
	}
	else if (operationInput[0] < '0' || operationInput[0] > '9') {
		SetDisplayMsg(MSG_CHECK_PIN_ERR);
		return;
	}
	else if (operationInput[1] < '0' || operationInput[1] > '9') {
		SetDisplayMsg(MSG_CHECK_PIN_ERR);
		return;
	}
	else if (operationInput[2] < '0' || operationInput[2] > '9') {
		SetDisplayMsg(MSG_CHECK_PIN_ERR);
		return;
	}
	else if (operationInput[3] < '0' || operationInput[3] > '9') {
		SetDisplayMsg(MSG_CHECK_PIN_ERR);
		return;
	}
	else
	{
		tmp = stoi(operationInput);
		if (BankCheckPinNum(tmp, 123456789))			//account number is 123456789
		{
			menu = MENU_CARD_MAIN;
			SetDisplayMsg(MSG_CARD_MAIN);
		}
		else
		{
			SetDisplayMsg(MSG_CHECK_PIN_DISCORRECT);
		}
	}
}

void CardMain()
{
	if (operationInput.length() != 1)
	{
		SetDisplayMsg(MSG_CARD_MAIN_ERR);
	}
	else if (operationInput[0] == '1')
	{
		SetDisplayMsg(MSG_CARD_SHOW_BALANCE);
	}
	else if (operationInput[0] == '2')
	{
		menu = MENU_CARD_DEPOSIT;
		SetDisplayMsg(MSG_CARD_DEPOSIT);
	}
	else if (operationInput[0] == '3')
	{
		menu = MENU_CARD_WITHDRAW;
		SetDisplayMsg(MSG_CARD_WITHDRAW);
	}
	else if (operationInput[0] == 'c')
	{
		menu = MENU_INIT;
		SetDisplayMsg(MSG_INIT);
	}
	else
	{
		SetDisplayMsg(MSG_CARD_MAIN_ERR);
	}
}

void CardDeposit()
{
	if (operationInput.length() != 1)
	{
		SetDisplayMsg(MSG_CARD_DEPOSIT_ERR);
	}
	else if (operationInput[0] == '1')
	{
		BankDeposit();
		menu = MENU_CARD_MAIN;
		SetDisplayMsg(MSG_CARD_MAIN);
	}
	else
	{
		SetDisplayMsg(MSG_CARD_DEPOSIT_ERR);
	}
}

void CardWithdraw()
{
	if (operationInput.length() != 1)
	{
		SetDisplayMsg(MSG_CARD_WITHDRAW_ERR);
	}
	else if (operationInput[0] == '1')
	{
		BankWithdraw();
		menu = MENU_CARD_MAIN;
		SetDisplayMsg(MSG_CARD_MAIN);
	}
	else
	{
		SetDisplayMsg(MSG_CARD_WITHDRAW_ERR);
	}
}

void processMenu()
{
	switch (menu)
	{
	case MENU_INIT:
		CheckInputCard();
		break;
	case MENU_CHECK_PIN_NUM:
		CheckPinNum();
		break;
	case MENU_CARD_MAIN:
		CardMain();
		break;
	case MENU_CARD_DEPOSIT:
		CardDeposit();
		break;
	case MENU_CARD_WITHDRAW:
		CardWithdraw();
		break;
	default:
		break;
	}
}

void processOperation()
{
	cin >> operationInput;
}
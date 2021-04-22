#include <stdio.h>
#include <string>
#include <iostream>
#include "defineATM.h"

using namespace std;

//Global Var.
_menu menu = MENU_INIT;
string displayMsg = "";
string operationInput = "";

//display.cpp
extern void SetDisplayMsg(int no);
extern void processDisplay();

//ATM.cpp
extern void processMenu();
extern void processOperation();

int main() {
	SetDisplayMsg(MSG_INIT);
	
	while (1)
	{
		processDisplay();
		processOperation();
		processMenu();
	}

	return 0;
}
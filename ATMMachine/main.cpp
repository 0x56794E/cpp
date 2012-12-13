/**
 * Written by: Vy Thuy Nguyen
 * Date created: January, 2010
 * Last modified: June, 2010
 *
 *
 * Notes: 
 *	1) This is a console application. You need to hit 'Enter' after each input to proceed.
 *	2) Look at ATM::generateRecords() for user and password.
 */

#include <iostream>
#include <conio.h>
#include "ATM.h"
#include <Windows.h>
using namespace std;

//void getPassword(char[]);

int main()
{
	bool cont;
	ATM myATM = ATM();

welcome:


	//Get id and pin
	do
	{
		system("cls");
		system("color 27");
		myATM.printGreeting();
		Sleep(2500);
		system("cls");	
		cont = myATM.getUserNPass();
		if (!cont)
			Sleep(3000);
	}
	while (!cont);


	//Main menu

	myATM.printMainMenu();
	switch(getch())
	{
	case '1': 
		myATM.doOpt1();
		goto welcome;

	case '2': 
		myATM.doOpt2();
		goto welcome;

	case '3': 
		myATM.doOpt3();
		goto welcome;

	case '4': 
		myATM.doOpt4();
		goto welcome;

	case '5':
		goto welcome;

	default: 
		goto welcome;
	} 


	system("pause");

	return 0;
}

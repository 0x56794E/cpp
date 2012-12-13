/*
 * Project 1: Game Of Craps
 * This program stimulates the game of craps.
 * Written by: Vy Thuy Nguyen
 * Date: Feb 13, 2010
 */
 
#include "myLibrary.h"

//**********
//* main() *
//**********
int main()
{
	system("color 50");
	short accuScore = 0;
	char name[80] = {0};
	
	printGameTitle();	
	greeting();
	getName(name);

	for (;;)
	{
		gotoxy(0,18);
		printMainMenu();
	
		switch(getch())
		{
			case '1': 
				doOpt1(accuScore, name);
				break;

			case '2': 
				doOpt2(accuScore,name);
				break;

			case '3': 
				doOpt3(accuScore);
				break;

			case '4': 
				doOpt4();
				break;

			default: 
				printErrorMsg();
				getch();
				break;
		}
	}

	return 0;
}

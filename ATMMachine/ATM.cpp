
/**
 * Written by: Vy Thuy Nguyen
 * Date created: January, 2010
 * Last modified: June, 2010
 */

#include "ATM.h"
#include <ctime>
#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include <Windows.h>
using namespace std;


ATM::ATM()
{
	loadRecords();
	currentRecord = NULL;
	for (int n = 0; n < 5; n++)
		user[n] = pass[n] = 0;
	user[5] = user[6] = user[7] = user[8] = 0;
}

ATM::~ATM()
{
}

void ATM::gotoxy(short x, short y)
{
	COORD posi = {x, y}; 
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), posi);
}
void ATM::printGreeting()
{
	
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

	//************************* WELCOME ****************************
	cout << endl;

	//line1
	cout << "      " << char(178) << "     " << char(178) << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << "   " << char(178);
	cout << "          ";
	for (int n = 0; n < 6; n++)
		cout << char(178);
	cout << "    ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << "    " << char(178) << "     " << char(178);
	cout << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << endl;

	//line2
	cout << "      " << char(178) << "     " << char(178) <<"   " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178) << "     " << char(178);
	cout << "   ";
	cout << char(178) << char(178) << "   " << char(178) << char(178);
	cout << "   " << char(178);
	cout << endl;

	//line3
	cout << "      " << char(178) << "     " << char(178) <<"   " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178) << "     " << char(178);
	cout << "   " << char(178) << " " << char(178) << " " << char(178) << " " << char(178);
	cout << "   " << char(178);
	cout << endl;

	//line4
	cout << "      " << char(178) << "     " << char(178) << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << "   " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178) << "     " << char(178);
	cout << "   " << char(178) << "  " << char(178) << "  " << char(178);
	cout << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << endl;

	//line5
	cout << "      " << char(178) << "  " << char(178) << "  " << char(178) << "   " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178) << "     " << char(178);
	cout << "   " << char(178) << "     " << char(178);
	cout << "   " << char(178);
	cout << endl;

	//line6
	cout << "       " << char(178) << " " << char(178) << " " << char(178) << "    " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178);
	cout << "         " << char(178) << "     " << char(178);
	cout << "   " << char(178) << "     " << char(178);
	cout << "   " << char(178);
	cout << endl;

	//line7
	cout << "        " << char(178) << " " << char(178) << "     ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << "    ";
	for (int n = 0; n < 6; n++)
		cout << char(178);
	cout << "    ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << "    " << char(178) << "     " << char(178);
	cout << "   ";
	for (int n = 0; n < 7; n++)
		cout << char(178);
	cout << endl;
	
	
	//***************** to *******************
	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << endl << endl << endl;
	for (int n = 0; n < 6; n++)
		cout << "     ";
	cout << "*****   ***" << endl;
	for (int n = 0; n < 6; n++)
		cout << "     ";
	cout << "  *    *   *" << endl;
	for (int n = 0; n < 6; n++)
		cout << "     ";
	cout << "  *    *   *" << endl;
	for (int n = 0; n < 6; n++)
		cout << "     ";
	cout << "  *     *** " << endl;


	//******************* FIRST LAST BANK ************
	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << endl << endl << endl;
	
	//line 1
	cout << "  ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << " ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << " ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "   " ;
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << " ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << "  " << char(178);
	cout << "       " << char(178);
	cout << "    ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << " ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << "  ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "    " << char(178);
	cout << "   " << char(178) << "   " << char(178);
	cout << " " << char(178) << "  " << char(178);
	cout << endl;

	//line 2
	cout << "  ";
	cout << char(178);
	cout << "      " << char(178);
	cout << "   " << char(178) << "   " << char(178);
	cout << " ";
	cout << char(178);
	cout << "       " << char(178);
	cout << "    " << char(178);
	cout << "      " << char(178) << " " << char(178);
	cout << "  " << char(178);
	cout << "       " << char(178);
	cout << "    " << char(178) << "   " << char(178);
	cout << "  " << char(178) << " " << char(178);
	cout << "  " << char(178) << char(178) << "  " << char(178);
	cout << " " << char(178) << " " << char(178);
	cout << endl;

	//line 3
	cout << "  ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "   " << char(178);
	cout <<"   ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "   " << char(178) << char(178) << char(178);
	cout << "    " << char(178);
	cout << "    " << char(178);
	cout << "     " << char(178) << "   " << char(178);
	cout << "  " << char(178) << char(178) << char(178);
	cout << "    " << char(178);
	cout << "    ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "  " << char(178) << "   " << char(178);
	cout << " " << char(178) << " " << char(178) << " " << char(178);
	cout << " " << char(178) << char(178);
	cout << endl;

	//line 4
	cout << "  ";
	cout << char(178);
	cout << "      " << char(178);
	cout << "   ";
	cout << char(178) << "   " << char(178);
	cout << "     " << char(178);
	cout << "   " << char(178);
	cout << "    " << char(178);
	cout << "     ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << "     " << char(178);
	cout << "   " << char(178);
	cout << "    " << char(178) << "   " << char(178);
	cout << " ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << " " << char(178) << "  " << char(178) << char(178);
	cout << " " << char(178) << " " << char(178);
	cout << endl;

	//line 5
	cout << "  ";
	cout << char(178);
	cout << "    ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << " ";
	cout << char(178) << "   " << char(178);
	cout << " ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "    " << char(178);
	cout << "    ";
	for (int n = 0; n < 5; n++)
		cout << char(178);
	cout << " " << char(178) << "   " << char(178);
	cout << " ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "    " << char(178);
	cout << "    ";
	for (int n = 0; n < 4; n++)
		cout << char(178);
	cout << "  " << char(178) << "   " << char(178);
	cout << " " << char(178) << "   " << char(178);
	cout << " " << char(178) << "  " << char(178);
}


void ATM::printTitle()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << endl;
	for (int n = 0; n < 16; n++)
		cout << "**********";
	cout << endl;

	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ***** ***** ****   **** *****  *       *    **** *****  ****    *   *   * *  *\n";
	cout << " *       *   *   * *       *    *      * *  *       *    *   *  * *  **  * * *\n";
	cout << " *****   *   ****   ***    *    *      ***   ***    *    ****   ***  * * * **\n";
	cout << " *       *   *   *     *   *    *     *   *     *   *    *   * *   * *  ** * *\n";
	cout << " *     ***** *   * ****    *    ***** *   *  ***    *    ****  *   * *   * *  *\n";

	SetConsoleTextAttribute(colors, BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << endl;
	for (int n = 0; n < 16; n++)
		cout << "**********";
}

void ATM::sideShadow()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << char(178) << char(178) << "             "; //15 - altogether
}

bool ATM::getUserNPass()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	printTitle();
	printLoginScreen();
	int times = 0;

	//*************getID***************
	do
	{
		gotoxy(40, 24);
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		getInput(user, 8);
	
	
		//****************getPIN***********
		gotoxy(40, 28);
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		getInput(pass,4);

		//*******Check ID and PIN ******
		currentRecord = records.searchNode(user,pass);
		times++;

			
		if (currentRecord == NULL && times <= 2)
		{	
			gotoxy(20, 31);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "The ID or PIN you entered is incorrect";
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(40,28);
			cout << "    \b\b\b\b";
			gotoxy(40, 24);
			cout << "        \b\b\b\b\b\b\b\b";
		}
	}
	while (times <3 && currentRecord == NULL);

	if (!currentRecord)
	{
		printAlertMsg();
		cout << "entered U = " << user << endl;
		cout << "entered P = " << pass << endl;
		return false;
	}
	
	return true;
}

void ATM::getInput(char input[], int length)
{
	int n = 0;
	char currentK;
	
	do
	{
		currentK = getch();
		if (n == length && currentK == '\b')
		{
			n--;
			cout << "\b \b";
			continue;
		} 
		if (n < 0)
		{
			n = 0;
			continue;
		}
		
		if (n == 0 && currentK == '\b')
			continue;
		if (n < length && n >= 0)
		{
			
			if (currentK == '\b')
			{
				input[n--] = 0;
				cout << "\b \b";
			}
			else 
			{
				cout << (length == 4 ? '*' : char(currentK));
			    input[n++] = currentK;
			}
		}
	}
	while (currentK != '\r');
}


void ATM::printAlertMsg()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors, BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors, BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "  ALERT!                                          ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors, BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 
	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << "      POSSIBLE INTRUDER - SECURITY ALERTED!       ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	for (int n = 0; n < 50; n++) cout << " ";
	sideShadow();

	//bottom
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

}

void ATM::printLoginScreen()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " "; //char(201);
	for (int n = 0; n < 48; n++) cout << " "; //char(205);
	cout << " " ;//char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " "; //char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " LOG IN                                         ";
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	for (int n = 0; n < 48; n++) cout << " ";//char(205);
	cout << " ";//char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//ID
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY); 
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "                        "; //24
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         "; //9
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "               "  << char(186);;
	sideShadow();

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );

	cout << char(186) << "               ID:      "; //25
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "ID       "; //25
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "               " << char(186);;
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//PIN
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "                        "; //25
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "     "; 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "                   " << char(186);
	sideShadow();

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "              PIN:      "; //20
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "PIN  "; 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "                   " << char(186);
	sideShadow();


	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();
	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//bottom
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();

	//bottom - shadow
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether
}

/*
 * Generating records
 * This method is called only ONCE when the program first runs on a system.
 * One the second execution, the program will look for master1.txt and load input (records) from there.
 * Each row contains info about 1 user;
 * Col 1: Username
 * Col 2: Password
 * Col 3: First Name
 * Col 4: Last Name
 * Col 5: Account number 1
 * Col 6: Balance in Acct. 1
 * Col 7: Account number 2
 * Col 8: Balance in Acct. 2
 */
void ATM::generateRecords()
{
	ofstream oFile("master1.txt");
	if (!oFile)
	{
		cout << "ERROR opening file to write" << endl;
		exit(0);
	}

	oFile << "H4302984\t" << "7876\t" << "REARDON\t" << "JOSEPH\t" << "N3295430\t" << "500\t" << "A9483729\t" << "450\n";
	oFile << "X4303956\t" << "8904\t" << "ADAMS\t" << "DONALD\t" << "W3949435\t" << "700\t" << "H3243984\t" << "6000\n";
	oFile << "G4830234\t" << "5930\t" << "ANDREW\t" << "TUFTS\t" << "B8038904\t" << "1200\t" << "C1203909\t" << "5940\n";
	oFile << "B2320090\t" << "1098\t" << "ALBERT\t" << "EISTEIN\t" << "R0985032\t" << "700\t" << "J9093876\t" << "700\n";
	oFile << "L0493056\t" << "1010\t" << "HANLEY\t" << "HAMILTON\t" << "Z0392435\t" << "2000\t" << "D8445569\t" << "1000\n";
	oFile << "Y8394839\t" << "8989\t" << "THOMAS\t" << "JEFFERSON\t" << "S9039283\t" << "7000\t" << "Q2939495\t" << "9000\n";
	oFile << "C1236785\t" << "4455\t" << "ANDREW\t" << "JACKSON\t" << "X3025405\t" << "1230\t" << "P4530983\t" << "560\n";
	oFile << "P9204930\t" << "9920\t" << "JOHN\t" << "ADAMS\t" << "A0493045\t" << "560\t" << "M3949020\t" << "700\n";
	oFile << "T5004532\t" << "6940\t" << "KAYLA\t" << "LEE\t" << "L0293049\t" << "9060\t" << "Y9204958\t" << "1030\n";
	oFile << "A1234567\t" << "9090\t" << "EMILY\t" << "WATTS\t" << "K0985936\t" << " 300\t" << "V5639852\t" << "2000\n";
	
	oFile.close();
}

void ATM::loadRecords()
{
	//Temporary -> del later
	generateRecords();

	//determine input file
	setInputFile();
	
	for (int n = 0; n < 10; n++)
	{
		Data temp;
		inputFile >> temp.ID;
		inputFile >> temp.PIN;
		inputFile >> temp.first;
		inputFile >> temp.last;
		inputFile >> temp.checkNo;
		inputFile >> temp.checkBal;
		inputFile >> temp.saveNo;
		inputFile >> temp.saveBal;
		records.insertNode(temp);
	}	
}

/**
 * 
 */
void ATM::setInputFile()
{
	inputFile.open("master1.txt");
}


//**************************************
//* This function prints the Main menu *
//**************************************
void ATM::printMainMenu()
{
	gotoxy(49,13);
	greeting();
	
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(0,18);
	//top
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(201);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(187);
	sideShadow();


	//MAIN MENU
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	//for (int n = 0; n < 48; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                    MAIN MENU                   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//*******
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	cout << "                    *********                   ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Make deposit
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "              1. Make Deposit                   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Make deposit
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "              2. Make Withdrawal                ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Check Balance
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "              3. Check Balance                  ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Transfer Funds
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "              4. Transfer Funds                 ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Exit
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN);
	cout << "              5. Exit                           ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();
	
	//Enter ur choice
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "          Enter your choice:...                 ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();;

	//bottom
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	gotoxy(46,34);
	
}



//***********************************
//* This function displays greeting *
//***********************************
void ATM::greeting()
{
	char time[9];
	_strtime(time);	

	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	if (time[0] > '1')  
		cout <<"Good Evening " << currentRecord->data.first << " " << currentRecord->data.last << ", ";
	else if (time[0] == '1')	
	{
		if (time[1] >= '2' && time[1] <= '7')	
			cout << "Good Afternoon " << currentRecord->data.first << " " << currentRecord->data.last << ", ";
		else if (time[1] < '2')
			cout <<"Good Morning " << currentRecord->data.first << " " << currentRecord->data.last << ", ";
		else		
			cout <<"Good Evening " << currentRecord->data.first << " " << currentRecord->data.last << ", ";
     }
	 else
	 	 cout <<"Good Morning " << currentRecord->data.first << " " << currentRecord->data.last << ", ";
}


void ATM::printTransactionScreen(int menu)
{
	system("cls");
	printTitle();
	gotoxy(49,13);
	greeting();
	
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " "; //char(201);
	for (int n = 0; n < 48; n++) cout << " "; //char(205);
	cout << " " ;//char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " "; //char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	
	cout <<" MAKE " << (menu == 1 ? "DEPOSIT                                   " : "WITHDRAWAL                                ") ;
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	for (int n = 0; n < 48; n++) cout << " ";//char(205);
	cout << " ";//char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Account No
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY); 
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "                        "; //24
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         "; //9
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "               "  << char(186);
	sideShadow();

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "    Account Number:     "; //25
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         ";  //9
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "               " << char(186);
	sideShadow();


	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();
	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//Amount
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "                        "; //25
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "                    ";  //20
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "    " << char(186);
	sideShadow();

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186) << "           Amount:     $"; //20
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "                    ";  //20 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << "    " << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();
	
	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(186);
	for (int n = 0; n < 48; n++) cout << " ";
	cout << char(186);
	sideShadow();

	//blankline
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();;

	//bottom
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether
}

void ATM::printReport(int menu)
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	
	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " "; //char(201);
	for (int n = 0; n < 48; n++) cout << " "; //char(205);
	cout << " " ;//char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " "; //char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " REPORT                                         ";
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	for (int n = 0; n < 48; n++) cout << " ";//char(205);
	cout << " ";//char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	for (int i = 0; i < 12; i++)
	{
		//blankline
		cout << "               ";
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadow();
	}

	//bottom
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();

	//bottom - shadow
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether


	//Text
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	
	gotoxy(30,22);
	cout << (menu == 1 ? " DEPOSIT ACCEPTED " : " WITHDRAWAL PERMITTED ");

	gotoxy(20,24);
	cout << "Checking Account Number :  " << currentRecord->data.checkNo;

	gotoxy(20,25);
	cout << "Current Balance         : $" << currentRecord->data.checkBal;
	
	gotoxy(20,27);
	cout << "Saving Account Number   :  " << currentRecord->data.saveNo;

	gotoxy(20,28);
	cout << "Current Balance         : $" << currentRecord->data.saveBal;

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED );
	gotoxy(28,30);
	cout << "Hit '5' to exit...";
	if (menu == 2)
	{
		gotoxy(20,31);
		cout << "Please take your money before leaving.";
		gotoxy(46,30);
	}
	while (getch() != '5');

}

void ATM::doOpt1()
{
	printTransactionScreen(1);
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	double amount;
	short n = 0; 
	bool correct = true;

	do
	{
		correct = true;

		//Get account no
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(40,24);
		getInput(user,8);

		if(strcmp(user,currentRecord->data.checkNo) != 0 && strcmp(user,currentRecord->data.saveNo) != 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(40, 26);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Account Not Found.";
			correct = false;
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(40,24);
			cout << "        \b\b\b\b\b\b\b\b";
			continue;
		}	
	}
	while (!correct && n < 3);
	
	gotoxy(40, 26);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
	cout << "                  ";
	
	//get amount
	do
	{
				
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(40,29);
		cin >> amount;
		if(amount < 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(40, 31);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Invalid Amount.";
		}
	}
	while (amount < 0 && n < 3);

	if(strcmp(user,currentRecord->data.checkNo) == 0)
		currentRecord -> data.checkBal += amount;
	else currentRecord->data.saveBal += amount;

	printReport(1);	
}

void ATM::doOpt2()
{
	printTransactionScreen(2);
		HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	double amount;
	short n = 0; 
	bool correct = true;

	do
	{
		correct = true;

		//Get account no
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(40,24);
		getInput(user,8);

		if(strcmp(user,currentRecord->data.checkNo) != 0 && strcmp(user,currentRecord->data.saveNo) != 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(40, 26);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Account Not Found.";
			correct = false;
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(40,24);
			cout << "        \b\b\b\b\b\b\b\b";
			continue;
		}	
	}
	while (!correct && n < 3);
	
	gotoxy(40, 26);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
	cout << "                  ";
	
	//check or save
	bool isCheck = (strcmp(user,currentRecord->data.checkNo) == 0 ? true : false);


	//get amount
	do
	{
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(40,29);
		cin >> amount;
		if(amount < 0 || amount > (isCheck ? currentRecord->data.checkBal : currentRecord->data.saveBal))
		{
			n++;
			if (n == 3)
				return;
			gotoxy(30, 31);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Unavailable funds to Withdraw.";
		}
	}
	while ((amount < 0 || amount > (isCheck ? currentRecord->data.checkBal : currentRecord->data.saveBal)) && n < 3);

	if(isCheck)
		currentRecord -> data.checkBal -= amount;
	else currentRecord->data.saveBal -= amount;

	printReport(2);
}

void ATM::doOpt3()
{
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");

	printTitle();
	gotoxy(49,13);
	greeting();

	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " "; //char(201);
	for (int n = 0; n < 48; n++) cout << " "; //char(205);
	cout << " " ;//char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " "; //char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " CHECK BALANCE                                  ";
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	for (int n = 0; n < 48; n++) cout << " ";//char(205);
	cout << " ";//char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	for (int i = 0; i < 12; i++)
	{
		//blankline
		cout << "               ";
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadow();
	}

	//bottom
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();

	//bottom - shadow
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	//Text
	gotoxy(23,27);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	cout << "Enter Account Number:     "; //25
	gotoxy(46,26);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         ";  //9
	gotoxy(46, 27);
	cout << "         ";
	

	//get account num
	short n = 0; 
	bool correct = true;
	do
	{
		correct = true;

		//Get account no
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(46,27);
		getInput(user,8);

		if(strcmp(user,currentRecord->data.checkNo) != 0 && strcmp(user,currentRecord->data.saveNo) != 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(30, 29);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Account Not Found.";
			correct = false;
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(46,27);
			cout << "        \b\b\b\b\b\b\b\b";
		}	
	}
	while (!correct && n < 3);
	

	gotoxy(0,26);
	for (int i = 0; i < 4; i++)
	{
		//blankline
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "               ";
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadow();
	}

	gotoxy (25,25);
	bool check = (strcmp(user,currentRecord->data.checkNo) ? false : true); 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	cout << "Account Number :  " << (check ? currentRecord->data.checkNo : currentRecord->data.saveNo) ;
	gotoxy(25, 28);
	cout << "Current Balance: $" << (check ? currentRecord->data.checkBal : currentRecord->data.saveBal);

	gotoxy(28,32);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED );
	cout << "Hit '5' to exit...";
	while (getch() != '5');

}

void ATM::printTransferScreen()
{

	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	system("cls");
	printTitle();
	gotoxy(49,13);
	greeting();
	
	gotoxy(0,18);
	//top - box
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " "; //char(201);
	for (int n = 0; n < 48; n++) cout << " "; //char(205);
	cout << " " ;//char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	cout << "               ";	//15 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " "; //char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " TRANSFER FUNDS                                 ";
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15

	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " ";//char(186);
	for (int n = 0; n < 48; n++) cout << " ";//char(205);
	cout << " ";//char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "               ";	//15 

	for (int i = 0; i < 16; i++)
	{
		//blankline
		cout << "               ";
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadow();
	}
	
	//bottom
	cout << "               ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN );
	cout << char(200);
	for (int n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadow();

	//bottom - shadow
	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether

	cout << "                  "; //18
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_GREEN);
	for (int n = 0; n < 49; n++)
		cout << char(178);
	cout << "             "; //15 - altogether


	//Text
	gotoxy(23,24);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	cout << "Source Account Number:"; //25
	gotoxy(46,23);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         ";  //9
	gotoxy(46, 24);
	cout << "         ";

	gotoxy(23,29);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	cout << "Target Account Number:"; //25
	gotoxy(46,28);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "         ";  //9
	gotoxy(46, 29);
	cout << "         ";

	gotoxy(23,34);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_GREEN );
	cout << "Amount               :$"; //25
	gotoxy(46,33);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "                ";  //16
	gotoxy(46, 34);
	cout << "                ";
}

void ATM::doOpt4()
{
	printTransferScreen();
	HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
	char source[9] = {0};
	char target[9] = {0};
	short n = 0; 
	bool correct = true;
	bool checkToSave = true;

	//get source acc.
	do
	{
		correct = true;

		//Get source acc.
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(46,24);
		getInput(source,8);

		if(strcmp(source,currentRecord->data.checkNo) != 0 && strcmp(source,currentRecord->data.saveNo) != 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(23, 26);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Invalid Source Account.";
			correct = false;
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(46,24);
			cout << "        \b\b\b\b\b\b\b\b";
		}	
	}
	while (!correct && n < 3);
	

	if (strcmp(source,currentRecord->data.checkNo))
		checkToSave = false;

	gotoxy(23, 26);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
	cout << "                       ";
			

	//get target acc.
	do
	{
		correct = true;

		//Get target acc.
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(46,29);
		getInput(target,8);

		if(strcmp(target,source) == 0 || strcmp(target,currentRecord->data.checkNo) != 0 && strcmp(target,currentRecord->data.saveNo) != 0)
		{
			n++;
			if (n == 3)
				return;
			gotoxy(23, 31);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Invalid Target Account.";
			correct = false;
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(46,29);
			cout << "        \b\b\b\b\b\b\b\b";
		}	
	}
	while (!correct && n < 3);
	
	gotoxy(23, 31);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
	cout << "                       ";
			
	n = 0;
	double amount;
	//get amount
	do
	{
				
		SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
		gotoxy(46,34);
		cin >> amount;
		if(amount < 0 || amount > (checkToSave ? currentRecord->data.checkBal : currentRecord->data.saveBal))
		{
			n++;
			if (n == 3)
				return;
			gotoxy(23, 36);
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_INTENSITY | FOREGROUND_RED);		
			cout << "Unavailable Funds to Transfer.";
			SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_GREEN);
			gotoxy(46,34);
			cout << "                \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";  //16
		
		}
	}
	while ((amount < 0 || amount > (checkToSave ? currentRecord->data.checkBal : currentRecord->data.saveBal)) && n < 3);


	if (checkToSave)
	{
		currentRecord->data.checkBal -= amount;
		currentRecord->data.saveBal += amount;
	}
	else
	{
		currentRecord->data.checkBal += amount;
		currentRecord->data.saveBal -= amount;
	}

	gotoxy(0,36);
	SetConsoleTextAttribute(colors, BACKGROUND_GREEN);	
	for (int lines = 0; lines < 5; lines++)
		cout << "\t\t\t\t\t\t\t\t\t\t";
	printReport(1);
}
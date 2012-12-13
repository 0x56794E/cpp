/*
 * Project 1: Game Of Craps
 * This program simulates the game of craps.
 * Written by: Vy Thuy Nguyen
 * Date: Feb 13, 2010
 */
 
#include "myLibrary.h"
HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);

//move cursor
void gotoxy (short x, short y)
{  
	COORD posi = {x, y}; 
	SetConsoleCursorPosition (GetStdHandle (STD_OUTPUT_HANDLE), posi);
}

//side shadow for Green box
void sideShadowGBox()
{
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << char(178) << char(178) << "             "; //15 - altogether
}

//blank line (green - light)
void blankGreenL(int times)
{
	for (int k = 0; k < times; k++)
	{
		cout << "               ";	//15
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadowGBox();
	}
}

//blank line (green - dark)
void blankGreenD(int times)
{
	for (int k = 0; k < times; k++)
	{
		cout << "               ";	//15
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
		cout << char(186);
		for (int n = 0; n < 48; n++) cout << " ";
		cout << char(186);
		sideShadowGBox();
	}
}

//blank line (red)
void blankRed()
{
	int n;
	//HANDLE colors = GetStdHandle(STD_OUTPUT_HANDLE);
    cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	for (n = 0; n < 36; n++) cout << " ";
	cout << char(186);
}

//side shadow for Red box
void sideShadowRBox()
{
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << char(178) << char(178);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	for (int n = 0; n < 3; n++) cout << " ";
	cout << char(186);
}

//print margin for each dice
void margin()
{
		SetConsoleTextAttribute(colors, BACKGROUND_BLUE | BACKGROUND_RED);
		cout << "               "; //15
}

//print white space for each dice
void addWhiteSpace(short times)
{
	for (short n = 0; n < times; n++)
	{
		SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_BLUE | BACKGROUND_INTENSITY| FOREGROUND_RED );
		cout << " "; 
	}
}

//print one blank line
void blankDice(short times)
{
	for (short n = 0; n < times; n++)
	{
		margin();
		addWhiteSpace(10); //10 space width
		margin();
	}
}

//print dot
void addDot()
{
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "  ";		
}

//Line 2 of a Dice
void printLine2(short num)
{	
	switch(num)
	{
	case 1:
		blankDice(1);
		break;
	case 2:
	case 3: 
		margin();
		addWhiteSpace(6);
		addDot();
		addWhiteSpace(2);
		margin();
		break;
	default:
		margin();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		margin();
		break;
	}
	
}

//line 4 of a dice
void printLine4(short num)
{
	switch(num)
	{
	case 1:
	case 3:
	case 5: 
		margin();
		addWhiteSpace(4);
		addDot();
		addWhiteSpace(4);
		margin();
		break;
	case 2:
	case 4:
		blankDice(1);
		break;
	case 6:
		margin();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		margin();
		break;
	}
	
}

//line 6 of a dice
void printLine6(short num)
{
	switch(num)
	{
	case 1:
		blankDice(1);
		break;
	case 2:
	case 3:
		margin();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(6);
		margin();
		break;
	case 4:
	case 5:
	case 6:
		margin();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		addDot();
		addWhiteSpace(2);
		margin();
		break;
	}
	
}

//print dicce
void printDice(short num1, short num2)	//height: 7 lines, width: 10 spaces
{
	gotoxy(0,18);

	//line 1
	blankDice(2); 

	//line2
	printLine2(num1);
	printLine2(num2);

	//line3
	blankDice(2);
	
	//line4
	printLine4(num1);
	printLine4(num2);

	//line5
	blankDice(2);

	//line6
	printLine6(num1);
	printLine6(num2);

	//line 7
	blankDice(2);
}

//=====================================================================================================

//*****************************************
//* This function prints the game's title *
//*****************************************
void printGameTitle()
{
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int n, k;
	
	cout << "\n\n";
	for (n = 0; n < 2; n++)
	{
		cout << "    "; //margin
		for (k = 0; k < 3; k++) cout << "************************"; //top 
		cout << "    "; //margin
	}

	//text (GAME OF CRAPS)
	cout << "    *";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "  ****   *   *   * *****   ***  *****   **** ****    *   ****   ****";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "  *    ";
	
	cout << "    *";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << " *      * *  ** ** *      *   * *      *     *   *  * *  *   * *    ";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "  *    ";
	
	cout << "    *";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << " *  ** ***** * * * *****  *   * *****  *     ***** ***** ***** **** ";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "  *    ";
	
	cout << "    *";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << " *   * *   * *   * *      *   * *      *     * *   *   * *         *";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "  *    ";
	
	cout << "    *";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "  **** *   * *   * *****   ***  *       **** *  *  *   * *     **** ";
	SetConsoleTextAttribute(colors,
		BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "  *    ";
	
	//bottom line
	for (n = 0; n < 2; n++)
		cout << "    *                                                                      *    ";
	cout << "    *    ";
	cout << "                    by VY THUY NGUYEN                         ";
	cout << "    *    ";
	for (n = 0; n < 2; n++)
	{
		cout << "    "; //margin
		for (int k = 0; k < 3; k++) cout << "************************";  
		cout << "    "; //margin
	}
	cout << "\n\n\n\n";
}

//**************************************
//* This function prints the Main menu *
//**************************************
void printMainMenu()
{
	int n;

	//A. top - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(201);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	
	//B. body - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "                   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "MAIN  MENU";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                   " << char(186);
	sideShadowGBox();
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186);
	for (n = 0; n < 18; n++) cout << " ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	for (n = 0; n < 12; n++) cout << "*"; 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                  " << char(186);	
	sideShadowGBox();
	blankGreenL(2);

	//play the game menu
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "              ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "1.  Play the Game";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                 " << char(186);
	sideShadowGBox();
	blankGreenL(2);
	
	//display points menu
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "              ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "2.  Display points";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                " << char(186);
	sideShadowGBox();
	blankGreenL(2);
	
	//reset points menu
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "              ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "3.  Reset points";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                  " << char(186);
	sideShadowGBox();
	blankGreenL(2);
	
	//quit menu
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "              ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_GREEN);
	cout << "4.  Quit";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "                          " << char(186);
	sideShadowGBox();
	blankGreenL(4);
	cout << "               ";	//10
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(186) << "            ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "Enter your choice:.... ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "             " << char(186);
	sideShadowGBox();

	//C. bottom - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << char(200);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	
	//bottom shadow 
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	cout << char(178) << char(178) << "                              "; //15 - altogether	
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	for (n = 0; n < 50; n++) cout << char(178);
	
	gotoxy(49,37);
}

//**********************************************************************
//* This function prints error msg when user does not give valid input *
//**********************************************************************
void printErrorMsg()
{
	int n;
	gotoxy(0,18);
	
	//A. top - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(201);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	
	//B. body - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "                   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "MAIN  MENU";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "                   " << char(186);
	sideShadowGBox();
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 18; n++) cout << " ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_GREEN);
	for (n = 0; n < 12; n++) cout << "*"; 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "                  " << char(186);	
	sideShadowGBox();
	blankGreenD(1);

	//redbox - top
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(201);
	for (n = 0; n < 36; n++) cout << char(205);
	cout << char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	for (n = 0; n < 5; n++) cout << " ";
	cout << char(186);
	sideShadowGBox();

	//redbox - body
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

	//redbox - body1
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors, BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "   **   **";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

	//redbox - body2
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "    ** ** ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " ";  //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body3
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "     ***  ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "      INVALID ENTRY!!!!   "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body4
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "     ***  ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body5
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "    ** ** ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << " Enter 1, 2, 3 or 4 ONLY. ";  //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body6
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY);
	cout << "   **   **";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

	//"hit any key.." 
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	cout << "     Hit any key to continue...     ";
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

	//redbox - bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(200);
	for (n = 0; n < 36; n++) cout << char(205);
	cout << char(188);
	sideShadowRBox();
	sideShadowGBox();
	
	//shadow - redbox, bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "       ";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	for (n = 0; n < 38; n++) cout << char(178);	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout  << "   " << char(186);
	sideShadowGBox();
	blankGreenD(2);

	//enter ur choice...
	cout << "               ";	//10
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "            ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "Enter your choice:.... ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "             " << char(186);
	sideShadowGBox();

	//bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(200);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadowGBox();
	cout << "                 ";	
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	for (n = 0; n < 50; n++) cout << char(178);
	
	gotoxy(54,31);
}

//**************************************************************
//* This function prints msg asking for confirmation from user *
//**************************************************************
bool confirm()
{
	int n;
	gotoxy(0,18);
	
	//A. top - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(201);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED |	FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "               ";	//15
	
	//B. body - green box
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "                   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "MAIN  MENU";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "                   " << char(186);
	sideShadowGBox();
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 18; n++) cout << " ";
	SetConsoleTextAttribute(colors, FOREGROUND_GREEN | FOREGROUND_RED | BACKGROUND_GREEN);
	for (n = 0; n < 12; n++) cout << "*"; 
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "                  " << char(186);	
	sideShadowGBox();
	blankGreenD(1);

	//redbox - top
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(201);
	for (n = 0; n < 36; n++) cout << char(205);
	cout << char(187);
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	for (n = 0; n < 5; n++) cout << " ";
	cout << char(186);
	sideShadowGBox();

	//redbox - body
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

	//redbox - body1
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors, BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "    ****  ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

	//redbox - body2
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   ****** ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " ";  //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body3
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "   **  ** ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "                          "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body4
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "    *  ** ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body5
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "      **  ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << "   Are you sure? (Y/N)    ";  //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body6
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "     **   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body7
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

		//redbox - body8 + 9
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186); 
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(186);
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "     **   ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	for (n = 0; n < 26; n++) cout << " "; //insert text for redbox here 
	cout << char(186);
	sideShadowRBox();
	sideShadowGBox();
	blankRed();
	sideShadowRBox();
	sideShadowGBox();

	//redbox - bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186);
	for (n = 0; n < 5; n++) cout << " ";
	SetConsoleTextAttribute(colors,	BACKGROUND_RED | BACKGROUND_INTENSITY |  FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE);
	cout << char(200);
	for (n = 0; n < 36; n++) cout << char(205);
	cout << char(188);
	sideShadowRBox();
	sideShadowGBox();
	
	//shadow - redbox, bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "       ";
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	for (n = 0; n < 38; n++) cout << char(178);	
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout  << "   " << char(186);
	sideShadowGBox();
	blankGreenD(2);

	//enter ur choice...
	cout << "               ";	//10
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(186) << "            ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "Enter your choice:.... ";
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << "             " << char(186);
	sideShadowGBox();

	//bottom
	cout << "               ";	//15
	SetConsoleTextAttribute(colors,	BACKGROUND_GREEN | FOREGROUND_RED);
	cout << char(200);
	for (n = 0; n < 48; n++) cout << char(205);
	cout << char(188);
	sideShadowGBox();
	cout << "                 ";	
	SetConsoleTextAttribute(colors,	BACKGROUND_BLUE | BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_GREEN);
	for (n = 0; n < 50; n++) cout << char(178);
	
	gotoxy(54,28);
	char sure = getch();
	if (sure == 'y' || sure == 'Y') return true;
	else return false;
}

//****************************************************************
//* This function generates 2 random numbers and prints two dice *
//* whose number of dots are those those two numbers.            *
//****************************************************************
short toss()
{
	short num1, num2;
	
	num1 = rand() % 6 + 1;
	srand(time(NULL));
	num2 = rand() % 6 + 1; 
	printDice(num1, num2);
	return num1 + num2;
}

//*****************************************
//* This function prints promts to screen *
//*****************************************
void promt()
{
	cout << "\n\n\n\n\t\t\t\tPress 'p' to toss the dice...";
	char a = getch();
	while (a != 'p' && a != 'P')
	{
		a = getch();
	} 
}

//***********************************
//* This function displays greeting *
//***********************************
void greeting()
{
	char time[9];
	_strtime(time);	//_strtime_s(time); for VS 2008 **** _strtime(time); for Visual 6.0
	
	if (time[0] > '1')  
		cout <<"\t\t\t\tGood Evening ";
	else if (time[0] == '1')	
	{
		if (time[1] >= '2' && time[1] <= '7')	
			cout << "\t\t\t\tGood Afternoon ";
		else if (time[1] < '2')
			cout <<"\t\t\t\tGood Morning ";
		else		
			cout <<"\t\t\t\tGood Evening ";
     }
	 else
	 	 cout <<"\t\t\t\tGood Morning ";
}

//****************************************
//* This function asks for player's name *
//****************************************
void getName(char name[])
{
	cout << "\n\n\t\tEnter your name (or hit Enter to skip)...:";
	cin.getline(name,80,'\n');
}

//**************************************************************
//* This function lets user toss until he either wins or loses *
//* (provided that he gets score other than 2, 3, 7,12, 7      *
//* and 11 in the first time tossing the dice.)                *
//**************************************************************
void repeat(short prePnt, short& accuScore)
{
	short newPnt;

	do
	{
		promt();
		newPnt = toss();
		cout << "\n\n\t\t\t\tYour point is " << (newPnt < 10 ? "0" : "") << newPnt;
		if (newPnt == 7)
		{
			cout << "\n\n\t\t\t\tYou lost the game! >..< \n\n\t\t\tHit any key to back to the Main menu...";
			accuScore -= 1;
			return;
		}
	}
	while (newPnt != prePnt);
	cout << "\n\n\t\t\tNow you won the game! Nice try! (^.^) \n\n\t\t\tHit any key to back to the Main menu...";
	accuScore += 1;
}

//**********************************************
//* This funtion does Option 1 - Play the game *
//**********************************************
void doOpt1(short& accuScore, char name[])
{
	system("cls");
	printGameTitle();
	greeting();
	cout << name << "!";
	promt();
	short pnt = toss();

	if (pnt == 2 || pnt == 3 || pnt == 12)
	{
		cout << "\n\n\t\t\tYou lost the game! >...< \n\n\t\tHit any key to back to the Main menu...";
		accuScore -= 1;
	}
	else if (pnt == 7 || pnt == 11)
	{
		cout << "\n\n\n\t\t\t\tYou won the game! (^_^) \n\n\t\t\tHit any key to back to the Main menu...";
		accuScore += 1;
	}
	else
	{
		cout << "\n\n\t\t\t\tYour point is " << (pnt < 10 ? "0" : "") << pnt;
		repeat(pnt,accuScore);
	}
	getch();
}

//***********************************************
//* This funtion does Option 2 - Display points *
//***********************************************
void doOpt2(short accuScore, char name[])
{
	system("cls");
	printGameTitle();
	cout << "\n\n\n\t\t\tCurrent score for " << (name[0] == 0 ? "player" : name) << " is " 
	     <<  accuScore << "\n\n\n\t\t\tHit any key to back to the Main menu...";
	getch();
}

//*********************************************
//* This funtion does Option 3 - Reset points *
//*********************************************
void doOpt3(short & accuScore)
{
	bool sure = confirm();
	if (sure) 
	{
		system("cls");
		printGameTitle();
		cout << "\n\n\t\t\tYour score has been reset to zero.\n\n\n\t\t\tHit any key to back to the Main menu....";
		accuScore = 0;
		getch();
	}
}

//*************************************
//* This funtion does Option 4 - Quit *
//*************************************
void doOpt4()
{
	bool sure = confirm();
	if(sure) exit(0);
	else;
}

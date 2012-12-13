/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 * C++/CLR Project: Tic Tac Toe
 */


#pragma once
using namespace System;

ref class Game
{
private:
	array <char, 2>^ grid; 	
	int clickCount;
	
	char winnerFound(int, int, char);

public:
	static int winCountA = 0;
	static int winCountB = 0;
	Game(void);	
	char click(int, int, char);
	bool isClicked(int, int);
	void reset();
};

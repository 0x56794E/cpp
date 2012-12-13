/*
 * Project 1: Game Of Craps
 * This program stimulates the game of craps.
 * Written by: Vy Thuy Nguyen
 * Date: Feb 13, 2010
 */
 

#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <ctime>

using std::cout;
using std::cin;

// Function prototype
void gotoxy(short, short);
void printGameTitle();
void printMainMenu();
void printErrorMsg();
bool confirm();
void promt();
short toss();
void greeting();
void getName(char []);
void repeat(short, short&);
void doOpt1(short&, char[]);
void doOpt2(short, char[]);
void doOpt3(short&);
void doOpt4();

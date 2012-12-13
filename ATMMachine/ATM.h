
/**
 * Written by: Vy Thuy Nguyen
 * Date created: January, 2010
 * Last modified: June, 2010
 */

#pragma once
#include <fstream>
#include "BinaryTree.h"
using namespace std;
class ATM
{
	ifstream inputFile;
	ofstream outputFile;

	BinaryTree records;
	TreeNode *currentRecord;
		
	char user[9];
	char pass[5];
	void gotoxy(short, short);
	void getInput(char [], int);
	
	void printAlertMsg();
	void sideShadow();
	void printLoginScreen();
	void generateRecords();
	void setInputFile();
	void loadRecords();
	void greeting();
	void printTransactionScreen(int);
	void printAcceptedScreen();
	void printTransferScreen();
	void printReport(int);
public:
	ATM();
	~ATM();
	void printGreeting();
	void printTitle();
	bool getUserNPass();
	void printMainMenu();
	void doOpt1();
	void doOpt2();
	void doOpt3();
	void doOpt4();	
};

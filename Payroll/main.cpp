/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 *
 * Notes:
 *	1) This program takes command line arguments (see main())
 *	2) argc = 3
 *	3) argv[0] = Program's name
 *	4) argv[1] = input file 1
 *	5) argv[2] = input file 2
 */

#include "Payroll.h"

#include <vector>
using std::vector;

void checkArg(int, char **, ifstream &, ifstream &);

int main(int argc, char **argv)
{ 
	ifstream file1, file2;
	checkArg(argc, argv, file1, file2);
		
	vector <Payroll> payroll;
	int n = 0;
	while (file1 && file2)
	{
		payroll.push_back(Payroll(file1, file2));
		payroll.at(n++).printReport();
	}
	
	file1.close();
	file2.close();
	
	system("pause");
	return 0;
}

void checkArg(int argc, char **argv, ifstream &file1, ifstream &file2)
{
	if (argc != 3)
	{
		cout << "Invalid number of arguments!" << endl;
		exit(0);
	}

	file1.open(*(argv + 1));
	if (!file1)
	{
		cout << "Error opening the first file!" << endl;
		exit(1);
	}

	file2.open(*(argv + 2));
	if (!file2)
	{
		cout << "Error opening the second file!" << endl;
		exit(2);
	}
}
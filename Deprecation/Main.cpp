
/**
 * Written by: Vy Thuy Nguyen
 * Date created: February, 2010
 * Last modified: February, 2010
 *
 * Notes:
 *	1) This program takes command line arguments (See main())
 *	2) argc = 5
 *	3) argv[0] = Program's name
 *	4) argv[1] = Dep. method (String; SL = Straight Line; SYD = Sum of Years Digits; UP = Units of Production) 
 *	5) argv[2] = cost (double)
 *	6) argv[3] = crap (double)
 *	7) argv[4] = life (int)
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setw;
using std::fixed;
using std::setprecision;
#include <string>
using std::string;



double getNum();
int getInt();
int checkDepreMethod(char[]);
void validateInput(int argc, char *argv[], double& , double&, int&);
void printTable(double cost, double scrap, int life, double depre[], double accuDepre[]);
char *printNum(double);

class Asset
{
	double cost, scrap, *depre, *accuDepre;
	int life;

public:
	//Constructor
	Asset(double cost,double scrap, int life)
	{
		this -> cost = cost;
		this -> scrap = scrap;
		this -> life = life;
		depre = new double[life];
		accuDepre = new double[life];
	}

	//This method calculates depreciation using STRAIGHT-LINE method
	void getSLdepreciation()
	{		
		depre[0] = accuDepre[0] = (cost - scrap) / life;
		
		for (int n = 1; n < life; n++)
		{
			depre[n] = (cost - scrap) / life;
			accuDepre[n] = accuDepre[n - 1] + depre[n];
		}
		cout << "\n\n\t\t\t\tSTRAIGHT-LINE DEPRECIATION\n\n";
		printTable(cost,scrap,life,depre,accuDepre);	
	}

	//This method calculates depreciation using SUM-OF-THE-YEARS-DIGIT method
	void getSYDdepreciation()
	{
		int s = (life * (life + 1)) / 2;
		depre[0] = accuDepre[0] = double(life) / s * (cost - scrap);
		for (int n = 1; n < life; n++)
		{
			depre[n] = double((life - n)) / s *  (cost - scrap);
			accuDepre[n] = accuDepre[n - 1] + depre[n];
		}
		cout << "\n\n\t\t\tSUM-OF-THE-YEARS-DIGIT DEPRECIATION\n\n";
		printTable(cost,scrap,life,depre,accuDepre);
	}

	//This method calculates depreciation using UNITS OF PRODUCTION method
	void getUPdepreciation()
	{
		double total, *eachYear, currentSum = 0;
		eachYear = new double[life];
		bool error1, error2;
		int n;
		cout << "What is the total number of consumed units? ";
		total = getNum();
					
		//get units expended each year
		do
		{
			error2 = false;
			do
			{
				currentSum = 0;
				error1 = false;
				for (n = 0; n < life; n++)
				{
					cout << "How many units do you anticipate to consume in year " << n + 1 << "? ";
					eachYear[n] = getNum();
					currentSum += eachYear[n];
					if (currentSum >= total && n < (life - 1)) 
					{
						cout << "ERROR! The total has already" << (currentSum > total ? " exceeded " : " equaled ") 
						<< "total in less than " << life << " year" << (life > 2 ? "s" : "") << "\n";
						error1 = true;
						break;
					}
				}
			} while (error1);

			if (currentSum != total)
				{
					cout << "ERROR! The total after " << life << " year" << (life > 2 ? "s" : "") 
						 << " does not total to " << fixed << setprecision(2) << double(total) << "\n";
					error2 = true;
				}
		} while (error2);	

		//calc depreciation and accu.depreciation
		double tempDepre = (cost - scrap) / total;
		accuDepre [0] = depre[0] = eachYear[0] * tempDepre;
		for (n = 1; n < life; n++)
		{
			depre[n] = eachYear[n] * tempDepre;
			accuDepre[n] = depre[n] + accuDepre[n - 1];
		}

		//print result
		cout << "\n\n\t\t\tUNITS OF PRODUCTION DEPRECIATION\n\n\n";
		cout << setw(30) << "  YEAR" << setw(20) <<  "AMOUNT\n\n";
		for (n = 0; n < life ; n++)
		{
			cout << setw(30) << (n + 1) << setw(18) << printNum(eachYear[n]) << "\n";
		}
		cout << "\n\n";
		printTable(cost,scrap,life,depre,accuDepre);
	}
};


int main(int argc, char *argv[])
{	
	double cost, scrap;
	int life;
	validateInput(argc, argv, cost, scrap, life);

	Asset computer(cost,scrap,life);
	computer.getSLdepreciation();
	computer.getSYDdepreciation();
	computer.getUPdepreciation();
	system("pause");

	  switch(checkDepreMethod(argv[1]))
	  {
	  case 1:
	  cout << "Straight Line" << endl;
	  break;
	  case 2: 
	  cout << "Sum of the Years Digits" << endl;
	  break;
	  case 3:
	  cout << "Units of Production" << endl;
	  break;
	  default:
	  cout << "No method of depreciation found!" << endl;
	  exit(2);
	  }
	  
		for (int n = 0; n < argc; n++)
		cout << "argv[" << n << "] is " << argv[n] << endl;
		
	return 0;
}

//************************************************************
//* This function validate input from comamnd line arguments *
//************************************************************
void validateInput(int argc, char *argv[], double &cost, double &scrap, int &life)
{
	if (argc != 5)
	{
	cout << "Invalid number of arguments!\n";
	exit(1);
	}


	cost = atof(argv[2]);
	scrap = atof(argv[3]);
	life = atof(argv[4]);
	if (life < 1)
	{
		cout << "ERROR! Life must be a positive integer!" << endl;
		exit(2);
	}

	if (cost < scrap)
	{
		cout << "ERROR! Cost must be greater than or equal to scrap!";
		exit(3);
	}
}


//******************************************************************
//* This function gets a double from user and validates the number *
//* Does not allow user to enter anything other than numbers       *
//* Return: double												   *
//******************************************************************
double getNum()
{
	double num = 0;
	bool error;
	string preNum;

	do
	{
		error = false;
		cin >> preNum;
		for (int n = 0; n < preNum.size(); n++)
			if (!(preNum[n] >= '0' && preNum[n] <= '9' || preNum[n] == '.'))
			{
				error = true;
				cout << "\nINVALID VALUE! TRY AGAIN... ";
				break;
			}
	}
	while (error);
	num = atof(preNum.c_str());
	return num;
}

//**********************************************************************
//* This funtion checks the second command line arguments to make sure *
//*  user enters the correct name of depreciation method               *
//* Return: 1,2,3 if user enters SL, SYD and UP, respectively          *
//* Return 0 if user enters anything other than SL, SYD and UP         *
//**********************************************************************
int checkDepreMethod(char method[])
{
	if (_stricmp(method,"SL") == 0) return 1;
	if (_stricmp(method, "SYD") == 0) return 2;
	if (_stricmp(method, "UP") == 0) return 3; 
	else return 0;
}

//*****************************************
//* This function prints depreciation table *
//*****************************************
void printTable(double cost, double scrap, int life, double depre[], double accuDepre[])
{
	cout << " Cost = $" << printNum(cost) << "\n";
	cout << " Scrap = $" << printNum(scrap) << "\n"; 
	cout << " Life = " << life << " year" << (life >= 2 ? "s" : "" ) << "\n\n\n\n";
	cout << setw(6) << "  YEAR" << setw(30) << "DEPRECIATION" << setw(40) << "ACCUM. DEPRECIATION\n";
	for (int n = 0; n < life; n++)
		cout << setw(6) << n + 1 << setw(30) << printNum(depre[n]) << setw(39) << printNum(accuDepre[n]) << "\n";
}

//*******************************************************************
//* This function prints number with commas as thousands separators *
//*******************************************************************
char *printNum(double num)
{
	char *arr1, *arr2;
	int intNum = num, numOfDigits = 1, numOfEle, n;
	float decimal = (num - float(int(num))) * 1000; //MUST USE FLOAT - DOUBLE won't work (100.01 will be 100.00)
	decimal += (int(decimal) % 10 >= 5 ? 10 : 0);
	decimal /= 10;

	do
	{
		intNum /= 10;
		numOfDigits++;
	} while (intNum > 9);
	numOfEle = numOfDigits + 3 + numOfDigits / 3 + (numOfDigits % 3 == 0 ? - 1 : 0);
	
	arr1 = new char[numOfEle];
	arr1[0] = (decimal < 10 ? int(decimal) : int(decimal) % 10 ) + '0';
	arr1[1] = (decimal < 10 ? 0 : int(decimal) / 10 ) + '0';
	arr1[2] = '.';
	intNum = num;
	for (n = 3; n < numOfEle; n++)
	{
		if ((n - 2) % 4 == 0  && n != (numOfEle - 1))
			arr1[n] = ',';
		else 
		{
			arr1[n] = (intNum % 10) + '0';
			intNum /= 10;
		}
	}

	arr2 = new char[numOfEle + 1];
	for (n = 0; n <= numOfEle; n++)
		arr2[n] = arr1[numOfEle - 1 - n];
	arr2[numOfEle] = NULL;
	
	return arr2;
}

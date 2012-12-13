/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 */

// Payroll class declaration
#include <fstream>
using std::ifstream;

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::left;
using std::right;
using std::setw;
using std::setprecision;
using std::fixed;

class Payroll
{
	struct Info
	{
		unsigned int id;
		char last[15];
		char first[15];
		double wage;
		double hour;
		char dept;
		double percentChange;
		bool married;
		unsigned int depend;
		bool ins;
	}info;
	
	struct Deduction
	{
		double fica;
		double fed;
		double state;
		double insurance;
	}deduction;
	
	double gross;
	double netpay;

	void calcGross();
	void calcFICA();
	double getDeduction(double single, double married);
	void calcFedTax();
	void calcStateTax();
	void calcInsDeduction();
	void calcNetpay();

public:
	Payroll(ifstream &, ifstream &);
	void printReport();
};

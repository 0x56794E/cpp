/**
 * Written by: Vy Thuy Nguyen
 * Date created: March, 2010
 * Last modified: March, 2010
 */


#include "Payroll.h"

Payroll::Payroll(ifstream &file1, ifstream &file2)
{
	char tempStatus, tempIns;
	file1 >> info.id >> info.last >> info.first >> info.wage >> info.hour >> info.dept;
	file2 >> info.id >> info.percentChange >> tempStatus >> info.depend >> tempIns;

	info.married = (tempStatus == 'S' ? false : true);
	info.ins = (tempIns == 'Y' ? true : false);

	calcGross();
	calcFICA();
	calcFedTax();
	calcStateTax();
	calcInsDeduction();
	calcNetpay();
}

void Payroll::calcGross()
{
	if (info.hour <= 40)
		gross = info.hour * info.wage;
	else 
		gross = 40 * info.wage + (info.hour - 40)* 1.5 * info.wage;

	gross = gross + gross * info.percentChange / 100;
}

void Payroll::calcFICA()
{
	deduction.fica = gross * 0.08;
}

double Payroll::getDeduction(double single, double married)
{
	if (info.married) 
		return married * info.depend;
	else
		return single * info.depend;
}

void Payroll::calcFedTax()
{
	double tempGross = gross - getDeduction(15, 25);

	if (tempGross <= 100)
		deduction.fed = tempGross * .15;
	else if (tempGross <= 200)
		deduction.fed = tempGross * .18;
	else if (tempGross <= 300)
		deduction.fed = tempGross * .19;
	else if (tempGross <= 400)
		deduction.fed = tempGross * .2;
	else deduction.fed = tempGross * .25;
}

void Payroll::calcStateTax()
{
	double tempGross = gross - getDeduction(10, 15);
	deduction.state = tempGross * 0.0595;
}

void Payroll::calcInsDeduction()
{
	if (info.ins)
		deduction.insurance = gross * ( info.married ? 0.04 : 0.02);
	else 
		deduction.insurance = 0;
}

void Payroll::calcNetpay()
{
	netpay = gross - deduction.fed - deduction.fica - deduction.state - deduction.insurance;
}

void Payroll::printReport()
{
	cout << setprecision(2) << fixed;
	cout << setw(6) << left << info.id 
		<< setw(12) << left << info.last
		<< setw(12) << left << info.first
		<< setw(6) << right <<  gross
		<< setw(8) << deduction.fica
		<< setw(10) << deduction.fed
		<< setw(9) << deduction.state
		<< setw(8) << deduction.insurance
		<< setw(9) << netpay
		<< endl;
}


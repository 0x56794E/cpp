/* 
 * Author: Vy Thuy Nguyen
 * Date: 03/01/2012
 * Filename: TwinPrime.cpp
 */
#include "TwinPrime.h"

TwinPrime::TwinPrime(int prime1, int prime2)
{
	this->prime1 = prime1;
	this->prime2 = prime2;
}

TwinPrime::~TwinPrime(void)
{
}

int TwinPrime::getPrime1()
{
	return prime1;
}

int TwinPrime::getPrime2()
{
	return prime2;
}

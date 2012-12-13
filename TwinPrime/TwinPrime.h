/* 
 * Author: Vy Thuy Nguyen
 * Date: 03/01/2012
 * Filename: TwinPrime.h 
 */
#pragma once

class TwinPrime
{
private:
	int prime1;
	int prime2;

public:
	TwinPrime(int, int);
	~TwinPrime(void);
	int getPrime1();
	int getPrime2();
};


/* 
 * Author: Vy Thuy Nguyen
 * Date: 03/01/2012
 * Filename: Main.cpp 
 *
 * This program generates the first 100 pairs of twin primes.
 */
#include <stdio.h>
#include <math.h>
#include "TwinPrime.h"

//Constants
const int MAX = 500;
const int TWIN_PRIME_COUNT = 100;

//Global
TwinPrime* twinPrimes[TWIN_PRIME_COUNT];

//Prototypes
bool isPrime(int);
void findTwinPrime();

int main()
{
	findTwinPrime();
	for (int i = 0; i < TWIN_PRIME_COUNT; i++)
		printf("Pair # %d: %d and %d\n", i + 1, twinPrimes[i]->getPrime1(), twinPrimes[i]->getPrime2());
	return 0;
}

/*
 * Input: an integer
 * Output: true if the integer is prime
 */
bool isPrime(int num)
{
	if (num == 2 || num == 3)
		return true;

	if (num == 1 || num % 2 == 0)
		return false;

	for (int divisor = 3; divisor * divisor <= num; divisor += 2)
		if (!(num % divisor)) //If remainder == 0
			return false;
	
	return true;
}

/*
 * Find the first n twin primes as specified by TWIN_PRIME_COUNT
 */
void findTwinPrime()
{
	int num = 3;
	int count = 0;

	while (count < TWIN_PRIME_COUNT)
	{
		if (isPrime(num) &&  isPrime(num + 2))
			twinPrimes[count++] = new TwinPrime(num, num + 2);
		num += 2;
	}
}
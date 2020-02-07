#include <iostream>

#include "PrimeTree.h"
#define N_PRIMES_10000

int main(int argc, char** argv)
{
	PrimeTree <int> pt;
	int a=2, b=3;
	std::cout << &a << std::endl;
	pt.addElement(a, b);	
}


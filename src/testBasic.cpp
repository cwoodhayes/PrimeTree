#include <iostream>

#include "PrimeTree.h"
#define N_PRIMES_10000

int main(int argc, char** argv)
{
	PrimeTree <int> pt;
	int a, b, c, d, e, f;

	//test that pt detects the correct relationships
	//in a very simple tree structure

	//create the following structure:
	/*
			a
		   / \
		  b   c
		 /|\
		d e f
	*/

	pt.addElement(a);
	pt.addElement(b, a);
	pt.addElement(c, a);
	pt.addElement(d, b);
	pt.addElement(e, b);
	pt.addElement(f, b);
}


/*
Declarations for PrimeTree and PrimeTreeNode
*/

#ifndef PRIME_TREE_H
#define PRIME_TREE_H

#include "Primes.h"

// user of the class must decide how many primes the tree should use,
// based on the tradeoff between computational and memory efficiency.
// more primes uses more memory but will be faster for data sets much larger
// than the number of primes.
// See Primes.h for the options--pick the number of primes by defining something like
// the following in your code:
// #define N_PRIMES_10000

/**
 * @brief      All nodes stored in a PrimeTree must inherit from this
 *             class.
 */
class PrimeTreeNode
{
private:
	//bookkeeping values only to be accessed by PrimeTree methods
	Primes::prime_t nodePrime;
	Primes::prime_t lineagePrime;
	friend class PrimeTree;
};

class PrimeTree 
{
public:
	PrimeTree();
	PrimeTree(PrimeTreeNode& root);
	void addElement(PrimeTreeNode& elem, PrimeTreeNode& parent);
	void addElement(PrimeTreeNode& elem);
	void removeElement(PrimeTreeNode& elem);
	bool isAncestor(PrimeTreeNode& elem, PrimeTreeNode& ancestorElem);
private:
};

#endif
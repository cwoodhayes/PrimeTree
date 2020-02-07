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
public:
	PrimeTreeNode() : _nodePrime(0), _lineagePrime(0) {}
private:
	//bookkeeping values only to be accessed by PrimeTree methods
	Primes::prime_t _nodePrime;
	Primes::prime_t _lineagePrime;
	friend class PrimeTree;
};

class PrimeTree 
{
public:
	PrimeTree();
	PrimeTree(PrimeTreeNode& root);
	void addElement(PrimeTreeNode& elem, PrimeTreeNode& parent);
	void addRootElement(PrimeTreeNode& elem);
	void removeElement(PrimeTreeNode& elem);
	bool isAncestor(PrimeTreeNode& elem, PrimeTreeNode& ancestor);
private:
	uint32_t _size;	
};

#endif
/*
Declarations and definitions for template class PrimeTree
*/

#include "Primes.h"

// #include <iostream>

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

// METHOD DEFINITIONS /////////////////////////////////////////////////////////
PrimeTree::PrimeTree()
{
	//instantiate the root node

}

PrimeTree::PrimeTree(PrimeTreeNode& root)
{
	//instantiate the root node
}

/**
 * @brief      Add a new element to the data structure. Must not already be in the structure
 *             or else the graph will no longer be acyclic.
 *
 * @param      elem    The element to add
 * @param      parent  The parent of elem in the graph. Must have already been added.
 *
 * @tparam     T       the type of elements stored in the PrimeTree
 */
void PrimeTree::addElement(PrimeTreeNode& elem, PrimeTreeNode& parent)
{

}

/**
 * @brief      Adds elem as a child to the most recently inserted element.
 * 			   Really only useful for adding a root node after you've already
 * 			   instantiated the class.
 *
 * @param      elem    The element
 *
 * @tparam     T       the type of elements stored in the PrimeTree
 */
void PrimeTree::addElement(PrimeTreeNode& elem)
{

}

void PrimeTree::removeElement(PrimeTreeNode& elem)
{

}

/**
 * @brief      Returns true if ancestorElem is a parent, grandparent,
 *             great-grandparent, etc. of elem, or is elem itself.
 *             Runs in a very fast O(logn), depending on how many primes you
 *             used.
 *
 * @param      elem          The element
 * @param      ancestorElem  The potential ancestor element
 *
 * @tparam     T       the type of elements stored in the PrimeTree
 *
 * @return     True if ancestorElem is elem's ancestor, False otherwise.
 */
bool PrimeTree::isAncestor(PrimeTreeNode& elem, PrimeTreeNode& ancestorElem)
{
	return true;
}

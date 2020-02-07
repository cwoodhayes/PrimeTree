/*
definitions for methods from PrimeTree.h
*/

#include <iostream>

#include "PrimeTree.h"

PrimeTree::PrimeTree()
{
	//instantiate the root node
	_size = 0;
}

PrimeTree::PrimeTree(PrimeTreeNode& root)
{
	//instantiate the root node
	_size = 0;
}

/**
 * @brief      Add a new element to the data structure. Must not already be in the structure
 *             or else the graph will no longer be acyclic.
 *
 * @param      elem    The element to add
 * @param      parent  The parent of elem in the graph. Must have already been added.
 */
void PrimeTree::addElement(PrimeTreeNode& elem, PrimeTreeNode& parent)
{
	elem._nodePrime = Primes::primes[_size++];
	elem._lineagePrime = elem._nodePrime * parent._lineagePrime;

	// std::cout << "adding " << elem._nodePrime << ":" << elem._lineagePrime << std::endl;

	if (elem._lineagePrime < elem._nodePrime) {
		//integer overflow has occurred. TODO: handle this case
		throw "integer overflow in _lineagePrime\n";
	}
}

/**
 * @brief      Adds elem as the root node of the tree. Will do nothing if the tree
 *             is not currently empty.
 *
 * @param      elem  The element
 */
void PrimeTree::addRootElement(PrimeTreeNode& elem)
{
	if (_size > 0) {
		return;
	} else {
		elem._nodePrime = Primes::primes[_size++];
		elem._lineagePrime = elem._nodePrime;
		// std::cout << "adding " << elem._nodePrime << ":" << elem._lineagePrime << std::endl;
	}
}

void PrimeTree::removeElement(PrimeTreeNode& elem)
{
	//does not actually need to do anything in this implementation.
}

/**
 * @brief      Returns true if ancestor is a parent, grandparent,
 *             great-grandparent, etc. of elem, or is elem itself.
 *             Runs in a very fast O(logn), depending on how many primes you
 *             used.
 *
 * @param      elem          The element
 * @param      ancestor  The potential ancestor element
 *
 * @return     True if ancestor is elem's ancestor, False otherwise.
 */
bool PrimeTree::isAncestor(PrimeTreeNode& elem, PrimeTreeNode& ancestor)
{
	// std::cout << elem._lineagePrime << " % " << ancestor._nodePrime << " = " << ancestor._lineagePrime % elem._nodePrime << std::endl;
	if (elem._lineagePrime % ancestor._nodePrime == 0) 
		return true;
	else return false;
}

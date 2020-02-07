/*
Declarations and definitions for template class PrimeTree
*/

#include "Primes.h"

#include <iostream>

// user of the class must decide how many primes the tree should use,
// based on the tradeoff between computational and memory efficiency.
// more primes uses more memory but will be faster for data sets much larger
// than the number of primes.
// See Primes.h for the options--pick the number of primes by defining something like
// the following in your code:
// #define N_PRIMES_10000

template <typename T>
class PrimeTree 
{
	public:
		PrimeTree();
		PrimeTree(T& root);
		void addElement(T& elem, T& parent);
		void removeElement(T& elem);
		bool isAncestor(T& elem, T& ancestorElem);
	private:
};



// METHOD DEFINITIONS /////////////////////////////////////////////////////////
template <typename T>
PrimeTree<T>::PrimeTree()
{
	//instantiate the root node
}

template <typename T>
PrimeTree<T>::PrimeTree(T& root)
{
	//instantiate the root node
}

template <typename T>
void PrimeTree<T>::addElement(T& elem, T& parent)
{
	std::cout << &elem << std::endl;
}

template <typename T>
void PrimeTree<T>::removeElement(T& elem)
{

}

template <typename T>
bool PrimeTree<T>::isAncestor(T& elem, T& ancestorElem)
{

}

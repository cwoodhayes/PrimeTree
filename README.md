# PrimeTree
Implementation of a novel tree data structure providing fast checks of node ancestry.


Note: In fact, the method used to check ancestry works just as well in the case of a general directed acyclic graph, and could be implemented here by accepting multiple parents as an argument to addElement and multiplying each node's bookkeeping value by each of its parents'. However, I've elected to implement the data structure for trees alone here for the sake of simplicity, and fork the repo later to make that add-on.
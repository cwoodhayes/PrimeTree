# PrimeTree
Implementation of a novel tree data structure providing fast checks of node ancestry. As best I can tell, I am the sole inventor of this method for checking ancestry in a DAG. Eventually I'll get around to writing a formal paper on it. At the moment, it is theoretically interesting, but not practically useful, due to the prime multiple overflow issue. 

If any other math aficionados have ideas on how to efficiently compress the products of valid sequences of primes into a smaller space, I'd love to hear them.

### Operations, given an arbitrary tree of N nodes and a prime lookup table of P primes:
add node: O(1)
remove node: not implemented, but could be done in O(logN) in a balanced tree and O(N) in a random DAG.
check if node A is an ancestor of node B: O(logP)

So. I'm continuing to noodle on this project to determine how to fix the integer overflow issue. At the moment, the tree isn't scalable because the product of the first K primes grows so quickly as K increases. However, there are many sequences of primes that are not possible in a DAG, and so the space of all integers _can_ be more efficiently utilized than it currently is by my simple approach. In my spare time I've been thinking on ways to compress the ancestorPrime such that it overflows less quickly.

Note: In fact, the method used to check ancestry works just as well in the case of a general directed acyclic graph, and could be implemented here by accepting multiple parents as an argument to addElement and multiplying each node's bookkeeping value by each of its parents'. However, I've elected to implement the data structure for trees alone here for the sake of simplicity, and fork the repo later to make that add-on.

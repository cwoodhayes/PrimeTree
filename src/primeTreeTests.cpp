#include <iostream>

#include "gtest/gtest.h"

#include "PrimeTree.h"
#define N_PRIMES_10000

namespace {
	TEST(PrimeTree, smallIsAncestor)
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

		//check that every relationship is correctly detected
		EXPECT_EQ(true, pt.isAncestor(d, a));
		EXPECT_EQ(true, pt.isAncestor(d, b));
		EXPECT_EQ(false, pt.isAncestor(d, e));
		EXPECT_EQ(false, pt.isAncestor(d, f));
		EXPECT_EQ(false, pt.isAncestor(d, c));
		EXPECT_EQ(true, pt.isAncestor(d, d));

		EXPECT_EQ(true, pt.isAncestor(e, a));
		EXPECT_EQ(true, pt.isAncestor(e, b));
		EXPECT_EQ(false, pt.isAncestor(e, d));
		EXPECT_EQ(false, pt.isAncestor(e, f));
		EXPECT_EQ(false, pt.isAncestor(e, c));
		EXPECT_EQ(true, pt.isAncestor(e, e));

		EXPECT_EQ(true, pt.isAncestor(f, a));
		EXPECT_EQ(true, pt.isAncestor(f, b));
		EXPECT_EQ(false, pt.isAncestor(f, d));
		EXPECT_EQ(false, pt.isAncestor(f, e));
		EXPECT_EQ(false, pt.isAncestor(f, c));
		EXPECT_EQ(true, pt.isAncestor(f, f));

		EXPECT_EQ(true, pt.isAncestor(b, a));
		EXPECT_EQ(false, pt.isAncestor(b, f));
		EXPECT_EQ(false, pt.isAncestor(b, d));
		EXPECT_EQ(false, pt.isAncestor(b, e));
		EXPECT_EQ(false, pt.isAncestor(b, c));
		EXPECT_EQ(true, pt.isAncestor(b, b));

		EXPECT_EQ(true, pt.isAncestor(c, a));
		EXPECT_EQ(false, pt.isAncestor(c, f));
		EXPECT_EQ(false, pt.isAncestor(c, d));
		EXPECT_EQ(false, pt.isAncestor(c, e));
		EXPECT_EQ(false, pt.isAncestor(c, b));
		EXPECT_EQ(true, pt.isAncestor(c, c));

		EXPECT_EQ(false, pt.isAncestor(a, c));
		EXPECT_EQ(false, pt.isAncestor(a, f));
		EXPECT_EQ(false, pt.isAncestor(a, d));
		EXPECT_EQ(false, pt.isAncestor(a, e));
		EXPECT_EQ(false, pt.isAncestor(a, b));
		EXPECT_EQ(true, pt.isAncestor(a, a));
	}
}
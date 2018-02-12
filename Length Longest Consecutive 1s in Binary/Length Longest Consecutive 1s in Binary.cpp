// Length Longest Consecutive 1s in Binary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int maxConsecutiveOnes(int x)
{
	// initialize result
	int count = 0;

	// count the number of iterations to
	// reach x =0;
	while (x != 0)
	{
		// This operation reduces length
		// of every sequence of 1s by one.
		x = (x &(x << 1));

		count++;
	}

	return count;
}

// driver code
int main()
{

	cout << maxConsecutiveOnes(14) << endl;
	cout << maxConsecutiveOnes(222) << endl;

    return 0;
}


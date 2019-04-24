#include "pch.h"
#include <iostream>
using namespace std;


/*Факториал - N! = N*(N-1)!*/

double Factorial(double N)
{
	if (N < 0) 
	{
		exit(0);
	}
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;
	return N * Factorial(N - 1);
}

int main()
{
	cout << Factorial(6) << endl;
}


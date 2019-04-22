#include "pch.h"
#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

double sum(double a, double b)
{
	return a + b;
}

void main()
{
	cout << sum(5, 22) << endl;
	cout << sum(5.2, 123.1) << endl;
	cout << sum(5,2, 123) << endl;
}



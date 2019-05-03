#include "pch.h"
#include <iostream>
using namespace std;

void func1(int a)
{
	a = 1;
}

void func2(int &a)
{
	a = 2;
}

void func3(int *a)
{
	*a = 3;
}

void func(int &a, int &b, int &c)
{
	a = 212;
	b *= 21;
	c -= 12;
}

int main()
{
	int val = 45;
	cout << "val= " << val << endl << endl;

	
	
	

	cout << "f1 " << endl;
	func1(val);
	cout << "val= " << val << endl << endl;
	cout << "f2 " << endl;
	func2(val);
	cout << "val= " << val << endl << endl;
	cout << "f3 " << endl;
	func3(&val);
	cout << "val= " << val << endl << endl;

	cout << "val= " << val << endl << endl;

	int a = 22, b = 1, c = 123;
	func(a, b, c);
	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;
}

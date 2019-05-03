#include "pch.h"
#include <iostream>
using namespace std;


template <typename T>                                         
void Swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}



void main()
{

	int a = 7;
	int b = 9;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;

	Swap(a, b);
	cout << "Swap"  << endl;

	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	

}
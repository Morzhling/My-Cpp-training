#include "pch.h"
#include <iostream>
using namespace std;
	
int func(int a)
{
	return ++a;
}

int main()
{
	int a = 1;
	a =  func(a);

	cout << a << endl;
}



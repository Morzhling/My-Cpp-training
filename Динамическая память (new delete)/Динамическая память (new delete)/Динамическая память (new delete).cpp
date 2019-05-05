#include "pch.h"
#include <iostream>
using namespace std;


void main()
{
	int *pa = new int;
	*pa = 123;
	cout << *pa << endl;
	delete pa;
	//pa = 0;
	pa = NULL;
	//pa = nullptr;

	if (pa != nullptr)
	{
		cout << pa << endl;
	}
	delete pa;

}


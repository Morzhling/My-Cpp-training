

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int i = 0;
	cout << "1й цикл" << endl;
	for (; i < 10; i++) 
	{
		cout << i << endl;
	}
	cout << "2й цикл" << endl;
	for ( i; i < 20; )
	{
		cout << i << endl;
		i++;
	}

	for (int n = 0, j = 10 ; n < 10 && j != 5; n++, j--) 
	{
		cout << n << endl;
		cout << j << endl;
	}
}



#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char s = '*';
	int l;
	int h;

	cout << "Введите длину l и ширину h прямоуольника:\n";
	cin >> l >> h;


	for (int i = 1; i <= l; i++)
	{
		cout << endl << "*";
		for (int j = 1; j <= h; j++)
		{
			cout << "*";
		}

	}

}
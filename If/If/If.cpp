
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите а, a = ";
	cin >> a;
	/*if (a > 5)
	{
		cout << "Число больше 5";
	}
	else if (a == 5)
	{
		cout << "Число равно 5";
	}
	else 
	{
		cout << "Число меньше 5";
	}*/
	if (a % 2 == 0)
	{
		cout << "Число а - чётное";
	}
	else
	{
		cout << "Число а - нечётное";
	}
}


#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 1; i < 6; i++)
	{
		cout << "Сработал 1ый цикл for итерация № " << i << endl;
		for (int j = 1; j < 6; j++)
		{
			cout << "\tСработал 2oй цикл for итерация №  " << j << endl;
		}

	}

}
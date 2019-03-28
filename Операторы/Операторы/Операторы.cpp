#include "pch.h"
#include <iostream>
using namespace std;


int main()
{	
	setlocale(LC_ALL, "rus");
	int a, b, c;
	cout << "Введите 3 числа: ";
	cin >> a >> b >> c;
	cout << "Сумма чисел = " << a + b + c << endl << "Произведение чисел = " << a * b * c << endl << "Среднее арифметическое чисел = " << (a + b + c) / 3 << endl;

}



#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	cout << "Pow - " << pow(2, 5) << endl; //возведение в степень
	cout << "Abs - " << abs(-25) << endl;
	cout << "Sin - " << sin(10) << endl;
	cout << "Cos - " << cos(10) << endl;
	cout << "Sqrt - " << sqrt(25) << endl;
	cout << "Ceil - " << ceil(27.42) << endl; //округление к большему целому
	cout << "Floor - " << floor(27.42) << endl; //округленье к меньшему целому
	cout << "Exp - " << exp(1) << endl;
	cout << "Log - " << log(2.7) << endl; //логарифм по основанию е (2,7....) (натуральный лог)
	cout << "Log10 - " << log10(100) << endl; //логарифм по основанию 10 (десятичный лог)
	return 0;

}


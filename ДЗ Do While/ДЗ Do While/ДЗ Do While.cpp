// Написать программу, которая выводит сумму всех целых нечетных чисел в заданном пользователем диапазоне
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int Up;
	int Down;
	int sum = 0;
	
	
	cout << "Введите диапазон чисел (нижний и верхний)\n";
	cin >> Down >> Up;



	do
	{
		if (Down % 2 == 1)
		{
			sum += Down;
		}
			Down++;
		
	} 
	while (Down <= Up);
	cout << sum;
}



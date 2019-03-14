// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1;
	int num2;

	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
   
	cout << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 / num2 = " <<  endl;
	try {
		if (num2 == 0)
			throw  404;
		cout << num1 / num2 << endl;
	}
	catch (int i) {
		cout << "Error  " << i << " - Division by 0!!!" << endl;
	}
	return 0;
}



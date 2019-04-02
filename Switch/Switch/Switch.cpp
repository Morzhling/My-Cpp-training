

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	//int a;
	//cin >> a;
	//switch (a)
	//{
	//case 1:
	//	cout << "a = 1";
	//	break;
	//case 2:
	//	cout << "a = 2";
	//	break;
	//default:
	//	cout << "wtf!";
	//	break;
	//}

	/////////////////////////////////////////////////////									Calculator

	int a, b, i;
	cout << "Введите код функции, которую хотите выполнить ( 1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление )\n";
	cin >> a >> b >> i;

	switch (i)
	{
	case 1:
		cout << a + b;
		break;
	case 2:
		cout << a - b;
		break;
	case 3:
		cout << a * b;
		break;
	case 4:
		cout << a / b;
		break;
	default:
		cout << "Введите код от 1 до 4";
		break;
	}

}


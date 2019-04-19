#include "pch.h"
#include <iostream>
using namespace std;

void foo()
{
	cout << "Я воркен!" << endl;
}

//int sum(int a, int b)							//С выводом в консоль
//{
//	cout << a + b << endl;
//	return 0;
//}

//int sum(int a, int b)							//С выводом в консоль и записью в отдельную переменную
//{
//	int res = a + b;
//	cout << res << endl;
//	return res;
//	
//}

//int sum(int a, int b)							//Без вывода в консоль
//{
//	int res = a + b;
//	return res;
//}

int sum(int a, int b)
{
	return a + b;
}


void main()								//Точка входа в программу - фунция main
{
	setlocale(LC_ALL, "ru");
	for (int i = 0; i < 10; i++)
	{
		foo();
		int c = sum(324, 23);
		cout << c << endl;
	}
	
	

}



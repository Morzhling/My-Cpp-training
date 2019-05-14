#include "pch.h"
#include <iostream>
using namespace std;

void func(const char *str)
{
	cout << strlen(str) << endl;
}

void main()
{
	setlocale(LC_ALL, "ru");
	//char str[] = "Hello!";
	const char *str = "Hello!";
	cout << str << endl;

	const char *strDArr[] = { "Hello", "World", "!!!" };

	for (int i = 0; i < 3; i++)
	{
		cout << strDArr[i] << " ";
	}
	cout << endl;

	func(str);
}
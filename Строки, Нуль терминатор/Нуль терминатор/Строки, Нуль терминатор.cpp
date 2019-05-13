#include "pch.h"
#include <iostream>
using namespace std;



void main()
{
	char symb = 'z';
	cout << symb << endl;
	//strlen вернуть размер строки
	//char symb ="z";     как строка  z\0 не скомпилируется
	char str[] = "Hello";
	//char str[] = {'H','e','l','l','o','\0'};
	cout << str << endl;
	cout << strlen(str) << endl;
}


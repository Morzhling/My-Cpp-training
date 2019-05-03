#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	int a = 5;
	int *pa = &a;

	int &aRef = a;

	cout << "a\t" << a << endl;

	cout << "pa\t" << pa << endl;
	cout << "pa\t" << pa + 1 << endl;
	cout << "aRef\t" << aRef << endl;   //у ссылок не оператора разыменования (показывают сразу значение по адресу, а не сам адрес) , таким образом через ссылку идет работа с данными напрямую
	cout << "aRef\t" << aRef + 1 << endl;

	aRef = 54223;

	cout << "a\t" << a << endl;

	int *paa = &aRef;

	*paa = 12;

	cout << "a\t" << a << endl;

}



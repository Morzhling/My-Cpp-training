#include "pch.h"
#include <iostream>
using namespace std;
void func();
int value = 10; //глобальная переменная (::value для вызова внутри функции, в которой уже имеется переменная с таким названием)

int main()
{
	func();
	int value = 19; //локальная переменная внутри функции 
	cout << value << endl;
	cout << ::value << endl;
}

void func() {
	cout << value << endl;
}

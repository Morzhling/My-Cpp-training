#include "pch.h"
#include <iostream>
using namespace std;

/*Указатель (pointer/ptr) - переменная, содержащая адрес другой переменной или объекта*/

int main()
{
	int a = 10;
	int b = a;                //подставляется значение переменной а

	int *ptra= &a;            //подставляется адрес переменной а (указывает на адрес в памяти, где лежит переменная а) *-переменная типа "указатель" , &-оператор взятия адреса
	int *ptra2 = &a;

	cout << "a\t" << a << endl;
	cout << "ptra\t" << ptra << endl;
	cout << "ptra2\t" << ptra2 << endl;
	cout  << *ptra << endl;	  //операция разыменования

	*ptra2 = 3;

	cout << "a\t" << a << endl;
	

}


#include "pch.h"
#include <iostream>
using namespace std;



void main()
{
	double a = 213.12;
	cout << a << endl;
	cout << (int)a << endl;
	cout << (char)a << endl;			 //явное преобразование
	cout << (bool)a << endl;

	int z = 231.12;                      //неявное преобразование
	cout << z << endl;               


}

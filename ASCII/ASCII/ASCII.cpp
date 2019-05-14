#include "pch.h"
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << sizeof(char) << endl;
	for (int i = 0; i <= 255; i++)
	{
		cout <<"code = " << i << "\t" << "char =  " << (char)i <<  endl;           //от 0 по 12 идет английская раскладка, далее в зависимости от setlocale
	}

}


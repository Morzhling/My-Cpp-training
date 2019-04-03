#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 10;
	do
	{
		cout << "i = " << i << endl;				// при "Do While" будет произведен как минимум один заход в цикл
		i++;
	} while (i < 10);
}

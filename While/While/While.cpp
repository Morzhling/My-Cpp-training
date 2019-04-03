#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int i = 0;
	while (i<30)
	{
		cout << "i = "  << i << endl;				//один проход по телу цикла - одна итерация
		i++;
	}
}



#include "pch.h"
#include <iostream>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");

	for (int i = 0; i < 10; i++)
	{
		if (!(i%2))
		{
			continue;						//пропускает код ниже и приступает к следующей итерации цикла
		}
		cout << "i = " << i << endl;
		
	}
}



#include "pch.h"
#include <iostream>
using namespace std;

/*Ключевое слово inline. Встраиваемая функция*/


inline int sum(int a, float b)								//Оптимизация простых фукций
{
	return a + b;
}

int main()

{
	cout << sum(56, 34) << endl;
}


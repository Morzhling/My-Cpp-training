
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");

	//int arr[4];											//изначально это массив с мусором
	//int arr1[]{ 2,213,312,12312,321,31231 };				//объявление массива с инициализацией
	
	int arr[4]{};											//массив с изначальными нулями
	arr[0] = 5;
	arr[1] = 6;
	arr[2] = 13;
	arr[3] = 231451;

	int i = 0;
	while (i < 4)
	{
		cout << arr[i] << endl;
		i++;
	}
	
}



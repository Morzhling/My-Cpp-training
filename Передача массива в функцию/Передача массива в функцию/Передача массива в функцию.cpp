#include "pch.h"
#include <iostream>
using namespace std;

void FillArr(int arr[], const int size)				//Массив не передается по значению, передается указатель на массив (само имя массива - указатель на область памяти)
{
	int a = sizeof(arr);							//а = 4 байта, так как здесь лишь ссылка на массив
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	const int SIZE = 10; 
	int arr[SIZE];
	int a = sizeof(arr);							//а = 40 байт, так как размер массива - 10 элементов по 4 байта

	FillArr(arr, SIZE);
	PrintArr(arr, SIZE);
	
}

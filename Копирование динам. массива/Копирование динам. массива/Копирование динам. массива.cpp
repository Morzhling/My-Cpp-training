#include "pch.h"
#include <iostream>
using namespace std;

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 122 + 11;
	}

}

void ShowArray(const int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{
	int size = 10;
	int *arr1 = new int [size];
	
	int *arr2 = new int[size];

	FillArray(arr1, size);
	FillArray(arr2, size);

	cout << "Arr 1   \n";
	ShowArray(arr1, size);
	cout << "Arr 2   \n";
	ShowArray(arr2, size);

	delete[] arr1;

	cout << "////////////////////////////////////////////////////////////////////////////////" << endl;

	arr1 = new int[size];
	for ( int i = 0; i < size; i++)
	{
		arr1[i] = arr2[i];

	}

	cout << "Arr 1   \n";
	ShowArray(arr1, size);
	cout << "Arr 2   \n";
	ShowArray(arr2 , size);


	delete[] arr1;
	delete[] arr2;
}

#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	const int SIZE = 10;
	int arr[SIZE]{21,1231,1213123,3123,31231,5346,8678,67867,3};

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "===============================================" << endl;

	int *pArr = arr;

	for (int i = 0; i < SIZE; i++)
	{
		cout << pArr[i] << endl;
	}

	cout << "===============================================" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << *(pArr + i) << endl;
	}


	cout << "arr\t" << arr << endl;
	cout << "pArr\t" << pArr << endl;



}



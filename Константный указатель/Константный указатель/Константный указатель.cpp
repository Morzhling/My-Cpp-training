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
		cout << arr[i] << endl;
	}

}

int main()
{
	
}


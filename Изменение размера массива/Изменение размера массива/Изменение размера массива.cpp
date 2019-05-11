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

void push_back(int *&arr, int &size,const int value)
{
	int *newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}
	newArray[size++] = value;
	//size++;

	delete[] arr;
	arr = newArray;
}

void pop_back(int *&arr, int &size)
{
	size--;
	if (size > 0)
	{
		int *newArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = arr[i];
		}


		delete[] arr;
		arr = newArray;
	}
	else
	{
		return;
	}
}

void push_forward(int *&arr, int &size, const int value)
{
	int *newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i+1] = arr[i];
	}
	newArray[0] = value;
	size++;

	delete[] arr;
	arr = newArray;
}

void pop_forward(int *&arr, int &size)
{
	size--;
	if (size > 0)
	{
		int *newArray = new int[size];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = arr[i + 1];
		}


		delete[] arr;
		arr = newArray;
	}
	else
	{
		return;
	}
	
}

int main()
{
	int size = 5;
	int *arr = new int[size];

	

	FillArray(arr, size);
	

	cout << "Arr   \n";
	ShowArray(arr, size);

	push_back(arr, size, 213);
	cout << "Arr new  \n";
	ShowArray(arr, size);


	pop_back(arr, size);
	cout << "Arr new  \n";
	ShowArray(arr, size);

	push_forward(arr,size, 274);
	cout << "Arr new  \n";
	ShowArray(arr, size);

	pop_forward(arr, size);
	cout << "Arr new  \n";
	ShowArray(arr, size);
	 


	

	delete[] arr;
	
}


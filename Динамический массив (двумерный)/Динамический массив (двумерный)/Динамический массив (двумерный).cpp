#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int rows = 0;
	int cols = 0;
	cout << "Введите количество строк массива " << endl;
	cin >> rows; 
	
	cout << "Введите количество столбцов массива " << endl;
	cin >> cols;

	int **arr = new int *[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand()%100500;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl; 
	}


	///////////////////////////////////////////////////////////////Удаление данных массива///////////////////////////////////////////////////////////////
	for (int i = 0; i < rows; i++)             
	{
		delete[] arr[i];
	}

	delete[] arr;
}

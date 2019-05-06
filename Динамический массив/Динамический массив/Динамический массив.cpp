#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int size = 0;
	srand(time(NULL));
	cout << "Введите размер массива: " << endl;
	cin >> size; 
	cout << "//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////" << endl;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 100 + 1;
		}
		cout << arr[i] << "\t";
		cout << arr + i << endl;     //Аримфетика указателей (так как массив не разыменован, то  будут выводиться адреса (для значений *(arr+i)))
	}
	delete [] arr;
}


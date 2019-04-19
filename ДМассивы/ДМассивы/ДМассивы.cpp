#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	const int ROW = 3;
	const int COL = 4;

	int arr[ROW][COL]{0};						//2я строка 2й столбец двумерного массива (нумерация столбов и строк начинается с 0)

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 100 + 1;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}     
	
	int *ptr = *arr;							//Димон вые**улся

	cout << endl << endl;

	for (int i = 0; i < ROW*COL; ++i)			
	{
		cout << *ptr << ' ';					
		++ptr;									//сдвиг указателя на размер типа данных
	}

	return 0;
}



#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "ru");

	srand(time(NULL));     //достаточно вызвать один раз в начале
	bool est;



	//int a = rand()%100 + 5; //диапазон (% до и + от)

	//cout << a << endl;

	//a = rand() % 10 + 5;

	//cout << a << endl;


	int const SIZE = 10;
	int arr[SIZE];
	for (int i = 0; i < SIZE; )
	{
		est = false;
		int newRand = rand() % 100;
		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRand)
			{
				est = true;
				break;
			}
		}
		
		if (!est)
		{
			arr[i] = newRand;
			i++;
		}
	}


	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}

	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Min  " << min;
}

 
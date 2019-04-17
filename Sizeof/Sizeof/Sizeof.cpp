#include "pch.h"
#include <iostream>
using namespace std;

//sizeof возвращает длину в байтах  

int main()
{
	int arr[]{12,213,44,23,2342};
	cout << (sizeof(arr))/4 << endl;

	/*for (int i = 0; i < sizeof(arr) / sizeof(int); i++)*/
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
}


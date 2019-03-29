// Инкремент и декремент

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//int i = 0;
	////i = i + 1;
	//while (i < 20) {
	//	i++;								//инкремент постфиксный
	//	cout << i << endl;
	//}
	
	int a = 0;
	int arrN[20]{};
	//for (int i = 0; i < 20; i++)
	//{
	//	cout << arrN[i] << " " << i << endl;
	//}

	for (int i = 0; i < 20; i++){
		a = rand()%100;
		arrN[i] = a;
		for (int j = 0; j < i; j++) {
			if (arrN[j] == a) {
				i--;						//декремент постфиксный 
				break;
			}
		}
	}

	for (int i = 0; i < 20; i++)
	{
		cout << arrN[i] << endl;
	}

	int k = 1,b;
	cout << "//////////////////////////////////////////////////////////////////////////////" << endl;
	b = ++k*k++;
	cout << k << endl;
	cout << b << endl;
}


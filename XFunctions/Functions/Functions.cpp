

#include "pch.h"
#include <iostream>
using namespace std;


// void func(int num);  прототип функции (саму функции при этом можно писать ниже под main)	

void func(int num) {
	cout << "Parametr - " << num << endl; 
}

float sum(float x, float y) {
	float result;
	result = x + y;
	return result;
}

int main()
{
	int num = 234;
	func(num);

	cout << sum(23.1, 26.8);
	

	return 0;
}

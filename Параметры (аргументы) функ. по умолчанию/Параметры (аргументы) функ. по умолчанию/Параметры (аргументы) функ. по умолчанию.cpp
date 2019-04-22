#include "pch.h"
#include <iostream>

void func(int a, int b = 7, float z = 43.0)
{
	std::cout << a << ' ' << b << ' ' << z << std::endl;
}

int main()
{
	func(5);
	func(10, 21, 1.0);
}


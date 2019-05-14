#include "pch.h"
#include <iostream>
using namespace std;

int strlenmy(const char *str)
{
	int n = 0;

	while (str[n]!='\0')
	{
		n++;
	}

	return n;
}

int main()
{
    const char *str = "HELLO HELL";

	//char str[] = { "Hello" };

	cout << strlenmy(str);
}


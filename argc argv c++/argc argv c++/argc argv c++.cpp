#include "pch.h"
#include <iostream>
using namespace std;

void main(int argc, char* argv[])   //arguments count & arguments value
{
	for (int i = 0; i < argc; i++)
	{
		cout << argv[i] << endl;
	}

	system("pause");
}



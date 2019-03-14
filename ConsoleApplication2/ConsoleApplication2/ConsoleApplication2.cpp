

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "enter ur name: ";
	getline(cin, name);
	if (name.length() != 0)
	cout << "ur name is: " << name;
	else 
	cout << "error";

	cin.get();
	return 0;
}


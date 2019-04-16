#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char s = 'ы';
	int l;
	

	cout << "Введите  l креста:\n";
	cin >> l;
	int h = l * 3;

	for (int i = 1; i < l; i++)
	{
		cout << endl << setw(l+1) << s;
		for (int j = 1; j < l; j++)
		{
			cout << s;
		}

	}

	for (int i = 1; i < l+1; i++)
	{
		cout << endl << s;
		for (int j = 1; j < h; j++)
		{
			cout << s;
		}

	}


	for (int i = 1; i < l; i++)
	{
		cout << endl << setw(l+1) << s;
		for (int j = 1; j < l; j++)
		{
			cout << s;
		}

	}

}

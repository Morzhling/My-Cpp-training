#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int i = 0;
	char s;
	bool l = 0;
	int n = 0;

	cout << "Введите символ" << endl;
	cin >> s;
	cout << "Введите количество символов" << endl;
	cin >> n;
	cout << "Введите вид линии (0 - верт., 1 - горизонт.)" << endl;
	cin >> l;

	while (i < n)
	{
		if (l == 0)
		{
			cout << s << endl;
			i++;
		}
		else
		{
			cout << s << " ";
			i++;
		}
	}
}
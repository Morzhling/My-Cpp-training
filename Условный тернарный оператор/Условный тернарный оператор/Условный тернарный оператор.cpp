#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	int a;
	cout << "введите значени a" << endl;
	cin >> a;


	//if (a < 10)
	//{
	//	cout << "a < 10" << endl;
	//}
	//else 
	//{
	//	if (a > 10)
	//	{
	//		cout << "a > 10" << endl;
	//	}
	//	else
	//	{
	//		cout << "a = 10" << endl;
	//	}
	//} 
	

	//(a < 10) ? (cout << "a < 10" << endl) : (cout << "a > 10" << endl);			// Усл. ? true : false

	(a < 10) ? (cout << "a < 10" << endl) : (a > 10) ? (cout << "a > 10" << endl) : (cout << "a = 10" << endl);
}


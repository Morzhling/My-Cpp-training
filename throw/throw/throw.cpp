#include <iostream>
#include <string>
#include <fstream>
using namespace std;


/*
обработка исключений 
throw
*/


void func(int val)
{
	if (val < 0)
	{
		//throw val;
		//throw "Число меньше 0!!!";
		throw exception("Число меньше 0!!!");
	}
	
	cout << "val = " << val << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");
	
	try
	{
		func(-324);
	}
	catch (const exception &ex)
	{
		cout << "Мы поймали ошибку отрицательного значения val " << ex.what() << endl;
	}

	
	return 0;
}

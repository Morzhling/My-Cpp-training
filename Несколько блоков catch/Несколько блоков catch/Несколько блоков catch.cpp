#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void func(int val)
{
	if (val<0)
	{
		//throw exception("val < 0 !!!");
		throw "val < 0 !!!";
	}

	if (val==0)
	{
		throw exception("val = 0 !!!");
	}

	if (val==1)
	{
		throw 1;
	}
	cout << "val = " << val << endl;
}

int main()
{
	setlocale(LC_ALL, "ru");

	try
	{
		func(1);
	}

	catch (const exception &ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what()<< endl;
	}
	catch (const char* ex)
	{
		cout << "Блок 2 Мы поймали " << ex << endl;
	}
	catch (...)				//ставится в самом конце для отлова различных неописанных исключений
	{
		cout << "Что-то пошло не так!)" << endl;
	}
	return 0;
}

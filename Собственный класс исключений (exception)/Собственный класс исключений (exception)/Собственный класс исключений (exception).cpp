#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class MyException:public exception
{
public:
	MyException(const char *msg, int dataState):exception(msg)
	{
		this->dataState = dataState;
	}
	int GetdataState() { return dataState; }
private:
	int dataState;
};



void func(int val)
{
	if (val < 0)
	{
		throw exception("val < 0 !!!");
	}

	if (val == 1)
	{
		throw MyException("Число = 1 ", val);
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

	catch (const MyException& ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;
		//cout << "Состояние данных " << ex.GetdataState() << endl;   почему-то не работает
	}

	catch (const exception & ex)
	{
		cout << "Блок 1 Мы поймали " << ex.what() << endl;
		//cout << "Состояние данных " << ex.GetdataState() << endl;
	}
	//catch (const char* ex)
	//{
	//	cout << "Блок 2 Мы поймали " << ex << endl;
	//}
	//catch (...)				//ставится в самом конце для отлова различных неописанных исключений
	//{
	//	cout << "Что-то пошло не так!)" << endl;
	//}
	return 0;
}

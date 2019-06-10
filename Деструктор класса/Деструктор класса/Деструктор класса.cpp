#include "pch.h"
#include <iostream>
using namespace std;

class MyClass
{
	int *data;
public:
	MyClass(int size)
	{
		data = new int[size];
		for (int i= 0; i < size; i++)
		{
			data[i]=i;
		}
		cout << "Объект " << data << "\tВызвался конструктор " << endl;
	}
	~MyClass()											//Объекты уничтожаются в обратном порядке
	{
		delete[] data;
		cout << "Объект " << data << "\tВызвался деструктор " << endl;
	}

};

void Func()
{
	cout << "Func Начало выполнения " << endl;
	MyClass a(1);
	cout << "Func Конец выполнения " << endl;
}


int main()
{
	setlocale(LC_ALL, "ru");

	/*MyClass a(1);
	MyClass b(2);
	MyClass с(3);*/

	Func();

	return 0;
}
#include <iostream>
#include <string>
using namespace std;



class A
{
public:
	A()
	{
		cout << "Вызвался конструктор класса А" << endl;
	}
	~A()
	{
		cout << "Вызвался деструктор класса А" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "Вызвался конструктор класса В" << endl;
	}
	~B()
	{
		cout << "Вызвался деструктор класса B" << endl;
	}
};

class C :public B
{
public:
	C()
	{
		cout << "Вызвался конструктор класса С" << endl;
	}
	~C()
	{
		cout << "Вызвался деструктор класса C" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	/*A a;
	B b;*/
	C c;
	cout << endl << endl;
	return 0;
}
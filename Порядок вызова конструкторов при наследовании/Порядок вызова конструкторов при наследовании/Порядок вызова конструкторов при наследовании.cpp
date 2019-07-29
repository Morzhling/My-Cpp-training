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
};
class B : public A
{
public:
	B()
	{
		cout << "Вызвался конструктор класса В" << endl;
	}
};

class C :public B
{
public:
	C()
	{
		cout << "Вызвался конструктор класса С" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	A a;
	B b;
	C c;

	return 0;
}
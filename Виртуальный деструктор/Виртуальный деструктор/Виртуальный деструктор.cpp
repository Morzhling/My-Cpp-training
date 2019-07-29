#include <iostream>
#include <string>
using namespace std;

/*Виртуальный деструктор*/

class A
{
public:
	A()
	{
		cout << "выделена динамическая память, объект класса А" << endl;
	}
	virtual ~A()
	{
		cout << "освобождена динамическая память, объект класса А" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "выделена динамическая память, объект класса B" << endl;
	}
	~B() override
	{
		cout << "освобождена динамическая память, объект класса B" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");

	/*B b;*/

	/*B *bptr = new B;*/
	A* bptr = new B;
	delete bptr;



	return 0;
}
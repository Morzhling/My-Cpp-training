#include <iostream>
#include <string>
using namespace std;

/*Чисто виртуальный деструктор*/
/*Класс, в котором объявлен чисто вирт. деструктор тоже становится абстрактным классом*/

class A
{
public:
	A()
	{
		
	}
	virtual ~A() = 0;
};

A::~A() {};

class B : public A
{
public:
	B()
	{
		
	}
	~B() override
	{
		
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
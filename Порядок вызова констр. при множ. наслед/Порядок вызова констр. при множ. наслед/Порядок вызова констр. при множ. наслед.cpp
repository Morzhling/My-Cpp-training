#include <iostream>
#include <string>
using namespace std;

/*Порядок вызова конструкторов при множественном наследовании*/

class Car
{
public:
	Car()
	{
		cout << "Вызван конструктор Car" << endl;
	}
	void Drive()
	{
		cout << "Vruum!" << endl;
	}
};

class Airplain
{
public:
	Airplain()
	{
		cout << "Вызван конструктор Airplain" << endl;
	}
	void Fly()
	{
		cout << "Vjuuh!" << endl;
	}
};

class FlyingCar : public Car, public Airplain
{
public:
	FlyingCar()
	{
		cout << "Вызван конструктор FlyingCar" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");

	/*Car c;
	c.Drive();
	Airplain a;
	a.Fly();*/
	FlyingCar fc;
	fc.Drive();
	fc.Fly();

	Car* ptrC = &fc;
	Airplain* ptrA = &fc;

	return 0;
}

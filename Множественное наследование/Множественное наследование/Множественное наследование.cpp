#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	void Drive()
	{
		cout << "Vruum!" << endl;
	}
};

class Airplain
{
public:
	void Fly()
	{
		cout << "Vjuuh!" << endl;
	}
};

class FlyingCar : public Car, public Airplain
{

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


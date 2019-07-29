#include <iostream>
#include <clocale>
using namespace std;

//Интерфейс - элемент взаимодействия (абстрактный класс, у кот. все методы вирт.)

class IBicycle
{
public:
	void virtual TwistTheWheel() = 0;
	void virtual Ride() = 0;

};

class SBicycle:public IBicycle
{
public:
	void  TwistTheWheel() override
	{
		cout << "метод TwistTheWheel() SBicycle" << endl;
	}
	void  Ride() override
	{
		cout << "метод Ride() SBicycle" << endl;
	}

};

class BMX :public IBicycle
{
public:
	void  TwistTheWheel() override
	{
		cout << "метод TwistTheWheel() BMX" << endl;
	}
	void  Ride() override
	{
		cout << "метод Ride() BMX" << endl;
	}

};

class Human
{
public:
	void RideOn(IBicycle& bicycle)
	{
		cout << "Руль кручу-верчу" << endl;
		bicycle.TwistTheWheel();
		cout << endl << "Паииихалии" << endl;
		bicycle.Ride();

	}
};
int main()
{
	setlocale(LC_ALL, "rus");
	Human h;
	SBicycle sb;
	BMX bmx;
	h.RideOn(bmx);


	return 0;
}


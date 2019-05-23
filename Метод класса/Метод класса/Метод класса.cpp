#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	int Age;
	int Weight;
	string Name;

	void Info()
	{
		/*std :: */cout << "Имя:\t\t" << Name << "\nВес:\t\t" << Weight << "\nВозраст:\t" << Age << endl;
	}
};

class Point
{
public:
	int x;
	int y;
	int z;
};

int main()
{
	setlocale(LC_ALL, "ru");
	Point a;
	a.x = 12;
	a.y = 21;

	Human Tzar;
	Tzar.Name = "Basil";
	Tzar.Age = 24;
	Tzar.Weight = 68;

	Tzar.Info();


	return 0;
}
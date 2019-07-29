#include <iostream>
#include <string>
#include <clocale>
using namespace std;

class Car
{
public:
	void Use()
	{
		cout << "Vruum!" << endl;
	}
};

class Airplain
{
public:
	void Use()
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

	FlyingCar fc;
	((Car)fc).Use();				//приведение к типу Car
	
	cout << endl; 

	((Airplain)fc).Use();

	/*Car* ptrC = &fc;
	Airplain* ptrA = &fc;*/

	return 0;
}
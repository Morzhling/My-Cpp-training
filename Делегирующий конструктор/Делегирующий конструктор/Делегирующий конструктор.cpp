#include <iostream>
#include <string>
using namespace std;

/*Делегирующий конструктор*/

class Human
{
public:

	Human(string Name)
	{
		this->Name = Name + "!";
		this->Age = 0;
		this->Weight = 0;
	}

	Human(string Name, int Age):Human(Name)
	{
		this->Age = Age;
	}

	Human(string Name, int Age, int Weight) :Human(Name, Age)
	{
		this->Weight = Weight;
	}
	/*Human(string Name, int Age)
	{
		this->Name = Name;
		this->Age = Age;
		this->Weight = 0;
	}

	Human(string Name, int Age, int Weight)
	{
		this->Name = Name;
		this->Age = Age;
		this->Weight = Weight;
	}*/

	string Name;
	int Age;
	int Weight;
};
int main()
{
	Human H("Aristarh", 13);
	return 0;
}
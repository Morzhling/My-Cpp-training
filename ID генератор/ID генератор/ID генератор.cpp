#include <iostream>
#include <string>
using namespace std;

class Human;
class Apple;

class Apple
{
	friend Human;
	int weight;
	string color;
	int id;

public:
	static int count;
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
		id = count;
	}

	int Getid()
	{
		return id;
	}

};


int Apple::count = 0;

int main()

{
	setlocale(LC_ALL, "ru");
	Apple apple(250, "Green");
	Apple apple2(150, "Red");
	Apple apple3(1511, "Yellow");

	//cout << "COUNT\t" <<  apple.count <<  endl;
	cout << "COUNT\t" << Apple::count << endl;
	//Apple::count = 10;

	cout << apple.Getid() << endl;
	cout << apple2.Getid()<< endl;
	cout << apple3.Getid() << endl;

	return 0;
}
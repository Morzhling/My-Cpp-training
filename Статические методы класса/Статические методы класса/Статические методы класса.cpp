#include <iostream>
#include <string>
using namespace std;


class Apple
{
	int weight;
	string color;
	int id;
	static int count;


public:
	
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

	static	int Getcount() 
	{
		return count;
	}

	static void ChangeColor(Apple& apple, string color)
	{
		apple.color = color;
	}

};

int Apple::count = 0;
int main()

{

	setlocale(LC_ALL, "ru");
	Apple apple(250, "Green");
	Apple apple2(150, "Red");
	Apple apple3(1511, "Yellow");

	cout << apple.Getid() << endl;
	cout << apple2.Getid() << endl;
	cout << apple3.Getid() << endl;

	cout << Apple::Getcount() << endl;

	//apple.ChangeColor(apple, "Blue");
	Apple::ChangeColor(apple, "Blue");

	return 0;

}
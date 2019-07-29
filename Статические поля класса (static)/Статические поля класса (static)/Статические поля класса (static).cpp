#include <iostream>
#include <string>
using namespace std;

class Human;
class Apple;

class Human
{
public:
	void TakeApple(Apple& apple);
	//{
	//	cout << "Take Apple\t" << "Weight\t" << apple.weight << "Color\t" << apple.color << endl;
	//}
	void EatApple(Apple& apple);

};

class Apple
{
	friend Human;
	int weight;
	string color;


public:
	static int count;
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
		count++;
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
	Human man;
	man.TakeApple(apple);
	return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "Take Apple\t" << "Weight\t" << apple.weight << "\tColor\t" << apple.color << endl;
}

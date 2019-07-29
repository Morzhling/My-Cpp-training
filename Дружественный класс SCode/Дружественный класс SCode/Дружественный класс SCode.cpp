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
	Apple(int weight, string color)
	{
		this->weight = weight;
		this->color = color;
	}

};


int main()
{
	Apple apple(250, "Green");
	Human man;
	man.TakeApple(apple);
	return 0;
}

void Human::TakeApple(Apple& apple)
{
	cout << "\tTake Apple\t" << "Weight\t" << apple.weight << "\tColor\t" << apple.color << endl;
}
 
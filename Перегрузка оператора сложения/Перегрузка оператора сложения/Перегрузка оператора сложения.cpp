#include <iostream>
using namespace std;

/*Сложение*/


class Coord
{
private:

	int x;
	int y;
public:
	Coord()
	{
		x = 0;
		y = 0;
		cout << this << "Constructor" << endl;
	}

	Coord(int x, int y)
	{
		this->x = x;
		this->y = y;
		cout << this << "Constructor" << endl;
	}


	Coord operator +(const Coord& other)
	{
		Coord temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;
		return temp; 
	}

	int GetX()
	{
		return x;
	}

	void SetX(int valX)
	{
		x = valX;
	}

	int GetY()
	{
		return y;
	}

	void SetY(int valY)
	{
		y = valY;
	}

	void Print()
	{
		cout << "X = " << x << "\t" << "Y = " << y << endl;
	}

};

int main()
{
	Coord a(1, 12);
	Coord b(2, 25);

	Coord c = a + b;
	//Coord c = a.operator+(b);

	return 0;
}
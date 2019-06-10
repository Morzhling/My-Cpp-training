#include "pch.h"
#include <iostream>
using namespace std;

/*Равенство == и неравенство !=*/


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
	int GetX()
	{
		return x;
	}

	bool operator ==(const Coord & other) 
	{
		return this->x == other.x && this->y == other.y;

		//if (this->x == other.x && this->y == other.y)
		//{
		//	return true;
		//}
		//else
		//{
		//	return false;
		//}
	}

	bool operator !=(const Coord & other)
	{
		return !(this->x == other.x && this->y == other.y);
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

	bool result = a == b;
	bool result = a != b;

	/*if (a==b)
	{ 
		result = true;
	}
	else
	{
		result = false;
	}*/

	return 0;
}
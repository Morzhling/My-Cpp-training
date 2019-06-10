#include "pch.h"
#include <iostream>
using namespace std;


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
		cout << this << " Constructor " << endl;

	}

	Coord(int valX, int valY)
	{
		x = valX;
		y = valY;
		cout << this << " Constructor " << endl;
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


	void SetY(int y)
	{
		//y = valY;
		this->y = y;
	}

	void Print()
	{
		cout << "X = " << x << "\t" << "Y = " << y << endl;
	}

};


int main()
{
	Coord a;
	a.SetY(4);
	a.Print();

	Coord b(212, 3312);
	b.Print();

	return 0;
}
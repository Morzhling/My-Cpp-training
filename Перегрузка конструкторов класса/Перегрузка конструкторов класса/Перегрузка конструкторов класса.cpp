#include "pch.h"
#include <iostream>
using namespace std;
//#include <string>

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
	}

	Coord(int valX, int valY)
	{
		x = valX;
		y = valY;
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
		cout << "X = " << x << "\t" << "Y = " << y << endl << endl;
	}

};


int main()
{
	Coord a;
	a.Print();

	Coord b(212, 3312);
	b.Print();

	return 0;
}
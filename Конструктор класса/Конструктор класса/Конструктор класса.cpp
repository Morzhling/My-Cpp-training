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
		cout << "X = " << x << "\t" << "Y = " << y << endl;
	}

};


int main()
{
	Coord a(21,31);
	a.Print();
	
	Coord b(212, 3312);
	b.Print();

	return 0;
}
#include <iostream>
using namespace std;

/*Friendly func & class*/

class MyClass;


class Coord
{
private:

	friend void ChangeX(Coord& val, MyClass& val2);

public:	
	


	int x;
	int y;

	Coord()
	{
		x = 0;
		y = 0;
		//cout << this << "Constructor" << endl;
	}

	Coord(int x, int y)
	{
		this->x = x;
		this->y = y;
		//cout << this << "Constructor" << endl;
	}


	Coord& operator ++()			//Префиксная форма
	{
		//this->x = this->x + 1;
		this->x++;
		this->y = this->y + 1;
		return *this;
	}

	Coord& operator ++(int val)			//Постфиксная форма
	{
		Coord temp(*this);

		this->x++;
		this->y++;

		return temp;
	}

	Coord& operator --()			//Префиксная форма
	{
		//this->x = this->x + 1;
		this->x--;
		this->y = this->y - 1;
		return *this;
	}

	Coord& operator --(int val)			//Постфиксная форма
	{
		Coord temp(*this);

		this->x--;
		this->y--;

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

class MyClass
{
	friend void ChangeX(Coord& val, MyClass& val2);
public:
	
	int Data = 0;

	
};


void ChangeX(Coord& val, MyClass& val2)
{
	val.x = -1;
	val2.Data = 213;
}

int main()
{
	MyClass(N);
	Coord a(1, 12);
	a.Print();
	ChangeX(a, N);
	a.Print();


	return 0;
}
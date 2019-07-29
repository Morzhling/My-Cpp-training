#include <iostream>
using namespace std;

/*Инкремент/декремент*/


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
		//cout << this << "Constructor" << endl;
	}

	Coord(int x, int y)
	{
		this->x = x;
		this->y = y;
		//cout << this << "Constructor" << endl;
	}


	Coord & operator ++()			//Префиксная форма
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

	Coord & operator --()			//Префиксная форма
	{
		//this->x = this->x + 1;
		this->x--;
		this->y = this->y - 1;
		return *this;
	}

	Coord & operator --(int val)			//Постфиксная форма
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

int main()
{
	Coord a(1, 12);

		
	Coord b = a++;
	Coord c = ++a;
	Coord d = --a;

	return 0;
}
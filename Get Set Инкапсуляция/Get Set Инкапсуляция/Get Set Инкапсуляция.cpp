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

class CG
{
private:

	bool CheckVoltage()
	{
		return true;
	}


public:

	void Start()
	{
		//bool VoltageIsNorm = CheckVoltage();
		if (CheckVoltage())
		{
			cout << "VjuHhhHHh!" << endl;
		}
		else
		{
			cout << "Beep Beep mthfckr" << endl;
		}
	}

};

int main()
{
	Coord a;
	a.SetX(6);
	a.SetY(0);
	//a.Print();
	int res = a.GetX();
	cout << res << endl;

	CG v;
	v.Start();


	return 0;
}
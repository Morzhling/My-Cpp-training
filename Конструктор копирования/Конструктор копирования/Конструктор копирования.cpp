#include "pch.h"
#include <iostream>
using namespace std;


class MyClass
{
	int	 Size;
public:

	int *data;
	MyClass()
	{
		cout << this << " Constructor " << endl;
	}

	MyClass(int size)
	{
		this->Size = size;
		this->data = new int[size];
		for (int i = 0; i < size; i++)
		{
			data[i] = i;
		}

		cout << this << " Constructor " << endl;
	}

	MyClass(const MyClass &other)
	{
		this->Size = other.Size;
		this->data = new int[other.Size];
		for (int i = 0; i < other.Size; i++)  
		{
			this->data[i] = other.data[i];
		}
		cout << this << " Constructor copy " << endl;
	}
	~MyClass()
	{
		cout << this << " Destructor " << endl;
		delete[] data;
	}

	
	/*void Print()
	{
		cout << "X = " << x << "\t" << "Y = " << y << endl;
	}*/

};



void Func(MyClass val)
{
	cout << " Func " << endl; 
}

MyClass Func2()
{
	cout << " Func2 " << endl;
	MyClass temp(31);

	return temp;
}

int main()
{



	//Func2();
	MyClass a(12);
	

	MyClass b(a);

	//Func(a);
	return 0;

}
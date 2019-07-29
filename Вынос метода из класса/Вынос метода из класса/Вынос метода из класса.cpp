#include <iostream>
using namespace std;

/*как вынести реализацию метода из класса*/

class MyClass
{
public:
	MyClass();
	~MyClass();

	void PrintMessage();
	//{
	//	cout << "Hello!" << endl;
	//}

private:

};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}

void MyClass::PrintMessage()
{
	cout << "Hello!" << endl;
}



int main()
{
	MyClass a;
	a.PrintMessage();


	return 0;
}
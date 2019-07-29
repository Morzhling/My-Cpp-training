#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	A()
	{
		cout << "Here`s nothing" << endl;
	}

	A(string msg)
	{
		this->msg = msg;
	}

	A(string msg, int a)
	{
		this->msg = msg;
	}

	void PrintMsg()
	{
		cout << msg << endl;
	}

private:
	string msg;
};

class B : public A
{
public:
	B():A()    //Какой конст. баз. класса вызывается при создании
	{

	}

};




int main()
{
	setlocale(LC_ALL, "ru");

	/*A a("WoW");
	a.PrintMsg();*/
	
	B b;
	b.PrintMsg();

	return 0;
}
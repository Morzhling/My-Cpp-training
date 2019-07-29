#include <iostream>
#include <string>
using namespace std;

class Msg
{
public:
	Msg(string msg)
	{
		this->msg = msg;
	}

	virtual string GetMsg()
	{
		return msg;
	}
private:
	string msg;
};

class BraketsMsg : public Msg
{
public:
	BraketsMsg(string msg) :Msg(msg)
	{

	}
	string GetMsg() override
	{
		return '[' + ::Msg ::GetMsg() + ']';  //Явное указание на вызов метода базового класса
	}
};
class Printer
{
public:
	void Print(Msg *msg)
	{
		cout << msg->GetMsg() << endl;
	}
private:
};

int main()
{
	setlocale(LC_ALL, "ru");
	//Msg m("Хэллоу!");
	BraketsMsg m("Хэллоу!");
	Printer p;
	p.Print(&m);



	return 0;
}


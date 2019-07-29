#include <iostream>
#include <string>
using namespace std;



class A
{
public:									//Открыто всем, как на уровне объекта класса, так и при наследовании
	string MsgOne = "Message one";
private:								//Только для класса, где было создано
	string MsgTwo = "Message two";
protected:								//На уровне объекта нельзя, но можно на уровне наследника
	string MsgThree = "Message three";

};
class B : public A
{
public:
	void PrintMsg()
	{
		cout << MsgOne << endl;
	}
};




int main()
{
	setlocale(LC_ALL, "ru");
	B b;
	b.PrintMsg();
	
	return 0;
}
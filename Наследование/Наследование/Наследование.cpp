#include <iostream>
#include <string>
using namespace std;


/*Наследование классов*/

class Human
{
	string name;
public:
	string GetName()
	{
		return name;
	}

	void SetName(string name)
	{
		this->name = name;
	}
};

class Student : public Human   //класс студент наследник класса человек
{
public:
	void Learn()
	{
		cout << "Work! Work!" << endl;
	}
 
	string group;
};

class ExtraStudent : public Student
{
public:
	void Learn()
	{
		cout << "Work" << endl;
	}
};
class Professor : public Human
{
public:

	string subject;
};

int main()
{
	setlocale(LC_ALL, "ru");
	Student student;
	student.SetName("Парень  ");
	cout << student.GetName();
	student.Learn();
	Professor professor;
	professor.subject;
	ExtraStudent ESt;
	ESt.SetName("Хитрый маслёнок  ");
	cout << ESt.GetName();
	ESt.Learn();
	return 0;
}
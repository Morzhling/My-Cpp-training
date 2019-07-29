#include <iostream>
#include <string>
using namespace std;

//Агрегация позволяет использовать вложенный класс и в других местах. Композиция привязывает один класс к другому
class Cap   //Пример агрегации - класс "кепка" не привязан жестко к другому классу, в отличии от класса "мозг"
{
public:
	string GetColor()
	{
		return color;
	}
private:
	string color = "red";
};

class Human
{
	
	class Brain
	{
	public:
		void Think()
		{
			cout << "Thinkering about" << endl;
		}
	};
	Brain brain;
	Cap cap;
public:
	void Think()
	{
		brain.Think();
	}

	void Icap()
	{
		cout << "Capcap " << cap.GetColor() << " color" << endl;
	}
};

class Model
{
public:
	void IcapM()
	{
		cout << "CapcapM " << cap.GetColor() << " color" << endl;
	}
private:
	Cap cap;
};
int main()
{
	Human human;
	human.Think(); 
	human.Icap();
	Model model;
	model.IcapM();

	return 0;
}
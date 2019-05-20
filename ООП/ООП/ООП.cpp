#include "pch.h"
#include <iostream>
#include <string>
using namespace std;



//Инкапсуляция (принцип независимости данных в ООП) - возможность скрыть от других некоторые свойства, функционал класса от другого пользователя и оставить лишь внешний элемент управления.
//Наследование - возможность одного объекта перенимать методы и свойства от другого объекта и дополнять их каким-то своим функционалом.
//Полиморфизм - реализация механизма разная, но функция(метод) один и тот же.
//Класс - пользовательский тип данных.

class Human
{
public:
	int Age;							//свойства класса Human (поля класса)
	string Name;
	int Weight;
};



int main()
{
	Human Tzar;		//Объект класса Human

	Tzar.Name = "Basil";
	Tzar.Age = 24;
	Tzar.Weight = 68;

	cout << Tzar.Name << endl;
	cout << Tzar.Age << endl;
	cout << Tzar.Weight << endl;

	cout << "______________________________\n" << endl;


	Human Koshka;

	Koshka.Name = "SexyChik";
	Koshka.Weight = 45;
	Koshka.Age = 18;

	cout << Koshka.Name << endl;
	cout << Koshka.Age << endl;
	cout << Koshka.Weight << endl;
	





	return 0;
}


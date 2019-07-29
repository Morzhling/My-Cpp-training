#include <iostream>
#include <string>
using namespace std;

/*
Абстрактные классы
Чисто виртуальные функции
virtual
override
*/

class Weapon				//Если в классе есть чисто вирт. функ., то такой класс называется абстрактным 
{							//(нельзя создать экземпляр класса(объект))
public:
	virtual void Shoot() = 0;	//Виртуальная функция - функция не имеющая реализации
};

class Gun	: public Weapon				
{							
public:
	void Shoot() override		 //Доп. контроль виртуальных функций
	{
		cout << "Pew!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void Shoot() override 
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BADABOOM!" << endl;
	}
};

class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUUUH!" << endl; 
	 }
};

class Player
{
public:
	void Shoot(Weapon* weapon)
	{
		weapon->Shoot();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	
	SubmachineGun SMG;
	Bazooka rpg;
	Knife tanto;
	Player Sniper;
	Player Butcher;
	Butcher.Shoot(&tanto);
	Sniper.Shoot(&rpg);





	return 0;
}
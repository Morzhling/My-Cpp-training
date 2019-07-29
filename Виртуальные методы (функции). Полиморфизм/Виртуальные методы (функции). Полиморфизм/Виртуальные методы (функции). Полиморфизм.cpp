#include <iostream>
#include <string>
using namespace std;

/*
Полиморфизм
Виртуальные функции
virtual
override
*/

class Gun
{
public:
	virtual void Shoot()
	{
		cout << "Pew!" << endl;
	}
};

class SubmachineGun: public Gun
{
public:
	void Shoot() override  //Доп. контроль виртуальных функций
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Gun
{
public:
	void Shoot() override  
	{
		cout << "BADABOOM!" << endl;
	}
};

class Player
{
public:
	void Shoot(Gun *gun)
	{
		gun->Shoot();
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	Gun gun;
	gun.Shoot();

	//Gun *weapon = &gun;
	SubmachineGun SMG; 

	Bazooka rpg;
	Gun *weapon = &SMG;
	Player Sniper;
	
	weapon->Shoot();
	Sniper.Shoot(&gun);

	//Указатель на базовый класс может принимать ссылки на любого своего наследника
	Sniper.Shoot(&SMG);
	Sniper.Shoot(&rpg);

	return 0;
}
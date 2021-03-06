#include "pch.h"
#include <iostream>
using namespace std;

class Person;

class Dog {
	friend class Person;		//объявлеие класса Person дружественным классу Dog (все функции из Dog становятся дружественными для Person)
private:
	int health = 100;	 
};

class Person {
public:
	void Damage(Dog &d) {                                             //передается не объект, а ссылка на него &
		d.health -= 20;
		cout << "Health of the Dog = " <<  d.health << endl;

	}
	void kill(Dog &d) {
		d.health = 0;
		cout << "Health of the Dog = " << d.health << endl;

	}
	void heal(Dog &d) {
		d.health += 30;
		cout << "Health of the Dog = " << d.health << endl;
	}
};

int main()
{
	Dog Skuby;					//объект класса Dog
	Person Shaggy; 
	Shaggy.Damage(Skuby);
	Shaggy.kill(Skuby);
	Shaggy.heal(Skuby);

	cout << endl;

	Dog Schenok;
	Shaggy.Damage(Schenok);

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

/*
Ромбовидное наследование
Вирт. наследование
*/

class Component
{
public:
	Component(string companyName)
	{
		cout << "Конструктор Component " << endl;
		this->companyName = companyName;
	}
	string companyName;
};

class GPU:public Component
{
public:
	GPU(string companyName):Component(companyName)
	{
		cout << "Конструктор GPU " << endl;
	}
};

class Memory :public Component
{
public:
	Memory(string companyName) :Component(companyName)
	{
		cout << "Конструктор Memory " << endl;
	}
};

class GraphicCard :public GPU,public Memory
{
public:
	GraphicCard(string GPUcompanyName, string MemorycompanyName) :GPU(GPUcompanyName), Memory(MemorycompanyName)
	{
		cout << "Конструктор GraphicCard " << endl;
	}
};



//////////////////////////////////////////////////////////////////////////////////////////

class Character
{
public:
	Character()
	{
		cout << "Конструктор Character " << endl;
	}
	int HP;
};

class Elf : public virtual Character
{
public:
	Elf()
	{
		cout << "Конструктор Elf " << endl;
	}
};

class Rogue : public virtual Character
{
public:
	Rogue()
	{
		cout << "Конструктор Rogue " << endl;
	}
};

class Elf_Rogue : public Elf, public Rogue
{
public:
	Elf_Rogue()
	{
		cout << "Конструктор Elf_Rogue " << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	/*GraphicCard gc("Nvidia" , "Crucial");*/
	Elf_Rogue Karma;
	Karma.HP;

	return 0;
}
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



class PC
{
public:

	enum PCState
	{
		OFF,
		ON,
		SLEEP
	};

	PCState GetState() { return State; }

	void SetState(PCState State) { this->State = State; }


private:
	PCState State;
};


enum Speed
{
	MIN=150,
	RECOMEND=1000,
	MAX=2600 
};

int main()
{
	setlocale(LC_ALL, "ru");

	PC pc;
	pc.SetState(PC::PCState::ON);

	//if (pc.GetState()==PCState::ON)
	//{
	//	cout << "PC Work Work!" << endl;
	//}

	switch (pc.GetState())
	{
	case PC::PCState::OFF:
		cout << "PC OFF!" << endl;
			break;
	case PC::PCState::ON:
		cout << "PC Work Work!" << endl;
			break;
	case PC::PCState::SLEEP:
		cout << "PC SLEEPing Mode!" << endl;
			break;
	}


	cout << "////////////////////////////////////////////////////////////////////////////////" << endl << endl;
	Speed sp = Speed::MAX;
	cout << sp << endl;

	return 0;
}

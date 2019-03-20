#include "pch.h"
#include <iostream>
using namespace std;

class First {
protected:
	int value;
public:
	/*void set(int value) {
		this->value = value;
	}*/
	First(int value) {
		this->value = value;
		cout << value << endl;
	}
};

class Second : public First {				//класс наследник (наследует всё, кроме того что под модификатором private)
public:
	Second(int val) : First(val){
		/*set(val);
		value = val;
		cout << value << endl;*/
	}

};

class Third : public First {				//класс наследник (наследует всё, кроме того что под модификатором private)
public:
	Third(int val) : First(val) {
		//set(val);
		//value = val;
		//cout << value << endl;
	}

};	


int main()
{
	Second object(213);
	Third object1(21);
	return 0;
}



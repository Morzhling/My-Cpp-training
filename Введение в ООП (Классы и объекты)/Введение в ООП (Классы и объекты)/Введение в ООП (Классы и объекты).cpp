#include "pch.h"
#include <iostream>
using namespace std;

class Auto {

private:				//виден только в классе Auto
	int year, month, day;

public:					//модификаторы доступа,public видно везде
	void message() {
		cout << "Class is working!" << endl;
	}
	void set(int date_year, int date_month, int date_day) {
		year = date_year;
		month = date_month;
		day = date_day;
	}
	void get() {
		cout << "Year of this Auto - " << year << " , Month of this Auto - " << month << " , Day of this Auto - " << day << endl;
	}

//protected:				//видны в классах, которые наследуются от данного класса
//	int value = 11;
//
};

//class TTX: public Auto {				//класс наследник								
//private:
//	char *ptrV = new char [];
//public:
//		
//};


int main()
{
	Auto BMW;
	BMW.message();
	BMW.set(2005, 10, 29);
	BMW.get();

	Auto Lada;
	Lada.set(1999, 01, 23);
	Lada.get();
}



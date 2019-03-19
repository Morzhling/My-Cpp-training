// Указатель This.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

class T {
private:
	int a, b, c;
public:
	void set(int a, int b, int c){
		this-> a = a;                //this - ссылка на класс
		this-> b = b;
		this-> c = c;
		}
	void get() {
		cout << "A = " << a << " , B = " << b << " , C = " << c << endl;
	}
};

int main()
{
	T test;
	test.set(21, 31, 1);
	test.get();

	return 0;


}


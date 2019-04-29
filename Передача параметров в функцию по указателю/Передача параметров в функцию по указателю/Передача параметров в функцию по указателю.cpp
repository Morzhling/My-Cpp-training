#include "pch.h"
#include <iostream>
using namespace std;

//void func(int *pa)
//{
//	(*pa)++;
//}

void func(int *pa, int *pb, int *pc)
{
	(*pa)++;
	(*pb)--;
	(*pc)+= 2123;
}

void hw(int *pa, int *pc)
{
	int c = *pa;
	*pa = *pc;
	*pc = c;
}


 

int main()
{
	int a = 0, b = 0, c = 1;
	cout << "a = " << a << endl <<"b = " << b << endl << "c = " << c <<  endl;

	cout << "func" << endl;
	func(&a,&b,&c);																		//адреса переменных & 					
	cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;


	int  h = 7, w = 21;
	cout << "h = " << h << endl << "w = " << w << endl;
	cout << "hw" << endl;
	hw(&h, &w);


	cout << "h = " << h << endl << "w = " << w << endl;


}



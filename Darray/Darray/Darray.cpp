// Darray.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{

	//int *ptrnum = new int;
	//*ptrnum = 7;
	//cout << *ptrnum << endl;
	//delete ptrnum;  //  ptrnum адрес ячейки , *ptrnum ссылка на адрес ЯП

	float *ptrArray = new float[10];	
	for (int i = 0; i < 10; i++)
		ptrArray[i] = rand() % 80 + 1;
	for (int i = 0; i < 10; i++)
		cout << ptrArray[i] << "  ";	

	delete [] ptrArray;

 



	return 0;

}





#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	/*const float pi = 3.14;
	cout << pi << endl;*/
	
	int value = 138;
	//int *ptrvalue = &value;  указатель ссылается на ЯП для организации динамических объектов
	//int **ptr_ptrvalue = &ptrvalue;
	int &ref = value;      // ссылки ссылаются на объект по его имени (значению)



	cin >> ref;
	//cin >> **ptr_ptrvalue;
	cout << value << " - " << ref << endl; 



	return 0;

}


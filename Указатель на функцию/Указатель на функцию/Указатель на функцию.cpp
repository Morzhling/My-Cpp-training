#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//тип функции(*имя указателя)(спецификация параметров);


//int func1(int a)
//{
//	return a - 1;
//}
//int func2(int a)
//{
//	return a * 2;
//}
//
//void main()
//{
//	int(*funcPointer)(int a);
//	funcPointer = func1;
//	cout << funcPointer(42);
//
//}


void ShowInfo(string (*func)())
{
	cout << func() << endl;	
}

string GetDataFromBD()
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From WebServer";
}

void main()
{
	ShowInfo(GetDataFromBD);
}
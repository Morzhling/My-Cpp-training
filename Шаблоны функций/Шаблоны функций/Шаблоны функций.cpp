#include "pch.h"
#include <iostream>
using namespace std;

//int sum(int a, int b)
//{
//	return a + b;
//}
//
//int sum(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//double sum(double a, double b)
//{
//	return a + b;
//}

//template <typename T>
//T sum(T a, T b, T c = 0)
//{
//	return a + b + c;
//}

template <typename T1, typename T2>                                               //Т - название типов данных, typename/class - ключевое слово для различных типов данных
T1 sum(T1 a, T2 b)
{
	return a + b;																		   //Функция вернет первый тип данных как общий (Т1) 
}



void main()
{
	cout << sum(5, 22.1) << endl;
	cout << sum(5.2, 123.1) << endl;
	/*cout << sum(5, 2, 123) << endl; */
}


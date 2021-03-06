
#include "pch.h"
#include <iostream>
#include <clocale>
using namespace std;


template <typename T1, typename T2>
T2 printArr(const T1 * array, int i) {
	int count = 0;
	for (int j = 0; j < i; j++) {
		cout << array[j] << "  ";
		count++;
	}
	cout << endl;
	return count;
}

//void printArr(const float * array, int i) {
//	for (int j = 0; j < i; j++)
//		cout << array[j] << "  ";
//	cout << endl;
//}
//
//void printArr(const double * array, int i) {
//	for (int j = 0; j < i; j++)
//		cout << array[j] << "  ";
//	cout << endl;
//}
//
//void printArr(const char * array, int i) {
//	for (int j = 0; j < i; j++)
//		cout << array[j] << "  ";
//	cout << endl;
//}

int main()
{
	setlocale(LC_ALL, "rus");
	const int iSize = 3, fSize = 2, dSize = 3, cSize = 5;
	int i_arr[iSize] = { 21, 213, 22 };
	float f_arr[fSize] = { 2.1, 21.3};
	double d_arr[dSize] = { 12.1, 2.13, 2131.1 };
	char c_arr[cSize] = { "Hi!!" };

	cout << "Массив с типом данных int:  ";
	//printArr(i_arr, iSize);
	cout << "Количество элементов:" << printArr<int, int>(i_arr, iSize) << endl;
	cout << "Массив с типом данных float:  ";
	//printArr(f_arr, fSize);
	cout << "Количество элементов:" << printArr<float, int>(f_arr, fSize) << endl;
	cout << "Массив с типом данных double:  ";
	//printArr(d_arr, dSize);
	cout << "Количество элементов:" << printArr<double, int>(d_arr, dSize) << endl;
	cout << "Массив с типом данных char:  ";
	//printArr(c_arr, cSize);
	cout << "Количество элементов:" << printArr<char, int>(c_arr, cSize) << endl;
}


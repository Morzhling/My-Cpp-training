#include "pch.h"
#include <iostream>
using namespace std;

const int arr_lenght = 3;
template <class	Type95>
class Arr {
private:
	Type95 arr[arr_lenght];
public:
	Arr(Type95* a) {
		for (int i = 0; i < arr_lenght; i++)
			arr[i] = a[i];


	}
	Type95 getElement(int i) {
		return arr[i];
	}
};

int main()
{
	int arr[] = { 12, 41, 11, 6 };
	Arr <int> obj(arr);
	cout << obj.getElement(2) << endl;

	char arr1[] = { "Twix!" };
	Arr <char> obj1(arr1);
	cout << obj1.getElement(2) << endl;
	return 0;

}

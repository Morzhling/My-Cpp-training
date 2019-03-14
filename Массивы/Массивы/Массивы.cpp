

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	//int arr[3];	//= {3,7,5};
				//arr[2] = 323;
				//cout << arr[0];


	/*for (int i = 0; i < 3; i++) {
			cin >> arr[i];
	}
	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}*/

	int arr[3][2] = { {23,13}, {213,2}, {21,64} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "   " << arr[i][j];
		}
		cout << endl;
	}
	return 0; 
}


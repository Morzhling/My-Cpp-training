

#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	bool A = true;
	int num_1, num_2, res;
	cin >> num_1;
	
	cin >> num_2;
	
	res = num_1 + num_2;
	cout << "\n" << num_1 << " + " << num_2 << " = " << res << endl;
	
	if (res >= 23) {
		res++;
		cout << res << endl;
	}
	else if (res > 15 && res < 20) {
		cout << "res 15----20" << endl;
	}
	else if (res == 5 || res == 7 ) {
		res == 5 ? cout << "res 5" << endl : cout << "res 7" << endl;
	
	}
	
	else {
		cout << "Res lower" << endl;
	}
	
	switch (res) {
	case 1:
		cout << "Res is equal 1" << endl;
		break;
	case 10:
		cout << "Res is equal 10" << endl;
		break;
		default:  cout << "Res is unk" << endl;

	}
	cin.get();

	 
	return 0;

}


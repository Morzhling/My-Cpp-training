#include "pch.h"
#include <iostream>
using namespace std;
//#define DEBUG
#define DEBUG1 7

int main()
{
#ifndef DEBUG
	cout << "Start" << endl;
#endif // DEBUG




	for (int i = 0; i < sizeof(int); i++)
	{
		cout << i << endl;
	}




#ifdef DEBUG
	cout << "Finish" << endl;
#else
	cout << "FinishFinish" << endl;
#endif // DEBUG


#if DEBUG1 > 21
	cout << "Yo" << endl;
#elif DEBUG1 < 12
	cout << "YoYo" << endl;
#endif // DEBUG1 > 21

}


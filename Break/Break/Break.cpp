
#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Начало цикла" << endl;

	//for (int i = 0;	/*i < 10*/; i++)
	//{
	//	cout << "i = " << i << endl;
	//	if (i == 10)
	//	{
	//		break;
	//	}
	//	
	//}
	//cout << "Конец цикла" << endl;

	int i = 0;

	while (true)
	
	{
		cout << "i = " << i << endl;
		i++;
		if (i == 7)
		{
			break;
		}
		
	}
	cout << "Конец цикла" << endl;
}



// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	

	
	
	for (int counter = 1; counter <= 10; counter++ )
	{		
		if (counter % 5 == 0)
			continue;  //пропускает конкретную итерацию
		cout << " " << counter;
	}
	
	
	
	
	/*
	int i = 20;
	while (i > 0) {
		cout << " " << i;
		
		i/=3;
		
	}*/
	
	
	//int i = 0;
	//do {       //выполнится хотя бы 1 раз 100%
	//	cout << " " << i;
	//	i++; 
	//} while (i < 0);
	//return 0;
}


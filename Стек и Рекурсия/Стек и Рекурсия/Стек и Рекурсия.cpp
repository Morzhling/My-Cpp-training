#include "pch.h"
#include <iostream>
using namespace std;

/*Стек  (последний зашёл, првый вышел(задачи, помещаемые в стек, выполняются с конца, т.е. последняя задача попавшая в стек, будет выполнена в нем первой))*/
/*Рекурсия - вызов функцией самой себя*/

int func(int a)
{
	if (a < 1)
	{
		return 0;
	}
	a--;
	cout << a << endl;
	return func(a);
}

int main()
{
	func(10);
}

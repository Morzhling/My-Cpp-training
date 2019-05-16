#include "pch.h"
#include <iostream>
#define PI 3.14					//везде в коде до компиляции заменяет PI на 3.14
#define tab "\t"
#define begin {
#define end }
#define func(x,y)((x)*(y))
using namespace std;

int main()
{
	for (int i = 0; i < 7; i++)
	begin
		cout << i << endl;
	end
		cout << func(3,12);
}

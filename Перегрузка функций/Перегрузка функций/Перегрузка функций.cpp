#include "pch.h"
#include <iostream>
using namespace std;

float perimetr(float a, float b, float c);
float perimetr(float a, float b, float c, float d);

int main()
{

	cout << perimetr(23.21, 32.39, 21.21) << endl;
	cout << perimetr(23.21, 32.9, 21.1, 56.2);

}

float perimetr(float a, float b, float c) {
	return a + b + c;
}

float perimetr(float a, float b, float c, float d) {
	return a + b + c + d;
}
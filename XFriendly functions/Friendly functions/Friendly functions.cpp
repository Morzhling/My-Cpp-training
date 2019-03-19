#include "pch.h"
#include <iostream>
using namespace std;
class b;

class a {
	friend int sum(a , b);
private:
	int i;
public:
	a() {
		cout << "Enter i - ";
		cin >> i;
	}
};

class b {
	friend int sum(a , b);
private:
	int y;
public:
	b() {
		cout << "Enter y - ";
		cin >> y;
	}
};

int sum(a first, b second) {
	return (first.i + second.y);
}

int main()
{
	a Xd;
	b Xz;
	cout << sum(Xd, Xz) << endl;
			return 0;

}
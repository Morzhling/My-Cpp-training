#include <iostream>
using namespace std;

/*Оператор индексирования*/


class Index
{
private:

	int arr[6]{ 231,123,235,66,76,675 };
public:

	int & operator[](int index)
	{
		return arr[index];
	}

};

int main()
{

	Index a;

	cout << a[4] << endl;
	return 0;
}
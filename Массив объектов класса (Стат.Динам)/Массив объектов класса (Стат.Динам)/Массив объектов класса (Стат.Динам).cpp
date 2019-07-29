#include <iostream>
#include <string>
using namespace std;

//class Image
//{
//public:
//	void GetImageInfo()
//	{
//		for (int i = 0; i < LENGTH; i++)
//		{
//			cout << "#" << i << '\t' << pixels[i].GetInfo() << endl;
//		}
//
//	}
//
//private:
//
//
//};

class Pixel
{
private:
	int r;
	int g;
	int b;

public:
	Pixel()
	{
		r = g = b = 0;
	}
	Pixel(int r, int g, int b)
	{
		this->r = r;
		this->g = g;
		this->b = b;

	}
	string GetInfo()
	{
		return "Pixel: r = " + to_string(r) + " g = " + to_string(g) + " b = " + to_string(b);
	}
};
static const int LENGTH = 5;
Pixel pixels[5]
{
	Pixel(7,34,3),
	Pixel(2,43,63),
	Pixel(66,32,2),
	Pixel(1,34,32),
	Pixel(7,214,0)

};

int main()
{
	Pixel arr[LENGTH];							//Статический массив
	arr[0] = Pixel(31, 12, 43); 
	arr[1] = Pixel(1, 121, 4);
	arr[2] = Pixel(1, 12, 43);
	arr[3] = Pixel(10, 6, 40);
	arr[4] = Pixel(39, 129, 56);
	cout <<arr[0].GetInfo()<<endl;

	int LEN = 2;
	Pixel* arrr = new Pixel[LEN];				//Динамический массив
	arrr[0] = Pixel(51, 86, 12);
	cout << arrr[0].GetInfo() << endl;
	delete[] arrr;



	return 0;
}
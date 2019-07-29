#include <iostream>
#include <string>
using namespace std;

class Image
{
public:
	void GetImageInfo()
	{
		for (int i = 0; i < LENGTH; i++)
		{
			cout << "#" << i << '\t' << pixels[i].GetInfo() << endl;
		}

	}

private:
	
	class Pixel
	{
	private:
		int r;
		int g;
		int b;

	public:
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
	
};

int main()
{
	Image img;
	img.GetImageInfo();
	return 0;
}
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

/*

*/

class Coord
{
public:

	Coord()
	{
		x = y = z = 0;
	}

	Coord(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

private:
	int x, y, z;

	friend ostream& operator <<(ostream& os, const Coord& coord);
	friend istream& operator >>(istream& is, Coord& coord);
};

ostream& operator <<(ostream& os, const Coord& coord) //1й параметр - ссылка на объект ostream, 2й -класс для которого осущ. эта перегрузка
{
	os << coord.x << " " << coord.y << " " << coord.z << endl;
	return os;
}

istream& operator >>(istream& is, Coord& coord) //так как параметр 2й будет меняться (в него будет идти запись), то он не константный
{
	is >> coord.x >>  coord.y >> coord.z;
	return is;
}

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	
	Coord coord(626, 634, 854);

	//cout << coord;

	fstream fs;
	fs.open(path, fstream::in|fstream::out|fstream::app);
	
	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		//fs << coord<<"\n";
		while (true)
		{
			Coord c;
			fs >> c;
			if (fs.eof())
			{
				break;
			}
			cout << c;
		}
		
		
	}
	fs.close();

	return 0;
}

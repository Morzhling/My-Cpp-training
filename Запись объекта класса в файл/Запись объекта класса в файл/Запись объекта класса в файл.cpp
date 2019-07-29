#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*Чтение/сохранение объекта класса в файл*/

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

	void Print()
	{
		cout << "x: " << x << "\ty: " << y << "\tz: " << z << endl; 
	}
	int x, y, z;
};

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";
	//Coord coord(626, 634, 854);
	///*coord.Print();*/
	//
	//ofstream fout;
	//fout.open(path, ofstream::app);
	//if (!fout.is_open())
	//{
	//	cout << "Ошибка открытия файла!" << endl;
	//}
	//else
	//{
	//	cout << "Файл открыт!" << endl;
	//	fout.write((char*)& coord, sizeof(Coord));
	//}
	//fout.close();

	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		Coord coo;
		while (fin.read((char*)& coo, sizeof(Coord)))
		{
			coo.Print(); 
		}
		
	}
	fin.close();
	 
	return 0;
}

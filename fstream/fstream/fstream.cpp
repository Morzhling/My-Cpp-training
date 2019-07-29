#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

/*fstream */

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

	fstream fs;
	fs.open(path,fstream::in | fstream::out | fstream::app);		// | - побитовое "или", работает и тот и другой параметр. Вторым параметром класса fstream здесь передаем 3 состояния
	if (!fs.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		string msg;
		int value;
		cout << "Файл открыт!" << endl;

		cout << "Введите 1 для записи сообщения в файл" << endl;
		cout << "Введите 2 для считывания всех сообщений из файла" << endl;
		cin >> value;
		if (value==1)
		{
			cout << "Введите сообщение" << endl;
			SetConsoleCP(1251);
			cin >> msg;
			fs << msg << "\n";
			SetConsoleCP(866);
		}

		if (value == 2)
		{
			cout << "Считывание всех данных из файла" << endl;
			while (!fs.eof())
			{
				msg = "";
				fs >> msg;
				cout << msg << endl;
			}
		}
	}
	fs.close();

	return 0;
}

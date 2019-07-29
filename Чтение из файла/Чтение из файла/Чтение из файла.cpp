#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/*Чтение из файла*/

//fstream   библиотека записи и чтения данных
//ifstream	чтение
//ofstream запись

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt";

	/*ofstream fout;
	//cin >> path;
	//fout.open(path);
	//fout.open("myFile.txt");			//появится в папке с проектом (затирает старые данные, если есть)

	fout.open("myFile.txt", ofstream::app);   //добавляет новые данные в конец

	if (!fout.is_open())				//получилось или нет открыть/создать файл
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			cout << "Введите число!" << endl;
			int a;
			cin >> a;
			fout << a;
			fout << '\n';
		}

	}
	fout.close();*/

	ifstream fin;
	fin.open(path);

	if (!fin.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else 
	{
		cout << "Файл открыт!" << endl;
		string str;

		while(!fin.eof())			//метод отлавливает конец файла
			{
			str = "";
			//fin >> str;					//считывает до пробела или новой строчки
			getline(fin, str);				//считывает до новой строчки
			cout << str << endl;
			}
		//char ch;
		//while (fin.get(ch))
		//{
		//	cout << ch; 
		//}
		
	}
	fin.close();


	return 0;
}

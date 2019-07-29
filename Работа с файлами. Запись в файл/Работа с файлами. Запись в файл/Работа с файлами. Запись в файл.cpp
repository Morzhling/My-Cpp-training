#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//fstream   библиотека записи и чтения данных
//ifstream	чтение
//ofstream запись

int main()
{
	setlocale(LC_ALL, "ru");

	ofstream fout;
	//string path = "myFile.txt";
	//cin >> path;
	//fout.open(path);
	//fout.open("myFile.txt");			//появится в папке с проектом (затирает старые данные, если есть)
	
	fout.open("myFile.txt",ofstream::app);   //добавляет новые данные в конец
	
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
	fout.close();   

	return 0;
}

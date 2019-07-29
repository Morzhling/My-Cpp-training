#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string path = "myFile.txt"; 
	ifstream fin;
	fin.exceptions(ifstream::badbit | ifstream::failbit); 

	try
	{
		cout << "Попытка открыть файл" << endl;

		fin.open(path);

		cout << "Файл успешно открыт!" << endl;
	}
	//catch (const std::exception& ex)
		catch (const ifstream::failure & ex)
	{
		cout << ex.what() << endl; 
		cout << ex.code() << endl;
		cout << "Ошибка открытия файла!" << endl;
	}

	return 0;
}


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


void main()
{
	setlocale(LC_ALL, "ru");
	//char res[255]{};
	//char str1[255] = "Hello";
	//char str2[255] = "World";

	//cout << str1 << endl;

	////strcat_s(str1, str2);				В Си конкатенация происходит с помощью данной программы, причем в первую строку записывается вторая 

	//strcat_s(res, str1);
	//strcat_s(res, str2);
	//cout << res << endl;

	/*string str1 = "Hello";
	string str2 = "World";
	string str3 = "!!!";
	string res;

	res = str1 + " " + str2 + str3 + " HELLYEAH";*/


	string str1 = "Текила";
	string str2 = "Водкина";
	string str3 = "Боржомовна";
	//string res;

	//res = "Фамилия: " + str2 + "\tИмя: " + str1 + "\tОтчество: " + str3;

	cout << "Фамилия: " + str2 + "\tИмя: " + str1 + "\tОтчество: " + str3 << endl;


}


// InsertEraseReplace.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string str1("Титаник уплыл от айсберга");
	string str2("умер");
	string str3(" ночью");
	cout << "Исходные строки: \n";
	cout << "Str1: " << str1 << endl;
	cout << "Str2: " << str2 << endl;
	cout << "Вставка строки 2 в строку 1\n";

	str1.insert(25, str3);
	cout << str1 << "\n\n";

	cout << "Замена 8 символов строки 1 из строки 2\n";
	str1.replace(8, 5, str2);
	cout << str1 << "\n\n";

	cout << "Удаление 7 символов из строки 1\n";
	str1.erase(7, str1.size() - 7);
	cout << str1 << "\n\n";




	system("pause");

    return 0;
}


// fStream.cpp : Замена пробелов на символ вертикального разделителя
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream fin("test1.txt");
	ofstream fout("test2.txt");
	if (!fout)
	{
		cout << "Файл на вывод открыть невозможно \n";
		system("pause>nul");
		return 1;
	}
	if (!fin)
	{
		cout << "Файл ввод открыть невозможно \n";
		system("pause>nul");
		return 1;
	}
	char ch;
	fin.unsetf(ios::skipws);
	while (!fin.eof())
	{
		fin >> ch;
		if (ch == ' ') ch = '|';
		if (!fin.eof()) fout << ch;

			
	}
	fin.close();
	fout.close();
	cout << "Готово\n";
	system("pause>nul");
    return 0;
}


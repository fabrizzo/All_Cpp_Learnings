// fstream_manipulator.cpp : Все манипуляторы ввода/вывода подходят и для файлового ввода/вывода
// манипулятор который выводит инфомрацию на экран используется и для записи в файл
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

ostream &atn(ostream &stream)
{
	stream << "Attension ";
	return stream;
}
ostream &note(ostream &stream)
{
	stream << "Please, do not forget: ";
	return stream;
}

int main()
{
	ofstream out("test");
	if (!out)
	{
		cout << "Cannot open file\n";
		return 1;
	}
	cout << atn << "High Voltage \n";
	cout << note << "Light's off\n";
	out << atn << "High Voltage \n";
	out << note << "Light's off\n";

	out.close();
	system("pause>nul");
    return 0;
}


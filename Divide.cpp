// Divide.cpp : Перехват ошибки деления на ноль
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

double Divide(double a, double b)
{
	try
	{
		if (b == 0) 
		{
			throw "Деление на ноль";
		}
	}
	catch (char *str)
	{
		cout << str << "\n";
		return 1;
	}
	return a / b;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Начало\n";

	cout << "Деление равно: " << Divide(3.2, 0) << endl;

	cout << "Конец \n";
	system("pause");
	return 0;
}

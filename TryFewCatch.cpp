// TryFewCatch.cpp : Много перехватов разных типов
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Xhandler(int test)
{
	try
	{
		if (test) throw test;
		else throw "Значение равно нулю";
	}
	catch(int i)
	{
		cout << "Перехват ошибки номер: " << i << "\n";
	}
	catch (char *str)
	{
		cout << "Перехвачена строка: ";
		cout << str << "\n";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Начало\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);

	cout << "Конец \n";
	system("pause");
    return 0;
}


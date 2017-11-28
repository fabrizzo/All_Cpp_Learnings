// Map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	map<char, int> m;
	int i;
	for (i = 0;i < 10;i++)
	{
		m.insert(pair<char, int>('A' + i, i));
	}
	char ch;
	cout << "Ввеодите ключ: ";
	cin >> ch;
	map<char, int>::iterator p;

	p = m.find(ch);
	if (p != m.end())
		cout << p->second << endl;
	else
		cout << "Такого ключа в списке нет\n";
	
	system("pause");
    return 0;
}


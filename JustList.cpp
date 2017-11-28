// JustList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;



int main()
{
	setlocale(LC_ALL, "russian");
	list<char> lst;
	int i;
	for (i = 0;i < 10;i++) lst.push_back('A' + i);
	cout << "Размер = " << lst.size() << endl;
	list<char>::iterator p;
	cout << "Содержимое: \n";
	while (!lst.empty())
	{
		p = lst.begin();
		cout << *p;
		lst.pop_front();
	}
	cout << endl;
	cout << "Размер = " << lst.size() << endl;
	cout << "Список очищен!\n";

	system("pause");
    return 0;
}


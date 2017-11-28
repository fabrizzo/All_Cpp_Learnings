// InsertEraseIterator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;



int main()
{
	vector<char> v(5, 'x');
	int i;
	setlocale(LC_ALL, "Russian");
	cout << "Размер = " << v.size() << endl;
	cout << "Исходное содержимое : \n";
	for (i = 0;i < v.size();i++)cout << v[i] << " ";
	cout << endl;
	vector<char>::iterator p = v.begin();
	p += 2;
	v.insert(p, 3, 'y');
	v.push_back('u');
	cout << "Размер = " << v.size() << endl;
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;

	p = v.begin();
	p += 2;
	v.erase(p, p + 3);
	cout << "Размер = " << v.size() << endl;
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	system("pause");
    return 0;
}


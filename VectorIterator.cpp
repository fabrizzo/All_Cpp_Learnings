// VectorIterator.cpp : Итератор для доступа к Вектору
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> v;
	int i;

	for (i = 0;i < 10;i++) v.push_back(i);

	for (i = 0;i < 10;i++) cout << v[i] << " ";
	cout << endl;

	vector<int>::iterator p = v.begin();
	while (p != v.end())
	{
		cout << *p << " ";
		p++;
	}
	cout << endl;
	system("pause");
    return 0;
}


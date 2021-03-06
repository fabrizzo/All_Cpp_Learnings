// Genericfindfunction.cpp : Шаблонная функция find()
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <list>
using namespace std;

template <class X> 
int find(X& object, X* list, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] == object)
		{
			return (i);
		}
	}
	return (-1);

}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	int x = 3;
	int intArr[4] = { 1,2,3,4 };
	double d1 = 5.6, dArr[4] = { 1.2,3.3,4.2,5.5 };
	int res;
	res = find(x, intArr, 4);
	cout << res << "\n";
	res = find<int>(x, intArr, 4);
	cout << res << "\n";
	res = find(d1, dArr, 4);
	cout << res << "\n";
	res = find<double>(d1, dArr, 4);
	cout << res << "\n";
	system("pause");
	return 0;
}


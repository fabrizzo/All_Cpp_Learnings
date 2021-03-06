// CountAndCountif.cpp : Количество элементов между итератором начало и конец
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool even(int x)
{
	return !(x % 2);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> v;
	int i;

	for (i = 0; i < 20; i++)
	{
		if (i % 2) v.push_back(1);
		else v.push_back(2);
	}
	cout << "Последовательность: ";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	int n;
	n = count(v.begin(), v.end(), 1);
	cout << n << " элементов равно 1\n";
	
	n = count_if(v.begin(), v.end(), even);
	cout << n << " четных элементов\n";


	system("pause");
    return 0;
}


// Reverse.cpp : Меняет порядок расположения элементов
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;


int main()
{
	vector<int> v;
	int i;
	setlocale(LC_ALL, "Russian");
	for (i = 0; i < 10; i++) v.push_back(i);
	cout << "Исходная последовательность : ";
	for (i = 0; i < v.size(); i++) cout << v[i] << " ";
	cout << endl;
	reverse(v.begin(), v.end());
	cout << "Обратная последовательность :";
	for (i = 0;i < v.size();i++) cout << v[i] << " ";
	cout << endl;
	system("pause");
    return 0;
}


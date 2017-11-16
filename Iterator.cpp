// Iterator.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(2);
	int n;
	cout << "Количество символов: ";
	cin >> n;
	vector<char> symbs(n, 'A');
	vector<char>::iterator p;
	cout << "|";
	for (p = symbs.begin();p != symbs.end(); p++) {
		*p += rand() % (n + 1);
		cout << " " << *p << " |";
	}
	cout<<endl;
	system("pause>nul");
    return 0;
}


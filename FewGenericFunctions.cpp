// FewGenericFunctions.cpp : Родовая функция с более чем одним типом данных.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

template <class X, class Y> void myfunc(X a, Y b)
{
	cout << a << ' ' << b << endl;
}

int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	myfunc(10, "hi");
	myfunc(0.23, 10L);
	
	system("pause");
	return 0;
}


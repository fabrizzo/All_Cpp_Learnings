// strtype.cpp : Функция преобрзования типа strtype 
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class strtype {
	char str[80];
	int len;
public:
	strtype(char*s) { strcpy(str, s); len = strlen(s); }
	operator char*() { return str; }
};

int main()
{
	strtype s("Это проверка\n");
	char *p, s2[80];
	p = s;
	cout << "Это строка: " << p << "\n";

	strcpy(s2, s);
	cout << "Это копия строки: " << s2 << "\n";
	system("pause");
    return 0;
}


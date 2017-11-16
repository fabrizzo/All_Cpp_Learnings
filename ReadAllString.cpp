// ReadAllString.cpp: читает строку до Enter
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	string word;
	while (cin >> word)
		cout << word << endl;
    return 0;
	system("pause");
}


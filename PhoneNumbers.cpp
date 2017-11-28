// PhoneNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class word {
	char str[20];
public:
	word() { strcpy_s(str, ""); }
	word(char *s) { strcpy_s(str, s); }
	char *get() { return str; }
};
bool operator <(word a, word b)
{
	return strcmp(a.get(), b.get()) < 0;
}
class opposite 
{
	char str[20];
public:
	opposite() { strcmp(str, ""); }
	opposite(char *s) { strcpy_s(str, s); }
	char *get() { return str; }
};
int main()
{
	setlocale(LC_ALL, "russian");
	map <word, opposite> m;

	m.insert(pair<word, opposite>(word("Alex"), opposite("2-17-44-36")));
	m.insert(pair<word, opposite>(word("Jim"), opposite("2-17-44-34")));
	m.insert(pair<word, opposite>(word("Mike"), opposite("2-17-44-35")));
	m.insert(pair<word, opposite>(word("Johny"), opposite("2-17-44-38")));
	char str[80];
	cout << "Введите имя: ";
	cin >> str;
	map<word, opposite>::iterator p;
	p = m.find(word(str));
	if (p != m.end())
		cout << "Телефон: " << p->second.get() << endl ;
	else
		cout << "Такого слова в ассоциативном списке нет\n";

	system("pause");
    return 0;
}


// HoldClassinVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class holder 
{
	double d;
public:
	holder() { d = 0.0; }
	holder(double x) { d = x; }
	holder &operator= (double x) { d = x; return *this; }
	double getd() { return d; }
};
bool operator< (holder a, holder b)
{
	return a.getd() < b.getd();
}

bool operator- (holder a, holder b)
{
	return a.getd() == b.getd();
}

int main()
{
	setlocale(LC_ALL, "russian");
	vector<holder> v;
	int i;

	for (i = 0; i < 5; i++) v.push_back(holder((i + 1) / 2.1));
	for (i = 0; v.size();i++) cout << v[i].getd() << " ";
	cout << endl;

	for (i = 0;i < v.size(); i++)
		v[i] = v[i].getd() * 2.1;

	for (i = 0; i < v.size(); i++)
		cout << v[i].getd() << " ";
	
	system("pause");
    return 0;
}


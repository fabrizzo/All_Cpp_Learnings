// Symb_Count.cpp : Записывает в файл указатель, и считывает их обратно а так же подсчитывает их количество.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ofstream out("test.txt", ios::out | ios::binary);
	if (!out)
	{
		cout << "File stream out cannot be opened\n";
		return 1;
		system("pause>nul");
	}
	int nums[4] = {1,2,3,4};
	out.write((char *)nums, sizeof(nums));
	out.close();
	ifstream in("test.txt", ios::in | ios::binary);

	if (!in)
	{
		cout << "File stream in cannot be opened\n";
		return 1;
		system("pause>nul");
	}
	in.read((char *) &nums, sizeof(nums));
	int i;
	for (i = 0;i < 4;i++)
	cout << nums[i] << ' ';
	cout << '\n';
	cout << in.gcount() << " symbols count\n";
	in.close();

	system("pause>nul");
    return 0;
}


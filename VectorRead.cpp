// VectorRead.cpp: чтение из cin в вектор
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int main()
{
	int n;
	vector<int> int_vec;
	while (cin >> n) {
		int_vec.push_back(n);
	}
	for (auto i : int_vec)
	{
		cout << i << " ";
	}
	cout << "Vector size : " << int_vec.size() << endl;
	system("pause");
    return 0;
}


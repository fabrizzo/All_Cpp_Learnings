// Coord.cpp : Пользовательский ввод/вывод данных на экран и в файл
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
class coord {
	int x, y;
	char c;
public:
	coord(int i, int j, char k) { x = i; y = j; c = k; }
	friend ostream &operator<<(ostream &stream, coord ob);
	friend istream &operator>>(istream &stream, coord &ob);
};

ostream &operator<<(ostream &stream, coord ob)
{
	stream << ob.x << ' ' << ob.y << ' ' << ob.c << '\n';
	return stream;
}
istream &operator>>(istream &stream, coord &ob)
{
	stream >> ob.x >> ob.y >> ob.c;
	return stream;
}
int main()
{
	coord o1(1, 2, 'f'), o2(3, 4, 's');
	ofstream out("test");

	if (!out) {
		cout << "Cannot open file\n";
		return 1;
	}
	out << o1 << o2;
	out.close();
	ifstream in("test");
	if (!in) {
		cout << "cannot open file\n";
		return 1;
	}
	coord o3(5, 5, 't'), o4(5, 5, 'f');
	in >> o3 >> o4;
	cout << o3 << o4;
	in.close();
	cout << "All work's Great!";
	system("pause>nul");
	return 0;
}


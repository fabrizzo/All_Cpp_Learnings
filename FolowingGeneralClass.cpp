// FolowingGeneralClass.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

template<class A> class Alpha {
public:
	A alpha;
	Alpha(A a) {
		alpha = a;
	}
	void show() {
		cout << "Поле alpha: " << alpha << endl;
	}
};
template<class B> class Bravo {
public:
	B bravo;
	Bravo(B b) {
		bravo = b;
	}
	void show() {
		cout << "Поле bravo: " << bravo << endl;
	}
};
template<class A, class B, class C> class Charlie : public Alpha<A>, public Bravo<B> {
public:
	C charlie;
	Charlie(A a, B b, C c):Alpha<A>(a), Bravo<B>(b) {
		charlie = c;
	}
	void show() {
		Alpha<A>::show();
		Bravo<B>::show();
		cout << "Поле charlie: " << charlie << endl;
	}
};
template<class A, class B, class C, class D> class Delta : public Alpha<A> {
public:
	D delta;
	Delta(A a, D d) :Alpha<A>(a) {
		delta = d;
	}
	void show() {
		Alpha<A>::show();
		cout << "Поле Delta: " << delta << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Charlie<string, char, int> objA("Текст", 'A', 100);
	Charlie<int, double, char> objB(200, 5.5, 'B');
	Delta<int, int, int, int> objC(1, 1);
	objA.show();
	objB.show();
	objC.show();
	system("pause>nul");
    return 0;
}


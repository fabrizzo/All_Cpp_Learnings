// MultyThreads.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;
mutex m;

void mythread(string name, int time, int steps) {
	for (int k = 1; k <= steps; k++) {
		this_thread::sleep_for(chrono::seconds(time));
		m.lock();
		cout << "Поток " << name << " :\tсообщение " << k << endl;
		m.unlock();
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 7;
	cout << "Запускаются потоки ...\n";
	thread A(mythread, "Северный поток", 4, n);
	thread B(mythread, "Южный поток", 3, n);
	mythread("Главный поток", 2, n);
	if (A.joinable()) {
		A.join();
	}
	if (B.joinable()) {
		B.join();
	}
	cout << "Выполнение программы завершено...\n";
	system("pause>nul");
    return 0;
}


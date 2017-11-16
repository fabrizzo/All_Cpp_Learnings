// MultyThreads.cpp: ���������� ����� ����� ��� ����������� ����������.
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
		cout << "����� " << name << " :\t��������� " << k << endl;
		m.unlock();
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 7;
	cout << "����������� ������ ...\n";
	thread A(mythread, "�������� �����", 4, n);
	thread B(mythread, "����� �����", 3, n);
	mythread("������� �����", 2, n);
	if (A.joinable()) {
		A.join();
	}
	if (B.joinable()) {
		B.join();
	}
	cout << "���������� ��������� ���������...\n";
	system("pause>nul");
    return 0;
}


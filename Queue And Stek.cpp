// Queue And Stek.cpp : Очередь и стек один интерфейс множество методов
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cstdlib>
using namespace std;

class  list
{
public:
	list *head;
	list *tail;
	list *next;
	int num;

	list() { head = tail = next = NULL; }
	virtual void store(int i) = 0;
	virtual int retrieve() = 0;

};
class sorted : public list
{
public:
	void store(int i);
	int retrieve();
};

void sorted::store(int i)
{
	list *item;
	item = new sorted;
	if (!item)
	{
		cout << "Ошибка выделения памяти\n";
		exit(1);
	}
	
	item->num = i;
	if (item->num != 0)
	{
		if (&item[i] > &item[i-1])
		{
			item->num = 0;
		}
	}
	if (tail) tail->next = item;
	tail = item;
	item->next = NULL;
	if (!head) head = tail;

}
int sorted::retrieve()
{
	int i;
	list *p;
	int temp;

	if (!head)
	{
		cout << "Список пуст\n";
		return 0;
	}

	i = head->num;
	p = head;
	head = head->next;
	delete p;
	return i;
}
class queue : public list 
{
public: 
	void store(int i);
	int retrieve();
};

void queue::store(int i)
{
	list *item;
	item = new queue;
	if (!item)
	{
		cout << "Ошибка выделения памяти\n";
		exit(1);
	}
	item->num = i;
	if (tail) tail->next = item;
	tail = item;
	item->next = NULL;
	if (!head) head = tail;
}
int queue::retrieve()
{
	int i;
	list *p;

	if (!head)
	{
		cout << "Список пусто\n";
		return 0;
	}
	i = head->num;
	p = head;
	head = head->next;
	delete p;
	return i;
}
class stack : public list
{
public: 
	void store(int i);
	int retrieve();
};

void stack::store(int i)
{
	list *item;

	item = new stack;
	if (!item)
	{
		cout << "Ошибка выделения памяти\n";
		exit(1);
	}
	item->num = i;
	if (head) item->next = head;
	head = item;
	if (!tail) tail = head;
}
int stack::retrieve()
{
	int i;
	list *p;
	if (!head)
	{
		cout << "Список пуст\n";
		return 0;
	}

	i = head->num;
	p = head;
	head = head->next;
	delete p;
	return i;
}

int main()
{
	setlocale(LC_ALL, "russian");

	list *p;
	queue q_ob;
	stack s_ob;
	int j;
	int i;

	for (i = 0;i < 10; i++)
	{
		cout << "Стек или Очередь 1/0 : ";
		cin >> j;
		if (j == 0) p = &q_ob;
		else p = &s_ob;
		p->store(i);
	}
	cout << "Введите 2 для завершения работы\n";
	for (;;)
	{
		cout << "Извлечь элемент из Стека или Очереди (1/0) ";
		cin >> j;
		if (j == 2) break;
		if (j == 0) p = &q_ob;
		else p = &s_ob;
		cout << p->
			retrieve() << "\n";
	}
	cout << "\n";

	system("pause>nul");
    return 0;
}


// SortedQueue.cpp : Сортированный список.
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
	virtual void ascsort() = 0;
	virtual int retrieve() = 0;

};
class sorted : public list
{
public:
	void store(int i);
	int retrieve();
	void ascsort();
};

void sorted::store(int i)
{
	list *item = new sorted;
	
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
void sorted::ascsort()
{
	list* p , *tmp = NULL, *prev = NULL;
	bool flag = false;
	if (!head)
	{
		cout << "Список пуст\n";
	}
		do
		{
			flag = false;
			p = head;
			while (p->next)
			{
				if (p->num > p->next->num)
				{
					if (p == head)
					{
						tmp = p;
						p = tmp->next;
						tmp->next = p->next;
						p->next = tmp;
						head = p;
						flag = true;
					}
					else
					{
						tmp = p;
						p = tmp->next;
						tmp->next = p->next;
						p->next = tmp;
						prev->next = p;
						flag = true;
					}
				}
				prev = p;
				p = p->next;
			}

		} while (flag);
		cout << "\nСписок отсортирован!\n";


}

int sorted::retrieve()
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
	sorted sr_ob;
	int b,i,j;

	p = &sr_ob;
	for (i = 0;i < 100000; i++)
	{
		b = 1 + rand() % 99;
		cout << b << " ";
		p->store(b);
	}

	p->ascsort();


	cout << "Отсортированный массив:\n";
	for (j = 0;j <100000; j++)
	{
		cout << p->retrieve() << " ";

	}

	system("pause>nul");
	return 0;
}


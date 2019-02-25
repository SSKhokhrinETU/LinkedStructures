#include "pch.h"
#include <iostream>

using namespace std;

struct Field
{
	int numb;
	Field *next;
};

int main()
{


	Field a, b, c;
	Field *p = &a;

	a.next = &b;
	b.next = &c;


	for (int i = 0; i < 3; i++)
	{
		(*p).numb = i + 1;
		p = p->next;
	}
	p = &a;

	for (int i = 0; i < 3; i++)
	{
		cout << (*p).numb << " ";
		p = p->next;
	}
	cout << endl;
	p = &a;

	for (int i = 0; i < 3; i++)
	{
		p->numb = 3 - i;
		p = p->next;
	}
	p = &a;

	for (int i = 0; i < 3; i++)
	{
		cout << p->numb << " ";
		p = p->next;
	}
	p = &a;

	return 0;
}
#include "list.h"
# include <assert.h>

list::list() : head(nullptr), size(0)
{
}

list::~list()
{
	while (head != nullptr)
	{
		node* tmp = head->next;
		delete head;
		head = tmp;

	}
}

void list::append(int val)
{
	node* newnode = new node(val);

	if (head == nullptr)
	{
		head = newnode;
	}

	else
	{
		node* tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}
	size++;
}

void list::insert(int val, int idx)
{
	node* newnode = new node(val);

	assert(idx <= size && idx >= 0);

	if (idx == 0)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		node* tmp = head;

		for (int i = 0; i < idx - 1; i++)
		{
			tmp = tmp->next;

		}
		newnode->next = tmp->next;
		tmp->next = newnode;
	}

	

	size++;



}

void list::remove(int idx)
{
	assert(idx <= size && idx >= 0);

	if (idx == 0)
	{
		node* tmp = head->next;
		delete head;
		head = tmp;
	}

	else
	{
		node* tmp = head;

		for (int i = 0; i < idx - 1; i++)
		{
			tmp = tmp->next;

		}
		node* remove = tmp->next;
		tmp->next = (tmp->next)->next;
		tmp = remove;
		delete tmp;
	}


	size--;



}

void list::print()
{
	node* tmp = head;
	while (tmp != nullptr)
	{
		cout << tmp->value << "  ";
		tmp = tmp->next;
    }
}

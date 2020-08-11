#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "DoublyLinkedList.hpp"

using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
	head = NULL;
	tail = NULL;
	size = 0;
};

int DoublyLinkedList::getSize()
{
	return size;
};

void DoublyLinkedList::append(int data)
{
	Node_D *n = new Node_D(data);

	if (head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		n->prev = tail;
		tail = n;
	}
	size++;
};

void DoublyLinkedList::prepend(int data)
{
	Node_D *n = new Node_D(data);

	if (head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		head->prev = n;
		n->next = head;
		head = n;
	}

	size++;
};

void DoublyLinkedList::tostring()
{
	Node_D *temp = head;

	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->next;
	}

	std::cout << std::endl;
};

void DoublyLinkedList::tostringreverse()
{
	Node_D *temp = tail;

	while (temp != NULL)
	{
		std::cout << temp->data << " ";
		temp = temp->prev;
	}

	std::cout << std::endl;
};

void DoublyLinkedList::removefirst()
{
	if (head->next == NULL)
	{
		delete head;
		head = NULL;
		tail = NULL;
	}
	else if (head != NULL)
	{
		head = head->next;
		delete head->prev;
		head->prev = NULL;
		size--;
	}
};

void DoublyLinkedList::removelast()
{
	if (head->next == NULL)
	{
		delete head;
		head = NULL;
		tail = NULL;
		size--;
	}
	else if (head != NULL)
	{
		tail = tail->prev;
		delete tail->next;
		tail->next = NULL;
		size--;
	}
};

void DoublyLinkedList::removeat(int pos)
{
	if (pos > size || pos < 1)
		return;
	else if (pos == 1)
		removefirst();
    else if (pos == size)
		removelast();
	else if (head != NULL)
	{
		Node_D *cur = head;

		for (int i = 1; i < pos; i++)
			cur->next = cur;

		cur->prev->next = cur->next;
		std::cout << "Hi" << std::endl;
		cur->next->prev = cur->prev;
		delete cur;
		size--;
	}
};

void DoublyLinkedList::insertat(int pos, int data)
{
	if (pos > size + 1 || pos < 1)
		return;
	else if (pos == 1)
		prepend(data);
	else if (pos == size + 1)
		append(data);
	else if (head != NULL)
	{
		Node_D *n = new Node_D(data);
		Node_D *cur = head;

		for (int i = 1; i < pos; ++i)
		{
			cur = cur->next;
		}

		cur->prev->next = n;
		n->prev = cur->prev;

		n->next = cur;
		cur->prev = n;
	}
	size++;
};

DoublyLinkedList::~DoublyLinkedList()
{
	Node_D *next;
	while (head != NULL)
	{
		next = head->next;
		delete head;
		head = next;
	}
};

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "LinkedList.hpp"


using namespace std;


LinkedList::LinkedList()
{
	head = NULL;
	tail = NULL;
	size = 0;
};

int LinkedList::getSize()
{
	return size;
};

void LinkedList::append(int data)
{
	Node *n = new Node(data);

	if ( head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail->next = n;
		tail = n;
	}

	size++;

};	

void LinkedList::prepend(int data)
{
	Node *n = new Node(data);

	if ( head == NULL )
	{
		head = n;
		tail = n;
	}
	else
	{
		Node *temp = head;
		head = n;
		n->next = temp;

	}

	size++;

};

void LinkedList::tostring()
{
	Node *temp = head;

	while ( temp != NULL)
	{
		std::cout<< temp->data << " ";
		temp = temp->next;
	}

	std::cout<<std::endl;

};

void LinkedList::removefirst()
{
	if ( head != NULL )
	{
		Node *temp = head;
	    head = head->next;
        delete temp; 
		size--;

	}		
};

void LinkedList::removelast()
{
	if( head->next == NULL )		
		removefirst();
			
	else if ( head != NULL )
	{
		Node *cur = head;
		Node *prev;

		while ( cur->next != NULL )
		{
			prev = cur;
			cur = cur->next;
		}
		tail = prev;
		prev->next = NULL;
		delete cur;
		size--;
	}
	
};

void LinkedList::removeat(int pos)
{
	if( pos > size || pos < 1 )
		return; 
	else if ( pos == 1 )
		removefirst();
	else if ( pos == size )
		removelast();
	else if ( head != NULL )
	{
		Node *cur = head;
		Node *prev;

		for( int i = 1; i < pos; i++ )
		{
			prev = cur;
			cur = cur->next;
		}

		prev->next = cur->next;
		delete cur; 
		size--;

	}
};

void LinkedList::insertat(int pos, int data)
{
	if( pos > size + 1 || pos < 1 )
		return;
	else if ( pos == 1 )
		prepend(data);
	else if ( pos == size + 1 )
		append(data);
	else if ( head != NULL )
	{
		Node *cur = head;
		Node *prev;

		for( int i = 1; i < pos; i++ )
		{
			prev = cur;
			cur = cur->next;
		}
		Node *n = new Node(data);

		prev->next = n;
		n->next = cur;
		size++;
	}	
};

LinkedList::~LinkedList()
{
	Node *next;
	while( head != NULL )
	{
		next = head->next; 			
		delete head; 
		head = next; 
	}
};


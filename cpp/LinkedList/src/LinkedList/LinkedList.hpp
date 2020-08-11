#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

class Node
{
	public:
		int data;
		Node *next;

	Node(int data)
	{
	this->data = data;
	next = NULL;
    };
	
};




class LinkedList
{
	private:
		Node *head;
		Node *tail;
		int size;

public:
	
    LinkedList();
	int getSize();
	void append(int data);
	void prepend(int data);
	void tostring();
	void removefirst();
	void removelast();
	void removeat(int pos);
	void insertat(int pos, int data);
	~LinkedList();
	
};

#endif 
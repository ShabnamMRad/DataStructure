#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

using namespace std;

class Node_D
{
	public:
		int data;
		Node_D *next;
        Node_D *prev;

	Node_D(int data)
	{
	    this->data = data;
	    next = NULL;
        prev = NULL;
    };	
};

class DoublyLinkedList
{
	private:
		Node_D *head;
		Node_D *tail;
		int size;

	public:
		DoublyLinkedList();	
		int getSize();
		void append(int data);
		void prepend(int data);
		void tostring();
		void tostringreverse();
		void removefirst();
		void removelast();
		void removeat(int pos);
		void insertat(int pos, int data);
		~DoublyLinkedList();
	
};




#endif
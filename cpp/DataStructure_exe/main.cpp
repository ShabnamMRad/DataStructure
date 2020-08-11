#include <iostream>
#include "LinkedList/LinkedList.hpp"
#include "DoublyLinkedList/DoublyLinkedList.hpp"

using namespace std;


int main(int argc, char const *argv[])
{
	  LinkedList list;
	  list.append(1);
	  list.append(2);
	  list.append(3);
	  list.append(4);
	  list.prepend(20);
	  list.prepend(30);
	  list.tostring();
	  list.removefirst();
	  list.removelast();
	  list.tostring();
	  list.removeat(2);
	  list.insertat(2,40);
	  list.tostring();

	 std::cout<<"example of doubly linkedlist: "<<std::endl;

	DoublyLinkedList list2;
	list2.append(1);
	list2.append(2);
	list2.append(3);
	list2.append(4);
	list2.prepend(20);
	list2.prepend(30);
	list2.tostring();
	list2.tostringreverse();
	list2.removefirst();
	list2.removelast();
	list2.tostring();
	//list2.removeat(2);
	list2.insertat(2,40);
	list2.tostring();

	return 0;
}
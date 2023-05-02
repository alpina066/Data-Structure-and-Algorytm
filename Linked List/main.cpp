#include <iostream>
#include "LinkedList.h"
using namespace std;

int main(int argc, char** argv) {
	
	LinkedList list1;
	
	list1.insertToHead(60);
	list1.insertToHead(70);
	list1.insertToHead(80);
	list1.insertToHead(90);
	
	cout << "head: " << list1.head->value << endl;
	cout << "tail: " << list1.tail->value << endl;
	cout << list1.head->next->next->value << endl;
	
	list1.printALL();
	
	LinkedList list2;
	list2.insertToHead(74);
	list2.insertToHead(80);
	
	list2.printALL();
	
	return 0;
}

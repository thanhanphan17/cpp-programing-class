
#include <iostream>
#include "linkedList.h"

int main() {
	SinglyList pList;
	pList.insert(0, 1);
	pList.insert(1, 2);
	pList.push_back(5);
	// 1 2 3 5
	pList.insert(2, 3);
	pList.pop_back();
	pList.printList();
}


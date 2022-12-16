
#include <iostream>
#include "linkedList.h"

int main() {
	SinglyList pList;
	//pList.insert(0, 1);
	//pList.insert(1, 2);
	//pList.push_back(5);
	//// 1 2 3 5
	//pList.insert(2, 3);
	////pList.pop_back();
	////pList.remove(1);
	//pList.printList();
	//std::cout << "\n" << pList.sum() << std::endl;
	//if (pList.find(7) == true) {
	//	std::cout << "Find it !!" << "\n";
	//}
	//else
	//	std::cout << "Not found !!\n";

	while (true) {
		int x = 0;
		std::cin >> x;
		if (x == 0) {
			break;
		}
		pList.push_back(x);
	}
	//int value = 0;
	//std::cin >> value;
	//pList.removeValue(value);
	pList.removeDup();
	pList.printList();

}


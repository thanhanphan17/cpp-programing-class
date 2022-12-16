#include <iostream>
#include "linkedList.h"

void SinglyList::push_front(int data) {
	Node* pNode = new Node(data);
	this->size++;
	if (pHead == nullptr) {
		pHead = pNode;
		pTail = pNode;

		return;
	}

	pNode->pNext = pHead;
	pHead = pNode;
}

void SinglyList::push_back(int data) {
	Node* pNode = new Node(data);
	this->size++;
	if (pHead == nullptr) {
		pHead = pNode;
		pTail = pNode;

		return;
	}

	pTail->pNext = pNode;
	pTail = pNode;
}

void SinglyList::insert(int pos, int data) {
	if (pos == 0) {
		this->push_front(data);

		return;
	}

	if (pos >= this->size) {
		this->push_back(data);

		return;
	}

	int cnt = 0;
	Node* currNode = pHead;

	while (currNode != nullptr) {
		cnt++;
		if (cnt == pos) {
			break;
		}
		currNode = currNode->pNext;
	}
	Node* pNode = new Node(data);
	if (currNode->pNext != nullptr) {
		pNode->pNext = currNode->pNext;
	}

	currNode->pNext = pNode;

	this->size++;
}

void SinglyList::printList() {
	Node* currNode = pHead;

	while (currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->pNext;
	}
}

void SinglyList::pop_front() {
	if (pHead == nullptr) {
		return;
	}
	Node* pNode = pHead;

	pHead = pHead->pNext;

	delete pNode;
	pNode = nullptr;
}

void SinglyList::pop_back() {
	if (pHead == nullptr) {
		return;
	}

	Node* pNode = pHead;

	int cnt = 0;
	while (pNode != nullptr) {
		++cnt;
		if (cnt == this->size - 1) {
			break;
		}

		pNode = pNode->pNext;
	}
	Node* tmp = pTail;
	pNode->pNext = nullptr;
	pTail = pNode;

	delete tmp;
	tmp = nullptr;
}

void SinglyList::remove(int pos) {
	Node* pNode = pHead; // delete node
	Node* pPrev = new Node; // node previous of the delete node

	if (pos == 0) {
		this->pop_front();
	}

	int cnt = 0;

	while (cnt != pos) {
		pPrev = pNode;
		pNode = pNode->pNext;
		++cnt;
	}

	pPrev->pNext = pNode->pNext;
	pNode->pNext = nullptr;

	delete pNode;
	pNode = nullptr;
}

int SinglyList::sum() {
	Node* currNode = pHead;
	int _sum = 0;
	while (currNode != nullptr) {
		_sum += currNode->data;
		currNode = currNode->pNext;
	}
	return _sum;
}

bool SinglyList::find(int data) {
	Node* currNode = pHead;
	while (currNode != nullptr) {
		if (currNode->data == data) {
			return true;
		}
		currNode = currNode->pNext;
	}
	return false;
}

void SinglyList::removeValue(int data) {
	if (this->find(data) == false) {
		return;
	}
	int pos = 0;
	Node* pNode = pHead;
	while (pNode != nullptr) {
		if (pNode->data == data) {
			pNode = pNode->pNext;
			this->remove(pos);
		}
		else {
			++pos;
			pNode = pNode->pNext;
		}
	}
}

bool SinglyList::isDuplicate(int data) {
	Node* pNode = pHead;
	int cnt = 0;
	while (pNode != nullptr) {
		if (pNode->data == data) {
			++cnt;
		}
		pNode = pNode->pNext;
	}
	if (cnt >= 2) {
		return true;
	}
	return false;
}

void SinglyList::removeDup() {
	Node* pNode = pHead, * pTemp;

	while (pNode != nullptr && pNode->pNext != nullptr) {
		pTemp = pNode;

		while (pTemp->pNext != nullptr)
		{
			if (pNode->data == pTemp->pNext->data)
			{
				Node* pRemove = pTemp->pNext;
				pTemp->pNext = pTemp->pNext->pNext;
				delete(pRemove);
				pRemove = nullptr;
			}
			else {
				pTemp = pTemp->pNext;
			}
		}
		pNode = pNode->pNext;
	}
}
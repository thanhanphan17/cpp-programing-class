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

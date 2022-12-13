#pragma once

class Node {
public:
	int data;
	Node* pNext;

	Node() {
		this->data = 0;
		this->pNext = nullptr;
	}

	Node(int data) {
		this->data = data;
		this->pNext = nullptr;
	}
};

class SinglyList {
public:
	Node* pHead;
	Node* pTail;
	int size;

	SinglyList() {
		this->size = 0;
		this->pHead = this->pTail = nullptr;
	}

	void push_front(int);
	void pop_front();

	void push_back(int);
	void pop_back();

	void insert(int, int);
	void printList();

	void freeData();
};


#ifndef DLLDEQUE
#define DLLDEQUE

#include "DLinkedList.h"

class DLLDeque {
private:
	DLinkedList list;
	int count;
	int capacity;
public:
	DLLDeque(int cap);
	~DLLDeque();

	bool empty() const;
	bool full() const;

	void insertFront(int e);
	void insertBack(int e);

	void eraseFront();
	void eraseBack();

	int front() const;
	int back() const;
};

#endif //DLLDEQUE
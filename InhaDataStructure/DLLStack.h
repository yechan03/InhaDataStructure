#ifndef DLLSTACK
#define DLLSTACK

#include "DLinkedList.h"
class DLLStack {
private:
	DLinkedList list;
public:
	DLLStack();
	~DLLStack();

	bool empty() const;
	int size() const;

	void push(int e);
	void pop();
	int top() const;

};


#endif
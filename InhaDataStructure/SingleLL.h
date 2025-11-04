#ifndef SINGLELL_H
#define SINGLELL_H

#include "SNode.h"
class SingleLL{
private:
	SNode* head;
	SNode* tail;
	int count = 0;
public:
	SingleLL();
	~SingleLL();
	bool empty() const;
	int size() const;
	int front() const;
	int back()const;
	void addFront(int e);
	void removeFront();
	void addBack(int e);
	void removeBack();
};

#endif // !SINGLELL_H


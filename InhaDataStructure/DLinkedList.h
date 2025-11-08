#ifndef DLINKEDLIST
#define DLINKEDLIST

#include <stdexcept>

#include "DNodeEX.h"

class DLinkedList {
private:
	DNodeEx* header;
	DNodeEx* trailer;
	int count;
	void add(DNodeEx* v, int e);
	void remove(DNodeEx* v);
public:
	DLinkedList();
	~DLinkedList();

	int size() const;
	bool empty() const;

	int front() const;
	int back() const;

	void addFront(int e);
	void addBack(int e);

	void removeFront();
	void removeBack();

};


#endif //!DLinkedList
#ifndef DNODEEX
#define DNODEEX

#include "DLinkedList.h"

class DNodeEx {
private:
	int element;
	DNodeEx* next;
	DNodeEx* prev;
public:
	friend DLinkedList;
	
};

#endif // !DNODEEX

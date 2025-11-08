#ifndef DNODEEX
#define DNODEEX


class DNodeEx {
private:
	int element;
	DNodeEx* next;
	DNodeEx* prev;
public:
	friend  class DLinkedList;
	
};

#endif // !DNODEEX

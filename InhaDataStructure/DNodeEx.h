#ifndef DNODEEX
#define DNODEEX


class DNodeEx {
private:
	int element;
	DNodeEx* next;
	DNodeEx* prev;
public:
	DNodeEx* getNext() const { return next; }; 
	DNodeEx* getPrev() const { return prev; };
	int getElement() const { return element; };
	void setElement(int e) { element = e; };

	friend  class DLinkedList;
	friend class STLList;
	
};

#endif // !DNODEEX

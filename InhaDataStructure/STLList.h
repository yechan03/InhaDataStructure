#ifndef STLLIST_H
#define STLLIST_H

#include "DLinkedList.h"

class STLList : public DLinkedList {
public:
	void insertBack(int e);
	void eraseFront();
	
	void insert(DNodeEx* p, int e);
	void erase(DNodeEx* p);
	int indexOf(STLList& ns, int key);

	void insertByKey(int key, int e);
	void eraseByKey(int key);
	void printList();

	DNodeEx* beginPos()const;
	DNodeEx* endPos() const;
	DNodeEx* linearSearch(STLList& ns, int key);

};

#endif
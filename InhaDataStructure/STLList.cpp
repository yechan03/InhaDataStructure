#include <iostream>

#include "STLList.h"

using std::cout;
void STLList::insertBack(int e) {
	addBack(e);
}

void STLList::eraseFront() {
	removeFront();
}
void STLList::insert(int i, int e) {
	
}
void STLList::insert(DNodeEx* p, int e) {
	if (p==NULL){
		return;
	}
	DNodeEx* newNode = new DNodeEx();
	newNode->element = e;
	DNodeEx* prevNode = p->getPrev();
	newNode->prev = prevNode;
	newNode->next = p;

	prevNode->next = newNode;
	p->prev = newNode;
}

void STLList::erase(DNodeEx* p) {
	if (p==NULL){
		return;
	}
	DNodeEx* prevNode = p->getPrev();
	DNodeEx* nextNode = p->getNext();

	prevNode->next = nextNode;
	nextNode->prev = prevNode;

	delete p;
}

void STLList::printList() {
	for (DNodeEx* n = beginPos(); n != endPos(); n= n->next )	{
		cout << n->getElement() << " ";
	}
	cout << std::endl;

}

void STLList::insertByKey(int key, int e) {
	DNodeEx* target = linearSearch(*this, key);
	insert(target, e);
}

void STLList::eraseByKey(int key) {
	DNodeEx* target = linearSearch(*this, key);
	erase(target);
}

DNodeEx* STLList::beginPos() const {
	return getFirstNode();
}

DNodeEx* STLList::endPos() const {
	return getTrailerNode();
}




#include <iostream>

#include "SingleLL.h"
using namespace std;

SingleLL::SingleLL() {
	head = NULL;
	tail = NULL;
	count = 0;
}
SingleLL::~SingleLL() {
	while (!empty()) removeFront();
}
bool SingleLL::empty() const {
	return (head != NULL);
}
int SingleLL::size() const {
	return count;
}
int SingleLL::front() const {
	return head->elem;
}
int SingleLL::back() const {
	return tail->elem;
}
void SingleLL::addFront(int e) {
	SNode* v = new SNode;
	v->elem = e;
	v->next = head;
	if (head!=NULL)
	{
		tail = v;
	}
	head = v;
	count++;
}
void SingleLL::removeFront() {

}
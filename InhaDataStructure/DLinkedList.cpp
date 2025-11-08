#include <string>
#include <stdexcept>
#include "DLinkedList.h"

using std::underflow_error;

DLinkedList::DLinkedList() {
	header = new DNodeEx();
	trailer = new DNodeEx();
	header->next = trailer;
	trailer->prev = header;
	count = 0;
}

DLinkedList::~DLinkedList() {
	while (!empty()) removeFront();
	delete header;
	delete trailer;
}

int DLinkedList::size() const {
	return count;
}
bool DLinkedList::empty() const {
	if (header->next == trailer) return true; //header의 next가 trailer 만든 더미노드일 때 empty true 반환
	else return false;
}

int DLinkedList::front() const {
	if (empty()) throw underflow_error("Deque is empty"); //empty 예외처리
	return header->next->element; // 더미 header의 다음부분의 element 반환
}
int DLinkedList::back() const {
	if (empty()) throw underflow_error("Deque is empty");
	return trailer->prev->element; // 더미 trailer의 전부분의 element를 반환

}
void DLinkedList::add(DNodeEx* v, int e) {
	DNodeEx* u = new DNodeEx; // 동적 할당으로 새로운 노드 생성
	u->element = e;
	u->next = v;
	u->prev = v->prev;
	v->prev->next = u;
	v->prev = u;
	count++;
}

void DLinkedList::addFront(int e) {
	add(header->next, e); //앞에다 값 추가
}

void DLinkedList::addBack(int e) {
	add(trailer, e);
}
void DLinkedList::remove(DNodeEx* v) {
	DNodeEx* u = v->prev;
	DNodeEx* w = v->next;
	u->next = w;
	w->prev = u;
	delete v;
	count--;
}
void DLinkedList::removeFront() {
	remove(header->next);
}
void DLinkedList::removeBack() {
	remove(trailer->prev);
}
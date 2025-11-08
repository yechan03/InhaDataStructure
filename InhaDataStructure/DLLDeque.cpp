
#include <stdexcept>

#include "DLLDeque.h"

using std::overflow_error;
using std::underflow_error;

DLLDeque::DLLDeque(int cap) :count(0), capacity(cap) {};

DLLDeque::~DLLDeque() {};

bool DLLDeque::empty() const {
	return count == 0;
}

bool DLLDeque::full() const {
	return count >= capacity;
}

void DLLDeque::insertFront(int e) {
	if (full()) throw overflow_error("Deque is full");
	list.addFront(e);
	count++;
}

void DLLDeque::insertBack(int e) {
	if (full()) throw overflow_error("Deque is full");
	list.addBack(e);
	count++;
}

void DLLDeque::eraseFront() {
	if (empty()) throw underflow_error("Deque is empty");
	list.removeFront();
	count--;
}

void DLLDeque::eraseBack() {
	if (empty()) throw underflow_error("Deque is empty");
	list.removeBack();
	count--;
}

int DLLDeque::front() const {
	return list.front();
}

int DLLDeque::back() const {
	return list.back();
}
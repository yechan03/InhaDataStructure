#include "DLLStack.h"

DLLStack::DLLStack() {};
DLLStack::~DLLStack() {};

bool DLLStack::empty() const {
	if (list.size() > 0) {
		return false;
	}
	else {
		return true;
	}
}

int DLLStack::size() const {
	return list.size();
}

void DLLStack::push(int e) {
	list.addFront(e);
}

void DLLStack::pop() {
	list.removeBack();
}

int DLLStack::top() const {
	return list.front();
}


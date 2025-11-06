#include "SLLStack.h"

SLLStack::SLLStack() {

};

SLLStack::~SLLStack() {

};

bool SLLStack::empty() const {
	return list.empty();
}
int SLLStack::size() const {
	return list.size();
}
void SLLStack::push(int e) {
	list.addFront(e);
}

void SLLStack::pop() {
	if (!list.empty())
	{
		list.removeFront();
	}
}
int SLLStack::top() const {
	return list.front();
}
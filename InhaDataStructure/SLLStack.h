#ifndef SLLSTACK
#define SLLSTACK

#include "SingleLL.h"
class SLLStack {
private:
	SingleLL list;
public:
	SLLStack();
	~SLLStack();
	bool empty() const;
	int size() const;
	
	void push(int e);
	void pop();
	int top() const;
};

#endif // !SLLSTACK

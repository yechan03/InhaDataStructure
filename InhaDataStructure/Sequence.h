#ifndef SEQUENCE_H
#define SEQUENCE_H

#include "STLList.h"

class Sequence : public STLList {
private:
public:
	int indexOf(DNodeEx* key);

	DNodeEx* atIndex(int i);
};


#endif
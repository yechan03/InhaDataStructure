
#include "Sequence.h"

DNodeEx* Sequence::atIndex(int index) {
	DNodeEx* target = beginPos();
	if (index == NULL) {
		return NULL;
	}
	else {
		for (int i = 0; i < index; i++) {
			target = target->getNext();
		}
		return target;
	}

}

int Sequence::indexOf(DNodeEx* n) {
	int indexCounter = 0;
	for (DNodeEx* sp = beginPos(); sp != endPos(); sp = sp->getNext()) {
		if (sp == n) {
			return indexCounter;
		}
		indexCounter++;
	}
	return -1;
}
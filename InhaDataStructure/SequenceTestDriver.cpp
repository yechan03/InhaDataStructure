#include "Sequence.h"

#include <iostream>

DNodeEx* linearSearch(Sequence& ns, int key) { 

	for (DNodeEx* p = ns.beginPos(); p != ns.endPos(); p = p->getNext()) {
		if (p->getElement() == key) {
			return p;
		}
	}

	return NULL;
}

Sequence* bubbleSort(Sequence& ns) {

}


int main() {
	const int NOS = 7;
	int a[NOS] = { 6, 7, 2, 5, 1, 4, 3 };
	Sequence ns;
	for (int i = 0; i < NOS; i++) ns.insertBack(a[i]); // º¯°æµÊ


	return 0;
}
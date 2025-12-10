#include "STLList.h"

#include <iostream>
#include <string>

using namespace std;
DNodeEx* linearSearch(STLList& ns, int key) { // ¾È¹Ù²ãµµ µ¹¾Æ°¨

	for (DNodeEx* p = ns.beginPos(); p != ns.endPos(); p = p->getNext()) {
		if (p->getElement() == key) {
			return p;
		}
	}

	return NULL;
}

STLList bubbleSort(STLList& ns) {

    bool swapped = true;

    while (swapped) {
        swapped = false;

        DNodeEx* p = ns.beginPos();
        DNodeEx* nextNode = p->getNext();

        while (nextNode != ns.endPos()) {

            if (p->getElement() > nextNode->getElement()) {
                int temp = p->getElement();
                p->setElement(nextNode->getElement());
                nextNode->setElement(temp);
                swapped = true;
            }

            p = nextNode;
            nextNode = nextNode->getNext();
        }
    }

    return ns;
}
int main() {


	const int NOS = 7;
	int a[NOS] = { 6, 7, 2, 5, 1, 4, 3 };
	STLList ns;
	for (int i = 0; i < NOS; i++) ns.insertBack(a[i]); // º¯°æµÊ
	cout << "A sequence of size = " << ns.size() << endl;
	ns.printList();
	ns = bubbleSort(ns);
	ns.printList();

	return 0;
}
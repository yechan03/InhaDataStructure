#include "STLList.h"

#include <iostream>

using namespace std;


int main() {
	const int NOS = 7;
	int a[NOS] = { 6,7,2,5,1,4,3 };
	STLList ns;
	for (int i = 0; i < NOS; i++)
	{
		ns.insertBack(a[i]);
	}
	cout << "A sequece of size = " << ns.size() << endl;
	cout << "---------print List-----------" << endl;
	ns.printList();
	cout << "---- Testing position-based operations----" << endl;
	int k = 0;
	cout << "Enter searching key (-1 for exit): ";
	cin >> k;
	DNodeEx* pos;
	while (k != -1) {
		pos = ns.linearSearch(ns, k);
		if (pos == NULL){
			cout << "Searching key is Not found!!" << endl;
		}
		else {
			cout << "Searching key is found!" << endl;

		}
		cout << "Enter searching key(-1 for exit): ";
		cin >> k;

	}
	for (int i = 0; i < NOS; i++)
	{
		ns.eraseFront();
	}

	for (int i = 0; i < NOS; i++)
	{
		ns.insertBack(a[i]);
	}
	cout << endl << "Add function(insert, Erase, indexOf)" << endl;
	cout << "---------print List-----------" << endl;
	ns.printList();
	ns.insertByKey(5, 8);
	cout << "Insert By key(linear search) key:5 element:8 " << endl;
	ns.printList();
	ns.eraseByKey(8);
	cout << "erase By key(linear search) key: 8" << endl;
	ns.printList();
	cout << "indexOf By key(linear search) " << endl;
	cout << "index of key:5 index:" << ns.indexOf(ns, 5)+1;

	return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

#include "GAMEENTRY.h"
#include "SCORES.h"

void main() {
	Scores newList(20);

	GameEntry item1("Rob", 750);
	newList.add(item1);
	GameEntry item3("Anna", 660);
	newList.add(item3);
	GameEntry item5("Jack", 510);
	newList.add(item5);
	GameEntry item4("Rose", 590);
	newList.add(item4);
	GameEntry item2("Paul", 720);
	newList.add(item1);
	GameEntry item0("Mike", 1150);
	newList.add(item0);
	cout << endl << newList;
}
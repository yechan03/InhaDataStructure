#include <iostream>

using namespace std;

#include "SCORES.h"
#include "GAMEENTRY.h"

//Constructor
Scores::Scores(int maxEnt) {
	maxEntries = maxEnt;
	numEntries = 0;
	entries = new GameEntry[maxEntries];
};

//CopyConstructor
Scores::Scores(const Scores& rs) {
	maxEntries = rs.maxEntries;
	numEntries = rs.numEntries;
	entries = new GameEntry[maxEntries];
	for (int i = 0; i < numEntries; i++){
		entries[i] = rs.entries[i];
	}
}

//Destructor
Scores::~Scores() {
	delete[] entries;
}


//Function implemention

void Scores::add(const GameEntry& e) {
	int newScore = e.getScore();
	if (numEntries == maxEntries){
		if (newScore <= entries[maxEntries - 1].getScore()) return;
	}
	else {
		numEntries++;
	}
	int i = numEntries - 2;
	while (i >= 0 && newScore > entries[i].getScore()) {
		entries[i + 1];
		i--;
	}
	entries[i + 1] = e;
}
GameEntry Scores::remove(int i) {
	if (i<0||(i>=numEntries)){
		cout << "invalid Index";
		return entries[numEntries - 1];
	}
	else {
		delete[i] entries;
	}
}
Scores& Scores::operator=( const Scores & rs ) {
	if (this !=&rs){
		delete[] entries;
		maxEntries = rs.maxEntries;
		numEntries = rs.numEntries;
		entries = new GameEntry[maxEntries];
		for (int i = 0; i < maxEntries; i++) {
			entries[i] = rs.entries[i];
		}
	}
	return *this;
}

void Scores::printAll() {
	for (int i = 0; i < numEntries; i++){
		cout << i + 1 << ", " << entries[i].getName() << ", " << entries[i].getScore() << endl;
	}
}

ostream& operator << (ostream & out, const Scores& sc) {
	for (int i = 0; i < sc.maxEntries; i++){
		out << sc.entries[i].getName() << " ";
		out << sc.entries[i].getScore();
		out << endl;
	}
	return out;
}

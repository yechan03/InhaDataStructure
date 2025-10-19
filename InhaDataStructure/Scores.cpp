#include <iostream>

using namespace std;

#include "Scores.h"
#include "GameEntry.h"



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
		entries[i + 1] = entries[i];
		i--;
	}
	entries[i + 1] = e;
}
GameEntry Scores::remove(int i) {
	if (i<0||(i>=numEntries)){
		cout << "invalid Index";
		return entries[numEntries - 1];
	}
	GameEntry removed = entries[i];
	//¿ÞÂÊÀ¸·Î Shifting
	for (int j = i; j < numEntries-1; j++){
		entries[j] = entries[j + 1];
	}
	numEntries--;
	return removed;
}
//Refactoring Start: Name approach remove
GameEntry Scores::remove(const string& n) {
	for (int i = 0; i < numEntries; i++){
		if (entries[i].getName() == n){
			GameEntry removed = entries[i];
			for (int j = i; j < numEntries-1; j++)
			{
				entries[j] = entries[j + 1];
			}
			--numEntries;
			return removed;
		}
	}

}
//Refactoring End

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


// operator Overloding
ostream& operator << (ostream & out, const Scores& sc) {
	for (int i = 0; i < sc.maxEntries; i++){
		if (sc.entries[i].getScore() == 0) {
			continue;
		}
		out << sc.entries[i].getName() << " " << sc.entries[i].getScore() << endl;

	}
	return out;
}

#ifndef SCORES_H
#define SCORES_H

#include <iostream>

#include "GameEntry.h"

using namespace std;
using std::operator<<;
using std:: operator+;

class Scores {
private:
	int maxEntries;
	int numEntries;
	GameEntry* entries;

public:
	Scores(int maxEnt = 10); //Constructor maxEntries is 10
	Scores(const Scores& is); // Copy Constructor 
	~Scores();
	GameEntry remove(int i); // i index remove
	//Refactoring Part
	GameEntry remove(const string& n); // Name approach remove
	void setUserName(int i, const string& s);
	void setUserScore(int i, int s);
	//Refactoring Part End
	Scores& operator = (const Scores& is);
	void add(const GameEntry& e);
	friend ostream& operator <<(ostream& out, const Scores& sc);
};

#endif // SCORES_H

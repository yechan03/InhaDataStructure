#include <string>
#include <iostream>

#include "GameEntry.h"

using namespace std;



//Constructor setting name and score
GameEntry::GameEntry(const string& n, int s)  { // name <- pass by reference
	setName(n);
	setScore(s); 

}

//NameGetter
string GameEntry::getName() const {
	return name;
}


void GameEntry::setName(string s) {
	name = s;
}
//ScoreSetter
void GameEntry::setScore(int s) {
	if (s >= 0) score = s;
	else score = 0;
}

//ScoreGetter
int GameEntry::getScore() const{
	return score;
}
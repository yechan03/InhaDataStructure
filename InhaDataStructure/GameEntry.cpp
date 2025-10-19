#include <string.h>

#include "GameEntry.h"

using namespace std;

//Constructor setting name and score
GameEntry::GameEntry(const string& n, int s) : name(n) { // name <- pass by reference

	setScore(s); 

}


//Refactoring Start
//GameEntry::GameEntry(const string &n, int s) {
//	name = n;
//	score = s;
//}

// Refactoring END
//NameGetter
string GameEntry::getName() const {
	return name;
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
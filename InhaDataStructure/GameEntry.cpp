#include <string.h>

#include "GAMEENTRY.h"

using namespace std;

//Constructor setting name and score
GameEntry::GameEntry(const string& n, int s) : name(n) { // nmae <- pass by reference
	setScore(s); 

}

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
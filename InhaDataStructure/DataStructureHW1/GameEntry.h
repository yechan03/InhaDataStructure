#ifndef GAMEENTRY_H
#define GAMEENTRY_H

using namespace std;

#include <string>

class GameEntry {
private:
	string name;
	int score;

public:
	GameEntry(const string& n = "", int s = 0); 
	string getName() const;
	void setName(string s);
	void setScore(int s);
	int getScore() const;
};

#endif // GAMEENTRY_H
#ifndef GAMEENTRY_H
#define GAMEENTRY_H


#include <string>

using namespace std;


class GameEntry {
private:
	string name;
	int score;
public:
	GameEntry(const string& n = "", int s = 0);
	string getName() const;
	void setScore(int s);
	int getScore() const;
};

#endif // !GAMEENTRY_H
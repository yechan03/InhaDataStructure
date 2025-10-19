#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

#include "GameEntry.h"
#include "Scores.h"

int main() {

	//Refactoring Code Strat: 객체를 입력을 받아 생성하기

	//int maxUserNum = 0;
	//int i;
	//int functionChoice;
	//
	//cout << "Choose Maximum User: ";
	//cin >> maxUserNum;
	//vector<string> userName(maxUserNum);
	//vector<int>userScore(maxUserNum);
	//
	//Scores newList(maxUserNum);
	//for (i = 0; i < maxUserNum; i++){
	//	cout << "Choose User Name: ";
	//	cin >> userName[i];
	//	cout << "Choose User Score: ";
	//	cin >> userScore[i];
	//	cout << endl;
	//}
	//
	//for ( i = 0; i < maxUserNum; i++){
	//	GameEntry item(userName[i],userScore[i]);
	//	newList.add(item);
	//}
	//cout << newList << endl;
	//
	//cout << "Choose Function:(1. remove User, 2. add User 3. Change User Name, 4. Change User Score)";
	//cin >> functionChoice;
	//switch (functionChoice) {
	//case 1: 
	//	break;
	//case 2:
	//	break;
	//case 3:
	//	break;
	//case 4:
	//	break;
	//default:
	//}

	//Refarctoring EnD

	//HW1_Problem2 main Functioin Test

	Scores newList(20);
	GameEntry item1("Rob", 750); //checking
	newList.add(item1);
	GameEntry item3("Anna", 660);
	newList.add(item3);
	GameEntry item5("Jack", 510);
	newList.add(item5);
	GameEntry item4("Rose", 590); // checking
	newList.add(item4);
	GameEntry item2("Paul", 720);
	newList.add(item2);
	GameEntry item0("Mike", 1150); // checking
	newList.add(item0);
	cout << "After inserting initial items " << endl << newList;
	GameEntry newItem("Jill", 740);
	newList.add(newItem);
	cout << "After adding Jill's Score" << endl << newList;
	GameEntry deletedItem = newList.remove(3);
	cout << "After delete 4th(Paul's) score" << endl << newList;
	GameEntry deletedItem2 = newList.remove("Mike");
	cout << "After delete Mike(1'th) score" << endl << newList;
	return 0;
}
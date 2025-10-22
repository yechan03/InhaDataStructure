#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

#include "GameEntry.h"
#include "Scores.h"

int main() {

	//Refactoring Code Strat: ��ü�� �Է��� �޾� �����ϱ�

	int maximumUserNum = 0;
	int functionChoice = 0;	
	int userScore = 0;
	int userIndex = 0;
	int changeUserScore = 0;
	string userName = "";
	string changeUserName = "";
	string addingUserCheck = "";

	GameEntry item(userName, userScore);

	cout << "Choose Maximum User(��unable resizing): ";
	cin >> maximumUserNum;
	Scores  newList(maximumUserNum); // GameEntry Data Type Array ���� 

	for (int i = 0; i < maximumUserNum; i++){
		cout << "User Name: ";
		cin >> userName;
		cout << "User Score: ";
		cin >> userScore;
		GameEntry item(userName, userScore);
		newList.add(item);
		if (i < maximumUserNum-1){
			cout << "You want Stop adding User?(Y/N): ";
			cin >> addingUserCheck;
			cin.ignore();
			if (addingUserCheck == "Y") {
				break;
			}
		}
	}

	cout << "===Printing Score board==="<< endl << newList;

	while (1) {
		cout << "Choose Function:" << endl <<
			"1. remove User, 2. add User 3. Change User Name, 4. Change User Score, Default. break : ";
		cin >> functionChoice;

		if (functionChoice == 1) { // �����ϰ� ���� index�� �޾� remove���ִ� ����̴�.
			int removeUserIndex;
			cout << "Choose remove user index: ";
			cin >> removeUserIndex;
			newList.remove(removeUserIndex - 1);
			cout << "After remove " << removeUserIndex << " index" << endl;
			cout << newList;
		}
		else if (functionChoice == 2) {//Max�� ������ ��� ������ �� �̻����� �߰��ϸ� ©�� vector�� ���� ����� ����ʹ�.
			cout << "user Name:  ";
			cin >> userName;
			cout << "user Score: ";
			cin >> userScore;
			item.setName(userName);
			item.setScore(userScore);
			newList.add(item);
			cout << endl << "===After add item===" << endl << newList;

		}
		else if (functionChoice == 3) { // ���ϴ� index��ȣ�� �޾� User�� �̸��� �ٲپ� �־���. 
			cout << "Select User index; ";
			cin >> userIndex;
			cout << "Want Changing Name: ";
			cin >> changeUserName;
			newList.setUserName(userIndex - 1, changeUserName);
			cout << endl << "===After changed user Name===" << endl << newList;
		}
		else if (functionChoice == 4) { // ���ϴ� index��ȣ�� �޾� ������ �ٲپ� �־���.
			cout << "Select User index; ";
			cin >> userIndex;
			cout << "Want Changing Score: ";
			cin >> changeUserScore;
			newList.setUserScore(userIndex - 1, changeUserScore);
			cout << endl << "===After changed user Score=== " << endl << newList;
		}
		else {
			break;
		}
	}
	cout << "===After Changed Scored Board===" << endl << newList;
	

	return 0;
	


	//Refarctoring EnD

	//HW1_Problem2 main Functioin Test

	//Scores newList(20);
	//GameEntry item1("Rob", 750); //checking
	//newList.add(item1);
	//GameEntry item3("Anna", 660);
	//newList.add(item3);
	//GameEntry item5("Jack", 510);
	//newList.add(item5);
	//GameEntry item4("Rose", 590); // checking
	//newList.add(item4);
	//GameEntry item2("Paul", 720);
	//newList.add(item2);
	//GameEntry item0("Mike", 1150); // checking
	//newList.add(item0);
	//cout << "After inserting initial items " << endl << newList;
	//GameEntry newItem("Jill", 740);
	//newList.add(newItem);
	//cout << "After adding Jill's Score" << endl << newList;
	//GameEntry deletedItem = newList.remove(3);
	//cout << "After delete 4th(Paul's) score" << endl << newList;
	//GameEntry deletedItem2 = newList.remove("Mike");
	//cout << "After delete Mike(1'th) score" << endl << newList;
}
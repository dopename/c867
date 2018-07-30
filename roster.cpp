#include <iostream>
#include <vector>
#include <string>

#include "student.h"

using namespace std;

const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Nick,Marini,nmarin7@wgu.edu,26,15,35,52,SOFTWARE"
};


void main() {
	int running = 1;

	while (running > 0) {
		char userChoice;
		cout << "What action would you like to do?" << endl;
		cout << "Press (Q) to quit, (L) to load students" << endl;
		cin >> userChoice;

		if (userChoice == 'Q') {
			running = 0;
		}
		else if (userChoice == 'L') {
			Student classRosterArray[5];
			
			classRosterArray[0] = Student();

			cout << "What would you like to do?... again (P) for print" << endl;
			cin >> userChoice;
			if (userChoice == 'P') {
				classRosterArray[0].print();
			}
		}
		
	}
}
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

			int rosterSize = studentData->length;

			for (int i = 0; i < rosterSize - 1; ++i) {
				string student = studentData[i];
				string firstName;
				string lastName;
				string email;
				Degree course;
				int age;
				string studentID;
				int* daysPtr = nullptr;
				int stops = 0;
				int prevIndex = 0;
				int days[3];


				for (int j = 0; student[j] != '\0'; ++j) {
					if (student[j] == ',') {
						switch (stops) {
						case 0:
							studentID = student.substr(0, j);
							stops += 1;
							prevIndex = j;
						case 1:
							firstName = student.substr(prevIndex, j);
							stops += 1;
							prevIndex = j;
						case 2:
							lastName = student.substr(prevIndex, j);
							stops += 1;
							prevIndex = j;
						case 3:
							email = student.substr(prevIndex, j);
							stops += 1;
							prevIndex = j;
						case 4:
							age = stoi(student.substr(prevIndex, j));
							stops += 1;
							prevIndex = j;
						case 5:
							days[0] = stoi(student.substr(prevIndex, j));
							stops += 1;
							prevIndex = j;
						case 6:
							days[1] = stoi(student.substr(prevIndex, j));
							stops += 1;
							prevIndex = j;
						case 7:
							days[2] = stoi(student.substr(prevIndex, j));
							stops += 1;
							prevIndex = j;
						case 8:
							string courseString = student.substr(prevIndex, j);
							if (courseString == "SOFTWARE") {
								course = SOFTWARE;
							}
							else if (courseString == "NETWORK") {
								course = NETWORK;
							}
							else {
								course = SECURITY;
							}
						}
						daysPtr = &days;
					}
				}
				classRosterArray[i] = Student(studentID, firstName, lastName, email, age, days);
			}



			cout << "What would you like to do?... again (P) for print" << endl;
			cin >> userChoice;
			if (userChoice == 'P') {
				classRosterArray[0].print();
			}
		}
		
	}
}
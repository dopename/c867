#include <iostream>
#include <vector>
#include <string>

#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

using namespace std;


const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Nick,Marini,nmarin7@wgu.edu,26,15,35,52,SOFTWARE",
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
			Roster roster;
			//Student classRosterArray[];

			//int rosterSize = studentData->length;

			for (int i = 0; i < 5; ++i) {
				string student = studentData[i];
				string firstName;
				string lastName;
				string email;
				Degree course;
				int age;
				string studentID;
				int stops = 0;
				int prevIndex = 0;
				int days[3];
				//int *daysPtr = days;
				cout << student << endl;

				int j = 0;

				while (j < student.size() - 1) {
					cout << student[j];
					if ((student[j] == ',') && (j > prevIndex)) {
						switch (stops) {
						case 0:
							studentID = student.substr(0, j);
							cout << "Case 0, Student ID: " << studentID << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 1:
							firstName = student.substr(prevIndex + 1, j - prevIndex);
							cout << "Case 1, First Name: " << firstName << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 2:
							lastName = student.substr(prevIndex + 1, j - prevIndex);
							cout << "Case 2, Last Name: " << lastName << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 3:
							email = student.substr(prevIndex + 1, j - prevIndex);
							cout << "Case 3, Email: " << email << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 4:
							age = stoi(student.substr(prevIndex + 1, j - prevIndex));
							cout << "Case 4, Age: " << age << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 5:
							days[0] = stoi(student.substr(prevIndex + 1, j - prevIndex));
							cout << "Case 5, Days[0]: " << days[0] << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 6:
							days[1] = stoi(student.substr(prevIndex + 1, j - prevIndex));
							cout << "Case 6, Days[1]: " << days[1] << endl;
							stops += 1;
							prevIndex = j;
							break;
						case 7:
							days[2] = stoi(student.substr(prevIndex + 1, j - prevIndex));
							cout << "Case 7, Days[2]: " << days[2] << endl;
							stops += 1;
							prevIndex = j;
							break;
						}
						if (stops == 8) {
							string courseString = student.substr(prevIndex + 1, student.length() - (prevIndex + 1));
							cout << "Case 8, Course: " << courseString << endl;
							if (courseString == "SOFTWARE") {
								course = SOFTWARE;
							//	classRosterArray.push_back(SoftwareStudent());
							}
							else if (courseString == "NETWORK") {
								course = NETWORK;
							//	classRosterArray.push_back(NetworkStudent());
							}
							else {
								course = SECURITY;
							//	classRosterArray.push_back(SecurityStudent());
							}
							break;
						}
					}
					j += 1;
				}

				roster.add(studentID, firstName, lastName, email, age, days[0], days[1], days[2], course);
				//classRosterArray[i].SetStudentID(studentID);
				//classRosterArray[i].SetStudentFirstName(firstName);
				//classRosterArray[i].SetStudentLastName(lastName);
				//classRosterArray[i].SetStudentEmail(email);
				//classRosterArray[i].SetStudentAge(age);
				//classRosterArray[i].SetStudentDaysInCourse(daysPtr);
			}



			cout << "What would you like to do?... again (P) for print" << endl;
			cin >> userChoice;
			if (userChoice == 'P') {
				roster.printAll();
			}
		}

	}
}

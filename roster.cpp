#include <iostream>
#include <vector>
#include <string>

//#include "student.h"
//#include "networkStudent.h"
//#include "securityStudent.h"
//#include "softwareStudent.h"
#include "roster.h"

using namespace std;

//START ROSTER DEFINTION

Roster::Roster() {
	vector<Student*> classRosterArray;
	return;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	switch (degree) {
	case SOFTWARE:
		classRosterArray.push_back(new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree));
		break;
	case NETWORK:
		classRosterArray.push_back(new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree));
		break;
	case SECURITY:
		classRosterArray.push_back(new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree));
		break;
	}
	//cout << "Roster size: " << classRosterArray.size() << endl;
	return;
}

void Roster::remove(string studentID) {
	int studentFound = 0;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		if (classRosterArray.at(i)->GetStudentID() == studentID) {
			cout << "Deleting: " << classRosterArray.at(i)->GetStudentID() << endl;
			classRosterArray.erase(classRosterArray.begin() + i);
			studentFound = 1;
		}
	}
	if (studentFound == 0) {
		cout << "Student not found." << endl;
	}
	return;
}

void Roster::printAll() {
	for (int i = 0; i < classRosterArray.size(); ++i) {
		//cout << "\t" << classRosterArray.at(i)*->print;
		classRosterArray.at(i)->print();
	}
	cout << endl;
	return;
}

void Roster::printDaysInCourse(string studentID) {
	cout << "******* " << studentID << " DAYS IN COURSE *******" << endl << endl;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		if (classRosterArray.at(i)->GetStudentID() == studentID) {
			cout << "Course 1: " << classRosterArray.at(i)->GetStudentDaysInCourse1() << " days left" << endl;
			cout << "Course 2: " << classRosterArray.at(i)->GetStudentDaysInCourse2() << " days left" << endl;
			cout << "Course 3: " << classRosterArray.at(i)->GetStudentDaysInCourse3() << " days left" << endl;
			break;
		}
	}
	return;
}

void Roster::printInvalidEmails() {
	cout << "******* INVALID EMAILS *******" << endl << endl;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		string email = classRosterArray.at(i)->GetStudentEmail();
		int periodFound = 0;
		int atFound = 0;
		int spaceFound = 0;

		for (int j = 0; j < email.size() - 1; ++j) {
			if (email[j] == '@') {
				atFound = 1;
			}
			else if (email[j] == '.') {
				periodFound = 1;
			}
			else if (email[j] == ' ') {
				spaceFound = 1;
			}
		}

		if (spaceFound == 1 || atFound == 0 || periodFound == 0) {
			cout << "Student " << classRosterArray.at(i)->GetStudentFirstName() << " ";
			cout << classRosterArray.at(i)->GetStudentLastName() << ", Student ID: ";
			cout << classRosterArray.at(i)->GetStudentID() << " has an invalid e-mail:" << endl << endl;
			cout << email << endl << endl;
		}
	}
	return;
}

void Roster::printByDegreeProgram(int degreeProgram) {
	cout << "******* STUDENTS BY DEGREE *******" << endl << endl;
	for (int i = 0; i < classRosterArray.size(); ++i) {
		if (classRosterArray.at(i)->getDegreeProgram() == degreeProgram) {
			classRosterArray.at(i)->print();
		}
	}
	return;
}

//END ROSTER DEFINITION

//APPLICATION MAIN


const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Nick,Marini,nmarin7@wgu.edu,26,15,35,52,SOFTWARE",
};


void main() {
	cout << "Nick Marini, #000676927, C++" << endl;
	cout << "Scripting and Programming - Applications - C867" << endl << endl;
	Roster classRoster; //Initialize the Roster class

	//Pull student information from studentData
	for (int i = 0; i < 5; ++i) {
		string student = studentData[i]; //cleaner way off accessing current line
		string firstName;
		string lastName;
		string email;
		Degree course;
		int age;
		string studentID;
		int stops = 0; //Counts the number of commas we've hit
		int prevIndex = 0; //The index of the last comma found
		int days[3];
		//int *daysPtr = days;
		//cout << student << endl;

		int j = 0;

		while (j < student.size() - 1) {
			//cout << student[j];
			if ((student[j] == ',') && (j > prevIndex)) {
				switch (stops) {
				case 0:
					studentID = student.substr(0, j);
					//cout << "Case 0, Student ID: " << studentID << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 1:
					firstName = student.substr(prevIndex + 1, (j - prevIndex) - 1);
					//cout << "Case 1, First Name: " << firstName << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 2:
					lastName = student.substr(prevIndex + 1, (j - prevIndex) - 1);
					//cout << "Case 2, Last Name: " << lastName << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 3:
					email = student.substr(prevIndex + 1, (j - prevIndex) - 1);
					//cout << "Case 3, Email: " << email << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 4:
					age = stoi(student.substr(prevIndex + 1, (j - prevIndex) - 1));
					//cout << "Case 4, Age: " << age << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 5:
					days[0] = stoi(student.substr(prevIndex + 1, (j - prevIndex) - 1));
					//cout << "Case 5, Days[0]: " << days[0] << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 6:
					days[1] = stoi(student.substr(prevIndex + 1, (j - prevIndex) - 1));
					//cout << "Case 6, Days[1]: " << days[1] << endl;
					stops += 1;
					prevIndex = j;
					break;
				case 7:
					days[2] = stoi(student.substr(prevIndex + 1, (j - prevIndex) - 1));
					//cout << "Case 7, Days[2]: " << days[2] << endl;
					stops += 1;
					prevIndex = j;
					break;
				}
				if (stops == 8) {
					string courseString = student.substr(prevIndex + 1, student.length() - (prevIndex + 1));
					//cout << "Case 8, Course: " << courseString << endl;
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

		classRoster.add(studentID, firstName, lastName, email, age, days[0], days[1], days[2], course);
	}

	int running = 1;

	while (running > 0) {
		char userChoice;
		cout << "What action would you like to do?" << endl;
		cout << "Press (Q) to quit at anytime" << endl;
		cout << "Please note: all actions are case-sensitive" << endl;
		cout << "Which action would you like to perform?" << endl << "------------------------------" << endl;
		cout << "(P) for print, (D) for days, (I) for Invalid Emails (E) for students by degree program" << endl;
		cout << "(R) to remove student" << endl;
		cin >> userChoice;

		if (userChoice == 'Q') {
			running = 0;
		}
		if (userChoice == 'P') {
			classRoster.printAll();
			cout << endl << endl;
		}
		else if (userChoice == 'D') {
			string stuID;
			cout << "What is the ID of the student?" << endl;
			cin >> stuID;
			classRoster.printDaysInCourse(stuID);
			cout << endl << endl;
		}
		else if (userChoice == 'I') {
			classRoster.printInvalidEmails();
			cout << endl << endl;
		}
		else if (userChoice == 'E') {
			int degreeProgram;
			cout << "Which program would you like to get students from?" << endl;
			cout << "0 = NETWORK, 1 = SOFTWARE, 2 = SECURITY" << endl;
			cin >> degreeProgram;

			classRoster.printByDegreeProgram(degreeProgram);
			cout << endl << endl;
		}
		else if (userChoice == 'R') {
			string removeStu;
			cout << "What is the ID of the student" << endl;
			cin >> removeStu;
			cout << endl;
			classRoster.remove(removeStu);
			cout << endl << endl;
		}

	}
}

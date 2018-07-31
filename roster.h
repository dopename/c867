#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "degree.h"

using namespace std;

class Roster {
public:
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	void remove(string studentID);
	void printAll();
	//void printDaysInCourse(string studentID);
	//void printInvalidEmails();
	//void printByDegreeProgram(int degreeProgram);
	Roster();
private:
	Student* classRosterArray[];
};

Roster::Roster() : Student classRosterArray[5] {
	return;
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	int arrayIndex = stoi(studentID.substr(1, studentID.length() - 1)) - 1;
	switch (degree) {
	case SOFTWARE:
		this->*classRosterArray[arrayIndex] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
	case NETWORK:
		this->*classRosterArray[arrayIndex] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
	case SECURITY:
		this->*classRosterArray[arrayIndex] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3);
	}
	return;
}

void Roster::remove(string studentID) {
	int arrayIndex = stoi(studentID.substr(1, studentID.length() - 1)) - 1;
	delete this->classRosterArray[arrayIndex];
	return;
}

void Roster::printAll() {
	for (int i = 0; i < 5; ++i) {
		cout << "\t" << this->*classRosterArray[i]->print();
	}
	return;
}

//void Roster::printDaysInCourse(string studentID) {

//}

//void Roster::printInvalidEmails() {

//}

//void Roster::printByDegreeProgram(int degreeProgram) {
//}

#endif
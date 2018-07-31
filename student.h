#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "degree.h"

class Student {
public:
	//Virtual Print
	virtual void print() {
		cout << GetStudentFirstName() << " ";
		cout << GetStudentLastName() << " ";
		cout << GetStudentAge() << endl;
		return;
	}

	//Virtual getDegreeProgram
	virtual Degree getDegreeProgram() {
		return;
	}

	//Setters for Student info
	void SetStudentID(string studentID) {
		this->studentID = studentID;
		return;
	}

	void SetStudentFirstName(string firstName) {
		this->firstName = firstName;
		return;
	}

	void SetStudentLastName(string lastName) {
		this->lastName = lastName;
		return;
	}

	void SetStudentEmail(string email) {
		this->email = email;
		return;
	}

	void SetStudentAge(int age) {
		this->age = age;
		return;
	}

	void SetStudentDaysInCourse1(int daysInCourse1) {
		this->daysInCourse1 = daysInCourse1;
		return;
	}

	void SetStudentDaysInCourse2(int daysInCourse2) {
		this->daysInCourse2 = daysInCourse2;
		return;
	}

	void SetStudentDaysInCourse3(int daysInCourse3) {
		this->daysInCourse3 = daysInCourse3;
		return;
	}

	//void SetStudentDegree(Degree degreeTypes) {
	//	this->degreeTypes = degreeTypes;
	//	return;
	//}

	//Getters for Student info
	string GetStudentID() const {
		return studentID;
	}

	string GetStudentFirstName() const {
		return firstName;
	}

	string GetStudentLastName() const {
		return lastName;
	}

	string GetStudentEmail() const {
		return email;
	}

	int GetStudentAge() const {
		return age;
	}

	int GetStudentDaysInCourse1() const {
		return daysInCourse1;
	}

	int GetStudentDaysInCourse2() const {
		return daysInCourse2;
	}

	int GetStudentDaysInCourse3() const {
		return daysInCourse3;
	}

	//Default constructor
	//Student();

	//Constructor using props
	//Student(int studentID, string firstName, string lastName, string email, int age, int* daysInCourse);// , Degree degree);

	//~Student();

	Student::~Student() {
		return;
	}

	Student::Student() {
		firstName = "default";
		lastName = "default";
		studentID = "000000";
		email = "nmarin7@wgu.edu";
		age = 26;
		daysInCourse1 = 0;
		daysInCourse2 = 0;
		daysInCourse3 = 0;
		//degreeTypes = SOFTWARE;

		return;
	}

	Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3) {// , Degree degreeTypes) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->studentID = studentID;
		this->email = email;
		this->age = age;
		this->daysInCourse1 = daysInCourse1;
		this->daysInCourse2 = daysInCourse2;
		this->daysInCourse3 = daysInCourse3;
		//this->degreeTypes = degreeTypes;

		return;
	}

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	//Degree degreeTypes;

};

#endif
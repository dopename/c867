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
	virtual void getDegreeProgram() {
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

	void SetStudentDaysInCourse(int* daysInCourse) {
		this->daysInCourse = daysInCourse;
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

	int* GetStudentDaysInCourse() const {
		return daysInCourse;
	}

	//Default constructor
	//Student();

	//Constructor using props
	//Student(int studentID, string firstName, string lastName, string email, int age, int* daysInCourse);// , Degree degree);

	//~Student();

	Student::~Student() {
		delete daysInCourse;
		return;
	}

	Student::Student() {
		firstName = "default";
		lastName = "default";
		studentID = "000000";
		email = "nmarin7@wgu.edu";
		age = 26;
		daysInCourse = new int[3]{ 0, 0, 0 };
		//degreeTypes = SOFTWARE;

		return;
	}

	Student::Student(string studentID, string firstName, string lastName, string email, int age, int* daysInCourse) {// , Degree degreeTypes) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->studentID = studentID;
		this->email = email;
		this->age = age;
		this->daysInCourse = daysInCourse;
		//this->degreeTypes = degreeTypes;

		return;
	}

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int* daysInCourse;
	//Degree degreeTypes;

};

#endif
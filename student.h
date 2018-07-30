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
		cout << "Some text here";
		return;
	}

	//Virtual getDegreeProgram
	virtual Degree getDegreeProgram() {
		return;
	}

	//Setters for Student info
	void SetStudentID(int studentID) {
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

	void SetStudentDegree(Degree degreeTypes) {
		this->degreeTypes = degreeTypes;
		return;
	}

	//Getters for Student info
	int GetStudentID() const {
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
	Student();

	//Constructor using props
	Student(int studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree degree);

	~Student();

private:
	int studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int* daysInCourse;
	Degree degreeTypes;

	Student::Student() {
		firstName = "default";
		lastName = "default"
			studentID = 000000;
		email = "nmarin7@wgu.edu";
		age = 26;
		daysInCourse = { 0, 0, 0 };
		degreeTypes = degree::Degree;

		return;
	}

	Student::Student(int studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree degreeTypes) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->studentID = studentID;
		this->email = email;
		this->age = age;
		this->daysInCourse = daysInCourse;
		this->degreeTypes = degreeTypes;

		return;
	}

	inline Student::~Student()
	{
	}

};

#endif
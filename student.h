#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "degree.h"

class Student {
public:
	//Setters for Student info
	void SetStudentID(int newStudentID) {
		studentID = newStudentID;
		return;
	}

	void SetStudentFirstName(string fname) {
		firstName = fname;
		return;
	}

	void SetStudentLastName(string lname) {
		lastName = lname;
		return;
	}

	void SetStudentEmail(stirng studentEmail) {
		email = studentEmail;
		return;
	}

	void SetStudentAge(int studentAge) {
		age = studentAge;
		return;
	}

	void SetStudentDaysInCourse(int[] daysInCourse) {
		this->daysInCourse = daysInCourse;
		return;
	}

	void SetStudentDegree(Degree degree) {
		this->degree = degree;
		return;
	}
	//Getters for Student info
	int GetStudentID() const {
		return studentID
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

	int GetStudentDaysInCourse() const {
		return daysInCourse;
	}

	Degree GetStudentDegree() const {
		return degree
	}

	Student();
	Student(int studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree degree);

private:
	int studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysInCourse[];
	Degree degree;

	Student::Student() {
		firstName = "default";
		lastName = "default"
		studentID = 000000;
		email = "nmarin7@wgu.edu";
		age = 26;
		daysInCourse = {0, 0, 0};
		degree = "SOFTWARE";

		return;
	}

	Student::Student(int studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree degree) {
		this->firstName = firstName;
		this->lastName = lastName;
		this->studentID = studentID;
		this->email = email;
		this->age = age;
		this->daysInCourse = daysInCourse;
		this->degree = degree;

		return;
	}

#endif
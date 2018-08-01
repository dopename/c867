#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "degree.h"

using namespace std;


class Student {
public:
	//Virtual Print
	virtual void print();
	//Virtual getDegreeProgram
	virtual Degree getDegreeProgram();
	//Setters for Student info
	void SetStudentID(string studentID);
	void SetStudentFirstName(string firstName);
	void SetStudentLastName(string lastName);
	void SetStudentEmail(string email);
	void SetStudentAge(int age);
	void SetStudentDaysInCourse1(int daysInCourse1);
	void SetStudentDaysInCourse2(int daysInCourse2);
	void SetStudentDaysInCourse3(int daysInCourse3);
	void PrintAllDaysInCourse();
	void SetStudentDegree(Degree degreeTypes);
	//Getters for Student info
	string GetDegreeString() const;
	string GetStudentID() const;
	string GetStudentFirstName() const;
	string GetStudentLastName() const;
	string GetStudentEmail() const;
	int GetStudentAge() const;
	int GetStudentDaysInCourse1() const;
	int GetStudentDaysInCourse2() const;
	int GetStudentDaysInCourse3() const;
	//Default constructor
	//Student();

	//Constructor using props
	//Student(int studentID, string firstName, string lastName, string email, int age, int* daysInCourse);// , Degree degree);

	//~Student();

	//Student::~Student() {
	//	return;
	//}

	Student(); /*{
		firstName = "default";
		lastName = "default";
		studentID = "000000";
		email = "nmarin7@wgu.edu";
		age = 26;
		daysInCourse1 = 0;
		daysInCourse2 = 0;
		daysInCourse3 = 0;
		degree = SOFTWARE;

		return;
	}*/

protected:
	Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);// {
	//	this->firstName = firstName;
	//	this->lastName = lastName;
	//	this->studentID = studentID;
	//	this->email = email;
	//	this->age = age;
	//	this->daysInCourse1 = daysInCourse1;
	//	this->daysInCourse2 = daysInCourse2;
	//	this->daysInCourse3 = daysInCourse3;
	//	this->degree= degree;

	//	return;
	//}

private:
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int daysInCourse1;
	int daysInCourse2;
	int daysInCourse3;
	Degree degree;

};

#endif
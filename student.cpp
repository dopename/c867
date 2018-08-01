#include "student.h"


Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {
	this->firstName = firstName;
	this->lastName = lastName;
	this->studentID = studentID;
	this->email = email;
	this->age = age;
	this->daysInCourse1 = daysInCourse1;
	this->daysInCourse2 = daysInCourse2;
	this->daysInCourse3 = daysInCourse3;
	this->degree = degree;

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
	degree = SOFTWARE;

	return;
}

void Student::print() {
	cout << GetStudentID() << "\t";
	cout << "First Name: " << GetStudentFirstName() << "\t";
	cout << "Last Name: " << GetStudentLastName() << "\t";
	cout << "Age: " << GetStudentAge() << "\t\t";
	cout << "daysInCourse: ";
	PrintAllDaysInCourse();
	cout << "\t";
	cout << "Degree Program: " << GetDegreeString() << "\t";
	return;
}

//Virtual getDegreeProgram
Degree Student::getDegreeProgram() {
	return degree;
}

//Setters for Student info
void Student::SetStudentID(string studentID) {
	this->studentID = studentID;
	return;
}

void Student::SetStudentFirstName(string firstName) {
	this->firstName = firstName;
	return;
}

void Student::SetStudentLastName(string lastName) {
	this->lastName = lastName;
	return;
}

void Student::SetStudentEmail(string email) {
	this->email = email;
	return;
}

void Student::SetStudentAge(int age) {
	this->age = age;
	return;
}

void Student::SetStudentDaysInCourse1(int daysInCourse1) {
	this->daysInCourse1 = daysInCourse1;
	return;
}

void Student::SetStudentDaysInCourse2(int daysInCourse2) {
	this->daysInCourse2 = daysInCourse2;
	return;
}

void Student::SetStudentDaysInCourse3(int daysInCourse3) {
	this->daysInCourse3 = daysInCourse3;
	return;
}

void Student::PrintAllDaysInCourse() {
	cout << "{" << GetStudentDaysInCourse1() << ", " << GetStudentDaysInCourse2() << ", " << GetStudentDaysInCourse3() << "}";
	return;
}

void Student::SetStudentDegree(Degree degreeTypes) {
	this->degree = degree;
	return;
}

//Getters for Student info
string Student::GetDegreeString() const {
	if (degree == 0) {
		return "Network";
	}
	else if (degree == 1) {
		return "Software";
	}
	else if (degree == 2) {
		return "Security";
	}
	else {
		return "Not a valid degree";
	}
}

string Student::GetStudentID() const {
	return studentID;
}

string Student::GetStudentFirstName() const {
	return firstName;
}

string Student::GetStudentLastName() const {
	return lastName;
}

string Student::GetStudentEmail() const {
	return email;
}

int Student::GetStudentAge() const {
	return age;
}

int Student::GetStudentDaysInCourse1() const {
	return daysInCourse1;
}

int Student::GetStudentDaysInCourse2() const {
	return daysInCourse2;
}

int Student::GetStudentDaysInCourse3() const {
	return daysInCourse3;
}

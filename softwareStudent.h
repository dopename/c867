#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

using namespace std;

class SoftwareStudent : public Student {
public:
	Degree getDegreeProgram() override {
		return SOFTWARE;
	}

	SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) : Student(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree) {}
private:
	Degree degree;

};

#endif
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include "student.h"

using namespace std;

class SoftwareStudent : public Student {
public:
public:
	Degree getDegreeProgram() override;
	SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
private:
	Degree degree;

};

#endif
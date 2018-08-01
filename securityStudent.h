#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include "student.h"

using namespace std;

class SecurityStudent : public Student {
public:
	Degree getDegreeProgram() override;
	SecurityStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
private:
	Degree degree;

};

#endif

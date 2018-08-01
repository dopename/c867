#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "student.h"

using namespace std;

class NetworkStudent : public Student {
	public:
		Degree getDegreeProgram() override;
		NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	private:
		Degree degree;

};

#endif
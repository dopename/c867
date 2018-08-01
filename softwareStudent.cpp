#include "softwareStudent.h"

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) : Student(studentID, firstName, lastName, email, age, daysInCourse1, daysInCourse2, daysInCourse3, degree) {}

Degree SoftwareStudent::getDegreeProgram() {
	return SOFTWARE;
}

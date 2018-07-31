#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class SecurityStudent : public Student {
	public:
		Degree getDegreeProgram() override {
			return SECURITY;
		}
	private:
		Degree degree;

};

#endif

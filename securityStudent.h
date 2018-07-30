#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"

using namespace std;

class SecurityStudent : public Student {
	public:
		Degree getDegreeProgram() {
			this->degree = SECURITY;
			return;
		}
	private:
		Degree degree;

};

#endif

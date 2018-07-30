#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"

using namespace std;

class SoftwareStudent : public Student {
	public:
		Degree getDegreeProgram() {
			this->degree = NETWORK;
			return;
		}
	private:
		Degree degree;

};

#endif
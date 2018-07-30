#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"

using namespace std;

class SoftwareStudent : public Student {
	public:
		Degree getDegreeProgram() {
			this->degree = SOFTWARE;
			return;
		}
	private:
		Degree degree;

}

#endif
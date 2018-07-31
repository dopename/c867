#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class SoftwareStudent : public Student {
	public:
		Degree getDegreeProgram() override {
			return SOFTWARE;
		}
	private:
		Degree degree;

}

#endif
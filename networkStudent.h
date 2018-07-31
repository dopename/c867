#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include <iostream>
#include <vector>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class NetworkStudent : public Student {
	public:
		Degree getDegreeProgram() override {
			return NETWORK;
		}
	private:
		Degree degree;

};

#endif
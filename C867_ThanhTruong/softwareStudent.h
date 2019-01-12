#pragma once
#include "student.h"
#include"degree.h"

class softwareStudent : public student
{
private:
	Degree degree = Degree::SOFTWARE;
public:
	softwareStudent();
	~softwareStudent();
	std::string getDegreeProgram() const;
};


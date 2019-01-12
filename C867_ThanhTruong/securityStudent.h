#pragma once
#include "student.h"
#include"degree.h"
#include <string>

class securityStudent : public student
{
private:
	Degree degree = Degree::SECURITY;
public:
	securityStudent();
	~securityStudent();
	std::string getDegreeProgram() const;
};


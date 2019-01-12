#pragma once
#include "student.h"
#include"degree.h"

class networkStudent : public student
{
private:
	Degree degree = Degree::NETWORK;
public:
	networkStudent();
	~networkStudent();
	std::string getDegreeProgram() const;
};


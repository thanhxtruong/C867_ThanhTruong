#pragma once
#include "student.h"
#include"degree.h"
#include <string>

template <typename degreeType>
class securityStudent : public student<degreeType>
{
private:
	Degree degree = Degree::SECURITY;
public:
	securityStudent();
	~securityStudent();
	degreeType getDegreeProgram() const;
};


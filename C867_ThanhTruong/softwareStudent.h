#pragma once
#include "student.h"
#include"degree.h"

template <typename degreeType>
class softwareStudent : public student<degreeType>
{
private:
	Degree degree = Degree::SOFTWARE;
public:
	softwareStudent();
	~softwareStudent();
	degreeType getDegreeProgram() const;
};


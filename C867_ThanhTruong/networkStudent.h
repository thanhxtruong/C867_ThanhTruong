#pragma once
#include "student.h"
#include"degree.h"

template <typename degreeType>
class networkStudent : public student<degreeType>
{
private:
	Degree degree = Degree::NETWORK;
public:
	networkStudent();
	~networkStudent();
	degreeType getDegreeProgram() const;
};


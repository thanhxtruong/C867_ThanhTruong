#include "pch.h"
#include "softwareStudent.h"


softwareStudent::softwareStudent() : student()
{
	setDegree(degree);
}


softwareStudent::~softwareStudent()
{
}

std::string softwareStudent::getDegreeProgram() const {
	return("Software");
}

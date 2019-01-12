#include "pch.h"
#include "networkStudent.h"


networkStudent::networkStudent() : student()
{
	setDegree(degree);
}


networkStudent::~networkStudent()
{
}

std::string networkStudent::getDegreeProgram() const {
	return("Network");
}

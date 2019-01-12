#include "pch.h"
#include "securityStudent.h"
#include <string>
using std::string;


securityStudent::securityStudent() : student()
{
	setDegree(degree);
}

securityStudent::~securityStudent()
{
}

std::string securityStudent::getDegreeProgram() const {
	return("Security");
}



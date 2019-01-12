#include "pch.h"
#include "securityStudent.h"
#include <string>
using std::string;

template <typename degreeType>
securityStudent<degreeType>::securityStudent() : student()
{
	setDegree(degree);
}

template <typename degreeType>
securityStudent<degreeType>::~securityStudent()
{
}

template <typename degreeType>
degreeType securityStudent<degreeType>::getDegreeProgram() const {
	return(degree);
}



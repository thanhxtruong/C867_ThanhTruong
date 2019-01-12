#include "pch.h"
#include "softwareStudent.h"

template <typename degreeType>
softwareStudent<degreeType>::softwareStudent() : student()
{
	setDegree(degree);
}

template <typename degreeType>
softwareStudent<degreeType>::~softwareStudent()
{
}

template <typename degreeType>
degreeType softwareStudent<degreeType>::getDegreeProgram() const {
	return(degree);
}

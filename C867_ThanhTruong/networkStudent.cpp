#include "pch.h"
#include "networkStudent.h"

template <typename degreeType>
networkStudent<degreeType>::networkStudent() : student()
{
	setDegree(degree);
}

template <typename degreeType>
networkStudent<degreeType>::~networkStudent()
{
}

template <typename degreeType>
degreeType networkStudent<degreeType>::getDegreeProgram() const {
	return(degree);
}

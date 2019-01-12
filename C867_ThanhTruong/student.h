#pragma once
#include<string>
#include "degree.h"


template <typename degreeType>
class student
{
private:
	const int NUM_COURSES = 3;
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int daysInCourse[3];
	degreeType program;

public:
	student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse[3]);	
	student();

	void setStudentID(std::string ID);
	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setEmail(std::string email);
	void setAge(int num);
	void setDay(int days, int index);
	void setDegree(degree degree);

	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmail() const;
	int getAge() const;
	int getDays(int index) const;
	virtual degreeType getDegreeProgram() const = 0;

	virtual void print();

	~student();
};
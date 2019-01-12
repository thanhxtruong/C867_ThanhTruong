#include "pch.h"
#include "student.h"
#include <iostream>
using std::cout;
using std::endl;

student::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days[3]) {
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	emailAddress = emailAddress;
	age = age;
	daysInCourse[0] = days[0];
	daysInCourse[1] = days[1];
	daysInCourse[2] = days[2];
}


student::student()
{

}

void student::setStudentID(std::string ID) {
	studentID = ID;
}
void student::setFirstName(std::string first) {
	firstName = first;
}
void student::setLastName(std::string last) {
	lastName = last;
}
void student::setEmail(std::string email) {
	emailAddress = email;
}
void student::setAge(int num) {
	age = num;
}
void student::setDay(int days, int index) {
	daysInCourse[index] = days;
}
void student::setDegree(Degree degree) {
	switch (degree) {
		case SECURITY:
			degreeProgram = "Security";
			break;
		case NETWORK:
			degreeProgram = "Network";
			break;
		case SOFTWARE:
			degreeProgram = "Software";
			break;	
	}
}

std::string student::getStudentID() const {
	return studentID;
}
std::string student::getFirstName() const {
	return firstName;
}
std::string student::getLastName() const {
	return lastName;
}
std::string student::getEmail() const {
	return emailAddress;
}
int student::getAge() const {
	return age;
}
int student::getDays(int index) const {
	return daysInCourse[index];
}

void student::print() {
	cout << "Student ID: " << getStudentID() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Email Address: " << getEmail() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Courses: " << getDays(0) << ", " << getDays(1) << ", " << getDays(2) << endl;
}

student::~student()
{
}

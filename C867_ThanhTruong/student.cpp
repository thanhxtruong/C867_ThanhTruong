#include "pch.h"
#include "student.h"
#include <iostream>
using std::cout;
using std::endl;

template <typename degreeType>
student<degreeType>::student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int days[3]) {
	studentID = studentID;
	firstName = firstName;
	lastName = lastName;
	emailAddress = emailAddress;
	age = age;
	daysInCourse[0] = days[0];
	daysInCourse[1] = days[1];
	daysInCourse[2] = days[2];
}

template <typename degreeType>
student<degreeType>::student()
{

}

template <typename degreeType>
void student<degreeType>::setStudentID(std::string ID) {
	studentID = ID;
}

template <typename degreeType>
void student<degreeType>::setFirstName(std::string first) {
	firstName = first;
}

template <typename degreeType>
void student<degreeType>::setLastName(std::string last) {
	lastName = last;
}

template <typename degreeType>
void student<degreeType>::setEmail(std::string email) {
	emailAddress = email;
}

template <typename degreeType>
void student<degreeType>::setAge(int num) {
	age = num;
}

template <typename degreeType>
void student<degreeType>::setDay(int days, int index) {
	daysInCourse[index] = days;
}

template <typename degreeType>
void student<degreeType>::setDegree(degreeType degree) {
	program = degree;
	/*switch (degree) {
		case SECURITY:
			degreeProgram = "Security";
			break;
		case NETWORK:
			degreeProgram = "Network";
			break;
		case SOFTWARE:
			degreeProgram = "Software";
			break;	
	}*/
}

template <typename degreeType>
std::string student<degreeType>::getStudentID() const {
	return studentID;
}

template <typename degreeType>
std::string student<degreeType>::getFirstName() const {
	return firstName;
}

template <typename degreeType>
std::string student<degreeType>::getLastName() const {
	return lastName;
}

template <typename degreeType>
std::string student<degreeType>::getEmail() const {
	return emailAddress;
}

template <typename degreeType>
int student<degreeType>::getAge() const {
	return age;
}

template <typename degreeType>
int student<degreeType>::getDays(int index) const {
	return daysInCourse[index];
}

template <typename degreeType>
void student<degreeType>::print() {
	cout << "Student ID: " << getStudentID() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Email Address: " << getEmail() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Courses: " << getDays(0) << ", " << getDays(1) << ", " << getDays(2) << endl;
}

template <typename degreeType>
student<degreeType>::~student()
{
}

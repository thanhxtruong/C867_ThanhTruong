#include "pch.h"
#include "roster.h"
#include <iostream>
using std::string;
using std::cout;
using std::endl;

roster::roster()
{
	classRosterArray[0] = &studentA1;
	classRosterArray[1] = &studentA2;
	classRosterArray[2] = &studentA3;
	classRosterArray[3] = &studentA4;
	classRosterArray[4] = &studentA5;
}

roster::~roster()
{
}

student* roster::getStudentPointer(Degree program) {
	switch (program) {
		case SECURITY:
			if(studentA1.getStudentID() == "") {
				return &studentA1;				
			}
			else {
				return &studentA4;
			}
			break;
		case NETWORK:
			return &studentA2;
			break;
		case SOFTWARE:
			if (studentA3.getStudentID() == "") {
				return &studentA3;
			}
			else {
				return &studentA5;
			}
			break;

	}	

}

void roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program) {
	getStudentPointer(program)->setStudentID(studentID);
	getStudentPointer(program)->setFirstName(firstName);
	getStudentPointer(program)->setLastName(lastName);
	getStudentPointer(program)->setEmail(emailAddress);
	getStudentPointer(program)->setAge(age);
	getStudentPointer(program)->setDay(daysInCourse1, 0);
	getStudentPointer(program)->setDay(daysInCourse2, 1);
	getStudentPointer(program)->setDay(daysInCourse3, 2);
	getStudentPointer(program)->setDegree(program);
}

int main() {

	const string studentData[] = 
	{"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Thanh,Truong,ttruo12@wgu.edu,32, 35, 42, 50, SOFTWARE"};
	string delimiter = ",";
	size_t pos = 0;
	string token;
	string data;
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	int day1;
	int day2;
	int day3;
	Degree program;

	cout << "C867 - Scripting and Programming - Application" << endl;
	cout << "C++" << endl;
	cout << "Student ID: #001062385" << endl;
	cout << "Student Name: Thanh Truong" << endl;

	roster classRoster;
	for (int i = 0; i < 5; ++i) {
		data = studentData[i];
		for (int j = 0; j < 9; ++j) {
			pos = data.find(delimiter);
			token = data.substr(0, pos);
			switch (j) {
				case 0:
					studentID = token;
					break;
				case 1:
					firstName = token;
					break;
				case 2:
					lastName = token;
					break;
				case 3:
					email = token;
					break;
				case 4:
					age = stoi(token);
					break;
				case 5:
					day1 = stoi(token);
					break;
				case 6:
					day2 = stoi(token);
					break;
				case 7:
					day3 = stoi(token);
					break;
				//case 8:

			}
			
		}
	}
	
}
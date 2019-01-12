#pragma 
#include "student.h"
#include "securityStudent.h"
#include "networkStudent.h"
#include"softwareStudent.h"


template <typename degreeType>
class roster
{
private:
	student* classRosterArray[5];
	securityStudent studentA1;
	networkStudent studentA2;
	softwareStudent studentA3;
	securityStudent studentA4;
	softwareStudent studentA5;

public:
	roster();
	~roster();
	student* getStudentPointer(Degree program);	
	void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree program);
	void remove(std::string studentID);
	void printAll();
	void printDaysInCourse(std::string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(int degreeProgram);
};


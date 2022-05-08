#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "Date_class.h"
//#include "static.h"
using namespace std;
class Student:public Person
{
protected:
	int studentID;
	Date dob;
public:
	static int next_id;   //Static member
	Student(void);
	~Student(void);
	int getStudentID(void);
	void setDOB(Date d);
	Date getDOB(void);
	void print(void);
};
Student::Student(void)
{
	studentID =next_id++;
}
void Student::print(void)
{
     cout<<"Student Id"<<studentID<<endl;
     }



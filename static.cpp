#include <cstdlib>
#include <iostream>
#include "Person.h"
#include "Date_class.h"
//#include "student.h"
using namespace std;
class Student :public Person
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




int Student::next_id=0;
int main(int argc, char *argv[])
{
    Student s;
	s.print();      // Prints  StudentID=0

	Student s1;
	s1.print();   // Prints  StudentID=1

system("PAUSE");
return 0;

    system("PAUSE");
    return EXIT_SUCCESS;
}

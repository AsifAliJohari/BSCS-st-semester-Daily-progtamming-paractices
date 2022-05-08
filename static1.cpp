#include <cstdlib>
#include <iostream>
#include "static.h"
//#include "student.h"
using namespace std;


int Student::next_id=0;
int main(int argc, char *argv[])
{
    Student s;
	s.print();      // Prints  StudentID=0

	Student s1;
	s1.print();   // Prints  StudentID=1

    system("PAUSE");
    return EXIT_SUCCESS;
}

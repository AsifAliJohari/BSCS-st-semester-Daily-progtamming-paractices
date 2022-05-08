#include <cstdlib>
#include <iostream>
//#include "stdafx.h"
#include "person.h"




using namespace std;
void Person::setName(string n){
	name=n;
}
void Person::setAge(int a){
	age=a;
}
string Person::getName(void){
	return name;
}
int Person::getAge(void){
	return age;
}
void Person::print(void){
	cout<<"Name: "<<name<<endl;
	cout<<"Age: "<<age<<endl;
}


int main(int argc, char *argv[])
{

	Person p;		//p is a object of class person
	p.setName("irshad");   //call setName function
	p.print();
	system("PAUSE");
    return EXIT_SUCCESS;
}

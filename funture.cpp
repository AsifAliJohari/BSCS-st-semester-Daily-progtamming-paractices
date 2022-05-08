#include <cstdlib>
#include <iostream>

using namespace std;

struct Books 
{ 
	string title; 
	string author; 
	string subject; 
	int book_id; 
}; 
main() 
{ 
	struct Books Book1; 
	struct Books Book2;
    struct Books Book3; 
	struct Books Book4; 
	Book1.title= "Learn C++ Programming";
    Book1.author= "Chand Miyan"; 
    Book1.subject= "C++ Programming"; 
	Book1.book_id = 6495407; 
	Book2.title= "Telecom Billing"; 
    Book2.author="Yakit Singha"; 
	Book2.subject= "Telecom"; 
	Book2.book_id = 6495700; 
	Book3.title= "java script";
    Book1.author= "Mr lee"; 
    Book1.subject= "C++ Program  ming"; 
	Book1.book_id = 6495407; 
	Book2.title= "Telecom Billing"; 
    Book2.author="Yakit Singha"; 
	Book2.subject= "Telecom"; 
	Book2.book_id = 6495700; 
    cout << "Book 1 title : " << Book1.title <<endl; 
    cout << "Book 1 author : " << Book1.author <<endl; 
    cout << "Book 1 subject : " << Book1.subject <<endl; 
    cout << "Book 1 id : " << Book1.book_id <<endl; 
    cout << "Book 2 title : " << Book2.title <<endl; 
    cout << "Book 2 author : " << Book2.author <<endl; 
    cout << "Book 2 subject : " << Book2.subject <<endl; 
    cout << "Book 2 id : " << Book2.book_id <<endl; 
//return 0; 

 


    system("PAUSE");
    return EXIT_SUCCESS;
}

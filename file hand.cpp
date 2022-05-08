#include <cstdlib>
#include <iostream>
#include <fstream> 
using namespace std;

int main(int argc, char *argv[])
{
		ofstream myfile ("example.txt"); 
		if (myfile.is_open()) 
		{ 
			myfile << "This is a line.\n"; 
			myfile << "This is another line.\n"; 
			myfile.close(); 
		}
		 else 
			cout << "Unable to open file"; 
	 


    system("PAUSE");
    return 0;
    //return EXIT_SUCCESS;
}

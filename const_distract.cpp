#include <cstdlib>
#include <iostream>

using namespace std;

class CRectangle 
{ 
	int *width, *height; 
	public: 
		CRectangle (int,int); 
		~CRectangle ();        //Destructor
		int area (void);
        };
CRectangle::CRectangle (int a, int b) { 
	width = new int; 
	height = new int; 
	*width = a; 
	*height = b; 
}
CRectangle::~CRectangle () { 
	delete width; 
	delete height; 
}
 int CRectangle::area()
 { 
			return (*width * *height);
			
     }
void print(int i) { 
	cout << i << endl; 
	} 
void print(double f) { 
	cout << f << endl; 
	} 
void print(int i, char* c) { 
	cout << i<< c<<endl; 
} 

int main(int argc, char *argv[])
{
    CRectangle rect (3,4), rectb (5,6); 
cout << "rect area: " << rect.area() << endl; cout << "rectb area: " << rectb.area() << endl; 
print(10); 
	print(10.10); 
	print(10,"KG"); 


    system("PAUSE");
    return EXIT_SUCCESS;
}

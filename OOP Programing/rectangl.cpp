#include <cstdlib>
#include <iostream>

using namespace std;
class rectangle
{
      public:
             double length;
             double width;
      };
int main(int argc, char *argv[])
{ 
    rectangle rect;
  rect.length=10.0;
  rect.width=5.0;
  cout<<rect.length<<endl;
  
    system("PAUSE");
    return EXIT_SUCCESS;
}

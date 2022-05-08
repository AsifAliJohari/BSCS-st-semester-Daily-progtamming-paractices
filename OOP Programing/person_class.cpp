#include <cstdlib>
#include <iostream>

using namespace std;
class person
{
      string name;
      int age;
      public:
             string getName(void);
             int getage(void);
             person()
             {
                     name="asif";
                     age=20;
             }
             
             
      };
      string person::getName(void)
      {
              return name;
              }
      int person::getage(void)
      {
              return age;
              }
        
int main(int argc, char *argv[])
{ person p;
     cout<<p.getName()<<endl;
     cout<<p.getage()<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

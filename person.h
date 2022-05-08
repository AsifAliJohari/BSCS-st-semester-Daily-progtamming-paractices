#include <cstdlib>
#include <iostream>

using namespace std;
class Person
{
      string name;
      int age;
      public:
             string getName(void);
             int getage(void);
             Person()
             {
                     name="asif";
                     age=20;
             }
             
             
      };
      string Person::getName(void)
      {
              return name;
              }
      int Person::getage(void)
      {
              return age;
              }

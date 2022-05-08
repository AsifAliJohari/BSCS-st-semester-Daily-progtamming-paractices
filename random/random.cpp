#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
int rnd_fn(int a)
{
    
   long int unsigned v=1, t,s,rnd;
    
    
     
    t=time(NULL);
    s=(((v)*(t))+((a)*((t)*(t))));
    
    //cout<<t*t<<endl;
    rnd=s%a;
    cout<<time(NULL)<<endl;
  //  cout<<rnd;
    return rnd;
    
    }
int main(int argc, char *argv[])
{int dice=0;
 while(1)
 {
 dice=rnd_fn(6);
 cout<<"dice = "<<dice<<endl;
 char ch;
 cout<<"enter y/n"<<endl;
 cin>>ch;
 
 
 if (ch=='y')
    break;
}
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

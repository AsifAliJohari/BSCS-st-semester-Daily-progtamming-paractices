#include <cstdlib>
#include <iostream>
#include <ctime>
#include <conio.h>
using namespace std;
int rendom(int n)
{
    int s,a,vi=0;//rn=0;
    a=10;
    int t;
    for(t=0;t<60000;t++) 
    s=(((a/2)*(t*t))%n);
    //rn=s%a;
    return (s); 
    }
int main(int argc, char *argv[])
{ int n,key=0;
cout<<"enter how many time"<<endl;
        cin>>n;
    key =getch();
while(1)
{
        
        cout<<rendom(n)+1;
        if(key==27) 
                    break;
}
    system("PAUSE");
    return EXIT_SUCCESS;
}

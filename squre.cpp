#include <cstdlib>
#include <iostream>

using namespace std;
/*int sqr(int x)
{ int sqr=x*x;
return sqr;
    }*/
    void test()
    {
         int x, p=1;
         cin>>x;
         x=x*x;
        // p=p*x;
         cout<<"square= "<<x<<endl; 
        // p++;
         }
int main(int argc, char *argv[])
{
    int i=1;
    while (i!=0)
    {
    test();
    //cout<<"enter i";
    //if(i==0)
    //break;
    i++;
}
    /*int no,sq;
    cout<<"Enter No"<<endl;
    cin>>no;
    sq= sqr(no);
    cout<<"squre of"<<no<<" = "<<sq<<endl;*/
    system("PAUSE");
    return EXIT_SUCCESS;
}

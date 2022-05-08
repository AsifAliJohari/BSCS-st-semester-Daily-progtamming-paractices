#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    /*for (int i=1;i<5;i++)
    {
    for (int j=4;j>=i;j--)
         cout<<"\t";
           //for (int k=1;k==i;k++)
         cout<<"*"; 
         
         cout<<endl;
        }*/
    int i,j=2,ch;
    cout<<"enter no"<<endl;
    cin>>i;
    while(i/2>=j)
    {
          if(i%j==0)
          {
                    ch=1;
                    cout<<"not prime no"<<endl;
                    
          }
                    else
                    j++;  
               if (ch==0)
               cout <<"prime no"<<i<<endl;          
                 }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

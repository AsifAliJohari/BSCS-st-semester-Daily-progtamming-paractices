#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int i;
int arr1[5]={1,3,10,1,2},arr2[5]={2,5,0,2,6},arr3[5];
cout<<"array"<<endl;
for(i=0;i<5;i++)
                cout<<arr1[i]<<"\t";
                cout<<endl;
                for(i=4;i>=0;i--)
                cout<<arr2[i]<<"\t";
                for(i=0;i<5;i++)
                arr3[i]=arr1[i]+arr2[4-i];
                cout<<endl;  
                cout<<"arr3 "<<endl;
                for(i=0;i<5;i++)
                cout<<arr3[i]<<"\t";
                cout<<endl;

    system("PAUSE"); 
    return EXIT_SUCCESS;
}

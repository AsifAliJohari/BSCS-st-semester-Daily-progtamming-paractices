#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i ,arr[5];
    for(i=0;i<5;i++)
    {
                    arr[i]=i;
    cout<<"array="<<arr[i]<<endl;          
    }  
    cout<<"reverse"<<endl;
    for(i=4;i>=0;i--)
    {
                    arr[i]=i;
    cout<<"array="<<arr[i]<<endl;          
    }            
    system("PAUSE");
    return EXIT_SUCCESS;
}

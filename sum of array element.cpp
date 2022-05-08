#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int i,sum=0;
int arr[5]={1,3,0,1,2};
cout<<"array"<<endl;
for(i=0;i<5;i++)
{
                cout<<arr[i]<<"\t";
                sum=sum+arr[i];
                }
                cout<<endl;
                cout<<"sum = "<<sum<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

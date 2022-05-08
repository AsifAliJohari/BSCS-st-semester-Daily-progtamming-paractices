   #include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i,j=1,v, arr[8]={6,5,3,1,8,7,2,4};
    i=1;
    while(i<8)
    {                 
                    j=i;  
                    v=arr[j];
                    while(j>0&&v<arr[j-1])
                    {
                                                 arr[j]=arr[j-1];
                                                 //for(int y=1;y<i;y++)
                                                // cout<<arr[y]<<"\t";
                                                 j--;
                   }
                    //cout<<endl;
                    arr[j]=v;
                    //for(int k=0;k<8;k++)
                   // cout<<arr[k]<<"\t";
                    //cout<<endl;
                    i++;
                    }
                    for(int k=0;k<8;k++)
                    cout<<arr[k]<<"\t";
                    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

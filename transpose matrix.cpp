#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
int i,j,arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 //int arr2[4][4]={{1,2,13,24},{50,6,7,8},{9,10,11,12},{13,14,15,16}};
 for(i=0;i<4;i++)
 {               for(j=0;j<4;j++)
                 {
                                  cout<<arr[j][i]<<"\t";
                                
                                 
                                         
                 }
                 cout<<"\n";
 }
 cout<<"\n";
 for(i=0;i<4;i++)
 {               for(j=0;j<4;j++)
                 {
                                  cout<<arr[i][j]<<"\t";
                                  
                                 
                                         
                 }
                 cout<<"\n";
 }
 cout<<"\n";


    system("PAUSE");
    return EXIT_SUCCESS;
}

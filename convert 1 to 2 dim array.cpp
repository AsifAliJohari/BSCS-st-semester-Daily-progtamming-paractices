#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int k=0, A1[9]={1,2,3,4,5,6,7,8,9};
    int A[3][3];
    for (int i=0; i<3; i++)
    {
    for (int j=0; j<3; j++)
    {
    A[i][j]=A1[k++];
    cout<<A[i][j]<<"\t";
    
    }
    cout<<"\n";
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

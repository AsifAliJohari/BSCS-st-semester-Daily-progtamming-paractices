#include <cstdlib>
#include <iostream>

using namespace std;
int add(int x,int y)
{
    int sum=x+y;
    return sum;
    }
int main(int argc, char *argv[])
{
    int sum;
    sum=add(4,3);
    cout<<"sum = "<<sum<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

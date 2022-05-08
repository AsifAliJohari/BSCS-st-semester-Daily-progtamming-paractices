#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a;
    int *ap;
    a=7;
    ap=&a;
    cout<<a<<endl;
    cout<<*ap<<endl;
    cout<<&a<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

#include <iostream>
using namespace std;

int swapval(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    return 0;
}


void swapref(int *a, int *b)
{
int c;
c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int a=2,b=3;

    
    cout<<"a="<<a<<"\n"<<"b="<<b<<"\n";

    // swapval(a,b);
    // cout<<"call by value a="<<a"\n"<<"b="<<b;

    swapref(&a,&b);
    cout<<"call by ref a="<<a<<"\n"<<"b="<<b;

    return 0;
}


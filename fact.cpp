#include <iostream>
using namespace std;

int main()
{
    int n,fact=1;

    cout<<"enter Factorial number\n";
    cin>>n;

    for (int a=1;a<=n;a++)
    {
        fact=a*fact;

    }
        cout<<"The Value is="<<fact; 

    return 0;
    
}
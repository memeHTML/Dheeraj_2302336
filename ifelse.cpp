#include<iostream>
using namespace std;

int main() 
{
 int a,b;

 cout<<"Enter two values a and b\t";
 cin>>a>>b;

 if (a>b)
 {
    cout<<"Value of a="<<a<<"is Greater\n";
 }
 else if (b>a)
 {
    cout<<"Value of b="<<b<<"is Greater\n";
 }
 else
 {
    cout<<"The values ae equal\n"<<a<<"="<<b;
 }
 
return 0;


}
#include<iostream>
using namespace std;

int main() 
{
 int num1,num2,sum;
 float average;

        cout<<"Enter two numbers";
        cin>>num1>>num2;
        sum=num1+num2;
        average=(num1+num2)/2.0; 
        // above stuff can be written assum=sum/2

    cout<<"sum="<<sum<<"\n";
    
    cout<<"average="<<average;



return 0;
}
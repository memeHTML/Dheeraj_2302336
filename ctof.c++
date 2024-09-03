#include<iostream>
using namespace std;

int main()
{
    float c,f;

    cout<<"Enter temperature in farenheit=\t";
    cin>>f;

    c=(f-32)*5/9;

    cout<<"Temperature in Farenheit is="<<f;
    cout<<"\nTemperature in Celcius is="<<c;
    return 0;

}
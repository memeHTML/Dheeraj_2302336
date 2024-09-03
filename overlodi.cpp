#include<iostream>
using namespace std;

int addition(int a, int b)
{
    return a+b;
}
float addition(float a, float b)
{
    return a+b;
}

int main()
{
    int c,d;
    float e,f;
    

    cout<<"enter two values for a and b="; cin>>c>>d>>e>>f;

    int num1=addition(c,d);
    float num2=addition(e,f);

    cout<<num1<<"\n"<<num2;
    
    return 0;
}

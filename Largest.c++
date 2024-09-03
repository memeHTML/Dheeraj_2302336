#include<iostream>
using namespace std;

int main(){
    
    int n1,n2;

    cout<<"Enter two numbers to find the greater one\t";
    cin>>n1>>n2;

    if(n1>n2)
    {
        cout<<n1<<"is the greater value";
    }
    else
    {
        cout<<n2<<"\tis the greater value";
    }

    return 0;

}
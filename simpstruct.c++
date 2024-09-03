#include<iostream>
using namespace std;

struct ebike{
    string model;
    string battery;
    int wheel;
};

int main(){

    ebike bike1;
    bike1.model="surron";
    bike1.battery="chi";
    bike1.wheel= 17'2;

    ebike bike2;
    bike2.model="StarkVarg";
    bike2.battery="stock";
    bike2.wheel=22'0;

    cout<< bike1.battery<<" "<<bike1.model<<" "<<bike1.wheel<<"\n";
    cout<< bike2.battery<<" "<<bike2.model<<" "<<bike2.wheel<<"\n";

    return 0;
}


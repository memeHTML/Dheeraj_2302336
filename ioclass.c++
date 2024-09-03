#include<iostream>
using namespace std;

class Smartphone{
    public:
    string Brand;
    string Processor;
    int storage;
};

int main(){

    Smartphone sobj1;
    sobj1.Brand="Samsung";
    sobj1.Processor="Exynos";
    sobj1.storage=128/8;

    Smartphone sobj2;
    sobj2.Brand="Apple";
    sobj2.Processor="M1";
    sobj2.storage=32/4;

    cout<<"Model"<<" "<<"Processor"<<" "<<"Storage"<<"\n";

    cout<<sobj1.Brand<<"\t"<< sobj1.Processor<<"\t"<<sobj1.storage<<"\n";
    cout<<sobj2.Brand<<"\t"<< sobj2.Processor<<"\t"<<sobj2.storage<<"\n";

    return 0;

}
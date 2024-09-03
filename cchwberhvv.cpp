#include<iostream>
using namespace std;
class Box {
    public:
    double length;
    double breadth;
    double height;

    double vol(){
        return length*breadth*height;
    }
};

double surf(Box b){
    return 2* (b.length*b.breadth+b.length+b.height+b.breadth*b.height);
}

int main(){
    Box box;
    box.length = 5.0;
    box.breadth=3.0;
    box.height =2.0;

    cout<<"vol:"<<box.vol()<<"\n";
    cout<<"surf:"<<surf(box);

    return 0;
}
#include <iostream>
using namespace std;


void circlearea (int radius, float const pi=3.1415)
 {
float area;

    area=pi*radius*radius;
    cout<<"area of circle="<< area;
    
}

int main() {
    int radius;
    cout<<"Enter radius of circle=";
    cin>>radius;

     circlearea(radius);

  return 0;
}
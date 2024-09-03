#include <iostream>
using namespace std;


void rectarea (int length, int const breadth=2)
 {
int area;

    area=breadth*length;
    cout<<"area of rectangle="<< area;
    
}

int main() {
    int length;
    cout<<"Enter lenght of rectangle=";
    cin>>length;

     rectarea(length);

  return 0;
}
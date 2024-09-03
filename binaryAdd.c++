#include <iostream>
using namespace std;

class complex
{
public:
    int real, imag;

    complex(int r = 0, int i = 0)
    // ~complex();
    {
        real = r;
        imag = i;
    }


complex operator+(complex &c)
{
    return complex(real + c.real, imag + c.imag);
}

complex operator-(complex &c)
{
    return complex(real - c.real, imag - c.imag);
}
};

int main()
{
    complex c1(3,4), c2(1,2);
    complex c3 = c1 + c2;
    cout<< "Sum:" << c3.real<< "+"<< c3.imag << "i" <<" ";
    cout<< "Sub:" << c3.real<< "-"<< c3.imag << "i" ;
}
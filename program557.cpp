#include <iostream>
#include <fstream>

using namespace std;

class Complex
{
public:
    int real;
    int imag;

    Complex(int x, int y) : real(x), imag(y) {}
    Complex() {}

    Complex operator +(Complex &c)
    {
        Complex c3;

        c3.real = this->real + c.real;
        c3.imag = this->imag + c.imag;

        return c3;
    }

    void display()
    {
        cout<<this->real<<endl;
        cout<<this->imag<<endl;
    }
};

int main()
{
    Complex c1(10, 12);
    Complex c2(11, 12);

    Complex c3 = c1 + c2; // operatot(c1 + c2)
    c3.display();
    
    return 0;
}

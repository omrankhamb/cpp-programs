#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imag;

    void getRealNumber(int real)
    {
        this->real = real;
    }

    void getImaginaryNumber(int imag)
    {
        this->imag = imag;
    }

    Complex operator+(Complex c)
    {
        Complex c2;

        c2.real = this->real + c.real;
        c2.imag = this->imag + c.imag;

        return c2;
    }

    //friend Complex operator+(Complex , Complex);
};

// Complex operator+(Complex c1, Complex c2)
// {
//     Complex c3;
//     c3.real = c1.real + c2.real;
//     c3.imag = c1.imag + c2.imag;
//     return c3;
// }

int main()
{
    Complex c1;
    c1.getRealNumber(11);
    c1.getImaginaryNumber(12);

    Complex c2;
    c2.getRealNumber(21);
    c2.getImaginaryNumber(22);

    

   Complex c3;
   
    c3= c1 + c2;
   cout<<c3.real<<" "<<c3.imag<<endl;
   cout<<c3.real<<" "<<c3.imag<<endl;   
}
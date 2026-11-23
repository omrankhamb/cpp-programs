#include<iostream>
using namespace std;


class Complex
{
    public : 
        int real;
        int imag;
        Complex(int no = 10 , int imag = 20)
        {
            this->real = no;
            this->imag = 20;
        }

        Complex()
        {

        }
};

int main()
{

    Complex *s1 = new Complex;
    cout<<s1->real<<endl;
    cout<<s1->imag;

    
}
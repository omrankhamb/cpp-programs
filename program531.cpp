#include <iostream>
using namespace std;

class Complex
{

public:
    int a;
    Complex(int a)
    {
        this->a = a;
    }

    Complex operator++()
    {
        this->a++;
        return (*this);
    }
};

class time
{
public : 
    int hours;
    int minutes;

public:

    time()
    {

    }

    time(int t) // II constructor
    {
        hours = t / 60; // t is inputted in minutes
        minutes = t % 60;
    }
};

int main()
{
    time T1; // object T1 created
    int period = 160;
    T1 = period; // int to class type

    cout<<T1.hours<<endl;
    cout<<T1.minutes<<endl;
    return 0;
}
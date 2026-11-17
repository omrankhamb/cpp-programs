#include<iostream>
using namespace std;


class demo
{
    public : 
        int a;
    demo(int a)
    {
        this->a = a;
    }

    int operator*(int x)
    {
        return this->a * x;
    }
};

int main()
{

    demo x(3);
    int b = 7;

    x = x * b;

   return 0;
}
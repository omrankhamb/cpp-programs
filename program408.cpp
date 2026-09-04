#include<iostream>
using namespace std;

class A
{
    public : 
        int a;
    virtual void add()
    {
        cout<<"Insdie A base"<<endl;
    }
};

class B : public A
{
    public : 
        int b;

    void add()
    {
        cout<<"Inside B class"<<endl;
    }
};

int main()
{
    // call the function of the B class

    A * a = new B;
    a->add();

    return 0;
}
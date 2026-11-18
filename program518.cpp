#include<iostream>
using namespace std;

class A
{
    public : 
        A()
        {
            cout<<"A is created"<<endl;
        }
};

class B1 : public virtual A
{
    public  : 
    B1()
    {
        cout<<"B1 is created"<<endl;
    }
};

class B2 : public virtual A
{
    public : 
        B2()
        {
            cout<<"B2 is created"<<endl;
        }
};

class C : public B1 , B2
{
    public : 
        C()
        {
            cout<<"class C is created"<<endl;
        }
};

int main()
{

    C c;
    return 0;
}
#include <iostream>
using namespace std;

// forward declaration
class B;

class A
{
    private :
        int j;
    public : 
        int i;

    A()
    {
        this->i = 11;
        this->j = 12;
    }

    friend class B;
};

class B
{
    public : 
        B(A a)
        {
            cout<<a.i<<" Public Member : "<<endl;
            cout<<a.j<<" Private Member : "<<endl;
        }
};

int main()
{
    A a;

    B b(a);
}
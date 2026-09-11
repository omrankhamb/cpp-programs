#include<iostream>
using namespace std;

class Base
{
    
    public :
        Base(int a)
        {
            cout << "Value of a : "<<a<<endl;
            cout<<"Inside Base Class"<<endl;
        }

        ~Base()
        {
            cout<<"Inside Base class desctructor"<<endl;
        }

    
};

class Derived : public Base
{
    public :
        Derived(int a) : Base(a)
        {
            cout << "Inside Derved Class"<<endl;
        }

        ~Derived()
        {
            cout<<"Indside Derived destructor"<<endl;
        }
};

int main()
{
    Derived obj(14);
    return 0;
}
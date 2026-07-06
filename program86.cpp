#include<iostream>
using namespace std;

class Base
{
    public :
        Base()
        {
            cout<<"Inside Base Constructor\n";
        }

        void fun()
        {
            cout<<"Inside Base fun\n";
        }

        ~Base()
        {
            cout<<"Inside Base Destructor\n";
        }

};


class Derived 
{
    public:
        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        void gun()
        {
            cout<<"Inside Derived fun\n";
        }

        ~Derived()
        {
            cout<<"Inside Derived Destructor\n";
        }

};

class DerivedX : public Derived,public Base
{
    public:
        DerivedX()
        {
            cout<<"Inside DerivedX Constructor\n";
        }

        void sun()
        {
            cout<<"Inside DerivedX sun\n";
        }

        ~DerivedX()
        {
            cout<<"Inside DerivedX Destructor\n";
        }

};
int main()
{
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();

    return 0;
}
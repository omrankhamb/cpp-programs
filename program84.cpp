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


class Derived : public Base
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
            cout<<"Inside Derived constructor\n";
        }

};
int main()
{
    Derived dobj;

    dobj.fun();
    dobj.gun();

    return 0;
}
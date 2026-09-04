#include<iostream>
using namespace std;

class Base
{
    public : 
        int a;

    virtual void fun()
    {
        cout<<"Inside the base fun"<<endl;
    }
};


class Derived
{
    public :
        int b;
    
    void fun ()
    {   
        cout<<"Inside the fun Derived"<<endl;
    }
    
    void gun()
    {
        cout<<"Inside the gun Derived"<<endl;
    }
};
int main()
{

    Derived dobj;

    dobj.fun();
    dobj.gun();

    Base obj;
    obj.fun();

    Base * bobj = (Base*)malloc(sizeof(Derived) * 1);

    bobj->fun();


    return 0;
}
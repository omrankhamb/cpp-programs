#include<iostream>
using namespace std;

class Base
{
    public :
        int i , j;

        Base()
        {
            cout<<"Inside Base Constructor\n";      
        }

        void fun()
        {
            cout<<"Inside Base Fun \n";             //2000
        }

        virtual void gun()
        {
            cout<<"Inside Base Gun \n";             //3000
        }

        virtual void sun()
        {   
            cout<<"Inside Base Sun\n";              //4000
        }
};      // 8byte

class Derived : public Base
{
    public :

        int x,t;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        void fun()
        {
            cout<<"Inside Derived fun\n";       //5000
        }

        void sun()
        {
            cout<<"Inside Derived Sun\n";       //6000
        }

        virtual void run()
        {
            cout<<"Inside Derived run\n";       //7000
        }
};      // 16 byte because inheritd from base




int main()
{
    // Dynamically Making object
    Base *bp = new Derived();       // Upcasting
    
    bp->fun();
    bp->gun();
    bp->sun();
    //bp->run();

    return 0;
}
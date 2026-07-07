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

        int add(int a, int b)                   // 1000
        {
            return a + b;
        }

        virtual int sub(int a, int b) = 0;      // Pure Virtual function 

};      // 8byte

class Derived : public Base
{
    public :

        int x,t;

        Derived()
        {
            cout<<"Inside Derived Constructor\n";
        }

        int mult(int a, int b)
        {
            return a*b;
        }

        

        
};      // 16 byte because inheritd from base




int main()
{
    // Dynamically Making object
    
    
    Derived *dobj = new Derived();

    return 0;
}
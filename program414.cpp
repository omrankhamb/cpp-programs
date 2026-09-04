#include<iostream>
using namespace std;

class Base
{
    private :
        int no1;
        int no2;
    public : 

        Base ()
        {
            this->no1 = 10;
            this->no2 = 20;
        }
        
        void show()
        {
            cout<<"Inside the public show function";
        }

    friend class Derived;
};

class Derived
{
    public : 
        Base obj;
        void show()
        {
            cout<<obj.no1<<endl;
            cout<<obj.no2<<endl;
        }
};


// in friend function we have to tell friend that i am freind of your chils class
int main()
{
    Derived obj;

    obj.show();
    return 0;
}
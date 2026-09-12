#include<iostream>
using namespace std;

class Base
{
    private : 
        Base()
        {
            cout<<"Base class Created"<<endl;
        }

    public : 
        static Base* get_Base()
        {
            return new Base;
        }   

        void Display()
        {
            cout<<"Inside Base class Display"<<endl;
        }
};


// Single teon method in c++

int main()
{
    Base *obj = Base::get_Base();   // can not create object because constructoe is private
    obj->Display();


    return 0;
}
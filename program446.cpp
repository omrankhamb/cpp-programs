#include<iostream>
using namespace std;


class Base
{
    private : 
        int iNo;

        void fun()
        {
            cout<<"Hello World";
        }
    public : 
        Base()
        {
            this->iNo = 20;
        }

    friend class Demo;


};

class Demo
{   

    public : 
    void Display(Base obj)
    {
        cout<<obj.iNo;   
    }

};



int main()
{
    Demo obj;
    Base bobj;

    obj.Display(bobj);

    return 0;
}
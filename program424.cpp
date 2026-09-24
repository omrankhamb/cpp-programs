#include<iostream>
using namespace std;

// System Design method

class Demo
{
    private : 
        int i ,  j;

    Demo()
    {
        cout<<"Hello in data"<<endl;
        this->i = 0;
        this->j = 0;
    }
};



int main()
{
    // Not able to create the object
    // static object creation
    // Memory allocated at stack
    Demo obj;

    Demo *obj = new Demo();
    // Dynamic Object Creation
    // Memory allocated at heap

    return 0;
}
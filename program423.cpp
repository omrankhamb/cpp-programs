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
    // can not able to create object due to the private keyword in class
    Demo *obj = new Demo();
    // same as (struct Demo *)(malloc(sizeof(struct Demo)));
    return 0;
}
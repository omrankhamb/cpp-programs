#include<iostream>
using namespace std;


class Demo
{
    private : 
        int iNo;
    public : 
        Demo()
        {
            this->iNo = 20;
        }

    friend void Display(Demo obj);


};

void Display(Demo obj)
{
    cout<<obj.iNo;
}

int main()
{
    Demo obj;
    Display(obj);

    return 0;
}
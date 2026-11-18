#include<iostream>
using namespace std;


class demo
{
    public : 
        static int Count;

    demo()
    {
        Count++;
        cout<<"the count is  : "<<Count<<endl;
    }
};

int demo :: Count = 0;


int main()
{

    demo dobj1;
    demo dobj2;
    return 0;
}
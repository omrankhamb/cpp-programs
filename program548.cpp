#include<iostream>
using namespace std;


class demo

{
    public : 

    demo()
    {
       cout<<"Default constructor"<<endl;
    }

    demo()
    {
       cout<<"Default constrcuto"<<endl;
    }

    // demo(int x = 10 , int y = 10)
    // {

    // }
};


int main()
{
    demo obj;
    return 0;
}
#include<iostream>
using namespace std;





class demo
{
    private : 
        int j;
    public : 
        int i;

    demo(int i , int j) : i(i) , j(j)
    {}

    friend void fun(demo);
};

void fun(demo d)
{
    cout<<d.j;
}

int main()
{

    demo dobj(11 , 12);
    fun(dobj);


    
    
    return 0;
}
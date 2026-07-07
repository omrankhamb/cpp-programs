#include<iostream>
using namespace std;

class Base
{
    public :
        int i , j;
        void fun(int i)
        {

        }
};

class Derived : public Base
{
    public :

        int x,t;
        void fun(int i)
        {

        }
};




int main()
{
    char ch = 'A';
    int i = 11;
    Base bobj;
    Derived dobj;

    char *cptr = NULL;
    int *iptr = NULL;
    Base *bptr = NULL;
    Derived *dptr = NULL;

    cptr = &ch;
    //cptr = &i;
    // iptr = &ch;
    iptr = &i;

    bptr = &bobj;
    bptr = &dobj;
    dptr = &bobj;   // Down casting
    dptr = &dobj;


    
    return 0;
}
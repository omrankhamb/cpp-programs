#include<iostream>
using namespace std;


/*
    Multiple catch Exception
*/

int main()
{

    int a = 10;
    int b = 1 ;

    int c = 0;

    try
    {
        if (b == 0)
        {
            throw "division by zero condition";
        }


        if(b == 1)
        {
            throw 1;
        }

        int c = a / b;
    }
    catch(const char *e)
    {
        cout<<"Exception is  : "<<e;
    }
    catch(int a)
    {
        cout<<"The Exception is ; "<<a;
    }
    return 0;
}
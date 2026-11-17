#include<iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 0 ;

    int c = 0;

    try
    {
        if (b == 0)
        {
            throw "division by zero condition";
        }

        int c = a / b;
    }
    catch(const char *e)
    {
        cout<<"Exception is  : "<<e;
    }
    return 0;
}
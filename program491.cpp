#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;

    try
    {
        if(b == 0)
        {
            throw "Not Divisible by Zero";
        }
        cout<<"Reulst is : "<<a/b<<endl;
    }
    catch(const char *msg)
    {
            printf("message is : %s" , msg);
    }
    return 0;
}
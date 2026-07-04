#include<iostream>
using namespace std;

int main()
{
    int iNo = 751;
    int iDigit = 0;


    while (iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit;
        iNo = iNo /10;
    }
    
    return 0;
}